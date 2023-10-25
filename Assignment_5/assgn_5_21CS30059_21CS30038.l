%{
    #include <stdio.h>
    #include "translator.h"
    #include "assgn_5_21CS30059_21CS30038.tab.h"
    int lineno=1;

%}


%option noyywrap

keywords    "auto"|"break"|"case"|"char"|"continue"|"default"|"do"|"double"|"else"|"extern"|"float"|"for"|"goto"|"if"|"inline"|"int"|"long"|"register"|"return"|"short"|"signed"|"sizeof"|"static"|"struct"|"switch"|"typedef"|"union"|"unsigned"|"void"|"while"|"_Bool"|"_Complex"|"_Imaginary"
type_qualifier "const"|"restrict"|"volatile"
storage_class_specifier   "auto"|"register"|"static"|"extern"
function_specifier  "inline"
type_specifier_token "void"|"char"|"short"|"int"|"long"|"float"|"double"|"signed"|"unsigned"|"_Bool"|"_Complex"|"_Imaginary"
enum_specifier_token "enum"
alpha   [_A-Za-z]
identifier  {alpha}({alpha}|[0-9])*
digit   [0-9]
nonzero_digit   [1-9]
integer_constant    {nonzero_digit}{digit}*
digit_sequence  {digit}+
fractional_constant {digit_sequence}?\.{digit_sequence}|{digit_sequence}\.
exponent_part   [eE][+-]?{digit_sequence}
floating_constant   {fractional_constant}{exponent_part}?|{digit_sequence}{exponent_part}
enumeration_constant    {alpha}({alpha}|{digit})*
escape_sequence \\[abfnrtv\\?'"]
c_char  [^'\\\n]|{escape_sequence}
c_char_sequence {c_char}+
character_constant  "'"{c_char_sequence}"'"
s_char  [^"\\\n]|{escape_sequence}
s_char_sequence {s_char}+
string_literal  \"{s_char_sequence}?\"
assignment_operator "="|"*="|"/="|"%="|"+="|"-="|"<<="|">>="|"&="|"^="|"|="
punctuator  "["|"]"|"("|")"|"{"|"}"|"."|"->"|"++"|"--"|"&"|"*"|"+"|"-"|"~"|"!"|"/"|"%"|"<<"|">>"|"<"|">"|"<="|">="|"=="|"!="|"^"|"|"|"&&"|"||"|"?"|":"|";"|"..."|"="|"*="|"/="|"%="|"+="|"-="|"<<="|">>="|"&="|"^="|"|="|","|"#"
spaces [ \t\n\r]
single_line_comment "//"[^\n]*\n
multi_line_comment  "/*"([^*]|"*"[^/])*"*/"
%s enumerator
%%
"static"    {return STATIC_TOKEN;}
"0"     {yylval.intval = 0;return INTEGER;}
"{" {return LEFT_CURLY_BRACKET;}
"}" {return RIGHT_CURLY_BRACKET;}
"," {return COMMA;}
"++"    {return INCREMENT;}
"--"    {return DECREMENT;}
"="     {return EQUALS;}
"&" {return AND;}
"*" {return STAR;}
"+" {return PLUS;}
"-" {return MINUS;}
"~" {return TILDE;}
"!" {return NOT;}
"/" {return DIV;}
"%" {return MOD;}
"<<"    {return LEFT_SHIFT;}
">>"    {return RIGHT_SHIFT;}
"<" {return LESS_THAN;}
">" {return GREATER_THAN;}
"<="    {return LESS_THAN_EQUAL;}
">="    {return GREATER_THAN_EQUAL;}
"=="    {return EQUAL_TO;}
"!="    {return NOT_EQUAL_TO;}
"^" {return XOR;}
"|" {return OR;}
"&&"    {return AND_AND;}
"||"    {return OR_OR;}
"?" {return QUESTION;}
":" {return COLON;}
";" {return SEMICOLON;}
"," {return COMMA;}
"["    {return LEFT_SQUARE_BRACKET;}
"]"    {return RIGHT_SQUARE_BRACKET;}
"(" {return LEFT_PARENTHESIS;}
")" {return RIGHT_PARENTHESIS;}
"." {return DOT;}
"..."  {return ELLIPSIS;}
"{" {return LEFT_CURLY_BRACKET;}
"}" {return RIGHT_CURLY_BRACKET;}
"->"   {return ARROW;}
{enum_specifier_token}  {/*BEGIN(enumerator);*/return ENUM;}
"void"  {return  VOID;}
"char"  {return CHAR;}
"short" {return SHORT;}
"int"   {return INT;}
"long"  {return LONG;}
"float" {return FLOAT;}
"double"    {return DOUBLE;}
"signed"    {return SIGNED;}
"unsigned"  {return UNSIGNED;}
"_Bool" {return BOOL;}
"_Complex"  {return COMPLEX;}
"_Imaginary"    {return IMAGINARY;}
{type_qualifier}   {return TYPE_QUALIFIER;}
{storage_class_specifier}   {return STORAGE_CLASS_SPECIFIER;}
{function_specifier}    {return FUNCTION_SPECIFIER;}
"case"  {return CASE;}
"default"   {return DEFAULT;}
"sizeof"    {return SIZEOF;}
"if"    {return IF;}
"else"  {return ELSE;}
"switch"    {return SWITCH;}
"while" {return WHILE;}
"do"    {return DO;}
"for"   {return FOR;}
"goto"  {return GOTO;}
"continue"  {return CONTINUE;}
"break" {return BREAK;}
"return"    {return RETURN;}
{type_qualifier}   {return TYPE_QUALIFIER;}
{keywords}  {return KEYWORD;}

<enumerator>{enumeration_constant}  {yylval.pointer=currentST->lookup(yytext);return ENUMERATION_CONST;}
{identifier}    {yylval.pointer=currentST->lookup(yytext);return IDENTIFIER;}
{integer_constant}  {yylval.intval=atoi(yytext);return INTEGER;}
{floating_constant} {yylval.floatval=atof(yytext);return FLOATING_CONSTANT;}

{character_constant}    {yylval.charval=yytext;return CHARACTER_CONSTANT;}
{string_literal}    {yylval.charval=yytext;return STRING_LITERAL;}
{assignment_operator}   {return ASSIGNMENT_OPERATOR;}
{punctuator}    {return PUNCTUATOR;}
\n  {lineno++;}
{spaces}    ;
{single_line_comment}   {/*Single Line Comment*/lineno++;}
{multi_line_comment}    {/*Multi line comment*/for(int i=0;i<yyleng;i++){if(yytext[i]=='\n')lineno++;}}
. {return ERROR;}
%%

