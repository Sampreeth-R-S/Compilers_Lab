/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "assgn_4_21CS30059_21CS30038.y"

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
    int yydebug=1;

#line 87 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDENTIFIER = 258,              /* IDENTIFIER  */
    INTEGER = 259,                 /* INTEGER  */
    FLOATING_CONSTANT = 260,       /* FLOATING_CONSTANT  */
    CHARACTER_CONSTANT = 261,      /* CHARACTER_CONSTANT  */
    STRING_LITERAL = 262,          /* STRING_LITERAL  */
    ENUM = 263,                    /* ENUM  */
    TYPE_SPECIFIER_TOKEN = 264,    /* TYPE_SPECIFIER_TOKEN  */
    STORAGE_CLASS_SPECIFIER = 265, /* STORAGE_CLASS_SPECIFIER  */
    STATIC_TOKEN = 266,            /* STATIC_TOKEN  */
    FUNCTION_SPECIFIER = 267,      /* FUNCTION_SPECIFIER  */
    CASE = 268,                    /* CASE  */
    DEFAULT = 269,                 /* DEFAULT  */
    SIZEOF = 270,                  /* SIZEOF  */
    OF = 271,                      /* OF  */
    ELSE = 272,                    /* ELSE  */
    SWITCH = 273,                  /* SWITCH  */
    WHILE = 274,                   /* WHILE  */
    DO = 275,                      /* DO  */
    FOR = 276,                     /* FOR  */
    GOTO = 277,                    /* GOTO  */
    CONTINUE = 278,                /* CONTINUE  */
    BREAK = 279,                   /* BREAK  */
    RETURN = 280,                  /* RETURN  */
    TYPE_QUALIFIER = 281,          /* TYPE_QUALIFIER  */
    KEYWORD = 282,                 /* KEYWORD  */
    ENUMERATION_CONST = 283,       /* ENUMERATION_CONST  */
    FLOAT = 284,                   /* FLOAT  */
    PUNCTUATOR = 285,              /* PUNCTUATOR  */
    ASSIGNMENT_OPERATOR = 286,     /* ASSIGNMENT_OPERATOR  */
    SINGLE_LINE_COMMENT = 287,     /* SINGLE_LINE_COMMENT  */
    MULTI_LINE_COMMENT = 288,      /* MULTI_LINE_COMMENT  */
    ERROR = 289,                   /* ERROR  */
    VOID = 290,                    /* VOID  */
    CHAR = 291,                    /* CHAR  */
    SHORT = 292,                   /* SHORT  */
    INT = 293,                     /* INT  */
    LONG = 294,                    /* LONG  */
    DOUBLE = 295,                  /* DOUBLE  */
    SIGNED = 296,                  /* SIGNED  */
    UNSIGNED = 297,                /* UNSIGNED  */
    BOOL = 298,                    /* BOOL  */
    COMPLEX = 299,                 /* COMPLEX  */
    IMAGINARY = 300,               /* IMAGINARY  */
    IF = 301,                      /* IF  */
    EQUALS = 302,                  /* EQUALS  */
    INCREMENT = 303,               /* INCREMENT  */
    DECREMENT = 304,               /* DECREMENT  */
    AND = 305,                     /* AND  */
    STAR = 306,                    /* STAR  */
    PLUS = 307,                    /* PLUS  */
    MINUS = 308,                   /* MINUS  */
    TILDE = 309,                   /* TILDE  */
    NOT = 310,                     /* NOT  */
    DIV = 311,                     /* DIV  */
    MOD = 312,                     /* MOD  */
    LEFT_SHIFT = 313,              /* LEFT_SHIFT  */
    RIGHT_SHIFT = 314,             /* RIGHT_SHIFT  */
    LESS_THAN = 315,               /* LESS_THAN  */
    GREATER_THAN = 316,            /* GREATER_THAN  */
    LESS_THAN_EQUAL = 317,         /* LESS_THAN_EQUAL  */
    GREATER_THAN_EQUAL = 318,      /* GREATER_THAN_EQUAL  */
    EQUAL_TO = 319,                /* EQUAL_TO  */
    NOT_EQUAL_TO = 320,            /* NOT_EQUAL_TO  */
    XOR = 321,                     /* XOR  */
    OR = 322,                      /* OR  */
    AND_AND = 323,                 /* AND_AND  */
    OR_OR = 324,                   /* OR_OR  */
    QUESTION = 325,                /* QUESTION  */
    COLON = 326,                   /* COLON  */
    SEMICOLON = 327,               /* SEMICOLON  */
    COMMA = 328,                   /* COMMA  */
    LEFT_SQUARE_BRACKET = 329,     /* LEFT_SQUARE_BRACKET  */
    RIGHT_SQUARE_BRACKET = 330,    /* RIGHT_SQUARE_BRACKET  */
    LEFT_CURLY_BRACKET = 331,      /* LEFT_CURLY_BRACKET  */
    RIGHT_CURLY_BRACKET = 332,     /* RIGHT_CURLY_BRACKET  */
    LEFT_PARENTHESIS = 333,        /* LEFT_PARENTHESIS  */
    RIGHT_PARENTHESIS = 334,       /* RIGHT_PARENTHESIS  */
    DOT = 335,                     /* DOT  */
    ELLIPSIS = 336,                /* ELLIPSIS  */
    ARROW = 337,                   /* ARROW  */
    LOWER_THAN_ELSE = 338          /* LOWER_THAN_ELSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IDENTIFIER 258
#define INTEGER 259
#define FLOATING_CONSTANT 260
#define CHARACTER_CONSTANT 261
#define STRING_LITERAL 262
#define ENUM 263
#define TYPE_SPECIFIER_TOKEN 264
#define STORAGE_CLASS_SPECIFIER 265
#define STATIC_TOKEN 266
#define FUNCTION_SPECIFIER 267
#define CASE 268
#define DEFAULT 269
#define SIZEOF 270
#define OF 271
#define ELSE 272
#define SWITCH 273
#define WHILE 274
#define DO 275
#define FOR 276
#define GOTO 277
#define CONTINUE 278
#define BREAK 279
#define RETURN 280
#define TYPE_QUALIFIER 281
#define KEYWORD 282
#define ENUMERATION_CONST 283
#define FLOAT 284
#define PUNCTUATOR 285
#define ASSIGNMENT_OPERATOR 286
#define SINGLE_LINE_COMMENT 287
#define MULTI_LINE_COMMENT 288
#define ERROR 289
#define VOID 290
#define CHAR 291
#define SHORT 292
#define INT 293
#define LONG 294
#define DOUBLE 295
#define SIGNED 296
#define UNSIGNED 297
#define BOOL 298
#define COMPLEX 299
#define IMAGINARY 300
#define IF 301
#define EQUALS 302
#define INCREMENT 303
#define DECREMENT 304
#define AND 305
#define STAR 306
#define PLUS 307
#define MINUS 308
#define TILDE 309
#define NOT 310
#define DIV 311
#define MOD 312
#define LEFT_SHIFT 313
#define RIGHT_SHIFT 314
#define LESS_THAN 315
#define GREATER_THAN 316
#define LESS_THAN_EQUAL 317
#define GREATER_THAN_EQUAL 318
#define EQUAL_TO 319
#define NOT_EQUAL_TO 320
#define XOR 321
#define OR 322
#define AND_AND 323
#define OR_OR 324
#define QUESTION 325
#define COLON 326
#define SEMICOLON 327
#define COMMA 328
#define LEFT_SQUARE_BRACKET 329
#define RIGHT_SQUARE_BRACKET 330
#define LEFT_CURLY_BRACKET 331
#define RIGHT_CURLY_BRACKET 332
#define LEFT_PARENTHESIS 333
#define RIGHT_PARENTHESIS 334
#define DOT 335
#define ELLIPSIS 336
#define ARROW 337
#define LOWER_THAN_ELSE 338

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 17 "assgn_4_21CS30059_21CS30038.y"

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

#line 321 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_INTEGER = 4,                    /* INTEGER  */
  YYSYMBOL_FLOATING_CONSTANT = 5,          /* FLOATING_CONSTANT  */
  YYSYMBOL_CHARACTER_CONSTANT = 6,         /* CHARACTER_CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 7,             /* STRING_LITERAL  */
  YYSYMBOL_ENUM = 8,                       /* ENUM  */
  YYSYMBOL_TYPE_SPECIFIER_TOKEN = 9,       /* TYPE_SPECIFIER_TOKEN  */
  YYSYMBOL_STORAGE_CLASS_SPECIFIER = 10,   /* STORAGE_CLASS_SPECIFIER  */
  YYSYMBOL_STATIC_TOKEN = 11,              /* STATIC_TOKEN  */
  YYSYMBOL_FUNCTION_SPECIFIER = 12,        /* FUNCTION_SPECIFIER  */
  YYSYMBOL_CASE = 13,                      /* CASE  */
  YYSYMBOL_DEFAULT = 14,                   /* DEFAULT  */
  YYSYMBOL_SIZEOF = 15,                    /* SIZEOF  */
  YYSYMBOL_OF = 16,                        /* OF  */
  YYSYMBOL_ELSE = 17,                      /* ELSE  */
  YYSYMBOL_SWITCH = 18,                    /* SWITCH  */
  YYSYMBOL_WHILE = 19,                     /* WHILE  */
  YYSYMBOL_DO = 20,                        /* DO  */
  YYSYMBOL_FOR = 21,                       /* FOR  */
  YYSYMBOL_GOTO = 22,                      /* GOTO  */
  YYSYMBOL_CONTINUE = 23,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 24,                     /* BREAK  */
  YYSYMBOL_RETURN = 25,                    /* RETURN  */
  YYSYMBOL_TYPE_QUALIFIER = 26,            /* TYPE_QUALIFIER  */
  YYSYMBOL_KEYWORD = 27,                   /* KEYWORD  */
  YYSYMBOL_ENUMERATION_CONST = 28,         /* ENUMERATION_CONST  */
  YYSYMBOL_FLOAT = 29,                     /* FLOAT  */
  YYSYMBOL_PUNCTUATOR = 30,                /* PUNCTUATOR  */
  YYSYMBOL_ASSIGNMENT_OPERATOR = 31,       /* ASSIGNMENT_OPERATOR  */
  YYSYMBOL_SINGLE_LINE_COMMENT = 32,       /* SINGLE_LINE_COMMENT  */
  YYSYMBOL_MULTI_LINE_COMMENT = 33,        /* MULTI_LINE_COMMENT  */
  YYSYMBOL_ERROR = 34,                     /* ERROR  */
  YYSYMBOL_VOID = 35,                      /* VOID  */
  YYSYMBOL_CHAR = 36,                      /* CHAR  */
  YYSYMBOL_SHORT = 37,                     /* SHORT  */
  YYSYMBOL_INT = 38,                       /* INT  */
  YYSYMBOL_LONG = 39,                      /* LONG  */
  YYSYMBOL_DOUBLE = 40,                    /* DOUBLE  */
  YYSYMBOL_SIGNED = 41,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 42,                  /* UNSIGNED  */
  YYSYMBOL_BOOL = 43,                      /* BOOL  */
  YYSYMBOL_COMPLEX = 44,                   /* COMPLEX  */
  YYSYMBOL_IMAGINARY = 45,                 /* IMAGINARY  */
  YYSYMBOL_IF = 46,                        /* IF  */
  YYSYMBOL_EQUALS = 47,                    /* EQUALS  */
  YYSYMBOL_INCREMENT = 48,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 49,                 /* DECREMENT  */
  YYSYMBOL_AND = 50,                       /* AND  */
  YYSYMBOL_STAR = 51,                      /* STAR  */
  YYSYMBOL_PLUS = 52,                      /* PLUS  */
  YYSYMBOL_MINUS = 53,                     /* MINUS  */
  YYSYMBOL_TILDE = 54,                     /* TILDE  */
  YYSYMBOL_NOT = 55,                       /* NOT  */
  YYSYMBOL_DIV = 56,                       /* DIV  */
  YYSYMBOL_MOD = 57,                       /* MOD  */
  YYSYMBOL_LEFT_SHIFT = 58,                /* LEFT_SHIFT  */
  YYSYMBOL_RIGHT_SHIFT = 59,               /* RIGHT_SHIFT  */
  YYSYMBOL_LESS_THAN = 60,                 /* LESS_THAN  */
  YYSYMBOL_GREATER_THAN = 61,              /* GREATER_THAN  */
  YYSYMBOL_LESS_THAN_EQUAL = 62,           /* LESS_THAN_EQUAL  */
  YYSYMBOL_GREATER_THAN_EQUAL = 63,        /* GREATER_THAN_EQUAL  */
  YYSYMBOL_EQUAL_TO = 64,                  /* EQUAL_TO  */
  YYSYMBOL_NOT_EQUAL_TO = 65,              /* NOT_EQUAL_TO  */
  YYSYMBOL_XOR = 66,                       /* XOR  */
  YYSYMBOL_OR = 67,                        /* OR  */
  YYSYMBOL_AND_AND = 68,                   /* AND_AND  */
  YYSYMBOL_OR_OR = 69,                     /* OR_OR  */
  YYSYMBOL_QUESTION = 70,                  /* QUESTION  */
  YYSYMBOL_COLON = 71,                     /* COLON  */
  YYSYMBOL_SEMICOLON = 72,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 73,                     /* COMMA  */
  YYSYMBOL_LEFT_SQUARE_BRACKET = 74,       /* LEFT_SQUARE_BRACKET  */
  YYSYMBOL_RIGHT_SQUARE_BRACKET = 75,      /* RIGHT_SQUARE_BRACKET  */
  YYSYMBOL_LEFT_CURLY_BRACKET = 76,        /* LEFT_CURLY_BRACKET  */
  YYSYMBOL_RIGHT_CURLY_BRACKET = 77,       /* RIGHT_CURLY_BRACKET  */
  YYSYMBOL_LEFT_PARENTHESIS = 78,          /* LEFT_PARENTHESIS  */
  YYSYMBOL_RIGHT_PARENTHESIS = 79,         /* RIGHT_PARENTHESIS  */
  YYSYMBOL_DOT = 80,                       /* DOT  */
  YYSYMBOL_ELLIPSIS = 81,                  /* ELLIPSIS  */
  YYSYMBOL_ARROW = 82,                     /* ARROW  */
  YYSYMBOL_LOWER_THAN_ELSE = 83,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_YYACCEPT = 84,                  /* $accept  */
  YYSYMBOL_85_primary_expression = 85,     /* primary-expression  */
  YYSYMBOL_86_postfix_expression = 86,     /* postfix-expression  */
  YYSYMBOL_87_argument_expression_list = 87, /* argument-expression-list  */
  YYSYMBOL_88_argument_expression_listopt = 88, /* argument-expression-listopt  */
  YYSYMBOL_89_unary_expression = 89,       /* unary-expression  */
  YYSYMBOL_90_unary_operator = 90,         /* unary-operator  */
  YYSYMBOL_91_cast_expression = 91,        /* cast-expression  */
  YYSYMBOL_92_multiplicative_expression = 92, /* multiplicative-expression  */
  YYSYMBOL_93_additive_expression = 93,    /* additive-expression  */
  YYSYMBOL_94_shift_expression = 94,       /* shift-expression  */
  YYSYMBOL_95_relational_expression = 95,  /* relational-expression  */
  YYSYMBOL_96_equality_expression = 96,    /* equality-expression  */
  YYSYMBOL_97_AND_expression = 97,         /* AND-expression  */
  YYSYMBOL_98_exclusive_OR_expression = 98, /* exclusive-OR-expression  */
  YYSYMBOL_99_inclusive_OR_expression = 99, /* inclusive-OR-expression  */
  YYSYMBOL_100_logical_AND_expression = 100, /* logical-AND-expression  */
  YYSYMBOL_101_logical_OR_expression = 101, /* logical-OR-expression  */
  YYSYMBOL_102_conditional_expression = 102, /* conditional-expression  */
  YYSYMBOL_M = 103,                        /* M  */
  YYSYMBOL_N = 104,                        /* N  */
  YYSYMBOL_105_assignment_expression = 105, /* assignment-expression  */
  YYSYMBOL_106_assignment_operator = 106,  /* assignment-operator  */
  YYSYMBOL_expression = 107,               /* expression  */
  YYSYMBOL_108_constant_expression = 108,  /* constant-expression  */
  YYSYMBOL_declaration = 109,              /* declaration  */
  YYSYMBOL_110_declaration_specifiers = 110, /* declaration-specifiers  */
  YYSYMBOL_111_type_qualifier = 111,       /* type-qualifier  */
  YYSYMBOL_112_init_declarator_list = 112, /* init-declarator-list  */
  YYSYMBOL_113_init_declarator = 113,      /* init-declarator  */
  YYSYMBOL_114_type_specifier = 114,       /* type-specifier  */
  YYSYMBOL_115_storage_class_specifier = 115, /* storage-class-specifier  */
  YYSYMBOL_116_specifier_qualifier_list = 116, /* specifier-qualifier-list  */
  YYSYMBOL_117_specifier_qualifier_listopt = 117, /* specifier-qualifier-listopt  */
  YYSYMBOL_118_enum_specifier = 118,       /* enum-specifier  */
  YYSYMBOL_identifieropt = 119,            /* identifieropt  */
  YYSYMBOL_120_enumerator_list = 120,      /* enumerator-list  */
  YYSYMBOL_enumerator = 121,               /* enumerator  */
  YYSYMBOL_122_function_specifier = 122,   /* function-specifier  */
  YYSYMBOL_declarator = 123,               /* declarator  */
  YYSYMBOL_124_direct_declarator = 124,    /* direct-declarator  */
  YYSYMBOL_125_type_qualifier_listopt = 125, /* type-qualifier-listopt  */
  YYSYMBOL_pointer = 126,                  /* pointer  */
  YYSYMBOL_127_type_qualifier_list = 127,  /* type-qualifier-list  */
  YYSYMBOL_128_parameter_type_list = 128,  /* parameter-type-list  */
  YYSYMBOL_129_parameter_list = 129,       /* parameter-list  */
  YYSYMBOL_130_parameter_declaration = 130, /* parameter-declaration  */
  YYSYMBOL_131_identifier_list = 131,      /* identifier-list  */
  YYSYMBOL_132_type_name = 132,            /* type-name  */
  YYSYMBOL_initializer = 133,              /* initializer  */
  YYSYMBOL_134_initializer_list = 134,     /* initializer-list  */
  YYSYMBOL_designationopt = 135,           /* designationopt  */
  YYSYMBOL_designation = 136,              /* designation  */
  YYSYMBOL_137_designator_list = 137,      /* designator-list  */
  YYSYMBOL_designator = 138,               /* designator  */
  YYSYMBOL_statement = 139,                /* statement  */
  YYSYMBOL_140_loop_statement = 140,       /* loop-statement  */
  YYSYMBOL_141_labeled_statement = 141,    /* labeled-statement  */
  YYSYMBOL_142_compound_statement = 142,   /* compound-statement  */
  YYSYMBOL_A = 143,                        /* A  */
  YYSYMBOL_144_change_table = 144,         /* change-table  */
  YYSYMBOL_145_block_item_listopt = 145,   /* block-item-listopt  */
  YYSYMBOL_146_block_item_list = 146,      /* block-item-list  */
  YYSYMBOL_147_block_item = 147,           /* block-item  */
  YYSYMBOL_148_expression_statement = 148, /* expression-statement  */
  YYSYMBOL_149_selection_statement = 149,  /* selection-statement  */
  YYSYMBOL_150_iteration_statement = 150,  /* iteration-statement  */
  YYSYMBOL_F = 151,                        /* F  */
  YYSYMBOL_W = 152,                        /* W  */
  YYSYMBOL_D = 153,                        /* D  */
  YYSYMBOL_154_jump_statement = 154,       /* jump-statement  */
  YYSYMBOL_155_translation_unit = 155,     /* translation-unit  */
  YYSYMBOL_156_external_declaration = 156, /* external-declaration  */
  YYSYMBOL_157_function_definition = 157,  /* function-definition  */
  YYSYMBOL_158_declaration_listopt = 158,  /* declaration-listopt  */
  YYSYMBOL_159_declaration_list = 159      /* declaration-list  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  27
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   994

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  84
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  76
/* YYNRULES -- Number of rules.  */
#define YYNRULES  213
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  389

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   338


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    62,    62,    67,    72,    77,    82,    88,    91,    97,
     116,   126,   127,   128,   134,   140,   141,   144,   148,   154,
     157,   160,   163,   167,   171,   202,   203,   206,   209,   212,
     215,   218,   221,   226,   229,   235,   251,   263,   275,   285,
     288,   300,   314,   317,   329,   343,   346,   361,   376,   391,
     408,   411,   428,   447,   450,   467,   470,   487,   490,   507,
     510,   524,   527,   541,   544,   563,   568,   576,   579,   598,
     599,   602,   605,   608,   611,   612,   619,   620,   621,   622,
     623,   624,   625,   626,   629,   632,   633,   636,   639,   648,
     651,   654,   657,   660,   663,   666,   669,   672,   675,   678,
     681,   684,   689,   690,   693,   694,   697,   698,   701,   702,
     703,   706,   707,   710,   711,   714,   715,   718,   721,   730,
     733,   737,   740,   743,   746,   777,   797,   798,   799,   800,
     801,   802,   813,   814,   828,   829,   832,   835,   840,   841,
     844,   845,   848,   849,   852,   853,   856,   857,   860,   863,
     866,   867,   870,   871,   874,   875,   878,   881,   882,   885,
     886,   889,   890,   893,   897,   900,   903,   908,   909,   913,
     916,   919,   924,   925,   926,   929,   934,   945,   959,   962,
     967,   970,   976,   979,   984,   987,   992,  1001,  1010,  1013,
    1024,  1034,  1042,  1050,  1061,  1072,  1083,  1095,  1099,  1103,
    1108,  1109,  1112,  1115,  1119,  1125,  1126,  1129,  1130,  1133,
    1140,  1141,  1144,  1145
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER",
  "INTEGER", "FLOATING_CONSTANT", "CHARACTER_CONSTANT", "STRING_LITERAL",
  "ENUM", "TYPE_SPECIFIER_TOKEN", "STORAGE_CLASS_SPECIFIER",
  "STATIC_TOKEN", "FUNCTION_SPECIFIER", "CASE", "DEFAULT", "SIZEOF", "OF",
  "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GOTO", "CONTINUE", "BREAK",
  "RETURN", "TYPE_QUALIFIER", "KEYWORD", "ENUMERATION_CONST", "FLOAT",
  "PUNCTUATOR", "ASSIGNMENT_OPERATOR", "SINGLE_LINE_COMMENT",
  "MULTI_LINE_COMMENT", "ERROR", "VOID", "CHAR", "SHORT", "INT", "LONG",
  "DOUBLE", "SIGNED", "UNSIGNED", "BOOL", "COMPLEX", "IMAGINARY", "IF",
  "EQUALS", "INCREMENT", "DECREMENT", "AND", "STAR", "PLUS", "MINUS",
  "TILDE", "NOT", "DIV", "MOD", "LEFT_SHIFT", "RIGHT_SHIFT", "LESS_THAN",
  "GREATER_THAN", "LESS_THAN_EQUAL", "GREATER_THAN_EQUAL", "EQUAL_TO",
  "NOT_EQUAL_TO", "XOR", "OR", "AND_AND", "OR_OR", "QUESTION", "COLON",
  "SEMICOLON", "COMMA", "LEFT_SQUARE_BRACKET", "RIGHT_SQUARE_BRACKET",
  "LEFT_CURLY_BRACKET", "RIGHT_CURLY_BRACKET", "LEFT_PARENTHESIS",
  "RIGHT_PARENTHESIS", "DOT", "ELLIPSIS", "ARROW", "LOWER_THAN_ELSE",
  "$accept", "primary-expression", "postfix-expression",
  "argument-expression-list", "argument-expression-listopt",
  "unary-expression", "unary-operator", "cast-expression",
  "multiplicative-expression", "additive-expression", "shift-expression",
  "relational-expression", "equality-expression", "AND-expression",
  "exclusive-OR-expression", "inclusive-OR-expression",
  "logical-AND-expression", "logical-OR-expression",
  "conditional-expression", "M", "N", "assignment-expression",
  "assignment-operator", "expression", "constant-expression",
  "declaration", "declaration-specifiers", "type-qualifier",
  "init-declarator-list", "init-declarator", "type-specifier",
  "storage-class-specifier", "specifier-qualifier-list",
  "specifier-qualifier-listopt", "enum-specifier", "identifieropt",
  "enumerator-list", "enumerator", "function-specifier", "declarator",
  "direct-declarator", "type-qualifier-listopt", "pointer",
  "type-qualifier-list", "parameter-type-list", "parameter-list",
  "parameter-declaration", "identifier-list", "type-name", "initializer",
  "initializer-list", "designationopt", "designation", "designator-list",
  "designator", "statement", "loop-statement", "labeled-statement",
  "compound-statement", "A", "change-table", "block-item-listopt",
  "block-item-list", "block-item", "expression-statement",
  "selection-statement", "iteration-statement", "F", "W", "D",
  "jump-statement", "translation-unit", "external-declaration",
  "function-definition", "declaration-listopt", "declaration-list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-332)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-212)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     224,   224,  -332,  -332,  -332,  -332,  -332,   104,   224,   224,
     224,   169,  -332,  -332,  -332,  -332,     3,  -332,    30,    65,
    -332,   229,   -17,    32,  -332,  -332,  -332,  -332,  -332,  -332,
      12,    44,   -23,  -332,    30,   212,  -332,   104,  -332,   224,
     469,   114,   -17,  -332,  -332,  -332,  -332,    75,  -332,  -332,
    -332,  -332,  -332,   863,   884,   884,  -332,  -332,  -332,  -332,
    -332,  -332,   -46,   350,  -332,   286,    20,   916,  -332,   -20,
     131,   148,   219,   157,    77,    97,   103,   107,   159,  -332,
    -332,  -332,   133,  -332,   703,   150,  -332,   162,   545,  -332,
      -8,   177,   350,  -332,   350,  -332,  -332,   916,   240,    95,
     212,  -332,   -33,  -332,   246,   946,  -332,  -332,  -332,  -332,
    -332,  -332,  -332,  -332,  -332,  -332,  -332,  -332,  -332,     1,
     946,  -332,  -332,   174,  -332,  -332,   916,   916,   267,   271,
    -332,  -332,   916,  -332,  -332,   916,   916,   916,   916,   916,
     916,   916,   916,   916,   916,   916,   916,   916,   916,   916,
     916,  -332,  -332,   213,   297,   214,   735,  -332,  -332,   916,
     220,  -332,   222,   284,  -332,  -332,    30,   234,   241,  -332,
     245,   247,  -332,   250,  -332,    -5,  -332,  -332,  -332,  -332,
     251,   252,  -332,  -332,   916,  -332,  -332,   767,    83,   256,
     253,  -332,  -332,  -332,  -332,  -332,  -332,  -332,   -20,   -20,
     131,   131,   148,   148,   148,   148,   219,   219,   157,    77,
      97,   916,   916,  -332,   259,   916,   260,   258,  -332,  -332,
    -332,   334,   266,   268,   799,   261,  -332,  -332,   173,  -332,
    -332,  -332,  -332,   264,   265,  -332,  -332,  -332,  -332,  -332,
    -332,   269,   287,  -332,  -332,  -332,  -332,  -332,    33,   283,
     283,  -332,  -332,   212,   358,  -332,   -46,  -332,  -332,   916,
    -332,   103,   107,   916,   411,   292,   411,   916,   289,   294,
     293,   300,  -332,  -332,  -332,   179,   916,  -332,  -332,  -332,
     297,  -332,  -332,  -332,  -332,  -332,   327,   117,  -332,   119,
    -332,   304,  -332,   411,  -332,    47,  -332,  -332,   639,  -332,
    -332,  -332,   304,   297,  -332,   916,    35,  -332,    72,  -332,
     307,  -332,   411,  -332,   297,  -332,  -332,  -332,  -332,  -332,
    -332,  -332,   301,   305,  -332,  -332,  -332,  -332,  -332,  -332,
    -332,   306,   362,   671,  -332,  -332,   916,   916,  -332,   318,
    -332,  -332,   411,  -332,    56,   365,   916,   831,   831,  -332,
     321,   328,    78,  -332,  -332,   390,  -332,   639,   916,   336,
     916,   916,  -332,   297,  -332,    80,  -332,   304,   304,   411,
     332,   338,   333,   340,  -332,  -332,  -332,  -332,  -332,   487,
     563,   297,  -332,   297,  -332,   343,   344,  -332,  -332
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    79,   102,   103,   117,    84,   208,     0,    81,    77,
      83,     0,   205,   207,    78,   120,   135,    75,     0,     0,
      85,    87,   119,     0,    80,    76,    82,     1,   206,   138,
     136,   134,     0,    74,     0,     0,   212,     0,   177,   210,
       0,   177,   118,   137,   139,   121,    86,    87,     2,     3,
       4,     5,     6,     0,     0,     0,    27,    28,    29,    30,
      31,    32,   155,     0,     8,    21,    33,     0,    35,    39,
      42,    45,    50,    53,    55,    57,    59,    61,    63,    67,
     149,    88,     0,   213,     0,    28,   125,     0,     0,   146,
       0,     0,     0,    25,     0,    22,    23,     0,     0,     0,
       0,   154,     0,   157,   112,   107,    94,    89,    90,    91,
      92,    93,    95,    96,    97,    98,    99,   100,    71,     0,
     107,   148,   101,     0,    13,    14,     0,    20,     0,     0,
      70,    69,     0,    33,    24,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    65,    65,     0,   179,     0,     0,   130,   124,     0,
      28,   122,     0,     0,   132,   133,   145,     0,   140,   142,
       0,     0,    73,     0,   160,   155,   150,   152,   156,   158,
     109,     0,   106,   105,     0,     7,   104,     0,     0,    19,
       0,    17,    11,    12,    68,    36,    37,    38,    40,    41,
      43,    44,    46,    47,    48,    49,    51,    52,    54,    56,
      58,     0,     0,    65,     2,     0,     0,     0,   198,   199,
     197,     0,     0,     0,     0,     0,   185,   176,     0,   182,
     183,   161,   162,     0,    65,   180,   163,   164,   165,   166,
     127,     0,     0,   129,   123,   147,   144,   131,     0,    26,
       0,   159,   151,     0,     0,    72,   155,    34,     9,     0,
      10,    60,    62,     0,     0,     0,     0,     0,     0,    65,
       0,     0,   201,   202,   204,     0,     0,   177,   184,   209,
       0,   126,   128,   141,   143,   153,   115,     0,   113,     0,
      18,    66,   172,     0,   174,     0,   176,    65,     0,   176,
     200,   203,    66,   179,   181,     0,     0,   108,   155,    15,
       0,   173,     0,   177,   179,    65,   167,   168,   169,   170,
     171,   177,     0,     0,   116,   110,   114,    16,    65,   188,
      65,     0,     0,     0,    65,   175,     0,     0,    65,     0,
      65,    65,     0,    64,     0,     0,     0,     0,     0,    66,
      65,     0,     0,    65,    65,   186,    65,     0,     0,     0,
       0,     0,    65,   179,   189,     0,   191,    66,    66,     0,
       0,     0,     0,     0,   187,   190,   192,    65,    65,     0,
       0,   179,   193,   179,   194,     0,     0,   195,   196
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -332,  -332,  -332,  -332,  -332,   -51,  -332,   -59,   120,   128,
     149,   126,   263,   273,   277,   202,   211,  -332,   -92,  -130,
    -137,    18,  -332,   -62,  -200,     0,     9,  -332,  -332,   403,
    -332,  -332,   -65,   319,  -332,  -332,  -332,   132,  -332,     5,
     417,  -332,   412,   -16,  -332,  -332,   193,  -332,   105,   -87,
     187,  -168,  -332,  -332,   342,  -239,  -331,  -248,  -332,  -217,
     -35,  -190,  -332,   165,  -232,  -246,  -238,  -332,  -332,  -332,
    -236,  -332,   435,  -332,  -332,  -332
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    64,    65,   189,   190,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,   211,
     153,   118,   132,   228,   173,   229,    37,     8,    19,    20,
     120,     9,   121,   183,   122,   181,   287,   288,    10,    47,
      22,    30,    23,    31,   167,   168,   169,    90,   123,    81,
      99,   100,   101,   102,   103,   230,   315,   231,   232,   277,
      82,   233,   234,   235,   236,   237,   238,   270,   268,   269,
     239,    11,    12,    13,    38,    39
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,   119,    93,    95,    96,   172,    91,   253,   134,     7,
      14,     6,    21,   177,   178,   265,   133,    24,    25,    26,
       7,    36,   212,    32,    88,   292,   364,   294,    97,    29,
     119,   135,   119,    15,    98,    15,   136,   137,   286,    83,
     182,    97,     1,     2,     3,     4,   133,    98,   382,   384,
     316,   130,   318,    80,   311,   182,    45,    40,    87,     5,
     319,    41,   320,    16,   188,   163,   317,   131,   156,    97,
      44,   164,   252,   329,   184,    98,   195,   196,   197,   313,
     185,    16,   321,   263,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     166,   341,   155,   349,   280,   324,   162,    15,    18,   316,
      18,   318,   325,   323,   283,   353,   354,    89,    80,   319,
     184,   320,    35,   172,   331,   317,   312,   148,   257,   184,
     374,   316,   316,   318,   318,   350,   133,    33,    34,   298,
     253,   319,   319,   320,   320,   191,    97,   317,   317,   327,
     194,   184,    98,   184,   310,    16,   184,   359,   258,   371,
     133,   133,   275,   149,   133,   322,   285,   314,   175,    27,
     150,   246,   176,   370,   241,   151,    17,   242,     1,     2,
       3,     4,    18,   138,   139,   332,     1,     2,     3,     4,
     306,   385,   308,   386,   307,     5,   309,   170,   336,   171,
     337,   291,   255,     5,   342,   295,   140,   141,   345,   154,
     347,   348,   355,   172,   302,    48,    49,    50,    51,    52,
     357,   146,   147,   360,   361,   157,   363,    53,   152,   -66,
     372,   373,   369,     1,     2,     3,     4,   158,     1,     2,
       3,     4,   303,   174,   343,   278,   184,   379,   380,   180,
       5,   301,   184,   187,   133,     5,   165,   166,   198,   199,
      54,    55,    56,    57,    58,    59,    60,    61,   200,   201,
     192,    80,   206,   207,   193,   344,    35,   290,   330,   142,
     143,   144,   145,   213,   352,   133,   333,   245,    62,   240,
      63,   202,   203,   204,   205,   243,   365,   244,   367,   368,
     214,    49,    50,    51,    52,  -211,     1,     2,     3,     4,
     215,   216,    53,   247,   248,   217,   218,   219,   220,   221,
     222,   223,   224,     5,   249,   251,   250,  -111,   254,   259,
     264,   266,   260,   340,   124,   125,   267,   271,   272,   276,
     273,   279,  -178,   225,   281,    54,    55,    56,    57,    58,
      59,    60,    61,    48,    49,    50,    51,    52,   104,   256,
     126,   286,   282,   293,   127,    53,   128,   296,   129,   226,
     297,   299,   300,   227,   305,    63,   105,   184,   328,   106,
     334,   339,   335,   338,   351,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   346,   356,    54,    55,
      56,    57,    58,    59,    60,    61,   358,   362,   366,   375,
     376,   208,   377,   261,   214,    49,    50,    51,    52,   378,
     387,   388,   209,   262,   215,   216,    53,   210,    63,   217,
     218,   219,   220,   221,   222,   223,   224,    46,   326,   186,
      42,   284,    43,   289,   179,   304,    28,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   225,     0,    54,
      55,    56,    57,    58,    59,    60,    61,     0,     0,     0,
       0,     0,    48,    49,    50,    51,    52,     0,     0,     0,
      84,     0,     0,   226,    53,     0,     0,   227,     0,    63,
     214,    49,    50,    51,    52,    29,     0,     0,     0,     0,
     215,   216,    53,     0,     0,   217,   218,   219,   220,   221,
     222,   223,   224,     0,     0,     0,     0,    54,    55,    56,
      85,    58,    59,    60,    61,     0,     0,     0,     0,     0,
       0,     0,     0,   225,     0,    54,    55,    56,    57,    58,
      59,    60,    61,     0,    86,     0,     0,    63,    48,    49,
      50,    51,    52,     0,     0,     0,   159,     0,     0,   226,
      53,     0,     0,   381,     0,    63,   214,    49,    50,    51,
      52,    44,     0,     0,     0,     0,   215,   216,    53,     0,
       0,   217,   218,   219,   220,   221,   222,   223,   224,     0,
       0,     0,     0,    54,    55,    56,   160,    58,    59,    60,
      61,     0,     0,     0,     0,     0,     0,     0,     0,   225,
       0,    54,    55,    56,    57,    58,    59,    60,    61,     0,
     161,     0,     0,    63,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   226,     0,     0,     0,   383,
       0,    63,   214,    49,    50,    51,    52,     0,     0,     0,
       0,     0,   215,   216,    53,     0,     0,   217,   218,   219,
     220,   221,   222,   223,   224,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    48,    49,    50,    51,    52,     0,
       1,     2,     3,     4,     0,   225,    53,    54,    55,    56,
      57,    58,    59,    60,    61,     0,     0,     5,     0,     0,
       0,     0,     0,     0,     0,     0,    48,    49,    50,    51,
      52,   226,     0,     0,     0,     0,     0,    63,    53,    54,
      55,    56,    57,    58,    59,    60,    61,     0,     0,    29,
       0,     0,     0,     0,     0,     0,     0,     0,    48,    49,
      50,    51,    52,   226,     0,     0,     0,     0,     0,    63,
      53,    54,    55,    56,    57,    58,    59,    60,    61,     0,
       0,    44,     0,     0,     0,     0,     0,     0,     0,     0,
      48,    49,    50,    51,    52,     0,     0,     0,     0,     0,
       0,    63,    53,    54,    55,    56,    57,    58,    59,    60,
      61,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,    49,    50,    51,    52,     0,     0,     0,
       0,     0,     0,    63,    53,    54,    55,    56,    57,    58,
      59,    60,    61,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    48,    49,    50,    51,    52,     0,
       0,     0,     0,   256,     0,    63,    53,    54,    55,    56,
      57,    58,    59,    60,    61,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    48,    49,    50,    51,
      52,   274,     0,     0,     0,     0,     0,    63,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    48,    49,    50,
      51,    52,     0,     0,     0,     0,     0,     0,     0,    53,
       0,     0,     0,   226,     0,     0,     0,     0,     0,    63,
       0,    54,    55,    56,    57,    58,    59,    60,    61,    48,
      49,    50,    51,    52,     0,     0,     0,     0,     0,     0,
       0,    53,    54,    55,    56,    57,    58,    59,    60,    61,
       0,    92,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   104,     0,     0,     0,     0,     0,
       0,     0,    94,     0,    54,    55,    56,    57,    58,    59,
      60,    61,   105,     0,     0,   106,     0,     0,     0,     0,
       0,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,     0,     0,    63
};

static const yytype_int16 yycheck[] =
{
       0,    63,    53,    54,    55,    97,    41,   175,    67,     0,
       1,    11,     7,   100,    47,   215,    67,     8,     9,    10,
      11,    21,   152,    18,    40,   264,   357,   266,    74,    26,
      92,    51,    94,     3,    80,     3,    56,    57,     3,    39,
     105,    74,     9,    10,    11,    12,    97,    80,   379,   380,
     298,    31,   298,    35,   293,   120,    79,    74,    40,    26,
     298,    78,   298,    51,   126,    73,   298,    47,    84,    74,
      26,    79,    77,   312,    73,    80,   135,   136,   137,   296,
      79,    51,   299,   213,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
      91,   333,    84,   342,   234,   305,    88,     3,    78,   357,
      78,   357,    77,   303,    81,   347,   348,     3,   100,   357,
      73,   357,    47,   215,   314,   357,    79,    50,   187,    73,
     369,   379,   380,   379,   380,    79,   187,    72,    73,   269,
     308,   379,   380,   379,   380,   127,    74,   379,   380,    77,
     132,    73,    80,    73,   291,    51,    73,    79,    75,    79,
     211,   212,   224,    66,   215,   302,   253,   297,    73,     0,
      67,   166,    77,   363,   156,    68,    72,   159,     9,    10,
      11,    12,    78,    52,    53,   315,     9,    10,    11,    12,
      73,   381,    73,   383,    77,    26,    77,    92,   328,    94,
     330,   263,   184,    26,   334,   267,    58,    59,   338,    76,
     340,   341,   349,   305,   276,     3,     4,     5,     6,     7,
     350,    64,    65,   353,   354,    75,   356,    15,    69,    70,
     367,   368,   362,     9,    10,    11,    12,    75,     9,    10,
      11,    12,   277,     3,   336,    72,    73,   377,   378,     3,
      26,    72,    73,    79,   305,    26,    79,   248,   138,   139,
      48,    49,    50,    51,    52,    53,    54,    55,   140,   141,
       3,   253,   146,   147,     3,   337,    47,   259,   313,    60,
      61,    62,    63,    70,   346,   336,   321,     3,    76,    75,
      78,   142,   143,   144,   145,    75,   358,    75,   360,   361,
       3,     4,     5,     6,     7,    76,     9,    10,    11,    12,
      13,    14,    15,    79,    73,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    79,    75,    79,    76,    76,    73,
      71,    71,    79,   333,    48,    49,    78,     3,    72,    78,
      72,    77,    77,    46,    75,    48,    49,    50,    51,    52,
      53,    54,    55,     3,     4,     5,     6,     7,     8,    76,
      74,     3,    75,    71,    78,    15,    80,    78,    82,    72,
      76,    78,    72,    76,    47,    78,    26,    73,    71,    29,
      79,    19,    77,    77,    19,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    78,    76,    48,    49,
      50,    51,    52,    53,    54,    55,    78,    17,    72,    77,
      72,   148,    79,   211,     3,     4,     5,     6,     7,    79,
      77,    77,   149,   212,    13,    14,    15,   150,    78,    18,
      19,    20,    21,    22,    23,    24,    25,    34,   306,   120,
      23,   248,    30,   256,   102,   280,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      11,    -1,    -1,    72,    15,    -1,    -1,    76,    -1,    78,
       3,     4,     5,     6,     7,    26,    -1,    -1,    -1,    -1,
      13,    14,    15,    -1,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    75,    -1,    -1,    78,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    11,    -1,    -1,    72,
      15,    -1,    -1,    76,    -1,    78,     3,     4,     5,     6,
       7,    26,    -1,    -1,    -1,    -1,    13,    14,    15,    -1,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      75,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    76,
      -1,    78,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    -1,    13,    14,    15,    -1,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    -1,    46,    15,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,    72,    -1,    -1,    -1,    -1,    -1,    78,    15,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,    72,    -1,    -1,    -1,    -1,    -1,    78,
      15,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,
      -1,    78,    15,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    15,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    76,    -1,    78,    15,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,    72,    -1,    -1,    -1,    -1,    -1,    78,    15,    48,
      49,    50,    51,    52,    53,    54,    55,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    15,
      -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,    78,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    15,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    -1,    48,    49,    50,    51,    52,    53,
      54,    55,    26,    -1,    -1,    29,    -1,    -1,    -1,    -1,
      -1,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    -1,    -1,    78
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    10,    11,    12,    26,   109,   110,   111,   115,
     122,   155,   156,   157,   110,     3,    51,    72,    78,   112,
     113,   123,   124,   126,   110,   110,   110,     0,   156,    26,
     125,   127,   123,    72,    73,    47,   109,   110,   158,   159,
      74,    78,   124,   126,    26,    79,   113,   123,     3,     4,
       5,     6,     7,    15,    48,    49,    50,    51,    52,    53,
      54,    55,    76,    78,    85,    86,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     105,   133,   144,   109,    11,    51,    75,   105,   127,     3,
     131,   144,    78,    89,    78,    89,    89,    74,    80,   134,
     135,   136,   137,   138,     8,    26,    29,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,   105,   107,
     114,   116,   118,   132,    48,    49,    74,    78,    80,    82,
      31,    47,   106,    89,    91,    51,    56,    57,    52,    53,
      58,    59,    60,    61,    62,    63,    64,    65,    50,    66,
      67,    68,    69,   104,    76,   105,   127,    75,    75,    11,
      51,    75,   105,    73,    79,    79,   110,   128,   129,   130,
     132,   132,   102,   108,     3,    73,    77,   133,    47,   138,
       3,   119,   116,   117,    73,    79,   117,    79,   107,    87,
      88,   105,     3,     3,   105,    91,    91,    91,    92,    92,
      93,    93,    94,    94,    94,    94,    95,    95,    96,    97,
      98,   103,   103,    70,     3,    13,    14,    18,    19,    20,
      21,    22,    23,    24,    25,    46,    72,    76,   107,   109,
     139,   141,   142,   145,   146,   147,   148,   149,   150,   154,
      75,   105,   105,    75,    75,     3,   123,    79,    73,    79,
      79,    75,    77,   135,    76,   105,    76,    91,    75,    73,
      79,    99,   100,   103,    71,   108,    71,    78,   152,   153,
     151,     3,    72,    72,    72,   107,    78,   143,    72,    77,
     103,    75,    75,    81,   130,   133,     3,   120,   121,   134,
     105,   107,   139,    71,   139,   107,    78,    76,   103,    78,
      72,    72,   107,   144,   147,    47,    73,    77,    73,    77,
     104,   139,    79,   143,   103,   140,   141,   148,   149,   150,
     154,   143,   104,   145,   108,    77,   121,    77,    71,   139,
     144,   145,   103,   144,    79,    77,   103,   103,    77,    19,
     109,   148,   103,   102,   107,   103,    78,   103,   103,   139,
      79,    19,   107,   148,   148,   104,    76,   103,    78,    79,
     103,   103,    17,   103,   140,   107,    72,   107,   107,   103,
     145,    79,   104,   104,   139,    77,    72,    79,    79,   103,
     103,    76,   140,    76,   140,   145,   145,    77,    77
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    84,    85,    85,    85,    85,    85,    85,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    87,    87,    88,
      88,    89,    89,    89,    89,    89,    89,    90,    90,    90,
      90,    90,    90,    91,    91,    92,    92,    92,    92,    93,
      93,    93,    94,    94,    94,    95,    95,    95,    95,    95,
      96,    96,    96,    97,    97,    98,    98,    99,    99,   100,
     100,   101,   101,   102,   102,   103,   104,   105,   105,   106,
     106,   107,   107,   108,   109,   109,   110,   110,   110,   110,
     110,   110,   110,   110,   111,   112,   112,   113,   113,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   115,   115,   116,   116,   117,   117,   118,   118,
     118,   119,   119,   120,   120,   121,   121,   122,   123,   123,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   125,   125,   126,   126,   127,   127,
     128,   128,   129,   129,   130,   130,   131,   131,   132,   133,
     133,   133,   134,   134,   135,   135,   136,   137,   137,   138,
     138,   139,   139,   139,   139,   139,   139,   140,   140,   140,
     140,   140,   141,   141,   141,   142,   143,   144,   145,   145,
     146,   146,   147,   147,   148,   148,   149,   149,   149,   150,
     150,   150,   150,   150,   150,   150,   150,   151,   152,   153,
     154,   154,   154,   154,   154,   155,   155,   156,   156,   157,
     158,   158,   159,   159
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     3,     1,     4,
       4,     3,     3,     2,     2,     6,     7,     1,     3,     1,
       0,     1,     2,     2,     2,     2,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       4,     1,     4,     1,     9,     0,     0,     1,     3,     1,
       1,     1,     3,     1,     3,     2,     2,     1,     2,     1,
       2,     1,     2,     1,     1,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     0,     5,     2,
       6,     1,     0,     1,     3,     1,     3,     1,     2,     1,
       1,     3,     4,     5,     4,     3,     6,     5,     6,     5,
       4,     5,     4,     4,     1,     0,     2,     3,     1,     2,
       1,     3,     1,     3,     2,     1,     1,     3,     1,     1,
       3,     4,     2,     4,     1,     0,     2,     1,     2,     3,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     4,     3,     5,     0,     0,     1,     0,
       1,     3,     1,     1,     2,     1,     8,    11,     5,    10,
      12,    10,    12,    14,    14,    16,    16,     0,     0,     0,
       3,     2,     2,     3,     2,     1,     2,     1,     1,     7,
       1,     0,     1,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* primary-expression: IDENTIFIER  */
#line 62 "assgn_4_21CS30059_21CS30038.y"
                    {
            (yyval.exp) = new expression();
            (yyval.exp)->loc = (yyvsp[0].pointer);
            (yyval.exp)->type = "non_bool";
            }
#line 1884 "y.tab.c"
    break;

  case 3: /* primary-expression: INTEGER  */
#line 67 "assgn_4_21CS30059_21CS30038.y"
                    {
            (yyval.exp) = new expression();
            (yyval.exp)->loc=symbolTable::gentemp(new ttype("int"),convertInttoString((yyvsp[0].intval)));
            emit("=",(yyval.exp)->loc->name,(yyvsp[0].intval));
        }
#line 1894 "y.tab.c"
    break;

  case 4: /* primary-expression: FLOATING_CONSTANT  */
#line 72 "assgn_4_21CS30059_21CS30038.y"
                               {
            (yyval.exp) = new expression();
            (yyval.exp)->loc=symbolTable::gentemp(new ttype("float"),convertFloattoString((yyvsp[0].floatval)));
            emit("=",(yyval.exp)->loc->name,(yyvsp[0].floatval));
        }
#line 1904 "y.tab.c"
    break;

  case 5: /* primary-expression: CHARACTER_CONSTANT  */
#line 77 "assgn_4_21CS30059_21CS30038.y"
                                {
            (yyval.exp) = new expression();
            (yyval.exp)->loc=symbolTable::gentemp(new ttype("char"),string((yyvsp[0].charval)));
            emit("=",(yyval.exp)->loc->name,string((yyvsp[0].charval)));
        }
#line 1914 "y.tab.c"
    break;

  case 6: /* primary-expression: STRING_LITERAL  */
#line 82 "assgn_4_21CS30059_21CS30038.y"
                            {
            (yyval.exp) = new expression();
            (yyval.exp)->loc=symbolTable::gentemp(new ttype("ptr"),string((yyvsp[0].charval)));
            //emit($$->loc->name,$1,"=");
            (yyval.exp)->loc->type->arrtype = new ttype("char");
        }
#line 1925 "y.tab.c"
    break;

  case 7: /* primary-expression: LEFT_PARENTHESIS expression RIGHT_PARENTHESIS  */
#line 88 "assgn_4_21CS30059_21CS30038.y"
                                                         {printf("primary-expression-> (expression)\n");}
#line 1931 "y.tab.c"
    break;

  case 8: /* postfix-expression: primary-expression  */
#line 91 "assgn_4_21CS30059_21CS30038.y"
                            {
            (yyval.Array) = new aarray();
            (yyval.Array)->loc = (yyvsp[0].exp)->loc;
            (yyval.Array)->Array = (yyval.Array)->loc;
            (yyval.Array)->type = (yyvsp[0].exp)->loc->type;
        }
#line 1942 "y.tab.c"
    break;

  case 9: /* postfix-expression: postfix-expression LEFT_SQUARE_BRACKET expression RIGHT_SQUARE_BRACKET  */
#line 97 "assgn_4_21CS30059_21CS30038.y"
                                                                                  {
            (yyval.Array) = new aarray();
            (yyval.Array)->loc = symbolTable::gentemp("int");
            (yyval.Array)->type = (yyvsp[-3].Array)->type->arrtype;
            (yyval.Array)->array_type = "arr";
            (yyval.Array)->Array = (yyvsp[-3].Array)->Array;
            if((yyvsp[-3].Array)->array_type=="arr")
            {
                symbol*temp = symbolTable::gentemp("int");
                int size = sizeoftype((yyval.Array)->type);
                emit("*",temp->name,(yyvsp[-1].exp)->loc->name,convertInttoString(size));
                emit("+",(yyval.Array)->loc->name,(yyvsp[-3].Array)->loc->name,temp->name);
            }
            else
            {
                int size = sizeoftype((yyval.Array)->type);
                emit("*",(yyval.Array)->loc->name,(yyvsp[-1].exp)->loc->name,convertInttoString(size));
            }
        }
#line 1966 "y.tab.c"
    break;

  case 10: /* postfix-expression: postfix-expression LEFT_PARENTHESIS argument-expression-listopt RIGHT_PARENTHESIS  */
#line 116 "assgn_4_21CS30059_21CS30038.y"
                                                                                             {
            (yyval.Array) = new aarray();
            //$$->loc = symbolTable::gentemp($1->type);
            //$$->array_type = "func";
            //$$->Array = $1->Array;
            //$$->type = $1->type;
            (yyval.Array)->Array = symbolTable::gentemp((yyvsp[-3].Array)->type);
            emit("call", (yyval.Array)->Array->name, (yyvsp[-3].Array)->Array->name, convertInttoString((yyvsp[-1].numParams)));
            
        }
#line 1981 "y.tab.c"
    break;

  case 11: /* postfix-expression: postfix-expression DOT IDENTIFIER  */
#line 126 "assgn_4_21CS30059_21CS30038.y"
                                             {printf("postfix-expression-> postfix-expression . IDENTIFIER\n");}
#line 1987 "y.tab.c"
    break;

  case 12: /* postfix-expression: postfix-expression ARROW IDENTIFIER  */
#line 127 "assgn_4_21CS30059_21CS30038.y"
                                               {printf("postfix-expression-> postfix-expression -> IDENTIFIER\n");}
#line 1993 "y.tab.c"
    break;

  case 13: /* postfix-expression: postfix-expression INCREMENT  */
#line 128 "assgn_4_21CS30059_21CS30038.y"
                                        {
            (yyval.Array) = new aarray();
            (yyval.Array)->Array = symbolTable::gentemp((yyvsp[-1].Array)->Array->type);
            emit("=", (yyval.Array)->Array->name, (yyvsp[-1].Array)->Array->name);
            emit("+", (yyvsp[-1].Array)->Array->name, (yyvsp[-1].Array)->Array->name, "1"); 
        }
#line 2004 "y.tab.c"
    break;

  case 14: /* postfix-expression: postfix-expression DECREMENT  */
#line 134 "assgn_4_21CS30059_21CS30038.y"
                                        {
            (yyval.Array) = new aarray();
            (yyval.Array)->Array = symbolTable::gentemp((yyvsp[-1].Array)->Array->type);
            emit("=", (yyval.Array)->Array->name, (yyvsp[-1].Array)->Array->name); 
            emit("-", (yyvsp[-1].Array)->Array->name, (yyvsp[-1].Array)->Array->name, "1");
        }
#line 2015 "y.tab.c"
    break;

  case 15: /* postfix-expression: LEFT_PARENTHESIS type-name RIGHT_PARENTHESIS LEFT_CURLY_BRACKET initializer-list RIGHT_CURLY_BRACKET  */
#line 140 "assgn_4_21CS30059_21CS30038.y"
                                                                                                                {printf("postfix-expression-> (type-name) {initializer-list}\n");}
#line 2021 "y.tab.c"
    break;

  case 16: /* postfix-expression: LEFT_PARENTHESIS type-name RIGHT_PARENTHESIS LEFT_CURLY_BRACKET initializer-list COMMA RIGHT_CURLY_BRACKET  */
#line 141 "assgn_4_21CS30059_21CS30038.y"
                                                                                                                      {printf("postfix-expression-> (type-name) {initializer-list,}\n");}
#line 2027 "y.tab.c"
    break;

  case 17: /* argument-expression-list: assignment-expression  */
#line 144 "assgn_4_21CS30059_21CS30038.y"
                               {
            (yyval.numParams) = 1;
            emit("param",(yyvsp[0].exp)->loc->name);
        }
#line 2036 "y.tab.c"
    break;

  case 18: /* argument-expression-list: argument-expression-list COMMA assignment-expression  */
#line 148 "assgn_4_21CS30059_21CS30038.y"
                                                                {
            (yyval.numParams) = (yyvsp[-2].numParams)+1;
            emit("param",(yyvsp[0].exp)->loc->name);
        }
#line 2045 "y.tab.c"
    break;

  case 19: /* argument-expression-listopt: argument-expression-list  */
#line 154 "assgn_4_21CS30059_21CS30038.y"
                                  {
            (yyval.numParams) = (yyvsp[0].numParams);
        }
#line 2053 "y.tab.c"
    break;

  case 20: /* argument-expression-listopt: %empty  */
#line 157 "assgn_4_21CS30059_21CS30038.y"
                  {(yyval.numParams) = 0;}
#line 2059 "y.tab.c"
    break;

  case 21: /* unary-expression: postfix-expression  */
#line 160 "assgn_4_21CS30059_21CS30038.y"
                            {
            (yyval.Array) = (yyvsp[0].Array);
        }
#line 2067 "y.tab.c"
    break;

  case 22: /* unary-expression: INCREMENT unary-expression  */
#line 163 "assgn_4_21CS30059_21CS30038.y"
                                      {
            emit("+", (yyvsp[0].Array)->Array->name, (yyvsp[0].Array)->Array->name, "1"); 
            (yyval.Array) = (yyvsp[0].Array);
        }
#line 2076 "y.tab.c"
    break;

  case 23: /* unary-expression: DECREMENT unary-expression  */
#line 167 "assgn_4_21CS30059_21CS30038.y"
                                      {
            emit("-", (yyvsp[0].Array)->Array->name, (yyvsp[0].Array)->Array->name, "1");
            (yyval.Array) = (yyvsp[0].Array);
        }
#line 2085 "y.tab.c"
    break;

  case 24: /* unary-expression: unary-operator cast-expression  */
#line 171 "assgn_4_21CS30059_21CS30038.y"
                                          {
            (yyval.Array) = new aarray();
            switch((yyvsp[-1].unaryOp)){
                case '&':
                    (yyval.Array)->Array = symbolTable::gentemp(new ttype("ptr"));
                    (yyval.Array)->Array->type->arrtype = (yyvsp[0].Array)->Array->type;
                    emit((yyval.Array)->Array->name,(yyvsp[0].Array)->Array->name,"= &");
                    break;
                case '*':
                    (yyval.Array)->Array = (yyvsp[0].Array)->Array;
                    (yyval.Array)->loc = symbolTable::gentemp((yyvsp[0].Array)->Array->type->arrtype);
                    (yyval.Array)->array_type = "ptr";
                    emit("= *", (yyval.Array)->loc->name, (yyvsp[0].Array)->Array->name);  
                    break;
                case '+':
                    (yyval.Array) = (yyvsp[0].Array);
                    break;
                case '-':
                    (yyval.Array)->Array = symbolTable::gentemp((yyvsp[0].Array)->Array->type->type);
                    emit("= -", (yyval.Array)->Array->name, (yyvsp[0].Array)->Array->name);   
                    break;
                case '~':
                    (yyval.Array)->Array = symbolTable::gentemp((yyvsp[0].Array)->Array->type->type);
                    emit("= ~", (yyval.Array)->Array->name, (yyvsp[0].Array)->Array->name);
                    break;
                case '!':
                    (yyval.Array)->Array = symbolTable::gentemp((yyvsp[0].Array)->Array->type->type);
                    emit("= !", (yyval.Array)->Array->name, (yyvsp[0].Array)->Array->name);
                    break;
            }
        }
#line 2121 "y.tab.c"
    break;

  case 25: /* unary-expression: SIZEOF unary-expression  */
#line 202 "assgn_4_21CS30059_21CS30038.y"
                                   {printf("unary-expression-> SIZEOF unary-expression\n");}
#line 2127 "y.tab.c"
    break;

  case 26: /* unary-expression: SIZEOF LEFT_PARENTHESIS type-name RIGHT_PARENTHESIS  */
#line 203 "assgn_4_21CS30059_21CS30038.y"
                                                               {printf("unary-expression-> SIZEOF (type-name)\n");}
#line 2133 "y.tab.c"
    break;

  case 27: /* unary-operator: AND  */
#line 206 "assgn_4_21CS30059_21CS30038.y"
             {
            (yyval.unaryOp) = '&';
        }
#line 2141 "y.tab.c"
    break;

  case 28: /* unary-operator: STAR  */
#line 209 "assgn_4_21CS30059_21CS30038.y"
                {
            (yyval.unaryOp) = '*';
        }
#line 2149 "y.tab.c"
    break;

  case 29: /* unary-operator: PLUS  */
#line 212 "assgn_4_21CS30059_21CS30038.y"
                {
            (yyval.unaryOp) = '+';
        }
#line 2157 "y.tab.c"
    break;

  case 30: /* unary-operator: MINUS  */
#line 215 "assgn_4_21CS30059_21CS30038.y"
                 {
            (yyval.unaryOp) = '-';
        }
#line 2165 "y.tab.c"
    break;

  case 31: /* unary-operator: TILDE  */
#line 218 "assgn_4_21CS30059_21CS30038.y"
                 {
            (yyval.unaryOp) = '~';
        }
#line 2173 "y.tab.c"
    break;

  case 32: /* unary-operator: NOT  */
#line 221 "assgn_4_21CS30059_21CS30038.y"
               {
            (yyval.unaryOp) = '!';
        }
#line 2181 "y.tab.c"
    break;

  case 33: /* cast-expression: unary-expression  */
#line 226 "assgn_4_21CS30059_21CS30038.y"
                          {
            (yyval.Array) = (yyvsp[0].Array);
        }
#line 2189 "y.tab.c"
    break;

  case 34: /* cast-expression: LEFT_PARENTHESIS type-name RIGHT_PARENTHESIS cast-expression  */
#line 229 "assgn_4_21CS30059_21CS30038.y"
                                                                        {
            (yyval.Array) = new aarray();
            (yyval.Array)->Array = convertType((yyvsp[0].Array)->Array, varType);
        }
#line 2198 "y.tab.c"
    break;

  case 35: /* multiplicative-expression: cast-expression  */
#line 235 "assgn_4_21CS30059_21CS30038.y"
                         {
            (yyval.exp) = new expression();
            if((yyvsp[0].Array)->array_type=="arr")
            {
                (yyval.exp)->loc = symbolTable::gentemp((yyvsp[0].Array)->loc->type);
                emit("=[]", (yyval.exp)->loc->name, (yyvsp[0].Array)->Array->name, (yyvsp[0].Array)->loc->name);
            }
            else if((yyvsp[0].Array)->array_type=="ptr")
            {
                (yyval.exp)->loc = (yyvsp[0].Array)->loc;
            }
            else
            {
                (yyval.exp)->loc = (yyvsp[0].Array)->Array;
            }
        }
#line 2219 "y.tab.c"
    break;

  case 36: /* multiplicative-expression: multiplicative-expression STAR cast-expression  */
#line 251 "assgn_4_21CS30059_21CS30038.y"
                                                          {
            if(typecheck((yyvsp[-2].exp)->loc,(yyvsp[0].Array)->Array))
            {
                (yyval.exp) = new expression();
                (yyval.exp)->loc = symbolTable::gentemp(new ttype((yyvsp[-2].exp)->loc->type->type));
                emit("*", (yyval.exp)->loc->name, (yyvsp[-2].exp)->loc->name, (yyvsp[0].Array)->Array->name);    
            }
            else
            {
                yyerror("Type mismatch");
            }
        }
#line 2236 "y.tab.c"
    break;

  case 37: /* multiplicative-expression: multiplicative-expression DIV cast-expression  */
#line 263 "assgn_4_21CS30059_21CS30038.y"
                                                         {
            if(typecheck((yyvsp[-2].exp)->loc,(yyvsp[0].Array)->Array))
            {
                (yyval.exp) = new expression();
                (yyval.exp)->loc = symbolTable::gentemp(new ttype((yyvsp[-2].exp)->loc->type->type));
                emit("/", (yyval.exp)->loc->name, (yyvsp[-2].exp)->loc->name, (yyvsp[0].Array)->Array->name);
            }
            else
            {
                yyerror("Type mismatch");
            }
        }
#line 2253 "y.tab.c"
    break;

  case 38: /* multiplicative-expression: multiplicative-expression MOD cast-expression  */
#line 275 "assgn_4_21CS30059_21CS30038.y"
                                                         {
            if(typecheck((yyvsp[-2].exp)->loc,(yyvsp[0].Array)->Array))
            {
                (yyval.exp) = new expression();
                (yyval.exp)->loc = symbolTable::gentemp(new ttype((yyvsp[-2].exp)->loc->type->type));
                emit("%", (yyval.exp)->loc->name, (yyvsp[-2].exp)->loc->name, (yyvsp[0].Array)->Array->name);   
            }
        }
#line 2266 "y.tab.c"
    break;

  case 39: /* additive-expression: multiplicative-expression  */
#line 285 "assgn_4_21CS30059_21CS30038.y"
                                   {
            (yyval.exp) = (yyvsp[0].exp);
        }
#line 2274 "y.tab.c"
    break;

  case 40: /* additive-expression: additive-expression PLUS multiplicative-expression  */
#line 288 "assgn_4_21CS30059_21CS30038.y"
                                                              {
            if(typecheck((yyvsp[-2].exp)->loc,(yyvsp[0].exp)->loc))
            {
                (yyval.exp) = new expression();
                (yyval.exp)->loc = symbolTable::gentemp(new ttype((yyvsp[-2].exp)->loc->type->type));
                emit("+", (yyval.exp)->loc->name, (yyvsp[-2].exp)->loc->name, (yyvsp[0].exp)->loc->name);    
            }
            else
            {
                yyerror("Type mismatch");
            }
        }
#line 2291 "y.tab.c"
    break;

  case 41: /* additive-expression: additive-expression MINUS multiplicative-expression  */
#line 300 "assgn_4_21CS30059_21CS30038.y"
                                                               {
            if(typecheck((yyvsp[-2].exp)->loc,(yyvsp[0].exp)->loc))
            {
                (yyval.exp) = new expression();
                (yyval.exp)->loc = symbolTable::gentemp(new ttype((yyvsp[-2].exp)->loc->type->type));
                emit("-", (yyval.exp)->loc->name, (yyvsp[-2].exp)->loc->name, (yyvsp[0].exp)->loc->name);           
            }
            else
            {
                yyerror("Type mismatch");
            }
        }
#line 2308 "y.tab.c"
    break;

  case 42: /* shift-expression: additive-expression  */
#line 314 "assgn_4_21CS30059_21CS30038.y"
                             {
            (yyval.exp) = (yyvsp[0].exp);
        }
#line 2316 "y.tab.c"
    break;

  case 43: /* shift-expression: shift-expression LEFT_SHIFT additive-expression  */
#line 317 "assgn_4_21CS30059_21CS30038.y"
                                                           {
            if((yyvsp[0].exp)->loc->type->type=="int")
            {
                (yyval.exp) = new expression();
                (yyval.exp)->loc = symbolTable::gentemp(new ttype("int"));
                emit("<<", (yyval.exp)->loc->name, (yyvsp[-2].exp)->loc->name, (yyvsp[0].exp)->loc->name);  
            }
            else
            {
                yyerror("Type Error, shift expression can only be applied to integer shift values");
            }
        }
#line 2333 "y.tab.c"
    break;

  case 44: /* shift-expression: shift-expression RIGHT_SHIFT additive-expression  */
#line 329 "assgn_4_21CS30059_21CS30038.y"
                                                            {
            if((yyvsp[0].exp)->loc->type->type=="int")
            {
                (yyval.exp) = new expression();
                (yyval.exp)->loc = symbolTable::gentemp(new ttype("int"));
                emit(">>", (yyval.exp)->loc->name, (yyvsp[-2].exp)->loc->name, (yyvsp[0].exp)->loc->name); 
            }
            else
            {
                yyerror("Type Error, shift expression can only be applied to integer shift values");
            }
        }
#line 2350 "y.tab.c"
    break;

  case 45: /* relational-expression: shift-expression  */
#line 343 "assgn_4_21CS30059_21CS30038.y"
                          {
            (yyval.exp) = (yyvsp[0].exp);
        }
#line 2358 "y.tab.c"
    break;

  case 46: /* relational-expression: relational-expression LESS_THAN shift-expression  */
#line 346 "assgn_4_21CS30059_21CS30038.y"
                                                            {
            if(typecheck((yyvsp[-2].exp)->loc,(yyvsp[0].exp)->loc))
            {
                (yyval.exp) = new expression();
                (yyval.exp)->type = "bool";
                (yyval.exp)->truelist = makelist(nextinstr());
                (yyval.exp)->falselist = makelist(nextinstr()+1);
                emit("<","",(yyvsp[-2].exp)->loc->name,(yyvsp[0].exp)->loc->name);
                emit("goto","_");
            }
            else
            {
                yyerror("Type mismatch");
            }
        }
#line 2378 "y.tab.c"
    break;

  case 47: /* relational-expression: relational-expression GREATER_THAN shift-expression  */
#line 361 "assgn_4_21CS30059_21CS30038.y"
                                                               {
            if(typecheck((yyvsp[-2].exp)->loc,(yyvsp[0].exp)->loc))
            {
                (yyval.exp) = new expression();
                (yyval.exp)->type = "bool";
                (yyval.exp)->truelist = makelist(nextinstr());
                (yyval.exp)->falselist = makelist(nextinstr()+1);
                emit(">","",(yyvsp[-2].exp)->loc->name,(yyvsp[0].exp)->loc->name);
                emit("goto","_");
            }
            else
            {
                yyerror("Type mismatch");
            }
        }
#line 2398 "y.tab.c"
    break;

  case 48: /* relational-expression: relational-expression LESS_THAN_EQUAL shift-expression  */
#line 376 "assgn_4_21CS30059_21CS30038.y"
                                                                  {
            if(typecheck((yyvsp[-2].exp)->loc,(yyvsp[0].exp)->loc))
            {
                (yyval.exp) = new expression();
                (yyval.exp)->type = "bool";
                (yyval.exp)->truelist = makelist(nextinstr());
                (yyval.exp)->falselist = makelist(nextinstr()+1);
                emit("<=","",(yyvsp[-2].exp)->loc->name,(yyvsp[0].exp)->loc->name);
                emit("goto","_");
            }
            else
            {
                yyerror("Type mismatch");
            }
        }
#line 2418 "y.tab.c"
    break;

  case 49: /* relational-expression: relational-expression GREATER_THAN_EQUAL shift-expression  */
#line 391 "assgn_4_21CS30059_21CS30038.y"
                                                                     {
            if(typecheck((yyvsp[-2].exp)->loc,(yyvsp[0].exp)->loc))
            {
                (yyval.exp) = new expression();
                (yyval.exp)->type = "bool";
                (yyval.exp)->truelist = makelist(nextinstr());
                (yyval.exp)->falselist = makelist(nextinstr()+1);
                emit(">=","",(yyvsp[-2].exp)->loc->name,(yyvsp[0].exp)->loc->name);
                emit("goto","_");
            }
            else
            {
                yyerror("Type mismatch");
            }
        }
#line 2438 "y.tab.c"
    break;

  case 50: /* equality-expression: relational-expression  */
#line 408 "assgn_4_21CS30059_21CS30038.y"
                               {
            (yyval.exp) = (yyvsp[0].exp);
        }
#line 2446 "y.tab.c"
    break;

  case 51: /* equality-expression: equality-expression EQUAL_TO relational-expression  */
#line 411 "assgn_4_21CS30059_21CS30038.y"
                                                              {
            if(typecheck((yyvsp[-2].exp)->loc,(yyvsp[0].exp)->loc))
            {
                (yyval.exp) = new expression();
                convertBooltoInt((yyvsp[-2].exp));
                convertBooltoInt((yyvsp[0].exp));
                (yyval.exp)->type = "bool";
                (yyval.exp)->truelist = makelist(nextinstr());
                (yyval.exp)->falselist = makelist(nextinstr()+1);
                emit("==","",(yyvsp[-2].exp)->loc->name,(yyvsp[0].exp)->loc->name);
                emit("goto","_");
            }
            else
            {
                yyerror("Type mismatch");
            }
        }
#line 2468 "y.tab.c"
    break;

  case 52: /* equality-expression: equality-expression NOT_EQUAL_TO relational-expression  */
#line 428 "assgn_4_21CS30059_21CS30038.y"
                                                                  {
            if(typecheck((yyvsp[-2].exp)->loc,(yyvsp[0].exp)->loc))
            {
                (yyval.exp) = new expression();
                convertBooltoInt((yyvsp[-2].exp));
                convertBooltoInt((yyvsp[0].exp));
                (yyval.exp)->type = "bool";
                (yyval.exp)->truelist = makelist(nextinstr());
                (yyval.exp)->falselist = makelist(nextinstr()+1);
                emit("!=","",(yyvsp[-2].exp)->loc->name,(yyvsp[0].exp)->loc->name);
                emit("goto","_");
            }
            else
            {
                yyerror("Type mismatch");
            }
        }
#line 2490 "y.tab.c"
    break;

  case 53: /* AND-expression: equality-expression  */
#line 447 "assgn_4_21CS30059_21CS30038.y"
                             {
            (yyval.exp) = (yyvsp[0].exp);
        }
#line 2498 "y.tab.c"
    break;

  case 54: /* AND-expression: AND-expression AND equality-expression  */
#line 450 "assgn_4_21CS30059_21CS30038.y"
                                                  {
            if(typecheck((yyvsp[-2].exp)->loc,(yyvsp[0].exp)->loc))
            {
                (yyval.exp) = new expression();
                convertBooltoInt((yyvsp[-2].exp));
                convertBooltoInt((yyvsp[0].exp));
                (yyval.exp)->type = "notbool";
                (yyval.exp)->loc = symbolTable::gentemp(new ttype("int"));
                emit("&", (yyval.exp)->loc->name, (yyvsp[-2].exp)->loc->name, (yyvsp[0].exp)->loc->name);  
            }
            else
            {
                yyerror("Type mismatch");
            }
        }
#line 2518 "y.tab.c"
    break;

  case 55: /* exclusive-OR-expression: AND-expression  */
#line 467 "assgn_4_21CS30059_21CS30038.y"
                        {
            (yyval.exp) = (yyvsp[0].exp);
        }
#line 2526 "y.tab.c"
    break;

  case 56: /* exclusive-OR-expression: exclusive-OR-expression XOR AND-expression  */
#line 470 "assgn_4_21CS30059_21CS30038.y"
                                                      {
            if(typecheck((yyvsp[-2].exp)->loc,(yyvsp[0].exp)->loc))
            {
                (yyval.exp) = new expression();
                convertBooltoInt((yyvsp[-2].exp));
                convertBooltoInt((yyvsp[0].exp));
                (yyval.exp)->type = "notbool";
                (yyval.exp)->loc = symbolTable::gentemp(new ttype("int"));
                emit("^", (yyval.exp)->loc->name, (yyvsp[-2].exp)->loc->name, (yyvsp[0].exp)->loc->name);
            }
            else
            {
                yyerror("Type mismatch");
            }
        }
#line 2546 "y.tab.c"
    break;

  case 57: /* inclusive-OR-expression: exclusive-OR-expression  */
#line 487 "assgn_4_21CS30059_21CS30038.y"
                                 {
            (yyval.exp) = (yyvsp[0].exp);
        }
#line 2554 "y.tab.c"
    break;

  case 58: /* inclusive-OR-expression: inclusive-OR-expression OR exclusive-OR-expression  */
#line 490 "assgn_4_21CS30059_21CS30038.y"
                                                              {
            if(typecheck((yyvsp[-2].exp)->loc,(yyvsp[0].exp)->loc))
            {
                (yyval.exp) = new expression();
                convertBooltoInt((yyvsp[-2].exp));
                convertBooltoInt((yyvsp[0].exp));
                (yyval.exp)->type = "notbool";
                (yyval.exp)->loc = symbolTable::gentemp(new ttype("int"));
                emit("|", (yyval.exp)->loc->name, (yyvsp[-2].exp)->loc->name, (yyvsp[0].exp)->loc->name); 
            }
            else
            {
                yyerror("Type mismatch");
            }
        }
#line 2574 "y.tab.c"
    break;

  case 59: /* logical-AND-expression: inclusive-OR-expression  */
#line 507 "assgn_4_21CS30059_21CS30038.y"
                                 {
            (yyval.exp) = (yyvsp[0].exp);
        }
#line 2582 "y.tab.c"
    break;

  case 60: /* logical-AND-expression: logical-AND-expression AND_AND M inclusive-OR-expression  */
#line 510 "assgn_4_21CS30059_21CS30038.y"
                                                                    {
            
            {
                (yyval.exp) = new expression();
                convertInttoBool((yyvsp[-3].exp));
                convertInttoBool((yyvsp[0].exp));
                (yyval.exp)->type = "bool";
                backpatch((yyvsp[-3].exp)->truelist,(yyvsp[-1].instr));
                (yyval.exp)->truelist = (yyvsp[0].exp)->truelist;
                (yyval.exp)->falselist = merge((yyvsp[-3].exp)->falselist,(yyvsp[0].exp)->falselist);
            }
        }
#line 2599 "y.tab.c"
    break;

  case 61: /* logical-OR-expression: logical-AND-expression  */
#line 524 "assgn_4_21CS30059_21CS30038.y"
                                {
            (yyval.exp) = (yyvsp[0].exp);
        }
#line 2607 "y.tab.c"
    break;

  case 62: /* logical-OR-expression: logical-OR-expression OR_OR M logical-AND-expression  */
#line 527 "assgn_4_21CS30059_21CS30038.y"
                                                                {
            
            {
                (yyval.exp) = new expression();
                convertInttoBool((yyvsp[-3].exp));
                convertInttoBool((yyvsp[0].exp));
                (yyval.exp)->type = "bool";
                backpatch((yyvsp[-3].exp)->falselist,(yyvsp[-1].instr));
                (yyval.exp)->falselist = (yyvsp[0].exp)->falselist;
                (yyval.exp)->truelist = merge((yyvsp[-3].exp)->truelist,(yyvsp[0].exp)->truelist);
            }
        }
#line 2624 "y.tab.c"
    break;

  case 63: /* conditional-expression: logical-OR-expression  */
#line 541 "assgn_4_21CS30059_21CS30038.y"
                               {
            (yyval.exp) = (yyvsp[0].exp);
        }
#line 2632 "y.tab.c"
    break;

  case 64: /* conditional-expression: logical-OR-expression N QUESTION M expression N COLON M conditional-expression  */
#line 544 "assgn_4_21CS30059_21CS30038.y"
                                                                                          {
            (yyval.exp) = new expression;
            (yyval.exp)->loc = symbolTable::gentemp((yyvsp[-4].exp)->loc->type);
            (yyval.exp)->loc->update((yyvsp[-4].exp)->loc->type);
            emit("=", (yyval.exp)->loc->name, (yyvsp[0].exp)->loc->name); 
            list<int> l1 = makelist(nextinstr());
            emit("goto", "");
            backpatch((yyvsp[-3].stmt)->nextlist,nextinstr());
            emit("=", (yyval.exp)->loc->name, (yyvsp[-4].exp)->loc->name);
            list<int> l2 = makelist(nextinstr());
            l1=merge(l1,l2);
            emit("goto","");
            backpatch((yyvsp[-7].stmt)->nextlist, nextinstr());               // Backpatching
            convertInttoBool((yyvsp[-8].exp));                               // Convert expression to bool
            backpatch((yyvsp[-8].exp)->truelist, (yyvsp[-5].instr));                        // When $1 is true, control goes to $4 (expression)
            backpatch((yyvsp[-8].exp)->falselist, (yyvsp[-1].instr));                       // When $1 is false, control goes to $8 (conditional_expression)
            backpatch(l1, nextinstr());
        }
#line 2655 "y.tab.c"
    break;

  case 65: /* M: %empty  */
#line 564 "assgn_4_21CS30059_21CS30038.y"
    {
        (yyval.instr)=nextinstr();
    }
#line 2663 "y.tab.c"
    break;

  case 66: /* N: %empty  */
#line 569 "assgn_4_21CS30059_21CS30038.y"
    {
        (yyval.stmt) = new statement();
        (yyval.stmt)->nextlist = makelist(nextinstr());
        emit("goto","");
    }
#line 2673 "y.tab.c"
    break;

  case 67: /* assignment-expression: conditional-expression  */
#line 576 "assgn_4_21CS30059_21CS30038.y"
                                {
            (yyval.exp) = (yyvsp[0].exp);
        }
#line 2681 "y.tab.c"
    break;

  case 68: /* assignment-expression: unary-expression assignment-operator assignment-expression  */
#line 579 "assgn_4_21CS30059_21CS30038.y"
                                                                      {
            if((yyvsp[-2].Array)->array_type=="arr")
            {
                (yyvsp[0].exp)->loc=convertType((yyvsp[0].exp)->loc,(yyvsp[-2].Array)->type->type);
                emit("[]=", (yyvsp[-2].Array)->Array->name, (yyvsp[-2].Array)->loc->name, (yyvsp[0].exp)->loc->name);
            }
            else if((yyvsp[-2].Array)->array_type=="ptr")
            {
                emit("*=", (yyvsp[-2].Array)->Array->name, (yyvsp[0].exp)->loc->name);
            }
            else
            {
                (yyvsp[0].exp)->loc=convertType((yyvsp[0].exp)->loc,(yyvsp[-2].Array)->Array->type->type);
                emit("=", (yyvsp[-2].Array)->Array->name, (yyvsp[0].exp)->loc->name);
            }
            (yyval.exp) = (yyvsp[0].exp);
        }
#line 2703 "y.tab.c"
    break;

  case 69: /* assignment-operator: EQUALS  */
#line 598 "assgn_4_21CS30059_21CS30038.y"
                {printf("assignment-operator-> =\n");}
#line 2709 "y.tab.c"
    break;

  case 70: /* assignment-operator: ASSIGNMENT_OPERATOR  */
#line 599 "assgn_4_21CS30059_21CS30038.y"
                               {printf("assignment-operator-> assignment-operator-token\n");}
#line 2715 "y.tab.c"
    break;

  case 71: /* expression: assignment-expression  */
#line 602 "assgn_4_21CS30059_21CS30038.y"
                               {
            (yyval.exp) = (yyvsp[0].exp);
        }
#line 2723 "y.tab.c"
    break;

  case 72: /* expression: expression COMMA assignment-expression  */
#line 605 "assgn_4_21CS30059_21CS30038.y"
                                                  {printf("expression-> expression , assignment-expression\n");}
#line 2729 "y.tab.c"
    break;

  case 73: /* constant-expression: conditional-expression  */
#line 608 "assgn_4_21CS30059_21CS30038.y"
                                {printf("constant-expression-> conditional-expression\n");}
#line 2735 "y.tab.c"
    break;

  case 74: /* declaration: declaration-specifiers init-declarator-list SEMICOLON  */
#line 611 "assgn_4_21CS30059_21CS30038.y"
                                                               {printf("declaration-> declaration-specifiers init-declarator-listopt ;\n");}
#line 2741 "y.tab.c"
    break;

  case 75: /* declaration: declaration-specifiers SEMICOLON  */
#line 612 "assgn_4_21CS30059_21CS30038.y"
                                            {printf("declaration-> declaration-specifiers ;\n");}
#line 2747 "y.tab.c"
    break;

  case 76: /* declaration-specifiers: storage-class-specifier declaration-specifiers  */
#line 619 "assgn_4_21CS30059_21CS30038.y"
                                                        {printf("declaration-specifiers-> storage-class-specifier declaration-specifiers\n");}
#line 2753 "y.tab.c"
    break;

  case 77: /* declaration-specifiers: storage-class-specifier  */
#line 620 "assgn_4_21CS30059_21CS30038.y"
                                   {printf("declaration-specifiers-> storage-class-specifier\n");}
#line 2759 "y.tab.c"
    break;

  case 78: /* declaration-specifiers: TYPE_SPECIFIER_TOKEN declaration-specifiers  */
#line 621 "assgn_4_21CS30059_21CS30038.y"
                                                       {printf("declaration-specifiers-> type-specifier declaration-specifiers\n");}
#line 2765 "y.tab.c"
    break;

  case 79: /* declaration-specifiers: TYPE_SPECIFIER_TOKEN  */
#line 622 "assgn_4_21CS30059_21CS30038.y"
                                {printf("declaration-specifiers-> type-specifier\n");}
#line 2771 "y.tab.c"
    break;

  case 80: /* declaration-specifiers: type-qualifier declaration-specifiers  */
#line 623 "assgn_4_21CS30059_21CS30038.y"
                                                 {printf("declaration-specifiers-> type-qualifier declaration-specifiers\n");}
#line 2777 "y.tab.c"
    break;

  case 81: /* declaration-specifiers: type-qualifier  */
#line 624 "assgn_4_21CS30059_21CS30038.y"
                          {printf("declaration-specifiers-> type-qualifier\n");}
#line 2783 "y.tab.c"
    break;

  case 82: /* declaration-specifiers: function-specifier declaration-specifiers  */
#line 625 "assgn_4_21CS30059_21CS30038.y"
                                                     {printf("declaration-specifiers-> function-specifier declaration-specifiers\n");}
#line 2789 "y.tab.c"
    break;

  case 83: /* declaration-specifiers: function-specifier  */
#line 626 "assgn_4_21CS30059_21CS30038.y"
                              {printf("declaration-specifiers-> function-specifier\n");}
#line 2795 "y.tab.c"
    break;

  case 84: /* type-qualifier: TYPE_QUALIFIER  */
#line 629 "assgn_4_21CS30059_21CS30038.y"
                        {printf("type-qualifier-> type-qualifier-token\n");}
#line 2801 "y.tab.c"
    break;

  case 85: /* init-declarator-list: init-declarator  */
#line 632 "assgn_4_21CS30059_21CS30038.y"
                         {printf("init-declarator-list-> init-declarator\n");}
#line 2807 "y.tab.c"
    break;

  case 86: /* init-declarator-list: init-declarator-list COMMA init-declarator  */
#line 633 "assgn_4_21CS30059_21CS30038.y"
                                                      {printf("init-declarator-list-> init-declarator-list , init-declarator\n");}
#line 2813 "y.tab.c"
    break;

  case 87: /* init-declarator: declarator  */
#line 636 "assgn_4_21CS30059_21CS30038.y"
                    {
            (yyval.pointer) = (yyvsp[0].pointer);
        }
#line 2821 "y.tab.c"
    break;

  case 88: /* init-declarator: declarator EQUALS initializer  */
#line 639 "assgn_4_21CS30059_21CS30038.y"
                                         {
            if((yyvsp[0].pointer)->value !="")
            {
                (yyvsp[-2].pointer)->value = (yyvsp[0].pointer)->value;
            }
            emit("=", (yyvsp[-2].pointer)->name, (yyvsp[0].pointer)->name);
        }
#line 2833 "y.tab.c"
    break;

  case 89: /* type-specifier: VOID  */
#line 648 "assgn_4_21CS30059_21CS30038.y"
            {
            varType = "void";
        }
#line 2841 "y.tab.c"
    break;

  case 90: /* type-specifier: CHAR  */
#line 651 "assgn_4_21CS30059_21CS30038.y"
              {
            varType = "char";
        }
#line 2849 "y.tab.c"
    break;

  case 91: /* type-specifier: SHORT  */
#line 654 "assgn_4_21CS30059_21CS30038.y"
               {
            varType = "short";
        }
#line 2857 "y.tab.c"
    break;

  case 92: /* type-specifier: INT  */
#line 657 "assgn_4_21CS30059_21CS30038.y"
             {
            varType = "int";
        }
#line 2865 "y.tab.c"
    break;

  case 93: /* type-specifier: LONG  */
#line 660 "assgn_4_21CS30059_21CS30038.y"
              {
            varType = "long";
        }
#line 2873 "y.tab.c"
    break;

  case 94: /* type-specifier: FLOAT  */
#line 663 "assgn_4_21CS30059_21CS30038.y"
               {
            varType = "float";
        }
#line 2881 "y.tab.c"
    break;

  case 95: /* type-specifier: DOUBLE  */
#line 666 "assgn_4_21CS30059_21CS30038.y"
                {
            varType = "double";
        }
#line 2889 "y.tab.c"
    break;

  case 96: /* type-specifier: SIGNED  */
#line 669 "assgn_4_21CS30059_21CS30038.y"
                {
            varType = "signed";
        }
#line 2897 "y.tab.c"
    break;

  case 97: /* type-specifier: UNSIGNED  */
#line 672 "assgn_4_21CS30059_21CS30038.y"
                  {
            varType = "unsigned";
        }
#line 2905 "y.tab.c"
    break;

  case 98: /* type-specifier: BOOL  */
#line 675 "assgn_4_21CS30059_21CS30038.y"
              {
            varType = "bool";
        }
#line 2913 "y.tab.c"
    break;

  case 99: /* type-specifier: COMPLEX  */
#line 678 "assgn_4_21CS30059_21CS30038.y"
                 {
            varType = "complex";
        }
#line 2921 "y.tab.c"
    break;

  case 100: /* type-specifier: IMAGINARY  */
#line 681 "assgn_4_21CS30059_21CS30038.y"
                   {
            varType = "imaginary";
        }
#line 2929 "y.tab.c"
    break;

  case 101: /* type-specifier: enum-specifier  */
#line 684 "assgn_4_21CS30059_21CS30038.y"
                        {
            printf("type-specifier-> enum-specifier\n");
        }
#line 2937 "y.tab.c"
    break;

  case 102: /* storage-class-specifier: STORAGE_CLASS_SPECIFIER  */
#line 689 "assgn_4_21CS30059_21CS30038.y"
                                {printf("storage-class-specifier-> storage_class_specifier_token\n");}
#line 2943 "y.tab.c"
    break;

  case 103: /* storage-class-specifier: STATIC_TOKEN  */
#line 690 "assgn_4_21CS30059_21CS30038.y"
                       {printf("storage-class-specifier-> storage_class_specifier_token\n");}
#line 2949 "y.tab.c"
    break;

  case 104: /* specifier-qualifier-list: type-specifier specifier-qualifier-listopt  */
#line 693 "assgn_4_21CS30059_21CS30038.y"
                                                   {printf("specifier-qualifier-list-> type-specifier specifier-qualifier-listopt\n");}
#line 2955 "y.tab.c"
    break;

  case 105: /* specifier-qualifier-list: TYPE_QUALIFIER specifier-qualifier-listopt  */
#line 694 "assgn_4_21CS30059_21CS30038.y"
                                                     {printf("specifier-qualifier-list-> type-qualifier specifier-qualifier-listopt\n");}
#line 2961 "y.tab.c"
    break;

  case 106: /* specifier-qualifier-listopt: specifier-qualifier-list  */
#line 697 "assgn_4_21CS30059_21CS30038.y"
                                 {printf("specifier-qualifier-listopt-> specifier-qualifier-list\n");}
#line 2967 "y.tab.c"
    break;

  case 107: /* specifier-qualifier-listopt: %empty  */
#line 698 "assgn_4_21CS30059_21CS30038.y"
                 {printf("specifier-qualifier-listopt-> \n");}
#line 2973 "y.tab.c"
    break;

  case 108: /* enum-specifier: ENUM identifieropt LEFT_CURLY_BRACKET enumerator-list RIGHT_CURLY_BRACKET  */
#line 701 "assgn_4_21CS30059_21CS30038.y"
                                                                                  {printf("enum-specifier-> enum IDENTIFIERopt {enumerator-list}\n");}
#line 2979 "y.tab.c"
    break;

  case 109: /* enum-specifier: ENUM IDENTIFIER  */
#line 702 "assgn_4_21CS30059_21CS30038.y"
                          {printf("enum-specifier-> enum IDENTIFIER\n");}
#line 2985 "y.tab.c"
    break;

  case 110: /* enum-specifier: ENUM identifieropt LEFT_CURLY_BRACKET enumerator-list COMMA RIGHT_CURLY_BRACKET  */
#line 703 "assgn_4_21CS30059_21CS30038.y"
                                                                                          {printf("enum-specifier-> enum IDENTIFIERopt {enumerator-list,}\n");}
#line 2991 "y.tab.c"
    break;

  case 111: /* identifieropt: IDENTIFIER  */
#line 706 "assgn_4_21CS30059_21CS30038.y"
                   {printf("identifieropt-> IDENTIFIER\n");}
#line 2997 "y.tab.c"
    break;

  case 112: /* identifieropt: %empty  */
#line 707 "assgn_4_21CS30059_21CS30038.y"
                 {printf("identifieropt-> \n");}
#line 3003 "y.tab.c"
    break;

  case 113: /* enumerator-list: enumerator  */
#line 710 "assgn_4_21CS30059_21CS30038.y"
                   {printf("enumerator-list-> enumerator\n");}
#line 3009 "y.tab.c"
    break;

  case 114: /* enumerator-list: enumerator-list COMMA enumerator  */
#line 711 "assgn_4_21CS30059_21CS30038.y"
                                           {printf("enumerator-list-> enumerator-list , enumerator\n");}
#line 3015 "y.tab.c"
    break;

  case 115: /* enumerator: IDENTIFIER  */
#line 714 "assgn_4_21CS30059_21CS30038.y"
                   {printf("enumerator-> enumeration-const\n");}
#line 3021 "y.tab.c"
    break;

  case 116: /* enumerator: IDENTIFIER EQUALS constant-expression  */
#line 715 "assgn_4_21CS30059_21CS30038.y"
                                                {printf("enumerator-> enumeration-const = constant-expression\n");}
#line 3027 "y.tab.c"
    break;

  case 117: /* function-specifier: FUNCTION_SPECIFIER  */
#line 718 "assgn_4_21CS30059_21CS30038.y"
                           {printf("function-specifier-> function-specifier-token\n");}
#line 3033 "y.tab.c"
    break;

  case 118: /* declarator: pointer direct-declarator  */
#line 721 "assgn_4_21CS30059_21CS30038.y"
                                  {
            ttype* t = (yyvsp[-1].ptr);
            while(t->arrtype!=NULL)
            {
                t=t->arrtype;
            }
            t->arrtype = (yyvsp[0].pointer)->type;
            (yyval.pointer) = (yyvsp[0].pointer)->update((yyvsp[-1].ptr));
        }
#line 3047 "y.tab.c"
    break;

  case 119: /* declarator: direct-declarator  */
#line 730 "assgn_4_21CS30059_21CS30038.y"
                            {printf("declarator-> direct-declarator\n");}
#line 3053 "y.tab.c"
    break;

  case 120: /* direct-declarator: IDENTIFIER  */
#line 733 "assgn_4_21CS30059_21CS30038.y"
                   {
            (yyval.pointer) = (yyvsp[0].pointer)->update(new ttype(varType));
            currentSymbol = (yyval.pointer);
        }
#line 3062 "y.tab.c"
    break;

  case 121: /* direct-declarator: LEFT_PARENTHESIS declarator RIGHT_PARENTHESIS  */
#line 737 "assgn_4_21CS30059_21CS30038.y"
                                                        {
            (yyval.pointer) = (yyvsp[-1].pointer);
        }
#line 3070 "y.tab.c"
    break;

  case 122: /* direct-declarator: direct-declarator LEFT_SQUARE_BRACKET type-qualifier-list RIGHT_SQUARE_BRACKET  */
#line 740 "assgn_4_21CS30059_21CS30038.y"
                                                                                        {
            printf("direct-declarator-> direct-declarator [type-qualifier-list]\n");
        }
#line 3078 "y.tab.c"
    break;

  case 123: /* direct-declarator: direct-declarator LEFT_SQUARE_BRACKET type-qualifier-list assignment-expression RIGHT_SQUARE_BRACKET  */
#line 743 "assgn_4_21CS30059_21CS30038.y"
                                                                                                              {
            printf("direct-declarator-> direct-declarator [type-qualifier-list assignment-expression]\n");
        }
#line 3086 "y.tab.c"
    break;

  case 124: /* direct-declarator: direct-declarator LEFT_SQUARE_BRACKET assignment-expression RIGHT_SQUARE_BRACKET  */
#line 746 "assgn_4_21CS30059_21CS30038.y"
                                                                                           {
            ttype *t = (yyvsp[-3].pointer)->type;
            ttype* prev = NULL;
            while(t->type == "arr")
            {
                prev = t;
                t = t->arrtype;
            }
            if(prev == NULL)
            {
                int temp=atoi((yyvsp[-1].exp)->loc->value.c_str());
                if(temp<=0)
                {
                    yyerror("Array size must be greater than 0");
                }
                ttype* tp = new ttype("arr",(yyvsp[-3].pointer)->type,temp);
                (yyval.pointer) = (yyvsp[-3].pointer)->update(tp);
            }
            else
            {
                int temp=atoi((yyvsp[-1].exp)->loc->value.c_str());
                if(temp<=0)
                {
                    yyerror("Array size must be greater than 0");
                }
                ttype* tp = new ttype("arr",t,temp);
                prev->arrtype = tp;
                (yyval.pointer) = (yyvsp[-3].pointer)->update((yyvsp[-3].pointer)->type);
            }

        }
#line 3122 "y.tab.c"
    break;

  case 125: /* direct-declarator: direct-declarator LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET  */
#line 777 "assgn_4_21CS30059_21CS30038.y"
                                                                    {
            ttype* t=(yyvsp[-2].pointer)->type;
            ttype* prev=NULL;
            while(t->type=="arr")
            {
                prev=t;
                t=t->arrtype;
            }
            if(prev==NULL)
            {
                ttype* tp=new ttype("arr",(yyvsp[-2].pointer)->type,0);
                (yyval.pointer)=(yyvsp[-2].pointer)->update(tp);
            }
            else
            {
                ttype* tp=new ttype("arr",t,0);
                prev->arrtype=tp;
                (yyval.pointer)=(yyvsp[-2].pointer)->update((yyvsp[-2].pointer)->type);
            }
        }
#line 3147 "y.tab.c"
    break;

  case 126: /* direct-declarator: direct-declarator LEFT_SQUARE_BRACKET STATIC_TOKEN type-qualifier-list assignment-expression RIGHT_SQUARE_BRACKET  */
#line 797 "assgn_4_21CS30059_21CS30038.y"
                                                                                                                            {printf("direct-declarator-> direct-declarator [STATIC type-qualifier-listopt assignment-expression]\n");}
#line 3153 "y.tab.c"
    break;

  case 127: /* direct-declarator: direct-declarator LEFT_SQUARE_BRACKET STATIC_TOKEN assignment-expression RIGHT_SQUARE_BRACKET  */
#line 798 "assgn_4_21CS30059_21CS30038.y"
                                                                                                        {printf("direct-declarator-> direct-declarator [type-qualifier-list STATIC assignment-expression]\n");}
#line 3159 "y.tab.c"
    break;

  case 128: /* direct-declarator: direct-declarator LEFT_SQUARE_BRACKET type-qualifier-list STATIC_TOKEN assignment-expression RIGHT_SQUARE_BRACKET  */
#line 799 "assgn_4_21CS30059_21CS30038.y"
                                                                                                                            {printf("direct-declarator-> direct-declarator [type-qualifier-list STATIC assignment-expression]\n");}
#line 3165 "y.tab.c"
    break;

  case 129: /* direct-declarator: direct-declarator LEFT_SQUARE_BRACKET type-qualifier-list STAR RIGHT_SQUARE_BRACKET  */
#line 800 "assgn_4_21CS30059_21CS30038.y"
                                                                                              {printf("direct-declarator-> direct-declarator [type-qualifier-listopt *]\n");}
#line 3171 "y.tab.c"
    break;

  case 130: /* direct-declarator: direct-declarator LEFT_SQUARE_BRACKET STAR RIGHT_SQUARE_BRACKET  */
#line 801 "assgn_4_21CS30059_21CS30038.y"
                                                                          {printf("direct-declarator-> direct-declarator [*]\n");}
#line 3177 "y.tab.c"
    break;

  case 131: /* direct-declarator: direct-declarator LEFT_PARENTHESIS change-table parameter-type-list RIGHT_PARENTHESIS  */
#line 802 "assgn_4_21CS30059_21CS30038.y"
                                                                                                {
            currentST->name = (yyvsp[-4].pointer)->name;
            if((yyvsp[-4].pointer)->type->type != "void") {
                symbol* s = currentST->lookup("return");   
                s->update((yyvsp[-4].pointer)->type);
            }
            (yyvsp[-4].pointer)->nested_table = currentST;
            currentST->parent = globalST; 
            switchTable(globalST);        
            currentSymbol = (yyval.pointer);
        }
#line 3193 "y.tab.c"
    break;

  case 132: /* direct-declarator: direct-declarator LEFT_PARENTHESIS identifier-list RIGHT_PARENTHESIS  */
#line 813 "assgn_4_21CS30059_21CS30038.y"
                                                                               {printf("direct-declarator-> direct-declarator (identifier-listopt)\n");}
#line 3199 "y.tab.c"
    break;

  case 133: /* direct-declarator: direct-declarator LEFT_PARENTHESIS change-table RIGHT_PARENTHESIS  */
#line 815 "assgn_4_21CS30059_21CS30038.y"
        {
            currentST->name = (yyvsp[-3].pointer)->name;
            if((yyvsp[-3].pointer)->type->type != "void") {
                symbol* s = currentST->lookup("return");   
                s->update((yyvsp[-3].pointer)->type);
            }
            (yyvsp[-3].pointer)->nested_table = currentST;
            currentST->parent = globalST; 
            switchTable(globalST);        
            currentSymbol = (yyval.pointer);
        }
#line 3215 "y.tab.c"
    break;

  case 134: /* type-qualifier-listopt: type-qualifier-list  */
#line 828 "assgn_4_21CS30059_21CS30038.y"
                            {printf("type-qualifier-listopt-> type-qualifier-list\n");}
#line 3221 "y.tab.c"
    break;

  case 135: /* type-qualifier-listopt: %empty  */
#line 829 "assgn_4_21CS30059_21CS30038.y"
                 {printf("type-qualifier-listopt-> \n");}
#line 3227 "y.tab.c"
    break;

  case 136: /* pointer: STAR type-qualifier-listopt  */
#line 832 "assgn_4_21CS30059_21CS30038.y"
                                    {
            (yyval.ptr) = new ttype("ptr");
        }
#line 3235 "y.tab.c"
    break;

  case 137: /* pointer: STAR type-qualifier-listopt pointer  */
#line 835 "assgn_4_21CS30059_21CS30038.y"
                                              {
            (yyval.ptr) = new ttype("ptr",(yyvsp[0].ptr));
        }
#line 3243 "y.tab.c"
    break;

  case 138: /* type-qualifier-list: TYPE_QUALIFIER  */
#line 840 "assgn_4_21CS30059_21CS30038.y"
                       {printf("type-qualifier-list-> type-qualifier\n");}
#line 3249 "y.tab.c"
    break;

  case 139: /* type-qualifier-list: type-qualifier-list TYPE_QUALIFIER  */
#line 841 "assgn_4_21CS30059_21CS30038.y"
                                             {printf("type-qualifier-list-> type-qualifier-list type-qualifier\n");}
#line 3255 "y.tab.c"
    break;

  case 140: /* parameter-type-list: parameter-list  */
#line 844 "assgn_4_21CS30059_21CS30038.y"
                       {printf("parameter-type-list-> parameter-list\n");}
#line 3261 "y.tab.c"
    break;

  case 141: /* parameter-type-list: parameter-list COMMA ELLIPSIS  */
#line 845 "assgn_4_21CS30059_21CS30038.y"
                                        {printf("parameter-type-list-> parameter-list , ...\n");}
#line 3267 "y.tab.c"
    break;

  case 142: /* parameter-list: parameter-declaration  */
#line 848 "assgn_4_21CS30059_21CS30038.y"
                              {printf("parameter-list-> parameter-declaration\n");}
#line 3273 "y.tab.c"
    break;

  case 143: /* parameter-list: parameter-list COMMA parameter-declaration  */
#line 849 "assgn_4_21CS30059_21CS30038.y"
                                                     {printf("parameter-list-> parameter-list , parameter-declaration\n");}
#line 3279 "y.tab.c"
    break;

  case 144: /* parameter-declaration: declaration-specifiers declarator  */
#line 852 "assgn_4_21CS30059_21CS30038.y"
                                          {printf("parameter-declaration-> declaration-specifiers declarator\n");}
#line 3285 "y.tab.c"
    break;

  case 145: /* parameter-declaration: declaration-specifiers  */
#line 853 "assgn_4_21CS30059_21CS30038.y"
                                 {printf("parameter-declaration-> declaration-specifiers\n");}
#line 3291 "y.tab.c"
    break;

  case 146: /* identifier-list: IDENTIFIER  */
#line 856 "assgn_4_21CS30059_21CS30038.y"
                   {printf("identifier-list-> IDENTIFIER\n");}
#line 3297 "y.tab.c"
    break;

  case 147: /* identifier-list: identifier-list COMMA IDENTIFIER  */
#line 857 "assgn_4_21CS30059_21CS30038.y"
                                           {printf("identifier-list-> identifier-list , IDENTIFIER\n");}
#line 3303 "y.tab.c"
    break;

  case 148: /* type-name: specifier-qualifier-list  */
#line 860 "assgn_4_21CS30059_21CS30038.y"
                                 {printf("type-name-> specifier-qualifier-list\n");}
#line 3309 "y.tab.c"
    break;

  case 149: /* initializer: assignment-expression  */
#line 863 "assgn_4_21CS30059_21CS30038.y"
                              {
            (yyval.pointer) = (yyvsp[0].exp)->loc;
        }
#line 3317 "y.tab.c"
    break;

  case 150: /* initializer: LEFT_CURLY_BRACKET initializer-list RIGHT_CURLY_BRACKET  */
#line 866 "assgn_4_21CS30059_21CS30038.y"
                                                                  {printf("initializer-> {initializer-list}\n");}
#line 3323 "y.tab.c"
    break;

  case 151: /* initializer: LEFT_CURLY_BRACKET initializer-list COMMA RIGHT_CURLY_BRACKET  */
#line 867 "assgn_4_21CS30059_21CS30038.y"
                                                                        {printf("initializer-> {initializer-list,}\n");}
#line 3329 "y.tab.c"
    break;

  case 152: /* initializer-list: designationopt initializer  */
#line 870 "assgn_4_21CS30059_21CS30038.y"
                                   {printf("initializer-list-> designationopt initializer\n");}
#line 3335 "y.tab.c"
    break;

  case 153: /* initializer-list: initializer-list COMMA designationopt initializer  */
#line 871 "assgn_4_21CS30059_21CS30038.y"
                                                            {printf("initializer-list-> initializer-list , designationopt initializer\n");}
#line 3341 "y.tab.c"
    break;

  case 154: /* designationopt: designation  */
#line 874 "assgn_4_21CS30059_21CS30038.y"
                    {printf("designationopt-> designation\n");}
#line 3347 "y.tab.c"
    break;

  case 155: /* designationopt: %empty  */
#line 875 "assgn_4_21CS30059_21CS30038.y"
                 {printf("designationopt-> \n");}
#line 3353 "y.tab.c"
    break;

  case 156: /* designation: designator-list EQUALS  */
#line 878 "assgn_4_21CS30059_21CS30038.y"
                               {printf("designation-> designator-list =\n");}
#line 3359 "y.tab.c"
    break;

  case 157: /* designator-list: designator  */
#line 881 "assgn_4_21CS30059_21CS30038.y"
                   {printf("designator-list-> designator\n");}
#line 3365 "y.tab.c"
    break;

  case 158: /* designator-list: designator-list designator  */
#line 882 "assgn_4_21CS30059_21CS30038.y"
                                     {printf("designator-list-> designation-list designator\n");}
#line 3371 "y.tab.c"
    break;

  case 159: /* designator: LEFT_SQUARE_BRACKET constant-expression RIGHT_SQUARE_BRACKET  */
#line 885 "assgn_4_21CS30059_21CS30038.y"
                                                                     {printf("designator-> [constant-expression]\n");}
#line 3377 "y.tab.c"
    break;

  case 160: /* designator: DOT IDENTIFIER  */
#line 886 "assgn_4_21CS30059_21CS30038.y"
                         {printf("designator-> . IDENTIFIER\n");}
#line 3383 "y.tab.c"
    break;

  case 161: /* statement: labeled-statement  */
#line 889 "assgn_4_21CS30059_21CS30038.y"
                          {printf("statement-> labeled-statement\n");}
#line 3389 "y.tab.c"
    break;

  case 162: /* statement: compound-statement  */
#line 890 "assgn_4_21CS30059_21CS30038.y"
                             {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3397 "y.tab.c"
    break;

  case 163: /* statement: expression-statement  */
#line 893 "assgn_4_21CS30059_21CS30038.y"
                               {
            (yyval.stmt) = new statement();
            (yyval.stmt)->nextlist = (yyvsp[0].exp)->nextlist;
        }
#line 3406 "y.tab.c"
    break;

  case 164: /* statement: selection-statement  */
#line 897 "assgn_4_21CS30059_21CS30038.y"
                              {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3414 "y.tab.c"
    break;

  case 165: /* statement: iteration-statement  */
#line 900 "assgn_4_21CS30059_21CS30038.y"
                              {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3422 "y.tab.c"
    break;

  case 166: /* statement: jump-statement  */
#line 903 "assgn_4_21CS30059_21CS30038.y"
                         {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3430 "y.tab.c"
    break;

  case 167: /* loop-statement: labeled-statement  */
#line 908 "assgn_4_21CS30059_21CS30038.y"
                          {printf("loop-statement-> labeled-statement\n");}
#line 3436 "y.tab.c"
    break;

  case 168: /* loop-statement: expression-statement  */
#line 909 "assgn_4_21CS30059_21CS30038.y"
                               {
            (yyval.stmt) = new statement();
            (yyval.stmt)->nextlist = (yyvsp[0].exp)->nextlist;
        }
#line 3445 "y.tab.c"
    break;

  case 169: /* loop-statement: selection-statement  */
#line 913 "assgn_4_21CS30059_21CS30038.y"
                              {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3453 "y.tab.c"
    break;

  case 170: /* loop-statement: iteration-statement  */
#line 916 "assgn_4_21CS30059_21CS30038.y"
                              {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3461 "y.tab.c"
    break;

  case 171: /* loop-statement: jump-statement  */
#line 919 "assgn_4_21CS30059_21CS30038.y"
                         {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3469 "y.tab.c"
    break;

  case 172: /* labeled-statement: IDENTIFIER COLON statement  */
#line 924 "assgn_4_21CS30059_21CS30038.y"
                                   {printf("labeled-statement-> IDENTIFIER : statement\n");}
#line 3475 "y.tab.c"
    break;

  case 173: /* labeled-statement: CASE constant-expression COLON statement  */
#line 925 "assgn_4_21CS30059_21CS30038.y"
                                                   {printf("labeled-statement-> CASE constant-expression : statement\n");}
#line 3481 "y.tab.c"
    break;

  case 174: /* labeled-statement: DEFAULT COLON statement  */
#line 926 "assgn_4_21CS30059_21CS30038.y"
                                  {printf("labeled-statement-> DEFAULT : statement\n");}
#line 3487 "y.tab.c"
    break;

  case 175: /* compound-statement: LEFT_CURLY_BRACKET A change-table block-item-listopt RIGHT_CURLY_BRACKET  */
#line 929 "assgn_4_21CS30059_21CS30038.y"
                                                                                 {
            (yyval.stmt) = (yyvsp[-1].stmt);
            switchTable(currentST->parent);
        }
#line 3496 "y.tab.c"
    break;

  case 176: /* A: %empty  */
#line 935 "assgn_4_21CS30059_21CS30038.y"
        {
            string new_ST = currentST->name + "_" + blockName + "_" + to_string(STCount++);
            symbol* sym = currentST->lookup(new_ST);
            sym->nested_table = new symbolTable(new_ST);
            sym->name = new_ST;
            sym->nested_table->parent = currentST;
            sym->type = new ttype("block");
            currentSymbol = sym;
        }
#line 3510 "y.tab.c"
    break;

  case 177: /* change-table: %empty  */
#line 946 "assgn_4_21CS30059_21CS30038.y"
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
#line 3526 "y.tab.c"
    break;

  case 178: /* block-item-listopt: block-item-list  */
#line 959 "assgn_4_21CS30059_21CS30038.y"
                        {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3534 "y.tab.c"
    break;

  case 179: /* block-item-listopt: %empty  */
#line 962 "assgn_4_21CS30059_21CS30038.y"
                 {
            (yyval.stmt) = new statement();
        }
#line 3542 "y.tab.c"
    break;

  case 180: /* block-item-list: block-item  */
#line 967 "assgn_4_21CS30059_21CS30038.y"
                   {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3550 "y.tab.c"
    break;

  case 181: /* block-item-list: block-item-list M block-item  */
#line 970 "assgn_4_21CS30059_21CS30038.y"
                                       {
            (yyval.stmt) = (yyvsp[0].stmt);
            backpatch((yyvsp[-2].stmt)->nextlist, (yyvsp[-1].instr));
        }
#line 3559 "y.tab.c"
    break;

  case 182: /* block-item: declaration  */
#line 976 "assgn_4_21CS30059_21CS30038.y"
                    {
            (yyval.stmt) = new statement();
        }
#line 3567 "y.tab.c"
    break;

  case 183: /* block-item: statement  */
#line 979 "assgn_4_21CS30059_21CS30038.y"
                    {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3575 "y.tab.c"
    break;

  case 184: /* expression-statement: expression SEMICOLON  */
#line 984 "assgn_4_21CS30059_21CS30038.y"
                             {
            (yyval.exp) = (yyvsp[-1].exp);
        }
#line 3583 "y.tab.c"
    break;

  case 185: /* expression-statement: SEMICOLON  */
#line 987 "assgn_4_21CS30059_21CS30038.y"
                    {
            (yyval.exp) = new expression();
        }
#line 3591 "y.tab.c"
    break;

  case 186: /* selection-statement: IF LEFT_PARENTHESIS expression N RIGHT_PARENTHESIS M statement N  */
#line 993 "assgn_4_21CS30059_21CS30038.y"
        {
            backpatch((yyvsp[-4].stmt)->nextlist,nextinstr());
            convertInttoBool((yyvsp[-5].exp));
            (yyval.stmt) = new statement();
            backpatch((yyvsp[-5].exp)->truelist,(yyvsp[-2].instr));
            list<int> l1 = merge((yyvsp[-5].exp)->falselist,(yyvsp[-1].stmt)->nextlist);
            (yyval.stmt)->nextlist = merge(l1,(yyvsp[0].stmt)->nextlist);
        }
#line 3604 "y.tab.c"
    break;

  case 187: /* selection-statement: IF LEFT_PARENTHESIS expression N RIGHT_PARENTHESIS M statement N ELSE M statement  */
#line 1001 "assgn_4_21CS30059_21CS30038.y"
                                                                                             {
            backpatch((yyvsp[-7].stmt)->nextlist,nextinstr());
            convertInttoBool((yyvsp[-8].exp));
            (yyval.stmt) = new statement();
            backpatch((yyvsp[-8].exp)->truelist,(yyvsp[-5].instr));
            backpatch((yyvsp[-8].exp)->falselist,(yyvsp[-1].instr));
            list<int> l1 = merge((yyvsp[-4].stmt)->nextlist,(yyvsp[-3].stmt)->nextlist);
            (yyval.stmt)->nextlist = merge(l1,(yyvsp[0].stmt)->nextlist);
        }
#line 3618 "y.tab.c"
    break;

  case 188: /* selection-statement: SWITCH LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement  */
#line 1010 "assgn_4_21CS30059_21CS30038.y"
                                                                         {printf("selection-statement-> SWITCH (expression) statement\n");}
#line 3624 "y.tab.c"
    break;

  case 189: /* iteration-statement: WHILE W LEFT_PARENTHESIS A change-table M expression RIGHT_PARENTHESIS M loop-statement  */
#line 1013 "assgn_4_21CS30059_21CS30038.y"
                                                                                                {
            (yyval.stmt) = new statement();
            convertInttoBool((yyvsp[-3].exp));
            backpatch((yyvsp[0].stmt)->nextlist, (yyvsp[-4].instr));
            backpatch((yyvsp[-3].exp)->truelist, (yyvsp[-1].instr));
            (yyval.stmt)->nextlist = (yyvsp[-3].exp)->falselist;
            emit("goto", convertInttoString((yyvsp[-4].instr)));
            blockName = "";
            switchTable(currentST->parent);

        }
#line 3640 "y.tab.c"
    break;

  case 190: /* iteration-statement: WHILE W LEFT_PARENTHESIS A change-table M expression RIGHT_PARENTHESIS LEFT_CURLY_BRACKET M block-item-listopt RIGHT_CURLY_BRACKET  */
#line 1024 "assgn_4_21CS30059_21CS30038.y"
                                                                                                                                             {
            (yyval.stmt) = new statement();
            convertInttoBool((yyvsp[-5].exp));
            backpatch((yyvsp[-1].stmt)->nextlist, (yyvsp[-6].instr));
            backpatch((yyvsp[-5].exp)->truelist, (yyvsp[-2].instr));
            (yyval.stmt)->nextlist = (yyvsp[-5].exp)->falselist;
            emit("goto", convertInttoString((yyvsp[-6].instr)));
            blockName = "";
            switchTable(currentST->parent);
        }
#line 3655 "y.tab.c"
    break;

  case 191: /* iteration-statement: DO D M loop-statement M WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS SEMICOLON  */
#line 1034 "assgn_4_21CS30059_21CS30038.y"
                                                                                                {
            (yyval.stmt) = new statement();
            convertInttoBool((yyvsp[-2].exp));
            backpatch((yyvsp[-2].exp)->truelist, (yyvsp[-7].instr));
            backpatch((yyvsp[-6].stmt)->nextlist, (yyvsp[-5].instr));
            (yyval.stmt)->nextlist = (yyvsp[-2].exp)->falselist;
            blockName = "";
        }
#line 3668 "y.tab.c"
    break;

  case 192: /* iteration-statement: DO D LEFT_CURLY_BRACKET M block-item-listopt RIGHT_CURLY_BRACKET M WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS SEMICOLON  */
#line 1042 "assgn_4_21CS30059_21CS30038.y"
                                                                                                                                           {
            (yyval.stmt) = new statement();
            convertInttoBool((yyvsp[-2].exp));
            backpatch((yyvsp[-2].exp)->truelist, (yyvsp[-8].instr));
            backpatch((yyvsp[-7].stmt)->nextlist, (yyvsp[-5].instr));
            (yyval.stmt)->nextlist = (yyvsp[-2].exp)->falselist;
            blockName = "";
        }
#line 3681 "y.tab.c"
    break;

  case 193: /* iteration-statement: FOR F LEFT_PARENTHESIS A change-table declaration M expression-statement M expression N RIGHT_PARENTHESIS M loop-statement  */
#line 1050 "assgn_4_21CS30059_21CS30038.y"
                                                                                                                                     {
            (yyval.stmt) = new statement();
            convertInttoBool((yyvsp[-6].exp));
            backpatch((yyvsp[-6].exp)->nextlist, (yyvsp[-1].instr));
            backpatch((yyvsp[-3].stmt)->nextlist, (yyvsp[-7].instr));
            backpatch((yyvsp[0].stmt)->nextlist, (yyvsp[-5].instr));
            emit("goto", convertInttoString((yyvsp[-5].instr)));
            (yyval.stmt)->nextlist = (yyvsp[-6].exp)->falselist;
            blockName = "";
            switchTable(currentST->parent);
        }
#line 3697 "y.tab.c"
    break;

  case 194: /* iteration-statement: FOR F LEFT_PARENTHESIS A change-table expression-statement M expression-statement M expression N RIGHT_PARENTHESIS M loop-statement  */
#line 1061 "assgn_4_21CS30059_21CS30038.y"
                                                                                                                                              {
            (yyval.stmt) = new statement();
            convertInttoBool((yyvsp[-6].exp));
            backpatch((yyvsp[-6].exp)->truelist, (yyvsp[-1].instr));
            backpatch((yyvsp[-3].stmt)->nextlist, (yyvsp[-7].instr));
            backpatch((yyvsp[0].stmt)->nextlist, (yyvsp[-5].instr));
            emit("goto", convertInttoString((yyvsp[-5].instr)));
            (yyval.stmt)->nextlist = (yyvsp[-6].exp)->falselist;
            blockName = "";
            switchTable(currentST->parent);
        }
#line 3713 "y.tab.c"
    break;

  case 195: /* iteration-statement: FOR F LEFT_PARENTHESIS A change-table declaration M expression-statement M expression N RIGHT_PARENTHESIS M LEFT_CURLY_BRACKET block-item-listopt RIGHT_CURLY_BRACKET  */
#line 1072 "assgn_4_21CS30059_21CS30038.y"
                                                                                                                                                                                {
            (yyval.stmt) = new statement();
            convertInttoBool((yyvsp[-8].exp));
            backpatch((yyvsp[-8].exp)->truelist, (yyvsp[-3].instr));
            backpatch((yyvsp[-5].stmt)->nextlist, (yyvsp[-9].instr));
            backpatch((yyvsp[-1].stmt)->nextlist, (yyvsp[-7].instr));
            emit("goto", convertInttoString((yyvsp[-7].instr)));
            (yyval.stmt)->nextlist = (yyvsp[-8].exp)->falselist;
            blockName = "";
            switchTable(currentST->parent);
        }
#line 3729 "y.tab.c"
    break;

  case 196: /* iteration-statement: FOR F LEFT_PARENTHESIS A change-table expression-statement M expression-statement M expression N RIGHT_PARENTHESIS M LEFT_CURLY_BRACKET block-item-listopt RIGHT_CURLY_BRACKET  */
#line 1083 "assgn_4_21CS30059_21CS30038.y"
                                                                                                                                                                                        {
            (yyval.stmt) = new statement();                   
            convertInttoBool((yyvsp[-8].exp));                 
            backpatch((yyvsp[-8].exp)->truelist, (yyvsp[-3].instr));          
            backpatch((yyvsp[-5].stmt)->nextlist, (yyvsp[-9].instr));          
            backpatch((yyvsp[-1].stmt)->nextlist, (yyvsp[-7].instr));          
            emit("goto", convertInttoString((yyvsp[-7].instr))); 
            (yyval.stmt)->nextlist = (yyvsp[-8].exp)->falselist;           
            blockName = "";
            switchTable(currentST->parent);
        }
#line 3745 "y.tab.c"
    break;

  case 197: /* F: %empty  */
#line 1095 "assgn_4_21CS30059_21CS30038.y"
         {
        blockName = "FOR";
    }
#line 3753 "y.tab.c"
    break;

  case 198: /* W: %empty  */
#line 1099 "assgn_4_21CS30059_21CS30038.y"
         {
        blockName = "WHILE";
    }
#line 3761 "y.tab.c"
    break;

  case 199: /* D: %empty  */
#line 1103 "assgn_4_21CS30059_21CS30038.y"
         {
        blockName = "DO_WHILE";
    }
#line 3769 "y.tab.c"
    break;

  case 200: /* jump-statement: GOTO IDENTIFIER SEMICOLON  */
#line 1108 "assgn_4_21CS30059_21CS30038.y"
                                  {printf("jump-statement-> GOTO IDENTIFIER ;\n");}
#line 3775 "y.tab.c"
    break;

  case 201: /* jump-statement: CONTINUE SEMICOLON  */
#line 1109 "assgn_4_21CS30059_21CS30038.y"
                             {
            (yyval.stmt) = new statement();
        }
#line 3783 "y.tab.c"
    break;

  case 202: /* jump-statement: BREAK SEMICOLON  */
#line 1112 "assgn_4_21CS30059_21CS30038.y"
                          {
            (yyval.stmt) = new statement();
        }
#line 3791 "y.tab.c"
    break;

  case 203: /* jump-statement: RETURN expression SEMICOLON  */
#line 1115 "assgn_4_21CS30059_21CS30038.y"
                                      {
            (yyval.stmt) = new statement();
            emit("return", (yyvsp[-1].exp)->loc->name);
        }
#line 3800 "y.tab.c"
    break;

  case 204: /* jump-statement: RETURN SEMICOLON  */
#line 1119 "assgn_4_21CS30059_21CS30038.y"
                           {
            (yyval.stmt) = new statement();
            emit("return", "");
        }
#line 3809 "y.tab.c"
    break;

  case 205: /* translation-unit: external-declaration  */
#line 1125 "assgn_4_21CS30059_21CS30038.y"
                             {printf("translation-unit-> external-declaration\n");}
#line 3815 "y.tab.c"
    break;

  case 206: /* translation-unit: translation-unit external-declaration  */
#line 1126 "assgn_4_21CS30059_21CS30038.y"
                                                {printf("translation-unit-> translation-unit external-declaration\n");}
#line 3821 "y.tab.c"
    break;

  case 207: /* external-declaration: function-definition  */
#line 1129 "assgn_4_21CS30059_21CS30038.y"
                            {printf("external-declaration-> function-definition\n");}
#line 3827 "y.tab.c"
    break;

  case 208: /* external-declaration: declaration  */
#line 1130 "assgn_4_21CS30059_21CS30038.y"
                      {printf("external-declaration-> declaration\n");}
#line 3833 "y.tab.c"
    break;

  case 209: /* function-definition: declaration-specifiers declarator declaration-listopt change-table LEFT_CURLY_BRACKET block-item-listopt RIGHT_CURLY_BRACKET  */
#line 1133 "assgn_4_21CS30059_21CS30038.y"
                                                                                                                                     {
            currentST->parent = globalST;
            STCount=0;
            switchTable(globalST);
        }
#line 3843 "y.tab.c"
    break;

  case 210: /* declaration-listopt: declaration-list  */
#line 1140 "assgn_4_21CS30059_21CS30038.y"
                         {printf("declaration-listopt-> declaration-list\n");}
#line 3849 "y.tab.c"
    break;

  case 211: /* declaration-listopt: %empty  */
#line 1141 "assgn_4_21CS30059_21CS30038.y"
                 {printf("declaration-listopt-> \n");}
#line 3855 "y.tab.c"
    break;

  case 212: /* declaration-list: declaration  */
#line 1144 "assgn_4_21CS30059_21CS30038.y"
                    {printf("declaration-list-> declaration\n");}
#line 3861 "y.tab.c"
    break;

  case 213: /* declaration-list: declaration-list declaration  */
#line 1145 "assgn_4_21CS30059_21CS30038.y"
                                       {printf("declaration-list-> declaration-list declaration\n");}
#line 3867 "y.tab.c"
    break;


#line 3871 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 1147 "assgn_4_21CS30059_21CS30038.y"




int yywrap()
{
    return 1;
}
