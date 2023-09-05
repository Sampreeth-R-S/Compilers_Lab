%{
    #include<stdio.h>
    extern int yylex();
    extern int yylineno;
    void yyerror(char *s) {
        printf("error: %s at line %d\n", s, yylineno);
    }
%}

%union{
    int value;
}
%token ENUM TYPE_SPECIFIER_TOKEN STORAGE_CLASS_SPECIFIER STATIC_TOKEN FUNCTION_SPECIFIER CASE DEFAULT SIZEOF OF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN TYPE_QUALIFIER KEYWORD ENUMERATION_CONST IDENTIFIER INTEGER FLOAT PUNCTUATOR CHARACTER_CONSTANT STRING_LITERAL ASSIGNMENT_OPERATOR PUNCTUATOR SINGLE_LINE_COMMENT MULTI_LINE_COMMENT ERROR
%token STATIC_TOKEN EQUALS INCREMENT DECREMENT AND STAR PLUS MINUS TILDE NOT DIV MOD LEFT_SHIFT RIGHT_SHIFT LESS_THAN GREATER_THAN LESS_THAN_EQUAL GREATER_THAN_EQUAL EQUAL_TO NOT_EQUAL_TO XOR OR AND_AND OR_OR QUESTION COLON SEMICOLON COMMA LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET LEFT_CURLY_BRACKET RIGHT_CURLY_BRACKET LEFT_PARENTHESIS RIGHT_PARENTHESIS DOT ELLIPSIS ARROW
%start translation_unit
%%
    primary-expression:
        IDENTIFIER  {printf("primary-expression-> IDENTIFIER\n");}
        | INTEGER   {printf("primary-expression-> INTEGER\n");}
        | FLOAT    {printf("primary-expression-> FLOAT\n");}
        | CHARACTER_CONSTANT    {printf("primary-expression-> CHARACTER_CONSTANT\n");}
        | ENUMERATION_CONST   {printf("primary-expression-> ENUMERATION_CONST\n");}
        | STRING_LITERAL    {printf("primary-expression-> STRING_LITERAL\n");}
        | LEFT_PARENTHESIS expression RIGHT_PARENTHESIS  {printf("primary-expression-> (expression)\n");}
        ;
    postfix-expression:
        primary-expression  {printf("postfix-expression-> primary-expression\n");}
        | postfix-expression LEFT_SQUARE_BRACKET expression RIGHT_SQUARE_BRACKET  {printf("postfix-expression-> postfix-expression [expression]\n");}
        | postfix-expression LEFT_PARENTHESIS argument-expression-listopt RIGHT_PARENTHESIS  {printf("postfix-expression-> postfix-expression (argument_list_optional)\n");}
        | postfix-expression DOT IDENTIFIER  {printf("postfix-expression-> postfix-expression . IDENTIFIER\n");}
        | postfix-expression ARROW IDENTIFIER  {printf("postfix-expression-> postfix-expression -> IDENTIFIER\n");}
        | postfix-expression INCREMENT  {printf("postfix-expression-> postfix-expression ++\n");}
        | postfix-expression DECREMENT  {printf("postfix-expression-> postfix-expression --\n");}
        | LEFT_PARENTHESIS type-name RIGHT_PARENTHESIS LEFT_CURLY_BRACKET initializer-list RIGHT_CURLY_BRACKET  {printf("postfix-expression-> (type-name) {initializer-list}\n");}
        | LEFT_PARENTHESIS type-name RIGHT_PARENTHESIS LEFT_CURLY_BRACKET initializer-list COMMA RIGHT_CURLY_BRACKET  {printf("postfix-expression-> (type-name) {initializer-list,}\n");}
        ;
    argument-expression-list:
        assignment-expression  {printf("argument-expression-list-> assignment-expression\n");}
        | argument-expression-list COMMA assignment-expression  {printf("argument-expression-list-> argument-expression-list , assignment-expression\n");}
        ;
    argument-expression-listopt:
        argument-expression-list  {printf("argument-expression-listopt-> argument-expression-list\n");}
        |  {printf("argument-expression-listopt-> \n");}
        ;
    unary-expression:
        postfix-expression  {printf("unary-expression-> postfix-expression\n");}
        | INCREMENT unary-expression  {printf("unary-expression-> ++ unary-expression\n");}
        | DECREMENT unary-expression  {printf("unary-expression-> -- unary-expression\n");}
        | unary-operator cast-expression  {printf("unary-expression-> unary-operator cast-expression\n");}
        | SIZEOF unary-expression  {printf("unary-expression-> SIZEOF unary-expression\n");}
        | SIZEOF LEFT_PARENTHESIS type-name RIGHT_PARENTHESIS  {printf("unary-expression-> SIZEOF (type-name)\n");}
        ;
    unary-operator:
        AND  {printf("unary-operator-> &\n");}
        | STAR  {printf("unary-operator-> *\n");}
        | PLUS  {printf("unary-operator-> +\n");}
        | MINUS  {printf("unary-operator-> -\n");}
        | TILDE  {printf("unary-operator-> ~\n");}
        | NOT  {printf("unary-operator-> !\n");}
        ;
    cast-expression:
        unary-expression  {printf("cast-expression-> unary-expression\n");}
        | LEFT_PARENTHESIS type-name RIGHT_PARENTHESIS cast-expression  {printf("cast-expression-> (type-name) cast-expression\n");}
        ;
    multiplicative-expression:
        cast-expression  {printf("multiplicative-expression-> cast-expression\n");}
        | multiplicative-expression STAR cast-expression  {printf("multiplicative-expression-> multiplicative-expression * cast-expression\n");}
        | multiplicative-expression DIV cast-expression  {printf("multiplicative-expression-> multiplicative-expression / cast-expression\n");}
        | multiplicative-expression MOD cast-expression  {printf("multiplicative-expression-> multiplicative-expression % cast-expression\n");}
        ;
    additive-expression:
        multiplicative-expression  {printf("additive-expression-> multiplicative-expression\n");}
        | additive-expression PLUS multiplicative-expression  {printf("additive-expression-> additive-expression + multiplicative-expression\n");}
        | additive-expression MINUS multiplicative-expression  {printf("additive-expression-> additive-expression - multiplicative-expression\n");}
        ;
    shift-expression:
        additive-expression  {printf("shift-expression-> additive-expression\n");}
        | shift-expression LEFT_SHIFT additive-expression  {printf("shift-expression-> shift-expression << additive-expression\n");}
        | shift-expression RIGHT_SHIFT additive-expression  {printf("shift-expression-> shift-expression >> additive-expression\n");}
        ;
    relational-expression:
        shift-expression  {printf("relational-expression-> shift-expression\n");}
        | relational-expression LESS_THAN shift-expression  {printf("relational-expression-> relational-expression < shift-expression\n");}
        | relational-expression GREATER_THAN shift-expression  {printf("relational-expression-> relational-expression > shift-expression\n");}
        | relational-expression LESS_THAN_EQUAL shift-expression  {printf("relational-expression-> relational-expression <= shift-expression\n");}
        | relational-expression GREATER_THAN_EQUAL shift-expression  {printf("relational-expression-> relational-expression >= shift-expression\n");}
        ;
    equality-expression:
        relational-expression  {printf("equality-expression-> relational-expression\n");}
        | equality-expression EQUAL_TO relational-expression  {printf("equality-expression-> equality-expression == relational-expression\n");}
        | equality-expression NOT_EQUAL_TO relational-expression  {printf("equality-expression-> equality-expression != relational-expression\n");}
        ;
    AND-expression:
        equality-expression  {printf("AND-expression-> equality-expression\n");}
        | AND-expression AND equality-expression  {printf("AND-expression-> AND-expression & equality-expression\n");}
        ;
    exclusive-OR-expression:
        AND-expression  {printf("exclusive-OR-expression-> AND-expression\n");}
        | exclusive-OR-expression XOR AND-expression  {printf("exclusive-OR-expression-> exclusive-OR-expression ^ AND-expression\n");}
        ;
    inclusive-OR-expression:
        exclusive-OR-expression  {printf("inclusive-OR-expression-> exclusive-OR-expression\n");}
        | inclusive-OR-expression OR exclusive-OR-expression  {printf("inclusive-OR-expression-> inclusive-OR-expression | exclusive-OR-expression\n");}
        ;
    logical-AND-expression:
        inclusive-OR-expression  {printf("logical-AND-expression-> inclusive-OR-expression\n");}
        | logical-AND-expression AND_AND inclusive-OR-expression  {printf("logical-AND-expression-> logical-AND-expression && inclusive-OR-expression\n");}
        ;
    logical-OR-expression:
        logical-AND-expression  {printf("logical-OR-expression-> logical-AND-expression\n");}
        | logical-OR-expression OR_OR logical-AND-expression  {printf("logical-OR-expression-> logical-OR-expression || logical-AND-expression\n");}
        ;
    conditional-expression:
        logical-OR-expression  {printf("conditional-expression-> logical-OR-expression\n");}
        | logical-OR-expression QUESTION expression COLON conditional-expression  {printf("conditional-expression-> logical-OR-expression ? expression : conditional-expression\n");}
        ;
    assignment-expression:
        conditional-expression  {printf("assignment-expression-> conditional-expression\n");}
        | unary-expression ASSIGNMENT_OPERATOR assignment-expression  {printf("assignment-expression-> unary-expression assignment-operator assignment-expression\n");}
        ;
    expression:
        assignment-expression  {printf("expression-> assignment-expression\n");}
        | expression COMMA assignment-expression  {printf("expression-> expression , assignment-expression\n");}
        ;
    constant-expression:
        conditional-expression  {printf("constant-expression-> conditional-expression\n");}
        ;
    declaration:
        declaration-specifiers init-declarator-listopt SEMICOLON  {printf("declaration-> declaration-specifiers init-declarator-listopt ;\n");}
        ;
    declaration-specifiers:
        storage-class-specifier declaration-specifiers  {printf("declaration-specifiers-> storage-class-specifier declaration-specifiers\n");}
        | storage-class-specifier  {printf("declaration-specifiers-> storage-class-specifier\n");}
        | TYPE_SPECIFIER_TOKEN declaration-specifiers  {printf("declaration-specifiers-> type-specifier declaration-specifiers\n");}
        | TYPE_SPECIFIER_TOKEN  {printf("declaration-specifiers-> type-specifier\n");}
        | type-qualifier declaration-specifiers  {printf("declaration-specifiers-> type-qualifier declaration-specifiers\n");}
        | type-qualifier  {printf("declaration-specifiers-> type-qualifier\n");}
        | function-specifier declaration-specifiers  {printf("declaration-specifiers-> function-specifier declaration-specifiers\n");}
        | function-specifier  {printf("declaration-specifiers-> function-specifier\n");}
        ;
    init-declarator-list:
        declarator {printf("init-declarator-list-> declarator\n");}
        | declarator EQUALS initializer {printf("init-declarator-list-> declarator = initializer\n");}
        ;
    storage-class-specifier:
        STORAGE_CLASS_SPECIFIER {printf("storage-class-specifier-> storage_class_specifier_token\n");}
        | STATIC_TOKEN {printf("storage-class-specifier-> storage_class_specifier_token\n");}
        ;
    specifier-qualifier-list:
        TYPE_SPECIFIER_TOKEN specifier-qualifier-listopt {printf("specifier-qualifier-list-> type-specifier specifier-qualifier-listopt\n");}
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
        ENUMERATION_CONST {printf("enumerator-> enumeration-const\n");}
        | ENUMERATION_CONST EQUALS constant-expression {printf("enumerator-> enumeration-const = constant-expression\n");}
        ;
    function-specifier:
        FUNCTION_SPECIFIER {printf("function-specifier-> function-specifier-token\n");}
        ;
    declarator:
        pointer direct-declarator {printf("declarator-> pointer direct-declarator\n");}
        | direct-declarator {printf("declarator-> direct-declarator\n");}
        ;
    direct-declarator:
        IDENTIFIER {printf("direct-declarator-> IDENTIFIER\n");}
        | LEFT_PARENTHESIS declarator RIGHT_PARENTHESIS {printf("direct-declarator-> (declarator)\n");}
        | direct-declarator LEFT_SQUARE_BRACKET type-qualifier-listopt assignment-expressionopt RIGHT_SQUARE_BRACKET {printf("direct-declarator-> direct-declarator [type-qualifier-listopt assignment-expressionopt]\n");}
        | direct-declarator LEFT_SQUARE_BRACKET STATIC_TOKEN type-qualifier-listopt assignment-expression RIGHT_SQUARE_BRACKET {printf("direct-declarator-> direct-declarator [STATIC type-qualifier-listopt assignment-expression]\n");}
        | direct-declarator LEFT_SQUARE_BRACKET type-qualifier-list STATIC_TOKEN assignment-expression RIGHT_SQUARE_BRACKET {printf("direct-declarator-> direct-declarator [type-qualifier-list STATIC assignment-expression]\n");}
        | direct-declarator LEFT_SQUARE_BRACKET type-qualifier-listopt STAR RIGHT_SQUARE_BRACKET {printf("direct-declarator-> direct-declarator [type-qualifier-listopt *]\n");}
        | direct-declarator LEFT_PARENTHESIS parameter-type-list RIGHT_PARENTHESIS {printf("direct-declarator-> direct-declarator (parameter-type-list)\n");}
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
        STAR type-qualifier-listopt {printf("pointer-> * type-qualifier-listopt\n");}
        | STAR type-qualifier-listopt pointer {printf("pointer-> * type-qualifier-listopt pointer\n");}
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
        assignment-expression {printf("initializer-> assignment-expression\n");}
        | LEFT_CURLY_BRACKET initializer-list RIGHT_CURLY_BRACKET {printf("initializer-> {initializer-list}\n");}
        | LEFT_CURLY_BRACKET initializer-list COMMA RIGHT_CURLY_BRACKET {printf("initializer-> {initializer-list,}\n");}
        ;
    initializer-list:
        designationopt initializer {printf("initializer-list-> initializer\n");}
        | initializer-list COMMA designationopt initializer {printf("initializer-list-> initializer-list , initializer\n");}
        ;
%%