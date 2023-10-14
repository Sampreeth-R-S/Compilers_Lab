
#ifndef __TRANSLATOR_H
#define __TRANSLATOR_H
#import <bits/stdc++.h>
class SymbolTable
{
    public:
    string name;
    symbolTable* parent;
    map<string, symbol*> table;
    symbolTable(string name, symbolTable* parent=NULL);
    symbol* lookup(string name);
    symbol* gentemp(type* type_info);
    void update();
    void print();
}
class symbol{
    public:
    string name;
    type* type_info;
    int size, offset;
    symbolTable* nested_table;
    symbol(string name, type* type_info, int size=0);
}

class expression{
    public:
    symbol* loc;
    string type;
    list<int> truelist, falselist;
    list<int> nextlist;
}

class statement{
    public:
    list<int> nextlist;
}

class type{
    public:
    string type;
    int width;
    type* arrtype;
    type(string type,int width=1, type* arrtype=NULL);
}

class quad{
    public:
    string op;
    string result;
    string arg1;
    string arg2;
    quad(string result, string arg1, string op="", string arg2="");
    void print();
}

class quadArray{
    public:
    vector<quad> array;
    void emit(string result, string arg1, string op="", string arg2="");
    void print();
}

class array{
    public:
    string array_type;
    symbol* loc;
    symbol* Array;
    type* type_info;
}
list<int> makelist(int i);
list<int> merge(list<int> &a, list<int> &b);
void backpatch(list<int> &a, int i);
bool typecheck(symbol* s1, symbol* s2);
bool typecheck(type* t1, type* t2);
type* convertType(symbol* s1, type* t2);



#endif