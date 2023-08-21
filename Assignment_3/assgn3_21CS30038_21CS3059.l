%{
    #include <stdio.h>
    #include <lexer.h>
%}

keywords    "auto"|"break"|"case"|"char"|"const"|"continue"|"default"|"do"|"double"|"else"|"extern"|"float"|"for"|"goto"|"if"|"inline"|"int"|"long"|"register"|"restrict"|"return"|"short"|"signed"|"sizeof"|"static"|"struct"|"switch"|"typedef"|"union"|"unsigned"|"void"|"volatile"|"while"|"_Bool"|"_Complex"|"_Imaginary"
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
spaces [ \t\n\r]
single_line_comment "//"[^\n]*\n
multi_line_comment  "/*"([^*]|"*"[^/])*"*/"
%s enumerator
%%
"enum"  {BEGIN(enumerator);return KEYWORD;}
{keywords}  {return KEYWORD;}
<enumerator>{enumeration_constant}  {return ENUMERATION_CONST;}
{identifier}    {return IDENTIFIER}
<enumerator,INITIAL>{integer_constant}  {printf("integer constant: %s\n", yytext);}
{floating_constant} {return FLOAT;}
<enumerator>"{" {return PUNCTUATOR;}
<enumerator>"}" {return PUNCTUATOR;BEGIN(INITIAL);}
<enumerator>"," {return PUNCTUATOR;}
{character_constant}    {return CHARACTER_CONSTANT;}
{string_literal}    {return STRING_LITERAL;}
{punctuator}    {return PUCTUATOR;}
{spaces}    ;
{single_line_comment}   {return SINGLE_LINE_COMMENT;}
{multi_line_comment}    {return MULTI_LINE_COMMENT;}
. {return ERROR;}
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
