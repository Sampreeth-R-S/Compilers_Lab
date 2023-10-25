
#ifndef __TRANSLATOR_H
#define __TRANSLATOR_H
//#import <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <iostream>
using namespace std;
//Sa=ize of data types
#define __VOIDSIZE 0
#define __INTSIZE 4
#define __FLOATSIZE 8
#define __CHARSIZE 1
#define __POINTERSIZE 4
#define __FUNCSIZE 0

//Class declarations
class symbolTable;
class symbol;
class aarray;
class expression;
class statement;
class ttype;
class quad;
class symbolTable;
class quadArray;

//Global variables
extern symbol* currentSymbol;
extern symbolTable* currentST;
extern symbolTable* globalST;
//extern quadArray quads;
extern int STCount;
extern string blockName;
extern string varType;
extern char* yytext;

//Parse function
extern int yyparse();

//SymbolTable class
class symbolTable
{
    public:
    string name;//Name
    symbolTable* parent;//Pointer to parent(null for GlobalST)
    int tempcount;//Count of temporary variables
    list<symbol> table;//List of symbols belonging to current scope
    symbolTable(string name_, symbolTable* parent_ = NULL);
    symbol* lookup(string name);
    static symbol* gentemp(ttype* type, string initvalue = "");
    static symbol* gentemp(string type, string initvalue = "");
    void update();
    void print();
};

//Symbol class
class symbol{
    public:
    string name;//name
    ttype* type;//type information
    int size, offset;//size and offset
    string value;//Initial value
    symbolTable* nested_table;//Pointer to nested table for functions and blocks
    symbol(string name_, string t_="int",ttype* arrtype = NULL, int width_ = 0);
    symbol* update(ttype* t);
};
//Expression class
class expression{
    public:
    symbol* loc;//Pointer to symbol table entry of current expression result
    string type;//Type
    list<int> truelist, falselist;//For boolean expressions
    list<int> nextlist;//For statements
};
//Statement class
class statement{
    public:
    list<int> nextlist;//Nextlist
};
//Symbol type class(defines the type of variables)
class ttype{
    public:
    string type;//type
    int width;//width information
    ttype* arrtype;//Arraytype information(for pointers and arrays)
    ttype(string type_, ttype* arrtype_=NULL, int width_=1);
};
//Quad class
class quad{
    public:
    string op;//Operator
    string result;//Result
    string arg1; //Argument 1
    string arg2;//Argument 2
    quad(string result_, string arg1_, string op_="=", string arg2_="");
    quad(string result_, int arg1_, string op_="=", string arg2_="");
    quad(string result_, float arg1_, string op_="=", string arg2_="");
    void print();
};
//Array of quads for lazy spitting
class quadArray{
    public:
    vector<quad> array;
    
    void print();
};
//Class for array type
class aarray{
    public:
    string array_type;//Type(array or pointer to data type)
    symbol* loc;//Entry to ST of the offset
    symbol* Array;//Entry to ST of the array
    ttype* type;//Type of the array(for multiple dimensions)
};

//Auxiliary functions
list<int> makelist(int i);
list<int> merge(list<int> &a, list<int> &b);
void backpatch(list<int> &a, int i);
bool typecheck(symbol* &s1, symbol* &s2);
bool typecheck(ttype* t1, ttype* t2);
symbol* convertType(symbol* s1, string t);
string itos(int i);
string ftos(float f);
expression* itob(expression* e);
expression* btoi(expression* e);
void switchTable(symbolTable* newtable);
int nextinstr();
int sizeoft(ttype* t);
string checkType(ttype* t);
void emit(string op, string result, string arg1="", string arg2="");
void emit(string op, string result, int arg1, string arg2="");
void emit(string op, string result, float arg1, string arg2="");

#endif
