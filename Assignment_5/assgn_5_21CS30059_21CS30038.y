%{
    #include <iostream>
    #include "translator.h"
    using namespace std;
    extern int yylex();
    //extern int yylineno=1;
    extern int lineno;
    extern string varType;
    extern char* yytext;
    void yyerror(char *s) {
        
        printf("error: %s at line %d\n", s, lineno);
        printf("Unable to parse: %s",yytext);
    }
    //int yydebug=1;
%}

%union{
    int value;
    int instr;
    int intval;
    char unaryOp;
    float floatval;
    char* charval;
    int numParams;
    ttype* ptr;
    expression* exp;
    aarray* Array;
    symbol* pointer;
    statement* stmt;
}
%token <pointer> IDENTIFIER
%token <intval> INTEGER
%token <floatval> FLOATING_CONSTANT
%token <charval> CHARACTER_CONSTANT STRING_LITERAL
%token ENUM TYPE_SPECIFIER_TOKEN STORAGE_CLASS_SPECIFIER STATIC_TOKEN FUNCTION_SPECIFIER CASE DEFAULT SIZEOF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN TYPE_QUALIFIER FLOAT ASSIGNMENT_OPERATOR ENUMERATION_CONST KEYWORD PUNCTUATOR ERROR
%token VOID CHAR SHORT INT LONG DOUBLE SIGNED UNSIGNED BOOL COMPLEX IMAGINARY
%token IF EQUALS INCREMENT DECREMENT AND STAR PLUS MINUS TILDE NOT DIV MOD LEFT_SHIFT RIGHT_SHIFT LESS_THAN GREATER_THAN LESS_THAN_EQUAL GREATER_THAN_EQUAL EQUAL_TO NOT_EQUAL_TO XOR OR AND_AND OR_OR QUESTION COLON SEMICOLON COMMA LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET LEFT_CURLY_BRACKET RIGHT_CURLY_BRACKET LEFT_PARENTHESIS RIGHT_PARENTHESIS DOT ELLIPSIS ARROW
%start translation-unit
%precedence LOWER_THAN_ELSE
%precedence ELSE
%type<exp> primary-expression
 expression
 multiplicative-expression
 additive-expression
 shift-expression
 relational-expression
 equality-expression
 AND-expression
 exclusive-OR-expression
 inclusive-OR-expression
 logical-AND-expression logical-OR-expression conditional-expression assignment-expression expression-statement
%type<Array> postfix-expression unary-expression cast-expression
%type<numParams> argument-expression-listopt argument-expression-list
%type<unaryOp> unary-operator
%type<pointer> declarator init-declarator direct-declarator
%type<ptr> pointer
%type<pointer> initializer
%type<instr> M
%type<stmt> N statement loop-statement jump-statement selection-statement iteration-statement labeled-statement compound-statement block-item block-item-list block-item-listopt
%%
primary-expression:
        IDENTIFIER  {
            $$ = new expression();
            $$->loc = $1;
            $$->type = "non_bool";
            }
        | INTEGER   {
            $$ = new expression();
            $$->loc=symbolTable::gentemp(new ttype("int"),itos($1));
            emit("=",$$->loc->name,$1);
        }
        | FLOATING_CONSTANT    {
            $$ = new expression();
            $$->loc=symbolTable::gentemp(new ttype("float"),ftos($1));
            emit("=",$$->loc->name,$1);
        }
        | CHARACTER_CONSTANT    {
            $$ = new expression();
            $$->loc=symbolTable::gentemp(new ttype("char"),string($1));
            emit("=",$$->loc->name,string($1));
        }
        | STRING_LITERAL    {
            $$ = new expression();
            $$->loc=symbolTable::gentemp(new ttype("ptr"),string($1));
            //emit($$->loc->name,$1,"=");
            $$->loc->type->arrtype = new ttype("char");
        }
        | LEFT_PARENTHESIS expression RIGHT_PARENTHESIS  {
            //printf("primary-expression-> (expression)\n");
        }
        ;
postfix-expression:
        primary-expression  {
            $$ = new aarray();
            $$->loc = $1->loc;
            $$->Array = $$->loc;
            $$->type = $1->loc->type;
        }
        | postfix-expression LEFT_SQUARE_BRACKET expression RIGHT_SQUARE_BRACKET  {
            $$ = new aarray();
            $$->loc = symbolTable::gentemp("int");
            $$->type = $1->type->arrtype;
            $$->array_type = "arr";
            $$->Array = $1->Array;
            if($1->array_type=="arr")
            {
                symbol*temp = symbolTable::gentemp("int");
                int size = sizeoft($$->type);
                emit("*",temp->name,$3->loc->name,itos(size));
                emit("+",$$->loc->name,$1->loc->name,temp->name);
            }
            else
            {
                int size = sizeoft($$->type);
                emit("*",$$->loc->name,$3->loc->name,itos(size));
            }
        }
        | postfix-expression LEFT_PARENTHESIS argument-expression-listopt RIGHT_PARENTHESIS  {
            $$ = new aarray();
            //$$->loc = symbolTable::gentemp($1->type);
            //$$->array_type = "func";
            //$$->Array = $1->Array;
            //$$->type = $1->type;
            $$->Array = symbolTable::gentemp($1->type);
            emit("call", $$->Array->name, $1->Array->name, itos($3));
            
        }
        | postfix-expression DOT IDENTIFIER  {
            //printf("postfix-expression-> postfix-expression . IDENTIFIER\n");
        }
        | postfix-expression ARROW IDENTIFIER  {
            //printf("postfix-expression-> postfix-expression -> IDENTIFIER\n");
        }
        | postfix-expression INCREMENT  {
            $$ = new aarray();
            $$->Array = symbolTable::gentemp($1->Array->type);
            emit("=", $$->Array->name, $1->Array->name);
            emit("+", $1->Array->name, $1->Array->name, "1"); 
        }
        | postfix-expression DECREMENT  {
            $$ = new aarray();
            $$->Array = symbolTable::gentemp($1->Array->type);
            emit("=", $$->Array->name, $1->Array->name); 
            emit("-", $1->Array->name, $1->Array->name, "1");
        }
        | LEFT_PARENTHESIS type-name RIGHT_PARENTHESIS LEFT_CURLY_BRACKET initializer-list RIGHT_CURLY_BRACKET  {
            //printf("postfix-expression-> (type-name) {initializer-list}\n");
        }
        | LEFT_PARENTHESIS type-name RIGHT_PARENTHESIS LEFT_CURLY_BRACKET initializer-list COMMA RIGHT_CURLY_BRACKET  {
            //printf("postfix-expression-> (type-name) {initializer-list,}\n");
        }
        ;
argument-expression-list:
        assignment-expression  {
            $$ = 1;
            emit("param",$1->loc->name);
        }
        | argument-expression-list COMMA assignment-expression  {
            $$ = $1+1;
            emit("param",$3->loc->name);
        }
        ;
argument-expression-listopt:
        argument-expression-list  {
            $$ = $1;
        }
        |  %empty {$$ = 0;}
        ;
unary-expression:
        postfix-expression  {
            $$ = $1;
        }
        | INCREMENT unary-expression  {
            emit("+", $2->Array->name, $2->Array->name, "1"); 
            $$ = $2;
        }
        | DECREMENT unary-expression  {
            emit("-", $2->Array->name, $2->Array->name, "1");
            $$ = $2;
        }
        | unary-operator cast-expression  {
            $$ = new aarray();
            switch($1){
                case '&':
                    $$->Array = symbolTable::gentemp(new ttype("ptr"));
                    $$->Array->type->arrtype = $2->Array->type;
                    emit($$->Array->name,$2->Array->name,"= &");
                    break;
                case '*':
                    $$->Array = $2->Array;
                    $$->loc = symbolTable::gentemp($2->Array->type->arrtype);
                    $$->array_type = "ptr";
                    emit("= *", $$->loc->name, $2->Array->name);  
                    break;
                case '+':
                    $$ = $2;
                    break;
                case '-':
                    $$->Array = symbolTable::gentemp($2->Array->type->type);
                    emit("= -", $$->Array->name, $2->Array->name);   
                    break;
                case '~':
                    $$->Array = symbolTable::gentemp($2->Array->type->type);
                    emit("= ~", $$->Array->name, $2->Array->name);
                    break;
                case '!':
                    $$->Array = symbolTable::gentemp($2->Array->type->type);
                    emit("= !", $$->Array->name, $2->Array->name);
                    break;
            }
        }
        | SIZEOF unary-expression  {
            //printf("unary-expression-> SIZEOF unary-expression\n");
        }
        | SIZEOF LEFT_PARENTHESIS type-name RIGHT_PARENTHESIS  {
            //printf("unary-expression-> SIZEOF (type-name)\n");
        }
        ;
unary-operator:
        AND  {
            $$ = '&';
        }
        | STAR  {
            $$ = '*';
        }
        | PLUS  {
            $$ = '+';
        }
        | MINUS  {
            $$ = '-';
        }
        | TILDE  {
            $$ = '~';
        }
        | NOT  {
            $$ = '!';
        }
        ;
cast-expression:
        unary-expression  {
            $$ = $1;
        }
        | LEFT_PARENTHESIS type-name RIGHT_PARENTHESIS cast-expression  {
            $$ = new aarray();
            $$->Array = convertType($4->Array, varType);
        }
        ;
multiplicative-expression:
        cast-expression  {
            $$ = new expression();
            if($1->array_type=="arr")
            {
                $$->loc = symbolTable::gentemp($1->loc->type);
                emit("=[]", $$->loc->name, $1->Array->name, $1->loc->name);
            }
            else if($1->array_type=="ptr")
            {
                $$->loc = $1->loc;
            }
            else
            {
                $$->loc = $1->Array;
            }
        }
        | multiplicative-expression STAR cast-expression  {
            if(typecheck($1->loc,$3->Array))
            {
                $$ = new expression();
                $$->loc = symbolTable::gentemp(new ttype($1->loc->type->type));
                emit("*", $$->loc->name, $1->loc->name, $3->Array->name);    
            }
            else
            {
                yyerror("Type mismatch");
            }
        }
        | multiplicative-expression DIV cast-expression  {
            if(typecheck($1->loc,$3->Array))
            {
                $$ = new expression();
                $$->loc = symbolTable::gentemp(new ttype($1->loc->type->type));
                emit("/", $$->loc->name, $1->loc->name, $3->Array->name);
            }
            else
            {
                yyerror("Type mismatch");
            }
        }
        | multiplicative-expression MOD cast-expression  {
            if(typecheck($1->loc,$3->Array))
            {
                $$ = new expression();
                $$->loc = symbolTable::gentemp(new ttype($1->loc->type->type));
                emit("%", $$->loc->name, $1->loc->name, $3->Array->name);   
            }
        }
        ;
additive-expression:
        multiplicative-expression  {
            $$ = $1;
        }
        | additive-expression PLUS multiplicative-expression  {
            if(typecheck($1->loc,$3->loc))
            {
                $$ = new expression();
                $$->loc = symbolTable::gentemp(new ttype($1->loc->type->type));
                emit("+", $$->loc->name, $1->loc->name, $3->loc->name);    
            }
            else
            {
                yyerror("Type mismatch");
            }
        }
        | additive-expression MINUS multiplicative-expression  {
            if(typecheck($1->loc,$3->loc))
            {
                $$ = new expression();
                $$->loc = symbolTable::gentemp(new ttype($1->loc->type->type));
                emit("-", $$->loc->name, $1->loc->name, $3->loc->name);           
            }
            else
            {
                yyerror("Type mismatch");
            }
        }
        ;
shift-expression:
        additive-expression  {
            $$ = $1;
        }
        | shift-expression LEFT_SHIFT additive-expression  {
            if($3->loc->type->type=="int")
            {
                $$ = new expression();
                $$->loc = symbolTable::gentemp(new ttype("int"));
                emit("<<", $$->loc->name, $1->loc->name, $3->loc->name);  
            }
            else
            {
                yyerror("Type Error, shift expression can only be applied to integer shift values");
            }
        }
        | shift-expression RIGHT_SHIFT additive-expression  {
            if($3->loc->type->type=="int")
            {
                $$ = new expression();
                $$->loc = symbolTable::gentemp(new ttype("int"));
                emit(">>", $$->loc->name, $1->loc->name, $3->loc->name); 
            }
            else
            {
                yyerror("Type Error, shift expression can only be applied to integer shift values");
            }
        }
        ;
relational-expression:
        shift-expression  {
            $$ = $1;
        }
        | relational-expression LESS_THAN shift-expression  {
            if(typecheck($1->loc,$3->loc))
            {
                $$ = new expression();
                $$->type = "bool";
                $$->truelist = makelist(nextinstr());
                $$->falselist = makelist(nextinstr()+1);
                emit("<","",$1->loc->name,$3->loc->name);
                emit("goto","_");
            }
            else
            {
                yyerror("Type mismatch");
            }
        }
        | relational-expression GREATER_THAN shift-expression  {
            if(typecheck($1->loc,$3->loc))
            {
                $$ = new expression();
                $$->type = "bool";
                $$->truelist = makelist(nextinstr());
                $$->falselist = makelist(nextinstr()+1);
                emit(">","",$1->loc->name,$3->loc->name);
                emit("goto","_");
            }
            else
            {
                yyerror("Type mismatch");
            }
        }
        | relational-expression LESS_THAN_EQUAL shift-expression  {
            if(typecheck($1->loc,$3->loc))
            {
                $$ = new expression();
                $$->type = "bool";
                $$->truelist = makelist(nextinstr());
                $$->falselist = makelist(nextinstr()+1);
                emit("<=","",$1->loc->name,$3->loc->name);
                emit("goto","_");
            }
            else
            {
                yyerror("Type mismatch");
            }
        }
        | relational-expression GREATER_THAN_EQUAL shift-expression  {
            if(typecheck($1->loc,$3->loc))
            {
                $$ = new expression();
                $$->type = "bool";
                $$->truelist = makelist(nextinstr());
                $$->falselist = makelist(nextinstr()+1);
                emit(">=","",$1->loc->name,$3->loc->name);
                emit("goto","_");
            }
            else
            {
                yyerror("Type mismatch");
            }
        }
        ;
equality-expression:
        relational-expression  {
            $$ = $1;
        }
        | equality-expression EQUAL_TO relational-expression  {
            if(typecheck($1->loc,$3->loc))
            {
                $$ = new expression();
                btoi($1);
                btoi($3);
                $$->type = "bool";
                $$->truelist = makelist(nextinstr());
                $$->falselist = makelist(nextinstr()+1);
                emit("==","",$1->loc->name,$3->loc->name);
                emit("goto","_");
            }
            else
            {
                yyerror("Type mismatch");
            }
        }
        | equality-expression NOT_EQUAL_TO relational-expression  {
            if(typecheck($1->loc,$3->loc))
            {
                $$ = new expression();
                btoi($1);
                btoi($3);
                $$->type = "bool";
                $$->truelist = makelist(nextinstr());
                $$->falselist = makelist(nextinstr()+1);
                emit("!=","",$1->loc->name,$3->loc->name);
                emit("goto","_");
            }
            else
            {
                yyerror("Type mismatch");
            }
        }
        ;
AND-expression:
        equality-expression  {
            $$ = $1;
        }
        | AND-expression AND equality-expression  {
            if(typecheck($1->loc,$3->loc))
            {
                $$ = new expression();
                btoi($1);
                btoi($3);
                $$->type = "notbool";
                $$->loc = symbolTable::gentemp(new ttype("int"));
                emit("&", $$->loc->name, $1->loc->name, $3->loc->name);  
            }
            else
            {
                yyerror("Type mismatch");
            }
        }
        ;
exclusive-OR-expression:
        AND-expression  {
            $$ = $1;
        }
        | exclusive-OR-expression XOR AND-expression  {
            if(typecheck($1->loc,$3->loc))
            {
                $$ = new expression();
                btoi($1);
                btoi($3);
                $$->type = "notbool";
                $$->loc = symbolTable::gentemp(new ttype("int"));
                emit("^", $$->loc->name, $1->loc->name, $3->loc->name);
            }
            else
            {
                yyerror("Type mismatch");
            }
        }
        ;
inclusive-OR-expression:
        exclusive-OR-expression  {
            $$ = $1;
        }
        | inclusive-OR-expression OR exclusive-OR-expression  {
            if(typecheck($1->loc,$3->loc))
            {
                $$ = new expression();
                btoi($1);
                btoi($3);
                $$->type = "notbool";
                $$->loc = symbolTable::gentemp(new ttype("int"));
                emit("|", $$->loc->name, $1->loc->name, $3->loc->name); 
            }
            else
            {
                yyerror("Type mismatch");
            }
        }
        ;
logical-AND-expression:
        inclusive-OR-expression  {
            $$ = $1;
        }
        | logical-AND-expression AND_AND M inclusive-OR-expression  {
            
            {
                $$ = new expression();
                itob($1);
                itob($4);
                $$->type = "bool";
                backpatch($1->truelist,$3);
                $$->truelist = $4->truelist;
                $$->falselist = merge($1->falselist,$4->falselist);
            }
        }
        ;
logical-OR-expression:
        logical-AND-expression  {
            $$ = $1;
        }
        | logical-OR-expression OR_OR M logical-AND-expression  {
            
            {
                $$ = new expression();
                itob($1);
                itob($4);
                $$->type = "bool";
                backpatch($1->falselist,$3);
                $$->falselist = $4->falselist;
                $$->truelist = merge($1->truelist,$4->truelist);
            }
        }
        ;
conditional-expression:
        logical-OR-expression  {
            $$ = $1;
        }
        | logical-OR-expression N QUESTION M expression N COLON M conditional-expression  {
            $$ = new expression;
            $$->loc = symbolTable::gentemp($5->loc->type);
            $$->loc->update($5->loc->type);
            emit("=", $$->loc->name, $9->loc->name); 
            list<int> l1 = makelist(nextinstr());
            emit("goto", "");
            backpatch($6->nextlist,nextinstr());
            emit("=", $$->loc->name, $5->loc->name);
            list<int> l2 = makelist(nextinstr());
            l1=merge(l1,l2);
            emit("goto","");
            backpatch($2->nextlist, nextinstr());              
            itob($1);                               
            backpatch($1->truelist, $4);                        
            backpatch($1->falselist, $8);                      
            backpatch(l1, nextinstr());
        }
        ;
M:  %empty
    {
        $$=nextinstr();
    }
    ;
N:  %empty
    {
        $$ = new statement();
        $$->nextlist = makelist(nextinstr());
        emit("goto","");
    }
    ;
assignment-expression:
        conditional-expression  {
            $$ = $1;
        }
        | unary-expression assignment-operator assignment-expression  {
            if($1->array_type=="arr")
            {
                $3->loc=convertType($3->loc,$1->type->type);
                emit("[]=", $1->Array->name, $1->loc->name, $3->loc->name);
            }
            else if($1->array_type=="ptr")
            {
                emit("*=", $1->Array->name, $3->loc->name);
            }
            else
            {
                $3->loc=convertType($3->loc,$1->Array->type->type);
                emit("=", $1->Array->name, $3->loc->name);
            }
            $$ = $3;
        }
        ;
assignment-operator:
        EQUALS  {
            
        }
        | ASSIGNMENT_OPERATOR  {
            
        }
        ;
expression:
        assignment-expression  {
            $$ = $1;
        }
        | expression COMMA assignment-expression  {
            //printf("expression-> expression , assignment-expression\n");
        }
        ;
constant-expression:
        conditional-expression  {
            
        }
        ;
declaration:
        declaration-specifiers init-declarator-list SEMICOLON  {
            //printf("declaration-> declaration-specifiers init-declarator-listopt ;\n");
        }
        | declaration-specifiers SEMICOLON  {
            
        }
        ;
init-declarator-listopt:
        init-declarator-list  {/
        //printf("init-declarator-listopt-> init-declarator-list\n");
        }
        | %empty {
            //printf("init-declarator-listopt-> \n");
        }
        ;
declaration-specifiers:
        storage-class-specifier declaration-specifiers  {//printf("declaration-specifiers-> storage-class-specifier declaration-specifiers\n");
        }
        | storage-class-specifier  {
            //printf("declaration-specifiers-> storage-class-specifier\n");
        }
        | type-specifier declaration-specifiers  {
            //printf("declaration-specifiers-> type-specifier declaration-specifiers\n");
}
        | type-specifier  {
            //printf("declaration-specifiers-> type-specifier\n");
}
        | type-qualifier declaration-specifiers  {
            //printf("declaration-specifiers-> type-qualifier declaration-specifiers\n");
}
        | type-qualifier  {
            //printf("declaration-specifiers-> type-qualifier\n");
}
        | function-specifier declaration-specifiers  {
            //printf("declaration-specifiers-> function-specifier declaration-specifiers\n");
}
        | function-specifier  {
            //printf("declaration-specifiers-> function-specifier\n");
}
        ;
type-qualifier:
        TYPE_QUALIFIER  {
            //printf("type-qualifier-> type-qualifier-token\n");
}
        ;
init-declarator-list:
        init-declarator  {
            //printf("init-declarator-list-> init-declarator\n");
}
        | init-declarator-list COMMA init-declarator  {
            //printf("init-declarator-list-> init-declarator-list , init-declarator\n");
}
        ;
init-declarator:
        declarator  {
            $$ = $1;
        }
        | declarator EQUALS initializer  {
            if($3->value !="")
            {
                $1->value = $3->value;
            }
            emit("=", $1->name, $3->name);
        }
        ;
type-specifier:
        VOID{
            varType = "void";
        }
        | CHAR{
            varType = "char";
        }
        | SHORT{
            varType = "short";
        }
        | INT{
            varType = "int";
        }
        | LONG{
            varType = "long";
        }
        | FLOAT{
            varType = "float";
        }
        | DOUBLE{
            varType = "double";
        }
        | SIGNED{
            varType = "signed";
        }
        | UNSIGNED{
            varType = "unsigned";
        }
        | BOOL{
            varType = "bool";
        }
        | COMPLEX{
            varType = "complex";
        }
        | IMAGINARY{
            varType = "imaginary";
        }
        | enum-specifier{
            
            //printf("type-specifier-> enum-specifier\n")
;
        }
        ;
storage-class-specifier:
        STORAGE_CLASS_SPECIFIER {
            //printf("storage-class-specifier-> storage_class_specifier_token\n");
}
        | STATIC_TOKEN {
            //printf("storage-class-specifier-> storage_class_specifier_token\n");
}
        ;
specifier-qualifier-list:
        type-specifier specifier-qualifier-listopt {
            //printf("specifier-qualifier-list-> type-specifier specifier-qualifier-listopt\n");
}
        | TYPE_QUALIFIER specifier-qualifier-listopt {
            //printf("specifier-qualifier-list-> type-qualifier specifier-qualifier-listopt\n");
}
        ;
specifier-qualifier-listopt:
        specifier-qualifier-list {
            //printf("specifier-qualifier-listopt-> specifier-qualifier-list\n");
}
        | %empty {
            //printf("specifier-qualifier-listopt-> \n");
}
        ;
enum-specifier:
        ENUM identifieropt LEFT_CURLY_BRACKET enumerator-list RIGHT_CURLY_BRACKET {
            //printf("enum-specifier-> enum IDENTIFIERopt {enumerator-list}\n");
}
        | ENUM IDENTIFIER {
            //printf("enum-specifier-> enum IDENTIFIER\n");
}
        | ENUM identifieropt LEFT_CURLY_BRACKET enumerator-list COMMA RIGHT_CURLY_BRACKET {
            //printf("enum-specifier-> enum IDENTIFIERopt {enumerator-list,}\n");
}
        ;
identifieropt:
        IDENTIFIER {
            //printf("identifieropt-> IDENTIFIER\n");
}
        | %empty {
            //printf("identifieropt-> \n");
}
        ;
enumerator-list:
        enumerator {
            //printf("enumerator-list-> enumerator\n");
}
        | enumerator-list COMMA enumerator {
            //printf("enumerator-list-> enumerator-list , enumerator\n");
}
        ;
enumerator:
        IDENTIFIER {
            //printf("enumerator-> enumeration-const\n");
}
        | IDENTIFIER EQUALS constant-expression {
            //printf("enumerator-> enumeration-const = constant-expression\n");
}
        ;
function-specifier:
        FUNCTION_SPECIFIER {
            //printf("function-specifier-> function-specifier-token\n");
}
        ;
declarator:
        pointer direct-declarator {
            ttype* t = $1;
            while(t->arrtype!=NULL)
            {
                t=t->arrtype;
            }
            t->arrtype = $2->type;
            $$ = $2->update($1);
        }
        | direct-declarator {
            //printf("declarator-> direct-declarator\n");
}
        ;
direct-declarator:
        IDENTIFIER {
            $$ = $1->update(new ttype(varType));
            currentSymbol = $$;
        }
        | LEFT_PARENTHESIS declarator RIGHT_PARENTHESIS {
            $$ = $2;
        }
        | direct-declarator LEFT_SQUARE_BRACKET type-qualifier-list RIGHT_SQUARE_BRACKET{
            
            //printf("direct-declarator-> direct-declarator [type-qualifier-list]\n")
;
        }
        | direct-declarator LEFT_SQUARE_BRACKET type-qualifier-list assignment-expression RIGHT_SQUARE_BRACKET{
            
            //printf("direct-declarator-> direct-declarator [type-qualifier-list assignment-expression]\n")
;
        }
        | direct-declarator LEFT_SQUARE_BRACKET assignment-expression RIGHT_SQUARE_BRACKET {
            ttype *t = $1->type;
            ttype* prev = NULL;
            while(t->type == "arr")
            {
                prev = t;
                t = t->arrtype;
            }
            if(prev == NULL)
            {
                int temp=atoi($3->loc->value.c_str());
                if(temp<=0)
                {
                    yyerror("Array size must be greater than 0");
                }
                ttype* tp = new ttype("arr",$1->type,temp);
                $$ = $1->update(tp);
            }
            else
            {
                int temp=atoi($3->loc->value.c_str());
                if(temp<=0)
                {
                    yyerror("Array size must be greater than 0");
                }
                ttype* tp = new ttype("arr",t,temp);
                prev->arrtype = tp;
                $$ = $1->update($1->type);
            }

        }
        | direct-declarator LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET{
            ttype* t=$1->type;
            ttype* prev=NULL;
            while(t->type=="arr")
            {
                prev=t;
                t=t->arrtype;
            }
            if(prev==NULL)
            {
                ttype* tp=new ttype("arr",$1->type,0);
                $$=$1->update(tp);
            }
            else
            {
                ttype* tp=new ttype("arr",t,0);
                prev->arrtype=tp;
                $$=$1->update($1->type);
            }
        }
        | direct-declarator LEFT_SQUARE_BRACKET STATIC_TOKEN type-qualifier-list assignment-expression RIGHT_SQUARE_BRACKET {
            //printf("direct-declarator-> direct-declarator [STATIC type-qualifier-listopt assignment-expression]\n");
}
        | direct-declarator LEFT_SQUARE_BRACKET STATIC_TOKEN assignment-expression RIGHT_SQUARE_BRACKET {
            //printf("direct-declarator-> direct-declarator [type-qualifier-list STATIC assignment-expression]\n");
}
        | direct-declarator LEFT_SQUARE_BRACKET type-qualifier-list STATIC_TOKEN assignment-expression RIGHT_SQUARE_BRACKET {
            //printf("direct-declarator-> direct-declarator [type-qualifier-list STATIC assignment-expression]\n");
}
        | direct-declarator LEFT_SQUARE_BRACKET type-qualifier-list STAR RIGHT_SQUARE_BRACKET {
            //printf("direct-declarator-> direct-declarator [type-qualifier-listopt *]\n");
}
        | direct-declarator LEFT_SQUARE_BRACKET STAR RIGHT_SQUARE_BRACKET {
            //printf("direct-declarator-> direct-declarator [*]\n");
}
        | direct-declarator LEFT_PARENTHESIS change-table parameter-type-list RIGHT_PARENTHESIS {
            currentST->name = $1->name;
            if($1->type->type != "void") {
                symbol* s = currentST->lookup("return");   
                s->update($1->type);
            }
            $1->nested_table = currentST;
            currentST->parent = globalST; 
            switchTable(globalST);        
            currentSymbol = $$;
        }
        | direct-declarator LEFT_PARENTHESIS identifier-list RIGHT_PARENTHESIS {
            //printf("direct-declarator-> direct-declarator (identifier-listopt)\n");
}
        | direct-declarator LEFT_PARENTHESIS change-table RIGHT_PARENTHESIS
        {
            currentST->name = $1->name;
            if($1->type->type != "void") {
                symbol* s = currentST->lookup("return");   
                s->update($1->type);
            }
            $1->nested_table = currentST;
            currentST->parent = globalST; 
            switchTable(globalST);        
            currentSymbol = $$;
        }
        ;
type-qualifier-listopt:
        type-qualifier-list {
            //printf("type-qualifier-listopt-> type-qualifier-list\n");
}
        | %empty {
            //printf("type-qualifier-listopt-> \n");
}
        ;
pointer:
        STAR type-qualifier-listopt {
            $$ = new ttype("ptr");
        }
        | STAR type-qualifier-listopt pointer {
            $$ = new ttype("ptr",$3);
        }
        ;
type-qualifier-list:
        TYPE_QUALIFIER {
            //printf("type-qualifier-list-> type-qualifier\n");
}
        | type-qualifier-list TYPE_QUALIFIER {
            //printf("type-qualifier-list-> type-qualifier-list type-qualifier\n");
}
        ;
parameter-type-list:
        parameter-list {
            //printf("parameter-type-list-> parameter-list\n");
}
        | parameter-list COMMA ELLIPSIS {
            //printf("parameter-type-list-> parameter-list , ...\n");
}
        ;
parameter-list:
        parameter-declaration {
            //printf("parameter-list-> parameter-declaration\n");
}
        | parameter-list COMMA parameter-declaration {
            //printf("parameter-list-> parameter-list , parameter-declaration\n");
}
        ;
parameter-declaration:
        declaration-specifiers declarator {
            //printf("parameter-declaration-> declaration-specifiers declarator\n");
}
        | declaration-specifiers {
            //printf("parameter-declaration-> declaration-specifiers\n");
}
        ;
identifier-list:
        IDENTIFIER {
            //printf("identifier-list-> IDENTIFIER\n");
}
        | identifier-list COMMA IDENTIFIER {
            //printf("identifier-list-> identifier-list , IDENTIFIER\n");
}
        ;
type-name:
        specifier-qualifier-list {
            //printf("type-name-> specifier-qualifier-list\n");
}
        ;
initializer:
        assignment-expression {
            $$ = $1->loc;
        }
        | LEFT_CURLY_BRACKET initializer-list RIGHT_CURLY_BRACKET {
            //printf("initializer-> {initializer-list}\n");
}
        | LEFT_CURLY_BRACKET initializer-list COMMA RIGHT_CURLY_BRACKET {
            //printf("initializer-> {initializer-list,}\n");
}
        ;
initializer-list:
        designationopt initializer {
            //printf("initializer-list-> designationopt initializer\n");
}
        | initializer-list COMMA designationopt initializer {
            //printf("initializer-list-> initializer-list , designationopt initializer\n");
}
        ;
designationopt:
        designation {
            //printf("designationopt-> designation\n");
}
        | %empty {
            //printf("designationopt-> \n");
}
        ;
designation:
        designator-list EQUALS {
            //printf("designation-> designator-list =\n");
}
        ;
designator-list:
        designator {
            //printf("designator-list-> designator\n");
}
        | designator-list designator {
            //printf("designator-list-> designation-list designator\n");
}
        ;
designator:
        LEFT_SQUARE_BRACKET constant-expression RIGHT_SQUARE_BRACKET {
            //printf("designator-> [constant-expression]\n");
}
        | DOT IDENTIFIER {
            //printf("designator-> . IDENTIFIER\n");
}
        ;
statement:
        labeled-statement {
            //printf("statement-> labeled-statement\n");
}
        | compound-statement {
            $$ = $1;
        }
        | expression-statement {
            $$ = new statement();
            $$->nextlist = $1->nextlist;
        }
        | selection-statement {
            $$ = $1;
        }
        | iteration-statement {
            $$ = $1;
        }
        | jump-statement {
            $$ = $1;
        }
        ;
loop-statement:
        labeled-statement {
            //printf("loop-statement-> labeled-statement\n");
}
        | expression-statement {
            $$ = new statement();
            $$->nextlist = $1->nextlist;
        }
        | selection-statement {
            $$ = $1;
        }
        | iteration-statement {
            $$ = $1;
        }
        | jump-statement {
            $$ = $1;
        }
        ;
labeled-statement:
        IDENTIFIER COLON statement {
            //printf("labeled-statement-> IDENTIFIER : statement\n");
}
        | CASE constant-expression COLON statement {
            //printf("labeled-statement-> CASE constant-expression : statement\n");
}
        | DEFAULT COLON statement {
            //printf("labeled-statement-> DEFAULT : statement\n");
}
        ;
compound-statement:
        LEFT_CURLY_BRACKET A change-table block-item-listopt RIGHT_CURLY_BRACKET {
            $$ = $4;
            switchTable(currentST->parent);
        }
        ;
A:  %empty
        {
            string new_ST = currentST->name + "_" + blockName + "_" + to_string(STCount++);
            symbol* sym = currentST->lookup(new_ST);
            sym->nested_table = new symbolTable(new_ST);
            sym->name = new_ST;
            sym->nested_table->parent = currentST;
            sym->type = new ttype("block");
            currentSymbol = sym;
        }
        ;
change-table:   %empty
        {
            if(currentSymbol->nested_table != NULL)
            {
                switchTable(currentSymbol->nested_table);
                emit("label",currentST->name);
            }
            else
            {
                switchTable(new symbolTable(""));
            }
        }
        ;
block-item-listopt:
        block-item-list {
            $$ = $1;
        }
        | %empty {
            $$ = new statement();
        }
        ;
block-item-list:
        block-item {
            $$ = $1;
        }
        | block-item-list M block-item {
            $$ = $3;
            backpatch($1->nextlist, $2);
        }
        ;
block-item:
        declaration {
            $$ = new statement();
        }
        | statement {
            $$ = $1;
        }
        ;
expression-statement:
        expression SEMICOLON {
            $$ = $1;
        }
        | SEMICOLON {
            $$ = new expression();
        }
        ;
selection-statement:
        IF LEFT_PARENTHESIS expression N RIGHT_PARENTHESIS M statement N %prec LOWER_THAN_ELSE
        {
            backpatch($4->nextlist,nextinstr());
            itob($3);
            $$ = new statement();
            backpatch($3->truelist,$6);
            list<int> l1 = merge($3->falselist,$7->nextlist);
            $$->nextlist = merge(l1,$8->nextlist);
        }
        | IF LEFT_PARENTHESIS expression N RIGHT_PARENTHESIS  M statement N ELSE M statement {
            backpatch($4->nextlist,nextinstr());
            itob($3);
            $$ = new statement();
            backpatch($3->truelist,$6);
            backpatch($3->falselist,$10);
            list<int> l1 = merge($7->nextlist,$8->nextlist);
            $$->nextlist = merge(l1,$11->nextlist);
        }
        | SWITCH LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement {
            //printf("selection-statement-> SWITCH (expression) statement\n");
}
        ;
iteration-statement:
        WHILE W LEFT_PARENTHESIS A change-table M expression RIGHT_PARENTHESIS M loop-statement {
            $$ = new statement();
            itob($7);
            backpatch($10->nextlist, $6);
            backpatch($7->truelist, $9);
            $$->nextlist = $7->falselist;
            emit("goto", itos($6));
            blockName = "";
            switchTable(currentST->parent);

        }
        | WHILE W LEFT_PARENTHESIS A change-table M expression RIGHT_PARENTHESIS LEFT_CURLY_BRACKET M block-item-listopt RIGHT_CURLY_BRACKET {
            $$ = new statement();
            itob($7);
            backpatch($11->nextlist, $6);
            backpatch($7->truelist, $10);
            $$->nextlist = $7->falselist;
            emit("goto", itos($6));
            blockName = "";
            switchTable(currentST->parent);
        }
        | DO D M loop-statement M WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS SEMICOLON {
            $$ = new statement();
            itob($8);
            backpatch($8->truelist, $3);
            backpatch($4->nextlist, $5);
            $$->nextlist = $8->falselist;
            blockName = "";
        }
        | DO D LEFT_CURLY_BRACKET M block-item-listopt RIGHT_CURLY_BRACKET M WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS SEMICOLON {
            $$ = new statement();
            itob($10);
            backpatch($10->truelist, $4);
            backpatch($5->nextlist, $7);
            $$->nextlist = $10->falselist;
            blockName = "";
        }
        | FOR F LEFT_PARENTHESIS A change-table declaration M expression-statement M expression N RIGHT_PARENTHESIS M loop-statement {
            $$ = new statement();
            itob($8);
            backpatch($8->nextlist, $13);
            backpatch($11->nextlist, $7);
            backpatch($14->nextlist, $9);
            emit("goto", itos($9));
            $$->nextlist = $8->falselist;
            blockName = "";
            switchTable(currentST->parent);
        }
        | FOR F LEFT_PARENTHESIS A change-table expression-statement M expression-statement M expression N RIGHT_PARENTHESIS M loop-statement {
            $$ = new statement();
            itob($8);
            backpatch($8->truelist, $13);
            backpatch($11->nextlist, $7);
            backpatch($14->nextlist, $9);
            emit("goto", itos($9));
            $$->nextlist = $8->falselist;
            blockName = "";
            switchTable(currentST->parent);
        }
        | FOR F LEFT_PARENTHESIS A change-table declaration M expression-statement M expression N RIGHT_PARENTHESIS M LEFT_CURLY_BRACKET block-item-listopt RIGHT_CURLY_BRACKET {
            $$ = new statement();
            itob($8);
            backpatch($8->truelist, $13);
            backpatch($11->nextlist, $7);
            backpatch($15->nextlist, $9);
            emit("goto", itos($9));
            $$->nextlist = $8->falselist;
            blockName = "";
            switchTable(currentST->parent);
        }
        | FOR F LEFT_PARENTHESIS A change-table expression-statement M expression-statement M expression N RIGHT_PARENTHESIS M LEFT_CURLY_BRACKET block-item-listopt RIGHT_CURLY_BRACKET{
            $$ = new statement();                   
            itob($8);                 
            backpatch($8->truelist, $13);          
            backpatch($11->nextlist, $7);          
            backpatch($15->nextlist, $9);          
            emit("goto", itos($9)); 
            $$->nextlist = $8->falselist;           
            blockName = "";
            switchTable(currentST->parent);
        }
        ;
F: %empty{
        blockName = "FOR";
    }
    ;
W: %empty{
        blockName = "WHILE";
    }
    ;
D: %empty{
        blockName = "DO_WHILE";
    }
    ;
jump-statement:
        GOTO IDENTIFIER SEMICOLON {
            //printf("jump-statement-> GOTO IDENTIFIER ;\n");
}
        | CONTINUE SEMICOLON {
            $$ = new statement();
        }
        | BREAK SEMICOLON {
            $$ = new statement();
        }
        | RETURN expression SEMICOLON {
            $$ = new statement();
            emit("return", $2->loc->name);
        }
        | RETURN SEMICOLON {
            $$ = new statement();
            emit("return", "");
        }
        ;
translation-unit:
        external-declaration {
            //printf("translation-unit-> external-declaration\n");
}
        | translation-unit external-declaration {
            //printf("translation-unit-> translation-unit external-declaration\n");
}
        ;
external-declaration:
        function-definition {
            //printf("external-declaration-> function-definition\n");
}
        | declaration {
            //printf("external-declaration-> declaration\n");
}
        ;
function-definition:
        declaration-specifiers declarator declaration-listopt change-table LEFT_CURLY_BRACKET block-item-listopt RIGHT_CURLY_BRACKET {
            currentST->parent = globalST;
            STCount=0;
            switchTable(globalST);
        }
        ;
declaration-listopt:
        declaration-list {
            //printf("declaration-listopt-> declaration-list\n");
}
        | %empty {
            //printf("declaration-listopt-> \n");
}
        ;
declaration-list:
        declaration {
            //printf("declaration-list-> declaration\n");
}
        | declaration-list declaration {
            //printf("declaration-list-> declaration-list declaration\n");
}
        ;
%%