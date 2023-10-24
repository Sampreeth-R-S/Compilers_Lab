
#ifndef __TRANSLATOR_H
#define __TRANSLATOR_H
//#import <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <iostream>
using namespace std;

#define __VOIDSIZE 0
#define __INTSIZE 4
#define __FLOATSIZE 8
#define __CHARSIZE 1
#define __POINTERSIZE 4
#define __FUNCSIZE 0
class symbolTable;
class symbol;
class array;
class expression;
class statement;
class ttype;
class quad;
class symbolTable;
class quadArray;
extern symbol* currentSymbol;
extern symbolTable* currentST;
extern symbolTable* globalST;
//extern quadArray quads;
extern int STCount;
extern string blockName;
extern string varType;
extern char* yytext;
extern int yyparse();
class symbolTable
{
    public:
    string name;
    symbolTable* parent;
    int tempcount;
    list<symbol> table;
    symbolTable(string name_, symbolTable* parent_ = NULL);
    symbol* lookup(string name);
    static symbol* gentemp(ttype* type, string initvalue = "");
    static symbol* gentemp(string type, string initvalue = "");
    void update();
    void print();
};
class symbol{
    public:
    string name;
    ttype* type;
    int size, offset;
    string value;
    symbolTable* nested_table;
    symbol(string name_, string t_="int",ttype* arrtype = NULL, int width_ = 0);
    symbol* update(ttype* t);
};

class expression{
    public:
    symbol* loc;
    string type;
    list<int> truelist, falselist;
    list<int> nextlist;
};

class statement{
    public:
    list<int> nextlist;
};

class ttype{
    public:
    string type;
    int width;
    ttype* arrtype;
    ttype(string type_, ttype* arrtype_=NULL, int width_=1);
};

class quad{
    public:
    string op;
    string result;
    string arg1;
    string arg2;
    quad(string result_, string arg1_, string op_="=", string arg2_="");
    quad(string result_, int arg1_, string op_="=", string arg2_="");
    quad(string result_, float arg1_, string op_="=", string arg2_="");
    void print();
};

class quadArray{
    public:
    vector<quad> array;
    
    void print();
};

class aarray{
    public:
    string array_type;
    symbol* loc;
    symbol* Array;
    ttype* type;
};
list<int> makelist(int i);
list<int> merge(list<int> &a, list<int> &b);
void backpatch(list<int> &a, int i);
bool typecheck(symbol* s1, symbol* s2);
bool typecheck(ttype* t1, ttype* t2);
symbol* convertType(symbol* s1, string t);
string convertInttoString(int i);
string convertFloattoString(float f);
expression* convertInttoBool(expression* e);
expression* convertBooltoInt(expression* e);
void switchTable(symbolTable* newtable);
int nextinstr();
int sizeoftype(ttype* t);
string checkType(ttype* t);
void emit(string op, string result, string arg1="", string arg2="");
void emit(string op, string result, int arg1, string arg2="");
void emit(string op, string result, float arg1, string arg2="");

#endif