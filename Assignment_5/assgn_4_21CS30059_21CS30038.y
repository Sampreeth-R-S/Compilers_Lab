%{
    #include<stdio.h>
    #include<translator.h>
    extern int yylex();
    //extern int yylineno=1;
    extern int lineno;
    string vartype;
    void yyerror(char *s) {
        printf("error: %s at line %d\n", s, lineno);
    }
%}

%union{
    int value;
    expression* exp;
    int intval;
    array* Array;
    int numParams;
    char operator;
    symbol* pointer;
    statement stmt;
}
%token <pointer> IDENTIFIER
%token ENUM TYPE_SPECIFIER_TOKEN STORAGE_CLASS_SPECIFIER STATIC_TOKEN FUNCTION_SPECIFIER CASE DEFAULT SIZEOF OF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN TYPE_QUALIFIER KEYWORD ENUMERATION_CONST IDENTIFIER INTEGER FLOAT PUNCTUATOR CHARACTER_CONSTANT STRING_LITERAL ASSIGNMENT_OPERATOR SINGLE_LINE_COMMENT MULTI_LINE_COMMENT ERROR
%token VOID CHAR SHORT INT LONG DOUBLE SIGNED UNSIGNED BOOL COMPLEX IMAGINARY
%token IF EQUALS INCREMENT DECREMENT AND STAR PLUS MINUS TILDE NOT DIV MOD LEFT_SHIFT RIGHT_SHIFT LESS_THAN GREATER_THAN LESS_THAN_EQUAL GREATER_THAN_EQUAL EQUAL_TO NOT_EQUAL_TO XOR OR AND_AND OR_OR QUESTION COLON SEMICOLON COMMA LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET LEFT_CURLY_BRACKET RIGHT_CURLY_BRACKET LEFT_PARENTHESIS RIGHT_PARENTHESIS DOT ELLIPSIS ARROW
%start translation-unit
%precedence LOWER_THAN_ELSE
%precedence ELSE
%type<exp> primary-expression, multiplicative-expression, additive-expression, shift-expression, relational-expression, equality-expression, AND-expression, exclusive-OR-expression, inclusive-OR-expression, logical-AND-expression, logical-OR-expression, conditional-expression, assignment-expression, expression, constant-expression
%type<Array> postfix-expression, unary-expression, cast-expression
%type<numParams> argument-expression-listopt,argument-expression-list
%type<operator> unary-operator
%type<pointer> declarator init-declarator direct-declarator
%type<intval> M
%type<stmt> N
%%
    primary-expression:
        IDENTIFIER  {symbol* temp=currentST.lookup($1);if(temp==NULL){$$=NULL;yyerror("Undeclared variable");}else if(temp->type==FUNCTION){$$=NULL;yyerror("Function name used as variable");}/*printf("primary-expression-> IDENTIFIER\n");*/
            else
            {
                $$ = new expression();
                $$->loc=currentST.gentemp(temp->type);
                quads.emit($$->loc->name,temp->name,"=");
            }
            
            }//printf("primary-expression-> IDENTIFIER\n");}
        | INTEGER   {
            $$ = new expression();
            $$->loc=currentST.gentemp("int",inttostring($1));
            quads.emit($$->loc->name,$1,"=");
            //printf("primary-expression-> INTEGER\n");}
        }
        | FLOAT    {
            $$ = new expression();
            $$->loc=currentST.gentemp("float",floattostring($1));
            quads.emit($$->loc->name,$1,"=");
            //printf("primary-expression-> FLOAT\n");}
        }
        | CHARACTER_CONSTANT    {
            $$ = new expression();
            $$->loc=currentST.gentemp("char",chartostring($1));
            quads.emit($$->loc->name,$1,"=");
            //printf("primary-expression-> CHARACTER_CONSTANT\n");}
        }
        | ENUMERATION_CONST   {printf("primary-expression-> ENUMERATION_CONST\n");}
        | STRING_LITERAL    {
            $$ = new expression();
            $$->loc=currentST.gentemp("ptr",$1);
            quads.emit($$->loc->name,$1,"=");
            $$->loc->type_info->arrtype = new type("char");
        }
        | LEFT_PARENTHESIS expression RIGHT_PARENTHESIS  {printf("primary-expression-> (expression)\n");}
        ;
    postfix-expression:
        primary-expression  {
            $$ = new array();
            $$->loc = $1->loc;
            $$->array = $$->loc;
            $$->type_info = $$->loc->type_info->arrtype;
        }
        | postfix-expression LEFT_SQUARE_BRACKET expression RIGHT_SQUARE_BRACKET  {
            $$ = new array();
            $$->loc = currentST.gentemp("int");
            $$->type_info = $1->type_info->arrtype;
            $$->array_type = "arr";
            $$->array = $1->array;
            if($1->array_type=="arr")
            {
                symbol*temp = currentST.gentemp("int");
                int size = sizeoftype($$->type_info);
                quads.emit(temp->name,$3->loc->name,"*",inttostring(size));
                quads.emit($$->loc->name,temp->name,"+",$1->loc->name);
            }
            else
            {
                int size = sizeoftype($$->type_info);
                quads.emit($$->loc->name,$3->loc->name,"*",inttostring(size));
            }
        }
        | postfix-expression LEFT_PARENTHESIS argument-expression-listopt RIGHT_PARENTHESIS  {
            $$ = new array();
            $$->loc = currentST.gentemp($1->type_info);
            $$->array_type = "func";
            $$->Array = $1->Array;
            $$->type_info = $1->type_info;
            quads.emit($$->loc->name,$1->loc->name,"call",inttostring($3));
            
        }
        | postfix-expression DOT IDENTIFIER  {printf("postfix-expression-> postfix-expression . IDENTIFIER\n");}
        | postfix-expression ARROW IDENTIFIER  {printf("postfix-expression-> postfix-expression -> IDENTIFIER\n");}
        | postfix-expression INCREMENT  {
            $$ = new array();
            $$->Array = currentST.gentemp($1->type_info);
            quads.emit($$->Array->name,$1->Array->name,"=",);
            quads.emit($1->Array->name,$1->Array->name,"+","1");
        }
        | postfix-expression DECREMENT  {
            $$ = new array();
            $$->Arrau = currentST.gentemp($1->type_info);
            quads.emit($$->Array->name,$1->Array->name,"=",);
            quads.emit($1->Array->name,$1->Array->name,"-","1");
        }
        | LEFT_PARENTHESIS type-name RIGHT_PARENTHESIS LEFT_CURLY_BRACKET initializer-list RIGHT_CURLY_BRACKET  {printf("postfix-expression-> (type-name) {initializer-list}\n");}
        | LEFT_PARENTHESIS type-name RIGHT_PARENTHESIS LEFT_CURLY_BRACKET initializer-list COMMA RIGHT_CURLY_BRACKET  {printf("postfix-expression-> (type-name) {initializer-list,}\n");}
        ;
    argument-expression-list:
        assignment-expression  {
            $$ = 1;
            quads.emit("param",$1->loc->name);
        }
        | argument-expression-list COMMA assignment-expression  {
            $$ = $1+1;
            quads.emit("param",$3->loc->name);
        }
        ;
    argument-expression-listopt:
        argument-expression-list  {
            $$ = $1;
        }
        |  {$$ = 0;}
        ;
    unary-expression:
        postfix-expression  {
            $$ = $1;
        }
        | INCREMENT unary-expression  {
            quads.emit($2->loc->name,$2->loc->name,"+","1");
            $$ = $2;
        }
        | DECREMENT unary-expression  {
            quads.emit($2->loc->name,$2->loc->name,"-","1");
            $$ = $2;
        }
        | unary-operator cast-expression  {
            $$ = new array();
            switch($1):
                case '&':
                    $$->Array = currentST.gentemp("ptr");
                    $$->Array->type_info->arrtype = $2->Array->type_info;
                    quads.emit($$->Array->name,$2->Array->name,"= &");
                    break;
                case '*':
                    $$->Array = $2->Array;
                    $$->loc = currentST.gentemp($2->Array->type_info->arrtype);
                    $$->array_type = "ptr";
                    quads.emit($$->loc->name,$2->Array->name,"= *");
                    break;
                case '+':
                    $$ = $2;
                    break;
                case '-':
                    $$->Array = currentST.gentemp($2->Array->type_info->type);
                    quads.emit($$->Array->name,$2->Array->name,"= -");
                    break;
                case '~':
                    $$->Array = currentST.gentemp($2->Array->type_info->type);
                    quads.emit($$->Array->name,$2->Array->name,"= ~");
                    break;
                case '!':
                    $$->Array = currentST.gentemp($2->Array->type_info->type);
                    quads.emit($$->Array->name,$2->Array->name,"= !");
                    break;
        }
        | SIZEOF unary-expression  {printf("unary-expression-> SIZEOF unary-expression\n");}
        | SIZEOF LEFT_PARENTHESIS type-name RIGHT_PARENTHESIS  {printf("unary-expression-> SIZEOF (type-name)\n");}
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
            $$ = new array();
            $$->Array = convertType($4->Array, $2);
        }
        ;
    multiplicative-expression:
        cast-expression  {
            $$ = new expression();
            if($1->array_type=="arr")
            {
                $$->loc = currentST.gentemp($1->loc->type_info);
                quads.emit($$->loc->name,$1->Array->name,"= []",$1->loc->name);
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
                $$->loc = currentST.gentemp($1->loc->type_info);
                quads.emit($$->loc->name,$1->loc->name,"*",$3->Array->name);
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
                $$->loc = currentST.gentemp($1->loc->type_info);
                quads.emit($$->loc->name,$1->loc->name,"/",$3->Array->name);
            }
            else
            {
                yyerror("Type mismatch");
            }
        }
        | multiplicative-expression MOD cast-expression  {
            if(typecheck($1->loc,$3->array))
            {
                $$ = new expression();
                $$->loc = currentST.gentemp($1->loc->type_info);
                quads.emit($$->loc->name,$1->loc->name,"%",$3->Array->name);
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
                $$->loc = currentST.gentemp($1->loc->type_info);
                quads.emit($$->loc->name,$1->loc->name,"+",$3->Array->name);
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
                $$->loc = currentST.gentemp($1->loc->type_info);
                quads.emit($$->loc->name,$1->loc->name,"-",$3->Array->name);
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
            if($3->loc->type_info->type=="int")
            {
                $$ = new expression();
                $$->loc = currentST.gentemp($1->loc->type_info);
                quads.emit($$->loc->name,$1->loc->name,"<<",$3->Array->name);
            }
            else
            {
                yyerror("Type Error, shift expression can only be applied to integer shift values");
            }
        }
        | shift-expression RIGHT_SHIFT additive-expression  {
            if($3->loc->type_info->type=="int")
            {
                $$ = new expression();
                $$->loc = currentST.gentemp($1->loc->type_info);
                quads.emit($$->loc->name,$1->loc->name,">>",$3->Array->name);
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
                $$->true_list = makelist(nextinstr());
                $$->false_list = makelist(nextinstr()+1);
                quads.emit("<","",$1->loc->name,$3->loc->name);
                quads.emit("goto","_");
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
                $$->true_list = makelist(nextinstr());
                $$->false_list = makelist(nextinstr()+1);
                quads.emit(">","",$1->loc->name,$3->loc->name);
                quads.emit("goto","_");
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
                $$->true_list = makelist(nextinstr());
                $$->false_list = makelist(nextinstr()+1);
                quads.emit("<=","",$1->loc->name,$3->loc->name);
                quads.emit("goto","_");
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
                $$->true_list = makelist(nextinstr());
                $$->false_list = makelist(nextinstr()+1);
                quads.emit(">=","",$1->loc->name,$3->loc->name);
                quads.emit("goto","_");
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
                convertBooltoInt($1);
                convertBooltoInt($3);
                $$->type = "bool";
                $$->true_list = makelist(nextinstr());
                $$->false_list = makelist(nextinstr()+1);
                quads.emit("==","",$1->loc->name,$3->loc->name);
                quads.emit("goto","_");
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
                convertBooltoInt($1);
                convertBooltoInt($3);
                $$->type = "bool";
                $$->true_list = makelist(nextinstr());
                $$->false_list = makelist(nextinstr()+1);
                quads.emit("!=","",$1->loc->name,$3->loc->name);
                quads.emit("goto","_");
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
                convertBooltoInt($1);
                convertBooltoInt($3);
                $$->type = "notbool";
                $$->loc = currentST.gentemp(new type("int"));
                quads.emit($$->loc->name,$1->loc->name,"&",$3->loc->name);
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
                convertBooltoInt($1);
                convertBooltoInt($3);
                $$->type = "notbool";
                $$->loc = currentST.gentemp(new type("int"));
                quads.emit($$->loc->name,$1->loc->name,"^",$3->loc->name);
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
                convertBooltoInt($1);
                convertBooltoInt($3);
                $$->type = "notbool";
                $$->loc = currentST.gentemp(new type("int"));
                quads.emit($$->loc->name,$1->loc->name,"|",$3->loc->name);
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
            if(typecheck($1->loc,$3->loc))
            {
                $$ = new expression();
                convertBooltoInt($1);
                convertBooltoInt($4);
                $$->type = "bool";
                backpatch($1->true_list,$3);
                $$->true_list = $4->true_list;
                $$->false_list = merge($1->false_list,$4->false_list);
            }
            else
            {
                yyerror("Type mismatch");
            }
        }
        ;
    logical-OR-expression:
        logical-AND-expression  {
            $$ = $1;
        }
        | logical-OR-expression OR_OR M logical-AND-expression  {
            if(typecheck($1->loc,$3->loc))
            {
                $$ = new expression();
                convertBooltoInt($1);
                convertBooltoInt($4);
                $$->type = "bool";
                backpatch($1->false_list,$3);
                $$->false_list = $4->false_list;
                $$->true_list = merge($1->true_list,$4->true_list);
            }
            else
            {
                yyerror("Type mismatch");
            }
        }
        ;
    conditional-expression:
        logical-OR-expression  {
            $$ = $1;
        }
        | logical-OR-expression N QUESTION M expression N COLON M conditional-expression  {
            $$ = new expression;
            $$->loc = currentST.gentemp($5->loc->type_info);
            $$->loc->update($5->loc->type);
            emit($$->loc->name,$9->loc->name,"=");
            list<int> l1 = makelist(nextinstr());
            emit("goto", "");
            backpatch($6->nextlist,nextinstr());
            emit($$->loc->name,$5->loc->name,"=");
            list<int> l2 = makelist(nextinstr());
            l1=merge(l1,l2);
            emit("goto","");
            backpatch($2->nextlist, nextinstr());               // Backpatching
            convertIntToBool($1);                               // Convert expression to bool
            backpatch($1->truelist, $4);                        // When $1 is true, control goes to $4 (expression)
            backpatch($1->falselist, $8);                       // When $1 is false, control goes to $8 (conditional_expression)
            backpatch(l1, nextinstr());
        }
        ;
    M:  {
        $$=nextinstr();
    }
    N:  {
        $$ = new statement();
        $$->nextlist = makelist(nextinstr());
        emit("goto","");
    }
    assignment-expression:
        conditional-expression  {
            $$ = $1;
        }
        | unary-expression ASSIGNMENT_OPERATOR assignment-expression  {
            if($1->array_type=="arr")
            {
                $3->loc=convertType($3->loc,$1->type_info->type);
                quads.emit($1->Array->name,$1->loc->name,"[]=",$3->loc->name);
            }
            else if($1->array_type="ptr")
            {
                quads.emit($1->Array->name,$3->loc->name,"*=");
            }
            else
            {
                $3->loc=convertType($3->loc,$1->Array->type_info->type);
                emit($1->Array->name,$3->loc,"=");
            }
            $$ = $3;
        }
        | unary-expression EQUALS assignment-expression {printf("assignment-expression-> unary-expression assignment-operator assignment-expression\n");}
        ;
    expression:
        assignment-expression  {
            $$ = $1;
        }
        | expression COMMA assignment-expression  {printf("expression-> expression , assignment-expression\n");}
        ;
    constant-expression:
        conditional-expression  {printf("constant-expression-> conditional-expression\n");}
        ;
    declaration:
        declaration-specifiers init-declarator-listopt SEMICOLON  {printf("declaration-> declaration-specifiers init-declarator-listopt ;\n");}
        ;
    init-declarator-listopt:
        init-declarator-list  {printf("init-declarator-listopt-> init-declarator-list\n");}
        | {printf("init-declarator-listopt-> \n");}
        ;
    declaration-specifiers:
        storage-class-specifier declaration-specifiers  {printf("declaration-specifiers-> storage-class-specifier declaration-specifiers\n");}
        | storage-class-specifier  {printf("declaration-specifiers-> storage-class-specifier\n");}
        | TYPE_SPECIFIER_TOKEN declaration-specifiers  {printf("declaration-specifiers-> type-specifier declaration-specifiers\n");}
        | enum-specifier declaration-specifiers  {printf("declaration-specifiers-> enum-specifier declaration-specifiers\n");}
        | TYPE_SPECIFIER_TOKEN  {printf("declaration-specifiers-> type-specifier\n");}
        | enum-specifier  {printf("declaration-specifiers-> enum-specifier\n");}
        | type-qualifier declaration-specifiers  {printf("declaration-specifiers-> type-qualifier declaration-specifiers\n");}
        | type-qualifier  {printf("declaration-specifiers-> type-qualifier\n");}
        | function-specifier declaration-specifiers  {printf("declaration-specifiers-> function-specifier declaration-specifiers\n");}
        | function-specifier  {printf("declaration-specifiers-> function-specifier\n");}
        ;
    type-qualifier:
        TYPE_QUALIFIER  {printf("type-qualifier-> type-qualifier-token\n");}
        ;
    init-declarator-list:
        init-declarator  {printf("init-declarator-list-> init-declarator\n");}
        | init-declarator-list COMMA init-declarator  {printf("init-declarator-list-> init-declarator-list , init-declarator\n");}
        ;
    init-declarator:
        declarator  {
            $$ = $1;
        }
        | declarator EQUALS initializer  {
            quads.emit($1->name,$3->name,"=");
        }
        ;
    type-specifier:
        VOID{
            vartype = "void";
        }
        | CHAR{
            vartype = "char";
        }
        | SHORT{
            vartype = "short";
        }
        | INT{
            vartype = "int";
        }
        | LONG{
            vartype = "long";
        }
        | FLOAT{
            vartype = "float";
        }
        | DOUBLE{
            vartype = "double";
        }
        | SIGNED{
            vartype = "signed";
        }
        | UNSIGNED{
            vartype = "unsigned";
        }
        | BOOL{
            vartype = "bool";
        }
        | COMPLEX{
            vartype = "complex";
        }
        | IMAGINARY{
            vartype = "imaginary";
        }
        | enum-specifier{
            printf("type-specifier-> enum-specifier\n");
        }
    storage-class-specifier:
        STORAGE_CLASS_SPECIFIER {printf("storage-class-specifier-> storage_class_specifier_token\n");}
        | STATIC_TOKEN {printf("storage-class-specifier-> storage_class_specifier_token\n");}
        ;
    specifier-qualifier-list:
        type-specifier specifier-qualifier-listopt {printf("specifier-qualifier-list-> type-specifier specifier-qualifier-listopt\n");}
        | enum-specifier specifier-qualifier-listopt {printf("specifier-qualifier-list-> enum-specifier specifier-qualifier-listopt\n");}
        | TYPE_QUALIFIER specifier-qualifier-listopt {printf("specifier-qualifier-list-> type-qualifier specifier-qualifier-listopt\n");}
        ;
    specifier-qualifier-listopt:
        specifier-qualifier-list {printf("specifier-qualifier-listopt-> specifier-qualifier-list\n");}
        | {printf("specifier-qualifier-listopt-> \n");}
        ;
    enum-specifier:
        ENUM identifieropt LEFT_CURLY_BRACKET enumerator-list RIGHT_CURLY_BRACKET {printf("enum-specifier-> enum IDENTIFIERopt {enumerator-list}\n");}
        | ENUM IDENTIFIER {printf("enum-specifier-> enum IDENTIFIER\n");}
        | ENUM identifieropt LEFT_CURLY_BRACKET enumerator-list COMMA RIGHT_CURLY_BRACKET {printf("enum-specifier-> enum IDENTIFIERopt {enumerator-list,}\n");}
        ;
    identifieropt:
        IDENTIFIER {printf("identifieropt-> IDENTIFIER\n");}
        | {printf("identifieropt-> \n");}
        ;
    enumerator-list:
        enumerator {printf("enumerator-list-> enumerator\n");}
        | enumerator-list COMMA enumerator {printf("enumerator-list-> enumerator-list , enumerator\n");}
        ;
    enumerator:
        IDENTIFIER {printf("enumerator-> enumeration-const\n");}
        | IDENTIFIER EQUALS constant-expression {printf("enumerator-> enumeration-const = constant-expression\n");}
        ;
    function-specifier:
        FUNCTION_SPECIFIER {printf("function-specifier-> function-specifier-token\n");}
        ;
    declarator:
        pointer direct-declarator {
            type* t = $1;
            while(t->arrType!=NULL)
            {
                t=t->arrType;
            }
            t->arrType = $2;
            $$ = $2->update($1);
        }
        | direct-declarator {printf("declarator-> direct-declarator\n");}
        ;
    direct-declarator:
        IDENTIFIER {
            $$ = $1->update(new type(varType));
            currentSymbol = $$;
        }
        | LEFT_PARENTHESIS declarator RIGHT_PARENTHESIS {
            $$ = $2;
        }
        | direct-declarator LEFT_SQUARE_BRACKET type-qualifier-list RIGHT_SQUARE_BRACKET{
            printf("direct-declarator-> direct-declarator [type-qualifier-list]\n");
        }
        | direct-declarator LEFT_SQUARE_BRACKET type-qualifier-list assignment-expression RIGHT_SQUARE_BRACKET{
            printf("direct-declarator-> direct-declarator [type-qualifier-list assignment-expression]\n");
        }
        | direct-declarator LEFT_SQUARE_BRACKET assignment-expression RIGHT_SQUARE_BRACKET {
            type *t = $1->type;
            type* prev = NULL;
            while(t->type == "arr")
            {
                prev = t;
                t = t->arrType;
            }
            if(t->type == "ptr")
            {
                yyerror("Array of pointers not allowed");
            }
            if(prev == NULL)
            {
                int temp=atoi($3->loc->value.c_str());
                if(temp<=0)
                {
                    yyerror("Array size must be greater than 0");
                }
                type* tp = new type("arr",$1->type,temp);
                $$ = $1->update(tp);
            }
            else
            {
                int temp=atoi($3->loc->value.c_str());
                if(temp<=0)
                {
                    yyerror("Array size must be greater than 0");
                }
                type* tp = new type("arr",t,temp);
                prev->arrType = tp;
                $$ = $1->update($1->type);
            }

        }
        | direct-declarator LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET{
            type* t=$1->type;
            type* prev=NULL;
            while(t->type=="arr")
            {
                prev=t;
                t=t->arrType;
            }
            if(prev==NULL)
            {
                type* tp=new type("arr",$1->type,0);
                $$=$1->update(tp);
            }
            else
            {
                type* tp=new type("arr",t,0);
                prev->arrType=tp;
                $$=$1->update($1->type);
            }
        }
        | direct-declarator LEFT_SQUARE_BRACKET STATIC_TOKEN type-qualifier-listopt assignment-expression RIGHT_SQUARE_BRACKET {printf("direct-declarator-> direct-declarator [STATIC type-qualifier-listopt assignment-expression]\n");}
        | direct-declarator LEFT_SQUARE_BRACKET type-qualifier-list STATIC_TOKEN assignment-expression RIGHT_SQUARE_BRACKET {printf("direct-declarator-> direct-declarator [type-qualifier-list STATIC assignment-expression]\n");}
        | direct-declarator LEFT_SQUARE_BRACKET type-qualifier-listopt STAR RIGHT_SQUARE_BRACKET {printf("direct-declarator-> direct-declarator [type-qualifier-listopt *]\n");}
        | direct-declarator LEFT_PARENTHESIS parameter-type-list RIGHT_PARENTHESIS {
            currentST->name = $1->name;
            if($1->type_info->type != "void") {
                symbol* s = currentST->lookup("return");    // Lookup for return value
                s->update($1->type);
            }
            $1->nestedTable = currentST;
            currentST->parent = globalST;   // Update parent symbol table
            switchTable(globalST);          // Switch current table to point to the global symbol table
            currentSymbol = $$;
        }
        | direct-declarator LEFT_PARENTHESIS identifier-listopt RIGHT_PARENTHESIS {printf("direct-declarator-> direct-declarator (identifier-listopt)\n");}
        ;
    type-qualifier-listopt:
        type-qualifier-list {printf("type-qualifier-listopt-> type-qualifier-list\n");}
        | {printf("type-qualifier-listopt-> \n");}
        ;
    assignment-expressionopt:
        assignment-expression {printf("assignment-expressionopt-> assignment-expression\n");}
        | {printf("assignment-expressionopt-> \n");}
        ;
    identifier-listopt:
        identifier-list {printf("identifier-listopt-> identifier-list\n");}
        | {printf("identifier-listopt-> \n");}
        ;
    pointer:
        STAR type-qualifier-listopt {
            $$ = new type("ptr");
        }
        | STAR type-qualifier-listopt pointer {
            $$ = new type("ptr",$3);
        }
        ;
    type-qualifier-list:
        TYPE_QUALIFIER {printf("type-qualifier-list-> type-qualifier\n");}
        | type-qualifier-list TYPE_QUALIFIER {printf("type-qualifier-list-> type-qualifier-list type-qualifier\n");}
        ;
    parameter-type-list:
        parameter-list {printf("parameter-type-list-> parameter-list\n");}
        | parameter-list COMMA ELLIPSIS {printf("parameter-type-list-> parameter-list , ...\n");}
        ;
    parameter-list:
        parameter-declaration {printf("parameter-list-> parameter-declaration\n");}
        | parameter-list COMMA parameter-declaration {printf("parameter-list-> parameter-list , parameter-declaration\n");}
        ;
    parameter-declaration:
        declaration-specifiers declarator {printf("parameter-declaration-> declaration-specifiers declarator\n");}
        | declaration-specifiers {printf("parameter-declaration-> declaration-specifiers\n");}
        ;
    identifier-list:
        IDENTIFIER {printf("identifier-list-> IDENTIFIER\n");}
        | identifier-list COMMA IDENTIFIER {printf("identifier-list-> identifier-list , IDENTIFIER\n");}
        ;
    type-name:
        specifier-qualifier-list {printf("type-name-> specifier-qualifier-list\n");}
        ;
    initializer:
        assignment-expression {
            $$ = $1->loc;
        }
        | LEFT_CURLY_BRACKET initializer-list RIGHT_CURLY_BRACKET {printf("initializer-> {initializer-list}\n");}
        | LEFT_CURLY_BRACKET initializer-list COMMA RIGHT_CURLY_BRACKET {printf("initializer-> {initializer-list,}\n");}
        ;
    initializer-list:
        designationopt initializer {printf("initializer-list-> designationopt initializer\n");}
        | initializer-list COMMA designationopt initializer {printf("initializer-list-> initializer-list , designationopt initializer\n");}
        ;
    designationopt:
        designation {printf("designationopt-> designation\n");}
        | {printf("designationopt-> \n");}
        ;
    designation:
        designator-list EQUALS {printf("designation-> designator-list =\n");}
        ;
    designator-list:
        designator {printf("designator-list-> designator\n");}
        | designator-list designator {printf("designator-list-> designation-list designator\n");}
        ;
    designator:
        LEFT_SQUARE_BRACKET constant-expression RIGHT_SQUARE_BRACKET {printf("designator-> [constant-expression]\n");}
        | DOT IDENTIFIER {printf("designator-> . IDENTIFIER\n");}
        ;
    statement:
        labeled-statement {printf("statement-> labeled-statement\n");}
        | compound-statement {printf("statement-> compound-statement\n");}
        | expression-statement {printf("statement-> expression-statement\n");}
        | selection-statement {printf("statement-> selection-statement\n");}
        | iteration-statement {printf("statement-> iteration-statement\n");}
        | jump-statement {printf("statement-> jump-statement\n");}
    labeled-statement:
        IDENTIFIER COLON statement {printf("labeled-statement-> IDENTIFIER : statement\n");}
        | CASE constant-expression COLON statement {printf("labeled-statement-> CASE constant-expression : statement\n");}
        | DEFAULT COLON statement {printf("labeled-statement-> DEFAULT : statement\n");}
        ;
    compound-statement:
        LEFT_CURLY_BRACKET block-item-listopt RIGHT_CURLY_BRACKET {printf("compound-statement-> {block-item-listopt}\n");}
        ;
    block-item-listopt:
        block-item-list {printf("block-item-listopt-> block-item-list\n");}
        | {printf("block-item-listopt-> \n");}
        ;
    block-item-list:
        block-item {printf("block-item-list-> block-item\n");}
        | block-item-list block-item {printf("block-item-list-> block-item-list block-item\n");}
        ;
    block-item:
        declaration {printf("block-item-> declaration\n");}
        | statement {printf("block-item-> statement\n");}
        ;
    expression-statement:
        expressionopt SEMICOLON {printf("expression-statement-> expressionopt ;\n");}
        ;
    expressionopt:
        expression {printf("expressionopt-> expression\n");}
        | {printf("expressionopt-> \n");}
        ;
    selection-statement:
        IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement %prec LOWER_THAN_ELSE
        {printf("selection-statement-> IF (expression) statement\n");}
        | IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement ELSE statement {printf("selection-statement-> IF (expression) statement ELSE statement\n");}
        | SWITCH LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement {printf("selection-statement-> SWITCH (expression) statement\n");}
        ;
    iteration-statement:
        WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement {printf("iteration-statement-> WHILE (expression) statement\n");}
        | DO statement WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS SEMICOLON {printf("iteration-statement-> DO statement WHILE (expression) ;\n");}
        | FOR LEFT_PARENTHESIS expressionopt SEMICOLON expressionopt SEMICOLON expressionopt RIGHT_PARENTHESIS statement {printf("iteration-statement-> FOR (expressionopt ; expressionopt ; expressionopt) statement\n");}
        | FOR LEFT_PARENTHESIS declaration expressionopt SEMICOLON expressionopt RIGHT_PARENTHESIS statement {printf("iteration-statement-> FOR (declaration expressionopt ; expressionopt) statement\n");}
        ;
    jump-statement:
        GOTO IDENTIFIER SEMICOLON {printf("jump-statement-> GOTO IDENTIFIER ;\n");}
        | CONTINUE SEMICOLON {printf("jump-statement-> CONTINUE ;\n");}
        | BREAK SEMICOLON {printf("jump-statement-> BREAK ;\n");}
        | RETURN expressionopt SEMICOLON {printf("jump-statement-> RETURN expressionopt ;\n");}
        ;
    translation-unit:
        external-declaration {printf("translation-unit-> external-declaration\n");}
        | translation-unit external-declaration {printf("translation-unit-> translation-unit external-declaration\n");}
        ;
    external-declaration:
        function-definition {printf("external-declaration-> function-definition\n");}
        | declaration {printf("external-declaration-> declaration\n");}
        ;
    function-definition:
        declaration-specifiers declarator declaration-listopt compound-statement {printf("function-definition-> declaration-specifiers declarator declaration-listopt compound-statement\n");}
        ;
    declaration-listopt:
        declaration-list {printf("declaration-listopt-> declaration-list\n");}
        | {printf("declaration-listopt-> \n");}
        ;
    declaration-list:
        declaration {printf("declaration-list-> declaration\n");}
        | declaration-list declaration {printf("declaration-list-> declaration-list declaration\n");}
        ;
%%



int yywrap()
{
    return 1;
}