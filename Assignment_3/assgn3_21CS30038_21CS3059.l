%{
    #include <stdio.h>
%}

keywords    "auto"|"break"|"case"|"char"|"const"|"continue"|"default"|"do"|"double"|"else"|"enum"|"extern"|"float"|"for"|"goto"|"if"|"inline"|"int"|"long"|"register"|"restrict"|"return"|"short"|"signed"|"sizeof"|"static"|"struct"|"switch"|"typedef"|"union"|"unsigned"|"void"|"volatile"|"while"|"_Bool"|"_Complex"|"_Imaginary"
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
punctuator  "["|"]"|"("|")"|"{"|"}"|"."|"->"|"++"|"--"|"&"|"*"|"+"|"-"|"~"|"!"|"/"|"%"|"<<"|">>"|"<"|">"|"<="|">="|"=="|"!="|"^"|"|"|"&&"|"||"|"?"|":"|";"|"..."|"="|"*="|"/="|"%="|"+="|"-="|"<<="|">>="|"&="|"^="|"|="|","|"#"
spaces [ \t\n]
single_line_comment "//"[^\n]*\n
multi_line_comment  "/*"([^*]|"*"[^/])*"*/"
%s enumerator
%%
"enum"  {BEGIN(enumerator);printf("keyword: %s\n", yytext);}
[\n]   ;
{keywords}  {printf("keyword: %s\n", yytext);}
<enumerator>{enumeration_constant}  {printf("enumeration constant: %s\n", yytext);}
{identifier}    {printf("identifier: %s\n", yytext);}
<enumerator,INITIAL>{integer_constant}  {printf("integer constant: %s\n", yytext);}
{floating_constant} {printf("floating constant: %s\n", yytext);}
<enumerator>"{" {printf("punctuator: %s\n", yytext);}
<enumerator>"}" {printf("punctuator: %s\n", yytext);BEGIN(INITIAL);}
<enumerator>"," {printf("punctuator: %s\n", yytext);}
{character_constant}    {printf("character constant: %s\n", yytext);}
{string_literal}    {printf("string literal: %s\n", yytext);}
{punctuator}    {printf("punctuator: %s\n", yytext);}
{spaces}    ;
{single_line_comment}   printf("single line comment: %s\n", yytext);
{multi_line_comment}    printf("multi line comment: %s\n", yytext);
. {printf("invalid token: %s\n", yytext);}
%%
int main()
{
    yylex();
    return 0;
}
int yywrap()
{
    return 1;
}
