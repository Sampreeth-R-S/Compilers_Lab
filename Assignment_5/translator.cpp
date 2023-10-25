#include "translator.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stack>
#include <iomanip>

// Global Variables
quadArray quads;
using namespace std;
symbol* currentSymbol;
symbolTable* currentST;
symbolTable* globalST;
//quadArray quads;
int STCount;
string blockName;
string varType;//Stores last encountered data type in the c file
//Class fucntion definitions
//ttype constuctor
ttype::ttype(string type_, ttype* arrtype_, int width_):
type(type_),width(width_),arrtype(arrtype_) {}
//Symbol constructor
symbol::symbol(string name_, string t_, ttype* arrtype_, int width_):
name(name_),value("-"),offset(0),nested_table(NULL){
    type = new ttype(t_,arrtype_,width_);
    size = sizeoft(type);
}
//Updates symbol type
symbol* symbol::update(ttype* t){
    type = t;
    size = sizeoft(type);
    return this;
}
//Symbol table constructor
symbolTable::symbolTable(string name_, symbolTable* parent):name(name_),tempcount(0){}
//Lookup function
symbol* symbolTable::lookup(string name){
    //Search in existing table
    for(list<symbol>::iterator it = table.begin(); it!=table.end(); it++){
        if(it->name == name) return &(*it);
    }

    symbol* s = NULL;
    //Search in parent table
    if(this->parent != NULL) s = this->parent->lookup(name);
    //If found in parent table, return it
    //Else create a new symbol and return it
    if(currentST==this && s==NULL)
    {
        s = new symbol(name);
        table.push_back(*s);
        return &(table.back());
    }
    else if(s!=NULL) return s;
    return NULL;
}
//Generate temporary function
symbol* symbolTable::gentemp(ttype* type,string initvalue){
    string name = "t"+itos(currentST->tempcount++);
    symbol* s = new symbol(name);
    s->type = type;
    s->value = initvalue;
    s->size = sizeoft(type);
    currentST->table.push_back(*s);
    return &(currentST->table.back());
}
symbol* symbolTable::gentemp(string type,string initvalue){
    string name = "t"+itos(currentST->tempcount++);
    symbol* s = new symbol(name);
    ttype* temptype = new ttype(type);
    s->type = temptype;
    s->value = initvalue;
    s->size = sizeoft(temptype);
    currentST->table.push_back(*s);
    return &(currentST->table.back());
}
//Print function(for symbol table)
void symbolTable::print(){
    for(int i = 0; i < 150; i++) {
        cout << '.';
    }
    cout << endl;
    cout << "ST_name: " << setfill(' ') << left << setw(50) << this->name;
    cout << "Parent: " << setfill(' ') << left << setw(50) << ((this->parent != NULL) ? this->parent->name : "NULL") << endl;
    for(int i = 0; i < 150; i++) {
        cout << '.';
    }
    cout << endl;
    cout << setfill(' ') << left << setw(25) <<  "Name";
    cout << left << setw(25) << "Type";
    cout << left << setw(20) << "Initial Value";
    cout << left << setw(15) << "Size";
    cout << left << setw(15) << "Offset";
    cout << left << "Nested" << endl;
    for(int i = 0; i < 150; i++) {
        cout << '.';
    }
    cout << endl;
    list<symbolTable*> tablelist;
    for(auto it = this->table.begin(); it != this->table.end(); it++) {
        cout << left << setw(25) << it->name;
        cout << left << setw(25) << checkType(it->type);
        cout << left << setw(20) << (it->value != "" ? it->value : "-");
        cout << left << setw(15) << it->size;
        cout << left << setw(15) << it->offset;
        cout << left;

        if(it->nested_table != NULL) {
            cout << it->nested_table->name << endl;
            tablelist.push_back(it->nested_table);
        }
        else {
            cout << "NULL" << endl;
        }
    }

    for(int i = 0; i < 150; i++) {
        cout << '.';
    }
    cout<<endl<<endl;
    //Print the nested symbol tables
    for(auto it = tablelist.begin(); it != tablelist.end(); it++) {
        (*it)->print();
        cout<<endl<<endl;
    }
}

//Check type function
string checkType(ttype* t)
{
    if(t==NULL)
    {
        return "null";
    }
    if(t->type == "void" || t->type == "char" || t->type == "int" || t->type == "float" || t->type == "block" || t->type == "func")
    {
        return t->type;
    }
    else if(t->type == "ptr")
    {
        return t->type + "(" + checkType(t->arrtype) + ")";
    }
    else if(t->type == "arr")
    {
        return t->type + "(" + checkType(t->arrtype) + "," + itos(t->width) + ")";
    }
    else
    return "unknown";
}

//Update function(updates the offset of each symbol in the symbol table)
void symbolTable::update(){
    list<symbolTable*> tableList;
    int offset;
    for(list<symbol>::iterator it=this->table.begin();it!=this->table.end();it++){
        if(it==this->table.begin()) offset = it->size;
        else{
            it->offset = offset;
            offset += it->size;
        }
        if(it->nested_table != NULL) tableList.push_back(it->nested_table);
    }
    for(auto it = tableList.begin(); it != tableList.end(); it++) {
        (*it)->update();
    }
}
//Quad constructor
quad::quad(string result_, string arg1_, string op_, string arg2_):
result(result_),arg1(arg1_),op(op_),arg2(arg2_){}

quad::quad(string result_, int arg1_, string op_, string arg2_):
result(result_),op(op_),arg2(arg2_){
    arg1 = itos(arg1_);
}

quad::quad(string result_, float arg1_, string op_, string arg2_):
result(result_),op(op_),arg2(arg2_){
    arg1 = ftos(arg1_);
}
//Print function(for quads)
void quad::print() {
    if(op == "=")       // Simple assignment
        cout << result << " = " << arg1;
    else if(op == "*=")
        cout << "*" << result << " = " << arg1;
    else if(op == "[]=")
        cout << result << "[" << arg1 << "]" << " = " << arg2;
    else if(op == "=[]")
        cout << result << " = " << arg1 << "[" << arg2 << "]";
    else if(op == "goto" || op == "param" || op == "return")
        cout << op << " " << result;
    else if(op == "call")
        cout << result << " = " << "call " << arg1 << ", " << arg2;
    else if(op == "label")
        cout << result << ": ";
    else if(op == "+" || op == "-" || op == "*" || op == "/" || op == "%" || op == "^" || op == "|" || op == "&" || op == "<<" || op == ">>")
        cout << result << " = " << arg1 << " " << op << " " << arg2;
    else if(op == "==" || op == "!=" || op == "<" || op == ">" || op == "<=" || op == ">=")
        cout << "if " << arg1 << " " << op << " " << arg2 << " goto " << result;
    else if(op == "= &" || op == "= *" || op == "= -" || op == "= ~" || op == "= !")
        cout << result << " " << op << arg1;
    else
        cout << "Unknown Operator";
}
//Print function(for quad array)
void quadArray::print(){
    for(int i = 0; i < 150; i++) {
        cout << '.';
    }
    cout << endl;
    cout << "TAC: " << endl;
    for(int i = 0; i < 150; i++) {
        cout << '.';
    }
    cout<<endl;
    int cnt = 0;
    // Print each of the quads one by one
    for(vector<quad>::iterator it = this->array.begin(); it != this->array.end(); it++, cnt++) {
        if(it->op != "label") {
            cout << left << setw(4) << cnt << ":    ";
            it->print();
        }
        else {
            cout << endl << left << setw(4) << cnt << ": ";
            it->print();
        }
        cout << endl;
    }
}
//Emit functions(stores the quad in the quad array)
void emit(string op, string result, string arg1, string arg2){
    quad* q = new quad(result,arg1,op,arg2);
    //cout<<op<<' '<<result<<' '<<arg1<<' '<<arg2<<endl;
    quads.array.push_back(*q);
}

void emit(string op, string result, int arg1, string arg2){
    quad* q = new quad(result,arg1,op,arg2);
    //cout<<op<<' '<<result<<' '<<arg1<<' '<<arg2<<endl;
    quads.array.push_back(*q);
}

void emit(string op, string result, float arg1, string arg2){
    quad* q = new quad(result,arg1,op,arg2);
    //cout<<op<<' '<<result<<' '<<arg1<<' '<<arg2<<endl;
    quads.array.push_back(*q);
}
//Backpatch function
void backpatch(list<int> &a, int i){
    string str = itos(i);
    for(list<int>::iterator it = a.begin(); it != a.end(); it++) {
        quads.array[*it].result = str;
    }
}
//Makelist function
list<int> makelist(int i){
    list<int> l(1,i);
    return l;
}
//Merge function
list<int> merge(list<int> &a, list<int> &b){
    a.merge(b);
    return a;
}
//typecheck function(checks for comapatibility of two symbols)
bool typecheck(symbol* s1, symbol* s2){
    ttype* t1 = s1->type;
    ttype* t2 = s2->type;
    if(typecheck(t1,t2)) return true;
    if(s1 = convertType(s1,t2->type)) return true;
    if(s2 = convertType(s2,t1->type)) return true;
    return false;
}
//typecheck function(checks for comapatibility of two types)
bool typecheck(ttype* t1, ttype* t2){
    if(t1==NULL && t2==NULL)return true;
    if(t1==NULL || t2==NULL)return false;
    if(t1->type != t2->type)return false;
    return typecheck(t1->arrtype,t2->arrtype);
}
//convertType function(converts the type of a symbol to the given type)
symbol* convertType(symbol* s, string t) {
    symbol* temp = symbolTable::gentemp(new ttype(t));

    if(s->type->type == "float") {
        if(t == "int") {
            emit("=", temp->name, "float2int(" + s->name + ")");
            return temp;
        }
        else if(t == "char") {
            emit("=", temp->name, "float2char(" + s->name + ")");
            return temp;
        }
        return s;
    }

    else if(s->type->type == "int") {
        if(t == "float") {
            emit("=", temp->name, "int2float(" + s->name + ")");
            return temp;
        }
        else if(t == "char") {
            emit("=", temp->name, "int2char(" + s->name + ")");
            return temp;
        }
        return s;
    }

    else if(s->type->type == "char") {
        if(t == "float") {
            emit("=", temp->name, "char2float(" + s->name + ")");
            return temp;
        }
        else if(t == "int") {
            emit("=", temp->name, "char2int(" + s->name + ")");
            return temp;
        }
        return s;
    }

    return s;
}
//Int to string and float to string functions
string itos(int i){
    stringstream ss;
    ss << i;
    return ss.str();
}

string ftos(float f){
    stringstream ss;
    ss << f;
    return ss.str();
}
//Int to bool and bool to int functions
expression* itob(expression* e)
{
    if(e->type != "bool")
    {
        e->falselist = makelist(nextinstr());
        emit("==",e->loc->name,"0");
        e->truelist = makelist(nextinstr());
        emit("goto","");
    }
    return e;
}

expression* btoi(expression* e)
{
    if(e->type == "bool")
    {
        e->loc = symbolTable::gentemp(new ttype("int"));
        backpatch(e->truelist,nextinstr());
        emit("=",e->loc->name,"true");
        emit("goto",itos(nextinstr()+1));
        backpatch(e->falselist,nextinstr());
        emit("=",e->loc->name,"false");
    }
    return e;
}
//Switch table function
void switchTable(symbolTable* newtab)
{
    currentST = newtab;
}

int nextinstr()
{
    return quads.array.size();
}
// sizeof function
int sizeoft(ttype* t) {
    if(t->type == "void")
        return __VOIDSIZE;
    else if(t->type == "char")
        return __CHARSIZE;
    else if(t->type == "int")
        return __INTSIZE;
    else if(t->type == "ptr")
        return __POINTERSIZE;
    else if(t->type == "float")
        return __FLOATSIZE;
    else if(t->type == "arr")
        return t->width * sizeoft(t->arrtype);
    else if(t->type == "func")
        return __FUNCSIZE;
    else
        return -1;
}
//Main
int main()
{
    //Initialisation
    STCount = 0;
    globalST = new symbolTable("Global");
    currentST = globalST;
    blockName = "";
    varType = "";
    //Parsing
    yyparse();
    //Printing
    globalST->update();
    globalST->print();
    cout<<endl<<endl<<endl;
    quads.print();

}

