%{
    #include <stdio.h>
    #include "y.tab.h"
    int lineno=1;

%}

keywords    "auto"|"break"|"case"|"char"|"const"|"continue"|"default"|"do"|"double"|"else"|"extern"|"float"|"for"|"goto"|"if"|"inline"|"int"|"long"|"register"|"restrict"|"return"|"short"|"signed"|"sizeof"|"static"|"struct"|"switch"|"typedef"|"union"|"unsigned"|"void"|"volatile"|"while"|"_Bool"|"_Complex"|"_Imaginary"
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
"0"     {return INTEGER;}
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
{type_specifier_token} {return TYPE_SPECIFIER_TOKEN;}
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
{identifier}    {return IDENTIFIER;}
<enumerator>{enumeration_constant}  {return ENUMERATION_CONST;}

{integer_constant}  {return INTEGER;}
{floating_constant} {return FLOAT;}

{character_constant}    {return CHARACTER_CONSTANT;}
{string_literal}    {return STRING_LITERAL;}
{assignment_operator}   {return ASSIGNMENT_OPERATOR;}
{punctuator}    {return PUNCTUATOR;}
\n  {lineno++;}
{spaces}    ;
{single_line_comment}   {/*Single Line Comment*/lineno++;}
{multi_line_comment}    {/*Multi line comment*/for(int i=0;i<yyleng;i++){if(yytext[i]=='\n')lineno++;}}
. {return ERROR;}
%%

