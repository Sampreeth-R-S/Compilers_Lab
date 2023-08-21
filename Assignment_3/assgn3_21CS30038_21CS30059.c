#include <stdio.h>
#include "lexer.h"
extern int yylex(void);
extern char *yytext;
//extern int yywrap();
int main()
{
    int token;
    printf("TOKENS:\n");

    while(token = yylex())
    {
        switch(token)
        {
            case KEYWORD:
                printf("<KEYWORD, %s>\n",yytext);
                break;
            case IDENTIFIER:
                printf("<IDENTIFIER, %s>\n",yytext);
                break;
            case INTEGER:
                printf("<INTEGER_CONSTANT, %s>\n",yytext);
                break;
            case FLOAT:
                printf("<FLOAT_CONSTANT, %s>\n",yytext);
                break;
            case ENUMERATION_CONST:
                printf("<ENUMERATION_CONSTANT, %s>\n",yytext);
                break;
            case PUNCTUATOR:
                printf("<PUNCTUATOR, %s>\n",yytext);
                break;
            case STRING_LITERAL:
                printf("<STRING_LITERAL, %s>\n",yytext);
                break;
            case CHARACTER_CONSTANT:
                printf("<CHARACTER_CONSTANT, %s>\n",yytext);
                break;
            case SINGLE_LINE_COMMENT:
                printf("<SINGLE_LINE_COMMENT, %s>\n",yytext);
                break;
            case MULTI_LINE_COMMENT:
                printf("<MULTI_LINE_COMMENT, %s>\n",yytext);
                break;
            case ERROR:
                printf("<INVALID TOKEN, %s>\n",yytext);
                break;
        }
    }
    return 0;
}
int yywrap(void)
{
    return 1;
}