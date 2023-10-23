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

    #include<iostream>
    #include "translator.h"
    using namespace std;
    extern int yylex();
    //extern int yylineno=1;
    extern int lineno;
    extern string vartype;
    extern char* yytext;
    extern quadArray* quads;
    void yyerror(char *s) {
        printf("error: %s at line %d\n", s, lineno);
        printf("Unable to parse: %s",yytext);
    }

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
# define YYDEBUG 1
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
    FLOAT = 260,                   /* FLOAT  */
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
    PUNCTUATOR = 284,              /* PUNCTUATOR  */
    ASSIGNMENT_OPERATOR = 285,     /* ASSIGNMENT_OPERATOR  */
    SINGLE_LINE_COMMENT = 286,     /* SINGLE_LINE_COMMENT  */
    MULTI_LINE_COMMENT = 287,      /* MULTI_LINE_COMMENT  */
    ERROR = 288,                   /* ERROR  */
    VOID = 289,                    /* VOID  */
    CHAR = 290,                    /* CHAR  */
    SHORT = 291,                   /* SHORT  */
    INT = 292,                     /* INT  */
    LONG = 293,                    /* LONG  */
    DOUBLE = 294,                  /* DOUBLE  */
    SIGNED = 295,                  /* SIGNED  */
    UNSIGNED = 296,                /* UNSIGNED  */
    BOOL = 297,                    /* BOOL  */
    COMPLEX = 298,                 /* COMPLEX  */
    IMAGINARY = 299,               /* IMAGINARY  */
    IF = 300,                      /* IF  */
    EQUALS = 301,                  /* EQUALS  */
    INCREMENT = 302,               /* INCREMENT  */
    DECREMENT = 303,               /* DECREMENT  */
    AND = 304,                     /* AND  */
    STAR = 305,                    /* STAR  */
    PLUS = 306,                    /* PLUS  */
    MINUS = 307,                   /* MINUS  */
    TILDE = 308,                   /* TILDE  */
    NOT = 309,                     /* NOT  */
    DIV = 310,                     /* DIV  */
    MOD = 311,                     /* MOD  */
    LEFT_SHIFT = 312,              /* LEFT_SHIFT  */
    RIGHT_SHIFT = 313,             /* RIGHT_SHIFT  */
    LESS_THAN = 314,               /* LESS_THAN  */
    GREATER_THAN = 315,            /* GREATER_THAN  */
    LESS_THAN_EQUAL = 316,         /* LESS_THAN_EQUAL  */
    GREATER_THAN_EQUAL = 317,      /* GREATER_THAN_EQUAL  */
    EQUAL_TO = 318,                /* EQUAL_TO  */
    NOT_EQUAL_TO = 319,            /* NOT_EQUAL_TO  */
    XOR = 320,                     /* XOR  */
    OR = 321,                      /* OR  */
    AND_AND = 322,                 /* AND_AND  */
    OR_OR = 323,                   /* OR_OR  */
    QUESTION = 324,                /* QUESTION  */
    COLON = 325,                   /* COLON  */
    SEMICOLON = 326,               /* SEMICOLON  */
    COMMA = 327,                   /* COMMA  */
    LEFT_SQUARE_BRACKET = 328,     /* LEFT_SQUARE_BRACKET  */
    RIGHT_SQUARE_BRACKET = 329,    /* RIGHT_SQUARE_BRACKET  */
    LEFT_CURLY_BRACKET = 330,      /* LEFT_CURLY_BRACKET  */
    RIGHT_CURLY_BRACKET = 331,     /* RIGHT_CURLY_BRACKET  */
    LEFT_PARENTHESIS = 332,        /* LEFT_PARENTHESIS  */
    RIGHT_PARENTHESIS = 333,       /* RIGHT_PARENTHESIS  */
    DOT = 334,                     /* DOT  */
    ELLIPSIS = 335,                /* ELLIPSIS  */
    ARROW = 336,                   /* ARROW  */
    LOWER_THAN_ELSE = 337          /* LOWER_THAN_ELSE  */
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
#define FLOAT 260
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
#define PUNCTUATOR 284
#define ASSIGNMENT_OPERATOR 285
#define SINGLE_LINE_COMMENT 286
#define MULTI_LINE_COMMENT 287
#define ERROR 288
#define VOID 289
#define CHAR 290
#define SHORT 291
#define INT 292
#define LONG 293
#define DOUBLE 294
#define SIGNED 295
#define UNSIGNED 296
#define BOOL 297
#define COMPLEX 298
#define IMAGINARY 299
#define IF 300
#define EQUALS 301
#define INCREMENT 302
#define DECREMENT 303
#define AND 304
#define STAR 305
#define PLUS 306
#define MINUS 307
#define TILDE 308
#define NOT 309
#define DIV 310
#define MOD 311
#define LEFT_SHIFT 312
#define RIGHT_SHIFT 313
#define LESS_THAN 314
#define GREATER_THAN 315
#define LESS_THAN_EQUAL 316
#define GREATER_THAN_EQUAL 317
#define EQUAL_TO 318
#define NOT_EQUAL_TO 319
#define XOR 320
#define OR 321
#define AND_AND 322
#define OR_OR 323
#define QUESTION 324
#define COLON 325
#define SEMICOLON 326
#define COMMA 327
#define LEFT_SQUARE_BRACKET 328
#define RIGHT_SQUARE_BRACKET 329
#define LEFT_CURLY_BRACKET 330
#define RIGHT_CURLY_BRACKET 331
#define LEFT_PARENTHESIS 332
#define RIGHT_PARENTHESIS 333
#define DOT 334
#define ELLIPSIS 335
#define ARROW 336
#define LOWER_THAN_ELSE 337

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 17 "assgn_4_21CS30059_21CS30038.y"

    int value;
    expression* exp;
    int intval;
    float floatval;
    char* charval;
    aarray* Array;
    int numParams;
    char op;
    symbol* pointer;
    statement stmt;
    ttype* ptr;

#line 318 "y.tab.c"

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
  YYSYMBOL_FLOAT = 5,                      /* FLOAT  */
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
  YYSYMBOL_PUNCTUATOR = 29,                /* PUNCTUATOR  */
  YYSYMBOL_ASSIGNMENT_OPERATOR = 30,       /* ASSIGNMENT_OPERATOR  */
  YYSYMBOL_SINGLE_LINE_COMMENT = 31,       /* SINGLE_LINE_COMMENT  */
  YYSYMBOL_MULTI_LINE_COMMENT = 32,        /* MULTI_LINE_COMMENT  */
  YYSYMBOL_ERROR = 33,                     /* ERROR  */
  YYSYMBOL_VOID = 34,                      /* VOID  */
  YYSYMBOL_CHAR = 35,                      /* CHAR  */
  YYSYMBOL_SHORT = 36,                     /* SHORT  */
  YYSYMBOL_INT = 37,                       /* INT  */
  YYSYMBOL_LONG = 38,                      /* LONG  */
  YYSYMBOL_DOUBLE = 39,                    /* DOUBLE  */
  YYSYMBOL_SIGNED = 40,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 41,                  /* UNSIGNED  */
  YYSYMBOL_BOOL = 42,                      /* BOOL  */
  YYSYMBOL_COMPLEX = 43,                   /* COMPLEX  */
  YYSYMBOL_IMAGINARY = 44,                 /* IMAGINARY  */
  YYSYMBOL_IF = 45,                        /* IF  */
  YYSYMBOL_EQUALS = 46,                    /* EQUALS  */
  YYSYMBOL_INCREMENT = 47,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 48,                 /* DECREMENT  */
  YYSYMBOL_AND = 49,                       /* AND  */
  YYSYMBOL_STAR = 50,                      /* STAR  */
  YYSYMBOL_PLUS = 51,                      /* PLUS  */
  YYSYMBOL_MINUS = 52,                     /* MINUS  */
  YYSYMBOL_TILDE = 53,                     /* TILDE  */
  YYSYMBOL_NOT = 54,                       /* NOT  */
  YYSYMBOL_DIV = 55,                       /* DIV  */
  YYSYMBOL_MOD = 56,                       /* MOD  */
  YYSYMBOL_LEFT_SHIFT = 57,                /* LEFT_SHIFT  */
  YYSYMBOL_RIGHT_SHIFT = 58,               /* RIGHT_SHIFT  */
  YYSYMBOL_LESS_THAN = 59,                 /* LESS_THAN  */
  YYSYMBOL_GREATER_THAN = 60,              /* GREATER_THAN  */
  YYSYMBOL_LESS_THAN_EQUAL = 61,           /* LESS_THAN_EQUAL  */
  YYSYMBOL_GREATER_THAN_EQUAL = 62,        /* GREATER_THAN_EQUAL  */
  YYSYMBOL_EQUAL_TO = 63,                  /* EQUAL_TO  */
  YYSYMBOL_NOT_EQUAL_TO = 64,              /* NOT_EQUAL_TO  */
  YYSYMBOL_XOR = 65,                       /* XOR  */
  YYSYMBOL_OR = 66,                        /* OR  */
  YYSYMBOL_AND_AND = 67,                   /* AND_AND  */
  YYSYMBOL_OR_OR = 68,                     /* OR_OR  */
  YYSYMBOL_QUESTION = 69,                  /* QUESTION  */
  YYSYMBOL_COLON = 70,                     /* COLON  */
  YYSYMBOL_SEMICOLON = 71,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 72,                     /* COMMA  */
  YYSYMBOL_LEFT_SQUARE_BRACKET = 73,       /* LEFT_SQUARE_BRACKET  */
  YYSYMBOL_RIGHT_SQUARE_BRACKET = 74,      /* RIGHT_SQUARE_BRACKET  */
  YYSYMBOL_LEFT_CURLY_BRACKET = 75,        /* LEFT_CURLY_BRACKET  */
  YYSYMBOL_RIGHT_CURLY_BRACKET = 76,       /* RIGHT_CURLY_BRACKET  */
  YYSYMBOL_LEFT_PARENTHESIS = 77,          /* LEFT_PARENTHESIS  */
  YYSYMBOL_RIGHT_PARENTHESIS = 78,         /* RIGHT_PARENTHESIS  */
  YYSYMBOL_DOT = 79,                       /* DOT  */
  YYSYMBOL_ELLIPSIS = 80,                  /* ELLIPSIS  */
  YYSYMBOL_ARROW = 81,                     /* ARROW  */
  YYSYMBOL_LOWER_THAN_ELSE = 82,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_YYACCEPT = 83,                  /* $accept  */
  YYSYMBOL_84_primary_expression = 84,     /* primary-expression  */
  YYSYMBOL_85_postfix_expression = 85,     /* postfix-expression  */
  YYSYMBOL_86_argument_expression_list = 86, /* argument-expression-list  */
  YYSYMBOL_87_argument_expression_listopt = 87, /* argument-expression-listopt  */
  YYSYMBOL_88_unary_expression = 88,       /* unary-expression  */
  YYSYMBOL_89_unary_operator = 89,         /* unary-operator  */
  YYSYMBOL_90_cast_expression = 90,        /* cast-expression  */
  YYSYMBOL_91_multiplicative_expression = 91, /* multiplicative-expression  */
  YYSYMBOL_92_additive_expression = 92,    /* additive-expression  */
  YYSYMBOL_93_shift_expression = 93,       /* shift-expression  */
  YYSYMBOL_94_relational_expression = 94,  /* relational-expression  */
  YYSYMBOL_95_equality_expression = 95,    /* equality-expression  */
  YYSYMBOL_96_AND_expression = 96,         /* AND-expression  */
  YYSYMBOL_97_exclusive_OR_expression = 97, /* exclusive-OR-expression  */
  YYSYMBOL_98_inclusive_OR_expression = 98, /* inclusive-OR-expression  */
  YYSYMBOL_99_logical_AND_expression = 99, /* logical-AND-expression  */
  YYSYMBOL_100_logical_OR_expression = 100, /* logical-OR-expression  */
  YYSYMBOL_101_conditional_expression = 101, /* conditional-expression  */
  YYSYMBOL_M = 102,                        /* M  */
  YYSYMBOL_N = 103,                        /* N  */
  YYSYMBOL_104_assignment_expression = 104, /* assignment-expression  */
  YYSYMBOL_expression = 105,               /* expression  */
  YYSYMBOL_106_constant_expression = 106,  /* constant-expression  */
  YYSYMBOL_declaration = 107,              /* declaration  */
  YYSYMBOL_108_init_declarator_listopt = 108, /* init-declarator-listopt  */
  YYSYMBOL_109_declaration_specifiers = 109, /* declaration-specifiers  */
  YYSYMBOL_110_type_qualifier = 110,       /* type-qualifier  */
  YYSYMBOL_111_init_declarator_list = 111, /* init-declarator-list  */
  YYSYMBOL_112_init_declarator = 112,      /* init-declarator  */
  YYSYMBOL_113_type_specifier = 113,       /* type-specifier  */
  YYSYMBOL_114_storage_class_specifier = 114, /* storage-class-specifier  */
  YYSYMBOL_115_specifier_qualifier_list = 115, /* specifier-qualifier-list  */
  YYSYMBOL_116_specifier_qualifier_listopt = 116, /* specifier-qualifier-listopt  */
  YYSYMBOL_117_enum_specifier = 117,       /* enum-specifier  */
  YYSYMBOL_identifieropt = 118,            /* identifieropt  */
  YYSYMBOL_119_enumerator_list = 119,      /* enumerator-list  */
  YYSYMBOL_enumerator = 120,               /* enumerator  */
  YYSYMBOL_121_function_specifier = 121,   /* function-specifier  */
  YYSYMBOL_declarator = 122,               /* declarator  */
  YYSYMBOL_123_direct_declarator = 123,    /* direct-declarator  */
  YYSYMBOL_124_type_qualifier_listopt = 124, /* type-qualifier-listopt  */
  YYSYMBOL_pointer = 125,                  /* pointer  */
  YYSYMBOL_126_type_qualifier_list = 126,  /* type-qualifier-list  */
  YYSYMBOL_127_parameter_type_list = 127,  /* parameter-type-list  */
  YYSYMBOL_128_parameter_list = 128,       /* parameter-list  */
  YYSYMBOL_129_parameter_declaration = 129, /* parameter-declaration  */
  YYSYMBOL_130_identifier_list = 130,      /* identifier-list  */
  YYSYMBOL_131_type_name = 131,            /* type-name  */
  YYSYMBOL_initializer = 132,              /* initializer  */
  YYSYMBOL_133_initializer_list = 133,     /* initializer-list  */
  YYSYMBOL_designationopt = 134,           /* designationopt  */
  YYSYMBOL_designation = 135,              /* designation  */
  YYSYMBOL_136_designator_list = 136,      /* designator-list  */
  YYSYMBOL_designator = 137,               /* designator  */
  YYSYMBOL_statement = 138,                /* statement  */
  YYSYMBOL_139_loop_statement = 139,       /* loop-statement  */
  YYSYMBOL_140_labeled_statement = 140,    /* labeled-statement  */
  YYSYMBOL_141_compound_statement = 141,   /* compound-statement  */
  YYSYMBOL_A = 142,                        /* A  */
  YYSYMBOL_143_change_table = 143,         /* change-table  */
  YYSYMBOL_144_block_item_listopt = 144,   /* block-item-listopt  */
  YYSYMBOL_145_block_item_list = 145,      /* block-item-list  */
  YYSYMBOL_146_block_item = 146,           /* block-item  */
  YYSYMBOL_147_expression_statement = 147, /* expression-statement  */
  YYSYMBOL_148_selection_statement = 148,  /* selection-statement  */
  YYSYMBOL_149_iteration_statement = 149,  /* iteration-statement  */
  YYSYMBOL_F = 150,                        /* F  */
  YYSYMBOL_W = 151,                        /* W  */
  YYSYMBOL_D = 152,                        /* D  */
  YYSYMBOL_153_jump_statement = 153,       /* jump-statement  */
  YYSYMBOL_154_translation_unit = 154,     /* translation-unit  */
  YYSYMBOL_155_external_declaration = 155, /* external-declaration  */
  YYSYMBOL_156_function_definition = 156,  /* function-definition  */
  YYSYMBOL_157_declaration_listopt = 157,  /* declaration-listopt  */
  YYSYMBOL_158_declaration_list = 158      /* declaration-list  */
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
#define YYLAST   1057

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  83
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  76
/* YYNRULES -- Number of rules.  */
#define YYNRULES  214
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  390

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   337


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
      75,    76,    77,    78,    79,    80,    81,    82
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    59,    59,    66,    72,    78,    84,    85,    91,    94,
     100,   119,   129,   130,   131,   137,   143,   144,   147,   151,
     157,   160,   163,   166,   170,   174,   204,   205,   208,   211,
     214,   217,   220,   223,   228,   231,   237,   253,   265,   277,
     287,   290,   302,   316,   319,   331,   345,   348,   363,   378,
     393,   410,   413,   430,   449,   452,   469,   472,   489,   492,
     509,   512,   526,   529,   543,   546,   565,   570,   578,   581,
     600,   603,   606,   609,   612,   613,   616,   617,   618,   619,
     620,   621,   622,   623,   626,   629,   630,   633,   636,   645,
     648,   651,   654,   657,   660,   663,   666,   669,   672,   675,
     678,   681,   686,   687,   690,   691,   692,   695,   696,   699,
     700,   701,   704,   705,   708,   709,   712,   713,   716,   719,
     728,   731,   735,   738,   741,   744,   775,   795,   796,   797,
     798,   799,   800,   811,   812,   826,   827,   830,   833,   838,
     839,   842,   843,   846,   847,   850,   851,   854,   855,   858,
     861,   864,   865,   868,   869,   872,   873,   876,   879,   880,
     883,   884,   887,   888,   891,   895,   898,   901,   905,   906,
     910,   913,   916,   921,   922,   923,   926,   931,   942,   956,
     959,   964,   967,   973,   976,   981,   984,   989,   998,  1007,
    1010,  1021,  1031,  1039,  1047,  1058,  1069,  1080,  1092,  1096,
    1100,  1105,  1106,  1109,  1112,  1116,  1122,  1123,  1126,  1127,
    1130,  1137,  1138,  1141,  1142
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
  "INTEGER", "FLOAT", "CHARACTER_CONSTANT", "STRING_LITERAL", "ENUM",
  "TYPE_SPECIFIER_TOKEN", "STORAGE_CLASS_SPECIFIER", "STATIC_TOKEN",
  "FUNCTION_SPECIFIER", "CASE", "DEFAULT", "SIZEOF", "OF", "ELSE",
  "SWITCH", "WHILE", "DO", "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN",
  "TYPE_QUALIFIER", "KEYWORD", "ENUMERATION_CONST", "PUNCTUATOR",
  "ASSIGNMENT_OPERATOR", "SINGLE_LINE_COMMENT", "MULTI_LINE_COMMENT",
  "ERROR", "VOID", "CHAR", "SHORT", "INT", "LONG", "DOUBLE", "SIGNED",
  "UNSIGNED", "BOOL", "COMPLEX", "IMAGINARY", "IF", "EQUALS", "INCREMENT",
  "DECREMENT", "AND", "STAR", "PLUS", "MINUS", "TILDE", "NOT", "DIV",
  "MOD", "LEFT_SHIFT", "RIGHT_SHIFT", "LESS_THAN", "GREATER_THAN",
  "LESS_THAN_EQUAL", "GREATER_THAN_EQUAL", "EQUAL_TO", "NOT_EQUAL_TO",
  "XOR", "OR", "AND_AND", "OR_OR", "QUESTION", "COLON", "SEMICOLON",
  "COMMA", "LEFT_SQUARE_BRACKET", "RIGHT_SQUARE_BRACKET",
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
  "expression", "constant-expression", "declaration",
  "init-declarator-listopt", "declaration-specifiers", "type-qualifier",
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

#define YYPACT_NINF (-331)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-213)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     317,   317,  -331,  -331,  -331,  -331,  -331,    32,   317,   317,
     317,   250,  -331,  -331,  -331,  -331,    30,    32,   -42,    52,
    -331,   169,    65,    28,  -331,  -331,  -331,  -331,  -331,  -331,
      25,   117,    99,  -331,    32,   717,  -331,    32,  -331,   317,
     466,   197,    65,  -331,  -331,  -331,  -331,   161,  -331,  -331,
    -331,  -331,  -331,   897,  -331,   949,   949,  -331,  -331,  -331,
    -331,  -331,  -331,   -46,   349,  -331,   204,   182,   963,  -331,
      17,    -4,   146,   132,    91,   174,   163,   168,   170,   151,
    -331,  -331,  -331,   164,  -331,   734,   162,  -331,   166,   541,
    -331,    -9,    34,   349,  -331,   349,  -331,  -331,   963,   240,
      97,   717,  -331,   -20,  -331,   230,   246,  1013,  -331,  -331,
    -331,  -331,  -331,  -331,  -331,  -331,  -331,  -331,  -331,  -331,
      -2,  1013,  -331,  1013,   175,  -331,  -331,   963,   963,   255,
     276,   963,  -331,  -331,   963,   963,   963,   963,   963,   963,
     963,   963,   963,   963,   963,   963,   963,   963,   963,   963,
    -331,  -331,   211,   297,   208,   748,  -331,  -331,   963,   213,
    -331,   219,   291,  -331,  -331,    32,   217,   225,  -331,   227,
     235,  -331,   256,  -331,   -39,  -331,  -331,  -331,  -331,   239,
     249,  -331,  -331,  -331,   963,  -331,  -331,  -331,   800,   115,
     259,   254,  -331,  -331,  -331,  -331,  -331,  -331,  -331,    17,
      17,    -4,    -4,   146,   146,   146,   146,   132,   132,    91,
     174,   163,   963,   963,  -331,   263,   963,   265,   260,  -331,
    -331,  -331,   333,   267,   268,   814,   264,  -331,  -331,   145,
    -331,  -331,  -331,  -331,   282,   283,  -331,  -331,  -331,  -331,
    -331,  -331,   266,   286,  -331,  -331,  -331,  -331,  -331,   149,
     287,   287,  -331,  -331,   717,   358,  -331,   -46,  -331,  -331,
     963,  -331,   168,   170,   963,   409,   293,   409,   963,   288,
     292,   289,   298,  -331,  -331,  -331,   154,   963,  -331,  -331,
    -331,   297,  -331,  -331,  -331,  -331,  -331,   324,   100,  -331,
     110,  -331,   299,  -331,   409,  -331,     5,  -331,  -331,   634,
    -331,  -331,  -331,   299,   297,  -331,   963,    39,  -331,    50,
    -331,   303,  -331,   409,  -331,   297,  -331,  -331,  -331,  -331,
    -331,  -331,  -331,   300,   304,  -331,  -331,  -331,  -331,  -331,
    -331,  -331,   305,   357,   665,  -331,  -331,   963,   963,  -331,
     302,  -331,  -331,   409,  -331,    44,   363,   963,   866,   866,
    -331,   319,   318,    68,  -331,  -331,   387,  -331,   634,   963,
     334,   963,   963,  -331,   297,  -331,    73,  -331,   299,   299,
     409,   330,   336,   331,   332,  -331,  -331,  -331,  -331,  -331,
     484,   559,   297,  -331,   297,  -331,   335,   341,  -331,  -331
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    79,   102,   103,   118,    84,   209,    75,    81,    77,
      83,     0,   206,   208,    78,   121,   136,     0,     0,    74,
      85,    87,   120,     0,    80,    76,    82,     1,   207,   139,
     137,   135,     0,    73,     0,     0,   213,    75,   178,   211,
       0,   178,   119,   138,   140,   122,    86,    87,     2,     3,
       4,     5,     7,     0,     6,     0,     0,    28,    29,    30,
      31,    32,    33,   156,     0,     9,    22,    34,     0,    36,
      40,    43,    46,    51,    54,    56,    58,    60,    62,    64,
      68,   150,    88,     0,   214,     0,    29,   126,     0,     0,
     147,     0,     0,     0,    26,     0,    23,    24,     0,     0,
       0,     0,   155,     0,   158,     4,   113,   108,    89,    90,
      91,    92,    93,    95,    96,    97,    98,    99,   100,    70,
       0,   108,   149,   101,     0,    14,    15,     0,    21,     0,
       0,     0,    34,    25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      66,    66,     0,   180,     0,     0,   131,   125,     0,    29,
     123,     0,     0,   133,   134,   146,     0,   141,   143,     0,
       0,    72,     0,   161,   156,   151,   153,   157,   159,   110,
       0,    94,   107,   106,     0,     8,   104,   105,     0,     0,
      20,     0,    18,    12,    13,    69,    37,    38,    39,    41,
      42,    44,    45,    47,    48,    49,    50,    52,    53,    55,
      57,    59,     0,     0,    66,     2,     0,     0,     0,   199,
     200,   198,     0,     0,     0,     0,     0,   186,   177,     0,
     183,   184,   162,   163,     0,    66,   181,   164,   165,   166,
     167,   128,     0,     0,   130,   124,   148,   145,   132,     0,
      27,     0,   160,   152,     0,     0,    71,   156,    35,    10,
       0,    11,    61,    63,     0,     0,     0,     0,     0,     0,
      66,     0,     0,   202,   203,   205,     0,     0,   178,   185,
     210,     0,   127,   129,   142,   144,   154,   116,     0,   114,
       0,    19,    67,   173,     0,   175,     0,   177,    66,     0,
     177,   201,   204,    67,   180,   182,     0,     0,   109,   156,
      16,     0,   174,     0,   178,   180,    66,   168,   169,   170,
     171,   172,   178,     0,     0,   117,   111,   115,    17,    66,
     189,    66,     0,     0,     0,    66,   176,     0,     0,    66,
       0,    66,    66,     0,    65,     0,     0,     0,     0,     0,
      67,    66,     0,     0,    66,    66,   187,    66,     0,     0,
       0,     0,     0,    66,   180,   190,     0,   192,    67,    67,
       0,     0,     0,     0,     0,   188,   191,   193,    66,    66,
       0,     0,   180,   194,   180,   195,     0,     0,   196,   197
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -331,  -331,  -331,  -331,  -331,   -49,  -331,   -56,    94,   108,
     148,   109,   261,   270,   271,   207,   212,  -331,   -96,  -133,
    -184,   -27,   -63,  -199,     0,  -331,    14,  -331,  -331,   401,
    -331,  -331,   -66,    76,  -331,  -331,  -331,   114,  -331,     3,
     413,  -331,   408,   -24,  -331,  -331,   190,  -331,   118,   -98,
     183,  -165,  -331,  -331,   338,  -229,  -330,  -247,  -331,  -126,
     -36,  -194,  -331,   165,  -231,  -245,  -233,  -331,  -331,  -331,
    -228,  -331,   431,  -331,  -331,  -331
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    65,    66,   190,   191,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,   212,
     152,   119,   229,   172,   230,    18,    37,     8,    19,    20,
     121,     9,   122,   183,   123,   180,   288,   289,    10,    47,
      22,    30,    23,    31,   166,   167,   168,    91,   124,    82,
     100,   101,   102,   103,   104,   231,   316,   232,   233,   278,
      83,   234,   235,   236,   237,   238,   239,   271,   269,   270,
     240,    11,    12,    13,    38,    39
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,   120,   171,   176,    94,    92,    96,    97,    81,   254,
      21,     6,   133,    88,     7,    14,    89,   266,   213,   132,
      32,    36,    24,    25,    26,     7,   177,    98,   365,    33,
     120,    15,   120,    99,    98,    15,   293,   253,   295,    84,
      99,   182,   287,     1,     2,     3,     4,   137,   138,   132,
     383,   385,   317,    98,   319,   182,    29,   182,   154,    99,
       5,   155,   161,   162,   189,   312,   320,   134,   318,   163,
     184,   321,   135,   136,    81,    16,   185,   184,   196,   197,
     198,   264,    16,   313,   330,   132,   132,   132,   132,   132,
     132,   132,   132,   132,   132,   132,   132,   132,   132,   132,
     132,   192,   281,   342,   195,    17,   165,   325,   311,    17,
     324,   317,   164,   319,   350,   326,   184,   354,   355,   323,
     171,   332,   351,    98,    34,   320,   328,   318,   242,    99,
     321,   243,   258,   317,   317,   319,   319,   299,    40,   132,
     184,   375,    41,    44,   254,   184,   360,   320,   320,   318,
     318,   372,   321,   321,   145,   146,   286,   256,     1,     2,
       3,     4,   276,   132,   132,   315,   356,   132,   247,   174,
     371,   314,   307,   175,   322,     5,   308,    45,     1,     2,
       3,     4,   309,   333,   373,   374,   310,   184,   386,   259,
     387,   141,   142,   143,   144,     5,   337,   186,   338,   187,
      90,   292,   343,   139,   140,   296,   346,    35,   348,   349,
     171,   169,   131,   170,   303,    35,   279,   184,   358,   151,
     -67,   361,   362,   147,   364,   302,   184,    81,   148,   284,
     370,   199,   200,   291,   149,   -94,   156,   150,   -94,   153,
     157,   344,   304,   173,  -212,   380,   381,   201,   202,   179,
      27,   125,   126,   188,   207,   208,   -94,   132,   193,     1,
       2,     3,     4,   165,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   345,     5,   127,   331,   194,
     214,   128,   241,   129,   353,   130,   334,   244,   132,   203,
     204,   205,   206,   245,   246,   248,   366,   249,   368,   369,
     215,    49,    50,    51,    52,   250,     1,     2,     3,     4,
     216,   217,    53,   251,  -112,   218,   219,   220,   221,   222,
     223,   224,   225,     5,   255,    54,     1,     2,     3,     4,
     252,   260,   261,   265,   341,   267,   272,   268,   273,   274,
     282,   277,   226,     5,    55,    56,    57,    58,    59,    60,
      61,    62,    48,    49,   105,    51,    52,   106,   280,  -179,
     283,   287,   257,   294,    53,   297,   300,   298,   227,   301,
     306,   184,   228,   329,    64,   107,   340,    54,   335,   347,
     336,   339,   352,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   357,   359,    55,    56,    57,    58,
      59,    60,    61,    62,   363,   367,   376,   377,   209,   378,
     379,   388,   215,    49,    50,    51,    52,   389,   210,   262,
     211,   327,   216,   217,    53,   263,    64,   218,   219,   220,
     221,   222,   223,   224,   225,    46,    42,    54,    43,   285,
     290,   178,    28,     0,     0,     0,   305,     0,     0,     0,
       0,     0,     0,     0,   226,     0,    55,    56,    57,    58,
      59,    60,    61,    62,     0,     0,     0,     0,     0,    48,
      49,    50,    51,    52,     0,     0,     0,    85,     0,     0,
     227,    53,     0,     0,   228,     0,    64,   215,    49,    50,
      51,    52,    29,     0,    54,     0,     0,   216,   217,    53,
       0,     0,   218,   219,   220,   221,   222,   223,   224,   225,
       0,     0,    54,    55,    56,    57,    86,    59,    60,    61,
      62,     0,     0,     0,     0,     0,     0,     0,     0,   226,
       0,    55,    56,    57,    58,    59,    60,    61,    62,     0,
      87,     0,     0,    64,    48,    49,    50,    51,    52,     0,
       0,     0,   158,     0,     0,   227,    53,     0,     0,   382,
       0,    64,   215,    49,    50,    51,    52,    44,     0,    54,
       0,     0,   216,   217,    53,     0,     0,   218,   219,   220,
     221,   222,   223,   224,   225,     0,     0,    54,    55,    56,
      57,   159,    59,    60,    61,    62,     0,     0,     0,     0,
       0,     0,     0,     0,   226,     0,    55,    56,    57,    58,
      59,    60,    61,    62,     0,   160,     0,     0,    64,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     227,     0,     0,     0,   384,     0,    64,   215,    49,    50,
      51,    52,     0,     0,     0,     0,     0,   216,   217,    53,
       0,     0,   218,   219,   220,   221,   222,   223,   224,   225,
       0,     0,    54,     0,     0,     0,     0,     0,    48,    49,
      50,    51,    52,     0,     1,     2,     3,     4,     0,   226,
      53,    55,    56,    57,    58,    59,    60,    61,    62,     0,
       0,     5,     0,    54,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   227,     0,     0,     0,     0,
       0,    64,    55,    56,    57,    58,    59,    60,    61,    62,
      48,    49,    50,    51,    52,     0,     0,     0,     0,     0,
       0,     0,    53,     0,     0,     0,   227,    48,    49,    50,
      51,    52,    64,     0,     0,    54,     0,     0,     0,    53,
       0,    48,    49,    50,    51,    52,     0,     0,     0,     0,
      29,     0,    54,    53,    55,    56,    57,    58,    59,    60,
      61,    62,     0,     0,    44,     0,    54,     0,     0,     0,
       0,    55,    56,    57,    58,    59,    60,    61,    62,     0,
       0,     0,    63,     0,    64,    55,    56,    57,    58,    59,
      60,    61,    62,    48,    49,    50,    51,    52,     0,     0,
       0,    64,     0,     0,     0,    53,     0,    48,    49,    50,
      51,    52,     0,     0,     0,    64,     0,     0,    54,    53,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    54,     0,     0,     0,     0,    55,    56,    57,
      58,    59,    60,    61,    62,     0,     0,     0,     0,     0,
       0,    55,    56,    57,    58,    59,    60,    61,    62,    48,
      49,    50,    51,    52,     0,   257,     0,    64,     0,     0,
       0,    53,     0,     0,     0,   275,     0,     0,     0,     0,
       0,    64,     0,     0,    54,     0,     0,     0,     0,     0,
      48,    49,    50,    51,    52,     0,     0,     0,     0,     0,
       0,     0,    53,    55,    56,    57,    58,    59,    60,    61,
      62,     0,     0,     0,     0,    54,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   227,     0,     0,
       0,     0,     0,    64,    55,    56,    57,    58,    59,    60,
      61,    62,    48,    49,    50,    51,    52,     0,     0,     0,
       0,     0,     0,     0,    53,     0,    48,    49,    50,    51,
      52,     0,     0,     0,    93,     0,     0,    54,    53,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    54,     0,     0,     0,     0,    55,    56,    57,    58,
      59,    60,    61,    62,     0,     0,     0,     0,     0,     0,
      55,    56,    57,    58,    59,    60,    61,    62,   181,     0,
       0,   106,     0,     0,     0,     0,    95,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   107,
      64,     0,     0,     0,     0,     0,     0,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118
};

static const yytype_int16 yycheck[] =
{
       0,    64,    98,   101,    53,    41,    55,    56,    35,   174,
       7,    11,    68,    40,     0,     1,    40,   216,   151,    68,
      17,    21,     8,     9,    10,    11,    46,    73,   358,    71,
      93,     3,    95,    79,    73,     3,   265,    76,   267,    39,
      79,   107,     3,     9,    10,    11,    12,    51,    52,    98,
     380,   381,   299,    73,   299,   121,    26,   123,    85,    79,
      26,    85,    89,    72,   127,   294,   299,    50,   299,    78,
      72,   299,    55,    56,   101,    50,    78,    72,   134,   135,
     136,   214,    50,    78,   313,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   128,   235,   334,   131,    77,    92,   306,   292,    77,
     304,   358,    78,   358,   343,    76,    72,   348,   349,   303,
     216,   315,    78,    73,    72,   358,    76,   358,   155,    79,
     358,   158,   188,   380,   381,   380,   381,   270,    73,   188,
      72,   370,    77,    26,   309,    72,    78,   380,   381,   380,
     381,    78,   380,   381,    63,    64,   254,   184,     9,    10,
      11,    12,   225,   212,   213,   298,   350,   216,   165,    72,
     364,   297,    72,    76,   300,    26,    76,    78,     9,    10,
      11,    12,    72,   316,   368,   369,    76,    72,   382,    74,
     384,    59,    60,    61,    62,    26,   329,   121,   331,   123,
       3,   264,   335,    57,    58,   268,   339,    46,   341,   342,
     306,    93,    30,    95,   277,    46,    71,    72,   351,    68,
      69,   354,   355,    49,   357,    71,    72,   254,    65,    80,
     363,   137,   138,   260,    66,     5,    74,    67,     8,    75,
      74,   337,   278,     3,    75,   378,   379,   139,   140,     3,
       0,    47,    48,    78,   145,   146,    26,   306,     3,     9,
      10,    11,    12,   249,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,   338,    26,    73,   314,     3,
      69,    77,    74,    79,   347,    81,   322,    74,   337,   141,
     142,   143,   144,    74,     3,    78,   359,    72,   361,   362,
       3,     4,     5,     6,     7,    78,     9,    10,    11,    12,
      13,    14,    15,    78,    75,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    75,    28,     9,    10,    11,    12,
      74,    72,    78,    70,   334,    70,     3,    77,    71,    71,
      74,    77,    45,    26,    47,    48,    49,    50,    51,    52,
      53,    54,     3,     4,     5,     6,     7,     8,    76,    76,
      74,     3,    75,    70,    15,    77,    77,    75,    71,    71,
      46,    72,    75,    70,    77,    26,    19,    28,    78,    77,
      76,    76,    19,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    75,    77,    47,    48,    49,    50,
      51,    52,    53,    54,    17,    71,    76,    71,   147,    78,
      78,    76,     3,     4,     5,     6,     7,    76,   148,   212,
     149,   307,    13,    14,    15,   213,    77,    18,    19,    20,
      21,    22,    23,    24,    25,    34,    23,    28,    30,   249,
     257,   103,    11,    -1,    -1,    -1,   281,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    47,    48,    49,    50,
      51,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    11,    -1,    -1,
      71,    15,    -1,    -1,    75,    -1,    77,     3,     4,     5,
       6,     7,    26,    -1,    28,    -1,    -1,    13,    14,    15,
      -1,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    28,    47,    48,    49,    50,    51,    52,    53,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      -1,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      74,    -1,    -1,    77,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    11,    -1,    -1,    71,    15,    -1,    -1,    75,
      -1,    77,     3,     4,     5,     6,     7,    26,    -1,    28,
      -1,    -1,    13,    14,    15,    -1,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    28,    47,    48,
      49,    50,    51,    52,    53,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    47,    48,    49,    50,
      51,    52,    53,    54,    -1,    74,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    -1,    -1,    75,    -1,    77,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,
      -1,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    -1,    45,
      15,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      -1,    26,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,
      -1,    77,    47,    48,    49,    50,    51,    52,    53,    54,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    15,    -1,    -1,    -1,    71,     3,     4,     5,
       6,     7,    77,    -1,    -1,    28,    -1,    -1,    -1,    15,
      -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      26,    -1,    28,    15,    47,    48,    49,    50,    51,    52,
      53,    54,    -1,    -1,    26,    -1,    28,    -1,    -1,    -1,
      -1,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      -1,    -1,    75,    -1,    77,    47,    48,    49,    50,    51,
      52,    53,    54,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    15,    -1,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    77,    -1,    -1,    28,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    48,    49,    50,    51,    52,    53,    54,     3,
       4,     5,     6,     7,    -1,    75,    -1,    77,    -1,    -1,
      -1,    15,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    15,    47,    48,    49,    50,    51,    52,    53,
      54,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,
      -1,    -1,    -1,    77,    47,    48,    49,    50,    51,    52,
      53,    54,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    15,    -1,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    77,    -1,    -1,    28,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    47,    48,    49,    50,
      51,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    48,    49,    50,    51,    52,    53,    54,     5,    -1,
      -1,     8,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    10,    11,    12,    26,   107,   109,   110,   114,
     121,   154,   155,   156,   109,     3,    50,    77,   108,   111,
     112,   122,   123,   125,   109,   109,   109,     0,   155,    26,
     124,   126,   122,    71,    72,    46,   107,   109,   157,   158,
      73,    77,   123,   125,    26,    78,   112,   122,     3,     4,
       5,     6,     7,    15,    28,    47,    48,    49,    50,    51,
      52,    53,    54,    75,    77,    84,    85,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   104,   132,   143,   107,    11,    50,    74,   104,   126,
       3,   130,   143,    77,    88,    77,    88,    88,    73,    79,
     133,   134,   135,   136,   137,     5,     8,    26,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,   104,
     105,   113,   115,   117,   131,    47,    48,    73,    77,    79,
      81,    30,    88,    90,    50,    55,    56,    51,    52,    57,
      58,    59,    60,    61,    62,    63,    64,    49,    65,    66,
      67,    68,   103,    75,   104,   126,    74,    74,    11,    50,
      74,   104,    72,    78,    78,   109,   127,   128,   129,   131,
     131,   101,   106,     3,    72,    76,   132,    46,   137,     3,
     118,     5,   115,   116,    72,    78,   116,   116,    78,   105,
      86,    87,   104,     3,     3,   104,    90,    90,    90,    91,
      91,    92,    92,    93,    93,    93,    93,    94,    94,    95,
      96,    97,   102,   102,    69,     3,    13,    14,    18,    19,
      20,    21,    22,    23,    24,    25,    45,    71,    75,   105,
     107,   138,   140,   141,   144,   145,   146,   147,   148,   149,
     153,    74,   104,   104,    74,    74,     3,   122,    78,    72,
      78,    78,    74,    76,   134,    75,   104,    75,    90,    74,
      72,    78,    98,    99,   102,    70,   106,    70,    77,   151,
     152,   150,     3,    71,    71,    71,   105,    77,   142,    71,
      76,   102,    74,    74,    80,   129,   132,     3,   119,   120,
     133,   104,   105,   138,    70,   138,   105,    77,    75,   102,
      77,    71,    71,   105,   143,   146,    46,    72,    76,    72,
      76,   103,   138,    78,   142,   102,   139,   140,   147,   148,
     149,   153,   142,   103,   144,   106,    76,   120,    76,    70,
     138,   143,   144,   102,   143,    78,    76,   102,   102,    76,
      19,   107,   147,   102,   101,   105,   102,    77,   102,   102,
     138,    78,    19,   105,   147,   147,   103,    75,   102,    77,
      78,   102,   102,    17,   102,   139,   105,    71,   105,   105,
     102,   144,    78,   103,   103,   138,    76,    71,    78,    78,
     102,   102,    75,   139,    75,   139,   144,   144,    76,    76
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    83,    84,    84,    84,    84,    84,    84,    84,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    86,    86,
      87,    87,    88,    88,    88,    88,    88,    88,    89,    89,
      89,    89,    89,    89,    90,    90,    91,    91,    91,    91,
      92,    92,    92,    93,    93,    93,    94,    94,    94,    94,
      94,    95,    95,    95,    96,    96,    97,    97,    98,    98,
      99,    99,   100,   100,   101,   101,   102,   103,   104,   104,
     105,   105,   106,   107,   108,   108,   109,   109,   109,   109,
     109,   109,   109,   109,   110,   111,   111,   112,   112,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   114,   114,   115,   115,   115,   116,   116,   117,
     117,   117,   118,   118,   119,   119,   120,   120,   121,   122,
     122,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   124,   124,   125,   125,   126,
     126,   127,   127,   128,   128,   129,   129,   130,   130,   131,
     132,   132,   132,   133,   133,   134,   134,   135,   136,   136,
     137,   137,   138,   138,   138,   138,   138,   138,   139,   139,
     139,   139,   139,   140,   140,   140,   141,   142,   143,   144,
     144,   145,   145,   146,   146,   147,   147,   148,   148,   148,
     149,   149,   149,   149,   149,   149,   149,   149,   150,   151,
     152,   153,   153,   153,   153,   153,   154,   154,   155,   155,
     156,   157,   157,   158,   158
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     3,     1,
       4,     4,     3,     3,     2,     2,     6,     7,     1,     3,
       1,     0,     1,     2,     2,     2,     2,     4,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     1,     3,     1,     3,
       1,     4,     1,     4,     1,     9,     0,     0,     1,     3,
       1,     3,     1,     3,     1,     0,     2,     1,     2,     1,
       2,     1,     2,     1,     1,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     1,     0,     5,
       2,     6,     1,     0,     1,     3,     1,     3,     1,     2,
       1,     1,     3,     4,     5,     4,     3,     6,     5,     6,
       5,     4,     5,     4,     4,     1,     0,     2,     3,     1,
       2,     1,     3,     1,     3,     2,     1,     1,     3,     1,
       1,     3,     4,     2,     4,     1,     0,     2,     1,     2,
       3,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     4,     3,     5,     0,     0,     1,
       0,     1,     3,     1,     1,     2,     1,     8,    11,     5,
      10,    12,    10,    12,    14,    14,    16,    16,     0,     0,
       0,     3,     2,     2,     3,     2,     1,     2,     1,     1,
       7,     1,     0,     1,     2
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
#line 59 "assgn_4_21CS30059_21CS30038.y"
                    {

            (yyval.exp) = new expression();
            (yyval.exp)->loc = (yyvsp[0].pointer);
            (yyval.exp)->type = "non_bool";
            
            }
#line 1894 "y.tab.c"
    break;

  case 3: /* primary-expression: INTEGER  */
#line 66 "assgn_4_21CS30059_21CS30038.y"
                    {
            (yyval.exp) = new expression();
            (yyval.exp)->loc=symbolTable::gentemp("int",convertInttoString((yyvsp[0].intval)));
            quads.emit("=",(yyval.exp)->name,(yyvsp[0].intval));
            //printf("primary-expression-> INTEGER\n");}
        }
#line 1905 "y.tab.c"
    break;

  case 4: /* primary-expression: FLOAT  */
#line 72 "assgn_4_21CS30059_21CS30038.y"
                   {
            (yyval.exp) = new expression();
            (yyval.exp)->loc=symbolTable::gentemp("float",convertFloattoString((yyvsp[0].floatval)));
            quads.emit("=",(yyval.exp)->name,(yyvsp[0].floatval));
            //printf("primary-expression-> FLOAT\n");}
        }
#line 1916 "y.tab.c"
    break;

  case 5: /* primary-expression: CHARACTER_CONSTANT  */
#line 78 "assgn_4_21CS30059_21CS30038.y"
                                {
            (yyval.exp) = new expression();
            (yyval.exp)->loc=symbolTable::gentemp("char",string((yyvsp[0].charval)));
            quads.emit("=",(yyval.exp)->name,string((yyvsp[0].charval)));
            //printf("primary-expression-> CHARACTER_CONSTANT\n");}
        }
#line 1927 "y.tab.c"
    break;

  case 6: /* primary-expression: ENUMERATION_CONST  */
#line 84 "assgn_4_21CS30059_21CS30038.y"
                              {printf("primary-expression-> ENUMERATION_CONST\n");}
#line 1933 "y.tab.c"
    break;

  case 7: /* primary-expression: STRING_LITERAL  */
#line 85 "assgn_4_21CS30059_21CS30038.y"
                            {
            (yyval.exp) = new expression();
            (yyval.exp)->loc=symbolTable::gentemp("ptr",(yyvsp[0].charval));
            //quads.emit($$->loc->name,$1,"=");
            (yyval.exp)->loc->type->arrtype = new ttype("char");
        }
#line 1944 "y.tab.c"
    break;

  case 8: /* primary-expression: LEFT_PARENTHESIS expression RIGHT_PARENTHESIS  */
#line 91 "assgn_4_21CS30059_21CS30038.y"
                                                         {printf("primary-expression-> (expression)\n");}
#line 1950 "y.tab.c"
    break;

  case 9: /* postfix-expression: primary-expression  */
#line 94 "assgn_4_21CS30059_21CS30038.y"
                            {
            (yyval.Array) = new aarray();
            (yyval.Array)->loc = (yyvsp[0].exp)->loc;
            (yyval.Array)->array = (yyval.Array)->loc;
            (yyval.Array)->type = (yyval.Array)->loc->type->arrtype;
        }
#line 1961 "y.tab.c"
    break;

  case 10: /* postfix-expression: postfix-expression LEFT_SQUARE_BRACKET expression RIGHT_SQUARE_BRACKET  */
#line 100 "assgn_4_21CS30059_21CS30038.y"
                                                                                  {
            (yyval.Array) = new aarray();
            (yyval.Array)->loc = symbolTable::gentemp("int");
            (yyval.Array)->type = (yyvsp[-3].Array)->type->arrtype;
            (yyval.Array)->array_type = "arr";
            (yyval.Array)->array = (yyvsp[-3].Array)->array;
            if((yyvsp[-3].Array)->array_type=="arr")
            {
                symbol*temp = symbolTable::gentemp("int");
                int size = sizeoftype((yyval.Array)->type);
                quads.emit("*",temp->name,(yyvsp[-1].exp)->loc->name,convertInttoString(size));
                quads.emit("+",(yyval.Array)->loc->name,(yyvsp[-3].Array)->loc->name,temp->name);
            }
            else
            {
                int size = sizeoftype((yyval.Array)->type);
                quads.emit("*",(yyval.Array)->loc->name,(yyvsp[-1].exp)->loc->name,convertInttoString(size));
            }
        }
#line 1985 "y.tab.c"
    break;

  case 11: /* postfix-expression: postfix-expression LEFT_PARENTHESIS argument-expression-listopt RIGHT_PARENTHESIS  */
#line 119 "assgn_4_21CS30059_21CS30038.y"
                                                                                             {
            (yyval.Array) = new aarray();
            //$$->loc = symbolTable::gentemp($1->type);
            //$$->array_type = "func";
            //$$->Array = $1->Array;
            //$$->type = $1->type;
            (yyval.Array)->Array = symbolTable::gentemp((yyvsp[-3].Array)->type);
            quads.emit("call", (yyval.Array)->Array->name, (yyvsp[-3].Array)->Array->name, convertIntToString((yyvsp[-1].numParams)));
            
        }
#line 2000 "y.tab.c"
    break;

  case 12: /* postfix-expression: postfix-expression DOT IDENTIFIER  */
#line 129 "assgn_4_21CS30059_21CS30038.y"
                                             {printf("postfix-expression-> postfix-expression . IDENTIFIER\n");}
#line 2006 "y.tab.c"
    break;

  case 13: /* postfix-expression: postfix-expression ARROW IDENTIFIER  */
#line 130 "assgn_4_21CS30059_21CS30038.y"
                                               {printf("postfix-expression-> postfix-expression -> IDENTIFIER\n");}
#line 2012 "y.tab.c"
    break;

  case 14: /* postfix-expression: postfix-expression INCREMENT  */
#line 131 "assgn_4_21CS30059_21CS30038.y"
                                        {
            (yyval.Array) = new aarray();
            (yyval.Array)->Array = symbolTable::gentemp((yyvsp[-1].Array)->Array->type);
            quads.emit("=", (yyval.Array)->Array->name, (yyvsp[-1].Array)->Array->name);
            quads.emit("+", (yyvsp[-1].Array)->Array->name, (yyvsp[-1].Array)->Array->name, "1"); 
        }
#line 2023 "y.tab.c"
    break;

  case 15: /* postfix-expression: postfix-expression DECREMENT  */
#line 137 "assgn_4_21CS30059_21CS30038.y"
                                        {
            (yyval.Array) = new aarray();
            (yyval.Array)->Array = symbolTable::gentemp((yyvsp[-1].Array)->Array->type);
            quads.emit("=", (yyval.Array)->Array->name, (yyvsp[-1].Array)->Array->name); 
            quads.emit("-", (yyvsp[-1].Array)->Array->name, (yyvsp[-1].Array)->Array->name, "1");
        }
#line 2034 "y.tab.c"
    break;

  case 16: /* postfix-expression: LEFT_PARENTHESIS type-name RIGHT_PARENTHESIS LEFT_CURLY_BRACKET initializer-list RIGHT_CURLY_BRACKET  */
#line 143 "assgn_4_21CS30059_21CS30038.y"
                                                                                                                {printf("postfix-expression-> (type-name) {initializer-list}\n");}
#line 2040 "y.tab.c"
    break;

  case 17: /* postfix-expression: LEFT_PARENTHESIS type-name RIGHT_PARENTHESIS LEFT_CURLY_BRACKET initializer-list COMMA RIGHT_CURLY_BRACKET  */
#line 144 "assgn_4_21CS30059_21CS30038.y"
                                                                                                                      {printf("postfix-expression-> (type-name) {initializer-list,}\n");}
#line 2046 "y.tab.c"
    break;

  case 18: /* argument-expression-list: assignment-expression  */
#line 147 "assgn_4_21CS30059_21CS30038.y"
                               {
            (yyval.numParams) = 1;
            quads.emit("param",(yyvsp[0].exp)->loc->name);
        }
#line 2055 "y.tab.c"
    break;

  case 19: /* argument-expression-list: argument-expression-list COMMA assignment-expression  */
#line 151 "assgn_4_21CS30059_21CS30038.y"
                                                                {
            (yyval.numParams) = (yyvsp[-2].numParams)+1;
            quads.emit("param",(yyvsp[0].exp)->loc->name);
        }
#line 2064 "y.tab.c"
    break;

  case 20: /* argument-expression-listopt: argument-expression-list  */
#line 157 "assgn_4_21CS30059_21CS30038.y"
                                  {
            (yyval.numParams) = (yyvsp[0].numParams);
        }
#line 2072 "y.tab.c"
    break;

  case 21: /* argument-expression-listopt: %empty  */
#line 160 "assgn_4_21CS30059_21CS30038.y"
           {(yyval.numParams) = 0;}
#line 2078 "y.tab.c"
    break;

  case 22: /* unary-expression: postfix-expression  */
#line 163 "assgn_4_21CS30059_21CS30038.y"
                            {
            (yyval.Array) = (yyvsp[0].Array);
        }
#line 2086 "y.tab.c"
    break;

  case 23: /* unary-expression: INCREMENT unary-expression  */
#line 166 "assgn_4_21CS30059_21CS30038.y"
                                      {
            quads.emit("+", (yyvsp[0].Array)->Array->name, (yyvsp[0].Array)->Array->name, "1"); 
            (yyval.Array) = (yyvsp[0].Array);
        }
#line 2095 "y.tab.c"
    break;

  case 24: /* unary-expression: DECREMENT unary-expression  */
#line 170 "assgn_4_21CS30059_21CS30038.y"
                                      {
            quads. emit("-", (yyvsp[0].Array)->Array->name, (yyvsp[0].Array)->Array->name, "1");
            (yyval.Array) = (yyvsp[0].Array);
        }
#line 2104 "y.tab.c"
    break;

  case 25: /* unary-expression: unary-operator cast-expression  */
#line 174 "assgn_4_21CS30059_21CS30038.y"
                                          {
            (yyval.Array) = new aarray();
            switch((yyvsp[-1].operator)):
                case '&':
                    (yyval.Array)->Array = symbolTable::gentemp(new ttype("ptr"));
                    (yyval.Array)->Array->type->arrtype = (yyvsp[0].Array)->Array->type;
                    quads.emit((yyval.Array)->Array->name,(yyvsp[0].Array)->Array->name,"= &");
                    break;
                case '*':
                    (yyval.Array)->Array = (yyvsp[0].Array)->Array;
                    (yyval.Array)->loc = symbolTable::gentemp((yyvsp[0].Array)->Array->type->arrtype);
                    (yyval.Array)->array_type = "ptr";
                    quads.emit("= *", (yyval.Array)->loc->name, (yyvsp[0].Array)->Array->name);  
                    break;
                case '+':
                    (yyval.Array) = (yyvsp[0].Array);
                    break;
                case '-':
                    (yyval.Array)->Array = symbolTable::gentemp((yyvsp[0].Array)->Array->type->type);
                    quads.emit("= -", (yyval.Array)->Array->name, (yyvsp[0].Array)->Array->name);   
                    break;
                case '~':
                    (yyval.Array)->Array = symbolTable::gentemp((yyvsp[0].Array)->Array->type->type);
                    quads.emit("= ~", (yyval.Array)->Array->name, (yyvsp[0].Array)->Array->name);
                    break;
                case '!':
                    (yyval.Array)->Array = symbolTable::gentemp((yyvsp[0].Array)->Array->type->type);
                    quads.emit("= !", (yyval.Array)->Array->name, (yyvsp[0].Array)->Array->name);
                    break;
        }
#line 2139 "y.tab.c"
    break;

  case 26: /* unary-expression: SIZEOF unary-expression  */
#line 204 "assgn_4_21CS30059_21CS30038.y"
                                   {printf("unary-expression-> SIZEOF unary-expression\n");}
#line 2145 "y.tab.c"
    break;

  case 27: /* unary-expression: SIZEOF LEFT_PARENTHESIS type-name RIGHT_PARENTHESIS  */
#line 205 "assgn_4_21CS30059_21CS30038.y"
                                                               {printf("unary-expression-> SIZEOF (type-name)\n");}
#line 2151 "y.tab.c"
    break;

  case 28: /* unary-operator: AND  */
#line 208 "assgn_4_21CS30059_21CS30038.y"
             {
            (yyval.operator) = '&';
        }
#line 2159 "y.tab.c"
    break;

  case 29: /* unary-operator: STAR  */
#line 211 "assgn_4_21CS30059_21CS30038.y"
                {
            (yyval.operator) = '*';
        }
#line 2167 "y.tab.c"
    break;

  case 30: /* unary-operator: PLUS  */
#line 214 "assgn_4_21CS30059_21CS30038.y"
                {
            (yyval.operator) = '+';
        }
#line 2175 "y.tab.c"
    break;

  case 31: /* unary-operator: MINUS  */
#line 217 "assgn_4_21CS30059_21CS30038.y"
                 {
            (yyval.operator) = '-';
        }
#line 2183 "y.tab.c"
    break;

  case 32: /* unary-operator: TILDE  */
#line 220 "assgn_4_21CS30059_21CS30038.y"
                 {
            (yyval.operator) = '~';
        }
#line 2191 "y.tab.c"
    break;

  case 33: /* unary-operator: NOT  */
#line 223 "assgn_4_21CS30059_21CS30038.y"
               {
            (yyval.operator) = '!';
        }
#line 2199 "y.tab.c"
    break;

  case 34: /* cast-expression: unary-expression  */
#line 228 "assgn_4_21CS30059_21CS30038.y"
                          {
            (yyval.Array) = (yyvsp[0].Array);
        }
#line 2207 "y.tab.c"
    break;

  case 35: /* cast-expression: LEFT_PARENTHESIS type-name RIGHT_PARENTHESIS cast-expression  */
#line 231 "assgn_4_21CS30059_21CS30038.y"
                                                                        {
            (yyval.Array) = new aarray();
            (yyval.Array)->Array = convertType((yyvsp[0].Array)->Array, varType);
        }
#line 2216 "y.tab.c"
    break;

  case 36: /* multiplicative-expression: cast-expression  */
#line 237 "assgn_4_21CS30059_21CS30038.y"
                         {
            (yyval.exp) = new expression();
            if((yyvsp[0].Array)->array_type=="arr")
            {
                (yyval.exp)->loc = symbolTable::gentemp((yyvsp[0].Array)->loc->type);
                quads. emit("=[]", (yyval.exp)->loc->name, (yyvsp[0].Array)->Array->name, (yyvsp[0].Array)->loc->name);
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
#line 2237 "y.tab.c"
    break;

  case 37: /* multiplicative-expression: multiplicative-expression STAR cast-expression  */
#line 253 "assgn_4_21CS30059_21CS30038.y"
                                                          {
            if(typecheck((yyvsp[-2].exp)->loc,(yyvsp[0].Array)->Array))
            {
                (yyval.exp) = new expression();
                (yyval.exp)->loc = symbolTable::gentemp(new ttype((yyvsp[-2].exp)->loc->type->type));
                quads.emit("*", (yyval.exp)->loc->name, (yyvsp[-2].exp)->loc->name, (yyvsp[0].Array)->Array->name);    
            }
            else
            {
                yyerror("Type mismatch");
            }
        }
#line 2254 "y.tab.c"
    break;

  case 38: /* multiplicative-expression: multiplicative-expression DIV cast-expression  */
#line 265 "assgn_4_21CS30059_21CS30038.y"
                                                         {
            if(typecheck((yyvsp[-2].exp)->loc,(yyvsp[0].Array)->Array))
            {
                (yyval.exp) = new expression();
                (yyval.exp)->loc = symbolTable::gentemp(new ttype((yyvsp[-2].exp)->loc->type->type));
                quads.emit("/", (yyval.exp)->loc->name, (yyvsp[-2].exp)->loc->name, (yyvsp[0].Array)->Array->name);
            }
            else
            {
                yyerror("Type mismatch");
            }
        }
#line 2271 "y.tab.c"
    break;

  case 39: /* multiplicative-expression: multiplicative-expression MOD cast-expression  */
#line 277 "assgn_4_21CS30059_21CS30038.y"
                                                         {
            if(typecheck((yyvsp[-2].exp)->loc,(yyvsp[0].Array)->array))
            {
                (yyval.exp) = new expression();
                (yyval.exp)->loc = symbolTable::gentemp(new ttype((yyvsp[-2].exp)->loc->type->type));
                quads.emit("%", (yyval.exp)->loc->name, (yyvsp[-2].exp)->loc->name, (yyvsp[0].Array)->Array->name);   
            }
        }
#line 2284 "y.tab.c"
    break;

  case 40: /* additive-expression: multiplicative-expression  */
#line 287 "assgn_4_21CS30059_21CS30038.y"
                                   {
            (yyval.exp) = (yyvsp[0].exp);
        }
#line 2292 "y.tab.c"
    break;

  case 41: /* additive-expression: additive-expression PLUS multiplicative-expression  */
#line 290 "assgn_4_21CS30059_21CS30038.y"
                                                              {
            if(typecheck((yyvsp[-2].exp)->loc,(yyvsp[0].exp)->loc))
            {
                (yyval.exp) = new expression();
                (yyval.exp)->loc = symbolTable::gentemp(new ttype((yyvsp[-2].exp)->loc->type->type));
                quads.emit("+", (yyval.exp)->loc->name, (yyvsp[-2].exp)->loc->name, (yyvsp[0].exp)->loc->name);    
            }
            else
            {
                yyerror("Type mismatch");
            }
        }
#line 2309 "y.tab.c"
    break;

  case 42: /* additive-expression: additive-expression MINUS multiplicative-expression  */
#line 302 "assgn_4_21CS30059_21CS30038.y"
                                                               {
            if(typecheck((yyvsp[-2].exp)->loc,(yyvsp[0].exp)->loc))
            {
                (yyval.exp) = new expression();
                (yyval.exp)->loc = symbolTable::gentemp(new ttype((yyvsp[-2].exp)->loc->type->type));
                quads.emit("-", (yyval.exp)->loc->name, (yyvsp[-2].exp)->loc->name, (yyvsp[0].exp)->loc->name);           
            }
            else
            {
                yyerror("Type mismatch");
            }
        }
#line 2326 "y.tab.c"
    break;

  case 43: /* shift-expression: additive-expression  */
#line 316 "assgn_4_21CS30059_21CS30038.y"
                             {
            (yyval.exp) = (yyvsp[0].exp);
        }
#line 2334 "y.tab.c"
    break;

  case 44: /* shift-expression: shift-expression LEFT_SHIFT additive-expression  */
#line 319 "assgn_4_21CS30059_21CS30038.y"
                                                           {
            if((yyvsp[0].exp)->loc->type->type=="int")
            {
                (yyval.exp) = new expression();
                (yyval.exp)->loc = symbolTable::gentemp(new ttype("int"));
                quads.emit("<<", (yyval.exp)->loc->name, (yyvsp[-2].exp)->loc->name, (yyvsp[0].exp)->loc->name);  
            }
            else
            {
                yyerror("Type Error, shift expression can only be applied to integer shift values");
            }
        }
#line 2351 "y.tab.c"
    break;

  case 45: /* shift-expression: shift-expression RIGHT_SHIFT additive-expression  */
#line 331 "assgn_4_21CS30059_21CS30038.y"
                                                            {
            if((yyvsp[0].exp)->loc->type->type=="int")
            {
                (yyval.exp) = new expression();
                (yyval.exp)->loc = symbolTable::gentemp(new ttype("int"));
                quads.emit(">>", (yyval.exp)->loc->name, (yyvsp[-2].exp)->loc->name, (yyvsp[0].exp)->loc->name); 
            }
            else
            {
                yyerror("Type Error, shift expression can only be applied to integer shift values");
            }
        }
#line 2368 "y.tab.c"
    break;

  case 46: /* relational-expression: shift-expression  */
#line 345 "assgn_4_21CS30059_21CS30038.y"
                          {
            (yyval.exp) = (yyvsp[0].exp);
        }
#line 2376 "y.tab.c"
    break;

  case 47: /* relational-expression: relational-expression LESS_THAN shift-expression  */
#line 348 "assgn_4_21CS30059_21CS30038.y"
                                                            {
            if(typecheck((yyvsp[-2].exp)->loc,(yyvsp[0].exp)->loc))
            {
                (yyval.exp) = new expression();
                (yyval.exp)->type = "bool";
                (yyval.exp)->truelist = makelist(nextinstr());
                (yyval.exp)->falselist = makelist(nextinstr()+1);
                quads.emit("<","",(yyvsp[-2].exp)->loc->name,(yyvsp[0].exp)->loc->name);
                quads.emit("goto","_");
            }
            else
            {
                yyerror("Type mismatch");
            }
        }
#line 2396 "y.tab.c"
    break;

  case 48: /* relational-expression: relational-expression GREATER_THAN shift-expression  */
#line 363 "assgn_4_21CS30059_21CS30038.y"
                                                               {
            if(typecheck((yyvsp[-2].exp)->loc,(yyvsp[0].exp)->loc))
            {
                (yyval.exp) = new expression();
                (yyval.exp)->type = "bool";
                (yyval.exp)->truelist = makelist(nextinstr());
                (yyval.exp)->falselist = makelist(nextinstr()+1);
                quads.emit(">","",(yyvsp[-2].exp)->loc->name,(yyvsp[0].exp)->loc->name);
                quads.emit("goto","_");
            }
            else
            {
                yyerror("Type mismatch");
            }
        }
#line 2416 "y.tab.c"
    break;

  case 49: /* relational-expression: relational-expression LESS_THAN_EQUAL shift-expression  */
#line 378 "assgn_4_21CS30059_21CS30038.y"
                                                                  {
            if(typecheck((yyvsp[-2].exp)->loc,(yyvsp[0].exp)->loc))
            {
                (yyval.exp) = new expression();
                (yyval.exp)->type = "bool";
                (yyval.exp)->truelist = makelist(nextinstr());
                (yyval.exp)->falselist = makelist(nextinstr()+1);
                quads.emit("<=","",(yyvsp[-2].exp)->loc->name,(yyvsp[0].exp)->loc->name);
                quads.emit("goto","_");
            }
            else
            {
                yyerror("Type mismatch");
            }
        }
#line 2436 "y.tab.c"
    break;

  case 50: /* relational-expression: relational-expression GREATER_THAN_EQUAL shift-expression  */
#line 393 "assgn_4_21CS30059_21CS30038.y"
                                                                     {
            if(typecheck((yyvsp[-2].exp)->loc,(yyvsp[0].exp)->loc))
            {
                (yyval.exp) = new expression();
                (yyval.exp)->type = "bool";
                (yyval.exp)->truelist = makelist(nextinstr());
                (yyval.exp)->falselist = makelist(nextinstr()+1);
                quads.emit(">=","",(yyvsp[-2].exp)->loc->name,(yyvsp[0].exp)->loc->name);
                quads.emit("goto","_");
            }
            else
            {
                yyerror("Type mismatch");
            }
        }
#line 2456 "y.tab.c"
    break;

  case 51: /* equality-expression: relational-expression  */
#line 410 "assgn_4_21CS30059_21CS30038.y"
                               {
            (yyval.exp) = (yyvsp[0].exp);
        }
#line 2464 "y.tab.c"
    break;

  case 52: /* equality-expression: equality-expression EQUAL_TO relational-expression  */
#line 413 "assgn_4_21CS30059_21CS30038.y"
                                                              {
            if(typecheck((yyvsp[-2].exp)->loc,(yyvsp[0].exp)->loc))
            {
                (yyval.exp) = new expression();
                convertBooltoInt((yyvsp[-2].exp));
                convertBooltoInt((yyvsp[0].exp));
                (yyval.exp)->type = "bool";
                (yyval.exp)->truelist = makelist(nextinstr());
                (yyval.exp)->falselist = makelist(nextinstr()+1);
                quads.emit("==","",(yyvsp[-2].exp)->loc->name,(yyvsp[0].exp)->loc->name);
                quads.emit("goto","_");
            }
            else
            {
                yyerror("Type mismatch");
            }
        }
#line 2486 "y.tab.c"
    break;

  case 53: /* equality-expression: equality-expression NOT_EQUAL_TO relational-expression  */
#line 430 "assgn_4_21CS30059_21CS30038.y"
                                                                  {
            if(typecheck((yyvsp[-2].exp)->loc,(yyvsp[0].exp)->loc))
            {
                (yyval.exp) = new expression();
                convertBooltoInt((yyvsp[-2].exp));
                convertBooltoInt((yyvsp[0].exp));
                (yyval.exp)->type = "bool";
                (yyval.exp)->truelist = makelist(nextinstr());
                (yyval.exp)->falselist = makelist(nextinstr()+1);
                quads.emit("!=","",(yyvsp[-2].exp)->loc->name,(yyvsp[0].exp)->loc->name);
                quads.emit("goto","_");
            }
            else
            {
                yyerror("Type mismatch");
            }
        }
#line 2508 "y.tab.c"
    break;

  case 54: /* AND-expression: equality-expression  */
#line 449 "assgn_4_21CS30059_21CS30038.y"
                             {
            (yyval.exp) = (yyvsp[0].exp);
        }
#line 2516 "y.tab.c"
    break;

  case 55: /* AND-expression: AND-expression AND equality-expression  */
#line 452 "assgn_4_21CS30059_21CS30038.y"
                                                  {
            if(typecheck((yyvsp[-2].exp)->loc,(yyvsp[0].exp)->loc))
            {
                (yyval.exp) = new expression();
                convertBooltoInt((yyvsp[-2].exp));
                convertBooltoInt((yyvsp[0].exp));
                (yyval.exp)->type = "notbool";
                (yyval.exp)->loc = symbolTable::gentemp(new ttype("int"));
                quads.emit("&", (yyval.exp)->loc->name, (yyvsp[-2].exp)->loc->name, (yyvsp[0].exp)->loc->name);  
            }
            else
            {
                yyerror("Type mismatch");
            }
        }
#line 2536 "y.tab.c"
    break;

  case 56: /* exclusive-OR-expression: AND-expression  */
#line 469 "assgn_4_21CS30059_21CS30038.y"
                        {
            (yyval.exp) = (yyvsp[0].exp);
        }
#line 2544 "y.tab.c"
    break;

  case 57: /* exclusive-OR-expression: exclusive-OR-expression XOR AND-expression  */
#line 472 "assgn_4_21CS30059_21CS30038.y"
                                                      {
            if(typecheck((yyvsp[-2].exp)->loc,(yyvsp[0].exp)->loc))
            {
                (yyval.exp) = new expression();
                convertBooltoInt((yyvsp[-2].exp));
                convertBooltoInt((yyvsp[0].exp));
                (yyval.exp)->type = "notbool";
                (yyval.exp)->loc = symbolTable::gentemp(new ttype("int"));
                quads.emit("^", (yyval.exp)->loc->name, (yyvsp[-2].exp)->loc->name, (yyvsp[0].exp)->loc->name);
            }
            else
            {
                yyerror("Type mismatch");
            }
        }
#line 2564 "y.tab.c"
    break;

  case 58: /* inclusive-OR-expression: exclusive-OR-expression  */
#line 489 "assgn_4_21CS30059_21CS30038.y"
                                 {
            (yyval.exp) = (yyvsp[0].exp);
        }
#line 2572 "y.tab.c"
    break;

  case 59: /* inclusive-OR-expression: inclusive-OR-expression OR exclusive-OR-expression  */
#line 492 "assgn_4_21CS30059_21CS30038.y"
                                                              {
            if(typecheck((yyvsp[-2].exp)->loc,(yyvsp[0].exp)->loc))
            {
                (yyval.exp) = new expression();
                convertBooltoInt((yyvsp[-2].exp));
                convertBooltoInt((yyvsp[0].exp));
                (yyval.exp)->type = "notbool";
                (yyval.exp)->loc = symbolTable::gentemp(new ttype("int"));
                quads.emit("|", (yyval.exp)->loc->name, (yyvsp[-2].exp)->loc->name, (yyvsp[0].exp)->loc->name); 
            }
            else
            {
                yyerror("Type mismatch");
            }
        }
#line 2592 "y.tab.c"
    break;

  case 60: /* logical-AND-expression: inclusive-OR-expression  */
#line 509 "assgn_4_21CS30059_21CS30038.y"
                                 {
            (yyval.exp) = (yyvsp[0].exp);
        }
#line 2600 "y.tab.c"
    break;

  case 61: /* logical-AND-expression: logical-AND-expression AND_AND M inclusive-OR-expression  */
#line 512 "assgn_4_21CS30059_21CS30038.y"
                                                                    {
            
            {
                (yyval.exp) = new expression();
                convertInttoBool((yyvsp[-3].exp));
                convertInttoBool((yyvsp[0].exp));
                (yyval.exp)->type = "bool";
                backpatch((yyvsp[-3].exp)->truelist,(yyvsp[-1].intval));
                (yyval.exp)->truelist = (yyvsp[0].exp)->truelist;
                (yyval.exp)->falselist = merge((yyvsp[-3].exp)->falselist,(yyvsp[0].exp)->falselist);
            }
        }
#line 2617 "y.tab.c"
    break;

  case 62: /* logical-OR-expression: logical-AND-expression  */
#line 526 "assgn_4_21CS30059_21CS30038.y"
                                {
            (yyval.exp) = (yyvsp[0].exp);
        }
#line 2625 "y.tab.c"
    break;

  case 63: /* logical-OR-expression: logical-OR-expression OR_OR M logical-AND-expression  */
#line 529 "assgn_4_21CS30059_21CS30038.y"
                                                                {
            
            {
                (yyval.exp) = new expression();
                convertInttoBool((yyvsp[-3].exp));
                convertIntoBool((yyvsp[0].exp));
                (yyval.exp)->type = "bool";
                backpatch((yyvsp[-3].exp)->falselist,(yyvsp[-1].intval));
                (yyval.exp)->falselist = (yyvsp[0].exp)->falselist;
                (yyval.exp)->truelist = merge((yyvsp[-3].exp)->truelist,(yyvsp[0].exp)->truelist);
            }
        }
#line 2642 "y.tab.c"
    break;

  case 64: /* conditional-expression: logical-OR-expression  */
#line 543 "assgn_4_21CS30059_21CS30038.y"
                               {
            (yyval.exp) = (yyvsp[0].exp);
        }
#line 2650 "y.tab.c"
    break;

  case 65: /* conditional-expression: logical-OR-expression N QUESTION M expression N COLON M conditional-expression  */
#line 546 "assgn_4_21CS30059_21CS30038.y"
                                                                                          {
            (yyval.exp) = new expression;
            (yyval.exp)->loc = symbolTable::gentemp((yyvsp[-4].exp)->loc->type);
            (yyval.exp)->loc->update((yyvsp[-4].exp)->loc->type);
            quads.emit("=", (yyval.exp)->loc->name, (yyvsp[0].exp)->loc->name); 
            list<int> l1 = makelist(nextinstr());
            quads.emit("goto", "");
            backpatch((yyvsp[-3].stmt)->nextlist,nextinstr());
            quads.emit("=", (yyval.exp)->loc->name, (yyvsp[-4].exp)->loc->name);
            list<int> l2 = makelist(nextinstr());
            l1=merge(l1,l2);
            quads.emit("goto","");
            backpatch((yyvsp[-7].stmt)->nextlist, nextinstr());               // Backpatching
            convertIntToBool((yyvsp[-8].exp));                               // Convert expression to bool
            backpatch((yyvsp[-8].exp)->truelist, (yyvsp[-5].intval));                        // When $1 is true, control goes to $4 (expression)
            backpatch((yyvsp[-8].exp)->falselist, (yyvsp[-1].intval));                       // When $1 is false, control goes to $8 (conditional_expression)
            backpatch(l1, nextinstr());
        }
#line 2673 "y.tab.c"
    break;

  case 66: /* M: %empty  */
#line 566 "assgn_4_21CS30059_21CS30038.y"
    {
        (yyval.intval)=nextinstr();
    }
#line 2681 "y.tab.c"
    break;

  case 67: /* N: %empty  */
#line 571 "assgn_4_21CS30059_21CS30038.y"
    {
        (yyval.stmt) = new statement();
        (yyval.stmt)->nextlist = makelist(nextinstr());
        quads.emit("goto","");
    }
#line 2691 "y.tab.c"
    break;

  case 68: /* assignment-expression: conditional-expression  */
#line 578 "assgn_4_21CS30059_21CS30038.y"
                                {
            (yyval.exp) = (yyvsp[0].exp);
        }
#line 2699 "y.tab.c"
    break;

  case 69: /* assignment-expression: unary-expression ASSIGNMENT_OPERATOR assignment-expression  */
#line 581 "assgn_4_21CS30059_21CS30038.y"
                                                                      {
            if((yyvsp[-2].Array)->array_type=="arr")
            {
                (yyvsp[0].exp)->loc=convertType((yyvsp[0].exp)->loc,(yyvsp[-2].Array)->type->type);
                quads.emit("[]=", (yyvsp[-2].Array)->Array->name, (yyvsp[-2].Array)->loc->name, (yyvsp[0].exp)->loc->name);
            }
            else if((yyvsp[-2].Array)->array_type="ptr")
            {
                quads.emit("*=", (yyvsp[-2].Array)->Array->name, (yyvsp[0].exp)->loc->name);
            }
            else
            {
                (yyvsp[0].exp)->loc=convertType((yyvsp[0].exp)->loc,(yyvsp[-2].Array)->Array->type->type);
                quads.emit("=", (yyvsp[-2].Array)->Array->name, (yyvsp[0].exp)->loc->name);
            }
            (yyval.exp) = (yyvsp[0].exp);
        }
#line 2721 "y.tab.c"
    break;

  case 70: /* expression: assignment-expression  */
#line 600 "assgn_4_21CS30059_21CS30038.y"
                               {
            (yyval.exp) = (yyvsp[0].exp);
        }
#line 2729 "y.tab.c"
    break;

  case 71: /* expression: expression COMMA assignment-expression  */
#line 603 "assgn_4_21CS30059_21CS30038.y"
                                                  {printf("expression-> expression , assignment-expression\n");}
#line 2735 "y.tab.c"
    break;

  case 72: /* constant-expression: conditional-expression  */
#line 606 "assgn_4_21CS30059_21CS30038.y"
                                {printf("constant-expression-> conditional-expression\n");}
#line 2741 "y.tab.c"
    break;

  case 73: /* declaration: declaration-specifiers init-declarator-listopt SEMICOLON  */
#line 609 "assgn_4_21CS30059_21CS30038.y"
                                                                  {printf("declaration-> declaration-specifiers init-declarator-listopt ;\n");}
#line 2747 "y.tab.c"
    break;

  case 74: /* init-declarator-listopt: init-declarator-list  */
#line 612 "assgn_4_21CS30059_21CS30038.y"
                              {printf("init-declarator-listopt-> init-declarator-list\n");}
#line 2753 "y.tab.c"
    break;

  case 75: /* init-declarator-listopt: %empty  */
#line 613 "assgn_4_21CS30059_21CS30038.y"
                 {printf("init-declarator-listopt-> \n");}
#line 2759 "y.tab.c"
    break;

  case 76: /* declaration-specifiers: storage-class-specifier declaration-specifiers  */
#line 616 "assgn_4_21CS30059_21CS30038.y"
                                                        {printf("declaration-specifiers-> storage-class-specifier declaration-specifiers\n");}
#line 2765 "y.tab.c"
    break;

  case 77: /* declaration-specifiers: storage-class-specifier  */
#line 617 "assgn_4_21CS30059_21CS30038.y"
                                   {printf("declaration-specifiers-> storage-class-specifier\n");}
#line 2771 "y.tab.c"
    break;

  case 78: /* declaration-specifiers: TYPE_SPECIFIER_TOKEN declaration-specifiers  */
#line 618 "assgn_4_21CS30059_21CS30038.y"
                                                       {printf("declaration-specifiers-> type-specifier declaration-specifiers\n");}
#line 2777 "y.tab.c"
    break;

  case 79: /* declaration-specifiers: TYPE_SPECIFIER_TOKEN  */
#line 619 "assgn_4_21CS30059_21CS30038.y"
                                {printf("declaration-specifiers-> type-specifier\n");}
#line 2783 "y.tab.c"
    break;

  case 80: /* declaration-specifiers: type-qualifier declaration-specifiers  */
#line 620 "assgn_4_21CS30059_21CS30038.y"
                                                 {printf("declaration-specifiers-> type-qualifier declaration-specifiers\n");}
#line 2789 "y.tab.c"
    break;

  case 81: /* declaration-specifiers: type-qualifier  */
#line 621 "assgn_4_21CS30059_21CS30038.y"
                          {printf("declaration-specifiers-> type-qualifier\n");}
#line 2795 "y.tab.c"
    break;

  case 82: /* declaration-specifiers: function-specifier declaration-specifiers  */
#line 622 "assgn_4_21CS30059_21CS30038.y"
                                                     {printf("declaration-specifiers-> function-specifier declaration-specifiers\n");}
#line 2801 "y.tab.c"
    break;

  case 83: /* declaration-specifiers: function-specifier  */
#line 623 "assgn_4_21CS30059_21CS30038.y"
                              {printf("declaration-specifiers-> function-specifier\n");}
#line 2807 "y.tab.c"
    break;

  case 84: /* type-qualifier: TYPE_QUALIFIER  */
#line 626 "assgn_4_21CS30059_21CS30038.y"
                        {printf("type-qualifier-> type-qualifier-token\n");}
#line 2813 "y.tab.c"
    break;

  case 85: /* init-declarator-list: init-declarator  */
#line 629 "assgn_4_21CS30059_21CS30038.y"
                         {printf("init-declarator-list-> init-declarator\n");}
#line 2819 "y.tab.c"
    break;

  case 86: /* init-declarator-list: init-declarator-list COMMA init-declarator  */
#line 630 "assgn_4_21CS30059_21CS30038.y"
                                                      {printf("init-declarator-list-> init-declarator-list , init-declarator\n");}
#line 2825 "y.tab.c"
    break;

  case 87: /* init-declarator: declarator  */
#line 633 "assgn_4_21CS30059_21CS30038.y"
                    {
            (yyval.pointer) = (yyvsp[0].pointer);
        }
#line 2833 "y.tab.c"
    break;

  case 88: /* init-declarator: declarator EQUALS initializer  */
#line 636 "assgn_4_21CS30059_21CS30038.y"
                                         {
            if((yyvsp[0].numParams)->value !="")
            {
                (yyvsp[-2].pointer)->value = (yyvsp[0].numParams)->value;
            }
            quads.emit("=", (yyvsp[-2].pointer)->name, (yyvsp[0].numParams)->name);
        }
#line 2845 "y.tab.c"
    break;

  case 89: /* type-specifier: VOID  */
#line 645 "assgn_4_21CS30059_21CS30038.y"
            {
            vartype = "void";
        }
#line 2853 "y.tab.c"
    break;

  case 90: /* type-specifier: CHAR  */
#line 648 "assgn_4_21CS30059_21CS30038.y"
              {
            vartype = "char";
        }
#line 2861 "y.tab.c"
    break;

  case 91: /* type-specifier: SHORT  */
#line 651 "assgn_4_21CS30059_21CS30038.y"
               {
            vartype = "short";
        }
#line 2869 "y.tab.c"
    break;

  case 92: /* type-specifier: INT  */
#line 654 "assgn_4_21CS30059_21CS30038.y"
             {
            vartype = "int";
        }
#line 2877 "y.tab.c"
    break;

  case 93: /* type-specifier: LONG  */
#line 657 "assgn_4_21CS30059_21CS30038.y"
              {
            vartype = "long";
        }
#line 2885 "y.tab.c"
    break;

  case 94: /* type-specifier: FLOAT  */
#line 660 "assgn_4_21CS30059_21CS30038.y"
               {
            vartype = "float";
        }
#line 2893 "y.tab.c"
    break;

  case 95: /* type-specifier: DOUBLE  */
#line 663 "assgn_4_21CS30059_21CS30038.y"
                {
            vartype = "double";
        }
#line 2901 "y.tab.c"
    break;

  case 96: /* type-specifier: SIGNED  */
#line 666 "assgn_4_21CS30059_21CS30038.y"
                {
            vartype = "signed";
        }
#line 2909 "y.tab.c"
    break;

  case 97: /* type-specifier: UNSIGNED  */
#line 669 "assgn_4_21CS30059_21CS30038.y"
                  {
            vartype = "unsigned";
        }
#line 2917 "y.tab.c"
    break;

  case 98: /* type-specifier: BOOL  */
#line 672 "assgn_4_21CS30059_21CS30038.y"
              {
            vartype = "bool";
        }
#line 2925 "y.tab.c"
    break;

  case 99: /* type-specifier: COMPLEX  */
#line 675 "assgn_4_21CS30059_21CS30038.y"
                 {
            vartype = "complex";
        }
#line 2933 "y.tab.c"
    break;

  case 100: /* type-specifier: IMAGINARY  */
#line 678 "assgn_4_21CS30059_21CS30038.y"
                   {
            vartype = "imaginary";
        }
#line 2941 "y.tab.c"
    break;

  case 101: /* type-specifier: enum-specifier  */
#line 681 "assgn_4_21CS30059_21CS30038.y"
                        {
            printf("type-specifier-> enum-specifier\n");
        }
#line 2949 "y.tab.c"
    break;

  case 102: /* storage-class-specifier: STORAGE_CLASS_SPECIFIER  */
#line 686 "assgn_4_21CS30059_21CS30038.y"
                                {printf("storage-class-specifier-> storage_class_specifier_token\n");}
#line 2955 "y.tab.c"
    break;

  case 103: /* storage-class-specifier: STATIC_TOKEN  */
#line 687 "assgn_4_21CS30059_21CS30038.y"
                       {printf("storage-class-specifier-> storage_class_specifier_token\n");}
#line 2961 "y.tab.c"
    break;

  case 104: /* specifier-qualifier-list: type-specifier specifier-qualifier-listopt  */
#line 690 "assgn_4_21CS30059_21CS30038.y"
                                                   {printf("specifier-qualifier-list-> type-specifier specifier-qualifier-listopt\n");}
#line 2967 "y.tab.c"
    break;

  case 105: /* specifier-qualifier-list: enum-specifier specifier-qualifier-listopt  */
#line 691 "assgn_4_21CS30059_21CS30038.y"
                                                     {printf("specifier-qualifier-list-> enum-specifier specifier-qualifier-listopt\n");}
#line 2973 "y.tab.c"
    break;

  case 106: /* specifier-qualifier-list: TYPE_QUALIFIER specifier-qualifier-listopt  */
#line 692 "assgn_4_21CS30059_21CS30038.y"
                                                     {printf("specifier-qualifier-list-> type-qualifier specifier-qualifier-listopt\n");}
#line 2979 "y.tab.c"
    break;

  case 107: /* specifier-qualifier-listopt: specifier-qualifier-list  */
#line 695 "assgn_4_21CS30059_21CS30038.y"
                                 {printf("specifier-qualifier-listopt-> specifier-qualifier-list\n");}
#line 2985 "y.tab.c"
    break;

  case 108: /* specifier-qualifier-listopt: %empty  */
#line 696 "assgn_4_21CS30059_21CS30038.y"
                 {printf("specifier-qualifier-listopt-> \n");}
#line 2991 "y.tab.c"
    break;

  case 109: /* enum-specifier: ENUM identifieropt LEFT_CURLY_BRACKET enumerator-list RIGHT_CURLY_BRACKET  */
#line 699 "assgn_4_21CS30059_21CS30038.y"
                                                                                  {printf("enum-specifier-> enum IDENTIFIERopt {enumerator-list}\n");}
#line 2997 "y.tab.c"
    break;

  case 110: /* enum-specifier: ENUM IDENTIFIER  */
#line 700 "assgn_4_21CS30059_21CS30038.y"
                          {printf("enum-specifier-> enum IDENTIFIER\n");}
#line 3003 "y.tab.c"
    break;

  case 111: /* enum-specifier: ENUM identifieropt LEFT_CURLY_BRACKET enumerator-list COMMA RIGHT_CURLY_BRACKET  */
#line 701 "assgn_4_21CS30059_21CS30038.y"
                                                                                          {printf("enum-specifier-> enum IDENTIFIERopt {enumerator-list,}\n");}
#line 3009 "y.tab.c"
    break;

  case 112: /* identifieropt: IDENTIFIER  */
#line 704 "assgn_4_21CS30059_21CS30038.y"
                   {printf("identifieropt-> IDENTIFIER\n");}
#line 3015 "y.tab.c"
    break;

  case 113: /* identifieropt: %empty  */
#line 705 "assgn_4_21CS30059_21CS30038.y"
                 {printf("identifieropt-> \n");}
#line 3021 "y.tab.c"
    break;

  case 114: /* enumerator-list: enumerator  */
#line 708 "assgn_4_21CS30059_21CS30038.y"
                   {printf("enumerator-list-> enumerator\n");}
#line 3027 "y.tab.c"
    break;

  case 115: /* enumerator-list: enumerator-list COMMA enumerator  */
#line 709 "assgn_4_21CS30059_21CS30038.y"
                                           {printf("enumerator-list-> enumerator-list , enumerator\n");}
#line 3033 "y.tab.c"
    break;

  case 116: /* enumerator: IDENTIFIER  */
#line 712 "assgn_4_21CS30059_21CS30038.y"
                   {printf("enumerator-> enumeration-const\n");}
#line 3039 "y.tab.c"
    break;

  case 117: /* enumerator: IDENTIFIER EQUALS constant-expression  */
#line 713 "assgn_4_21CS30059_21CS30038.y"
                                                {printf("enumerator-> enumeration-const = constant-expression\n");}
#line 3045 "y.tab.c"
    break;

  case 118: /* function-specifier: FUNCTION_SPECIFIER  */
#line 716 "assgn_4_21CS30059_21CS30038.y"
                           {printf("function-specifier-> function-specifier-token\n");}
#line 3051 "y.tab.c"
    break;

  case 119: /* declarator: pointer direct-declarator  */
#line 719 "assgn_4_21CS30059_21CS30038.y"
                                  {
            type* t = (yyvsp[-1].ptr);
            while(t->arrType!=NULL)
            {
                t=t->arrType;
            }
            t->arrType = (yyvsp[0].pointer)->type;
            (yyval.pointer) = (yyvsp[0].pointer)->update((yyvsp[-1].ptr));
        }
#line 3065 "y.tab.c"
    break;

  case 120: /* declarator: direct-declarator  */
#line 728 "assgn_4_21CS30059_21CS30038.y"
                            {printf("declarator-> direct-declarator\n");}
#line 3071 "y.tab.c"
    break;

  case 121: /* direct-declarator: IDENTIFIER  */
#line 731 "assgn_4_21CS30059_21CS30038.y"
                   {
            (yyval.pointer) = (yyvsp[0].pointer)->update(new ttype(varType));
            currentSymbol = (yyval.pointer);
        }
#line 3080 "y.tab.c"
    break;

  case 122: /* direct-declarator: LEFT_PARENTHESIS declarator RIGHT_PARENTHESIS  */
#line 735 "assgn_4_21CS30059_21CS30038.y"
                                                        {
            (yyval.pointer) = (yyvsp[-1].pointer);
        }
#line 3088 "y.tab.c"
    break;

  case 123: /* direct-declarator: direct-declarator LEFT_SQUARE_BRACKET type-qualifier-list RIGHT_SQUARE_BRACKET  */
#line 738 "assgn_4_21CS30059_21CS30038.y"
                                                                                        {
            printf("direct-declarator-> direct-declarator [type-qualifier-list]\n");
        }
#line 3096 "y.tab.c"
    break;

  case 124: /* direct-declarator: direct-declarator LEFT_SQUARE_BRACKET type-qualifier-list assignment-expression RIGHT_SQUARE_BRACKET  */
#line 741 "assgn_4_21CS30059_21CS30038.y"
                                                                                                              {
            printf("direct-declarator-> direct-declarator [type-qualifier-list assignment-expression]\n");
        }
#line 3104 "y.tab.c"
    break;

  case 125: /* direct-declarator: direct-declarator LEFT_SQUARE_BRACKET assignment-expression RIGHT_SQUARE_BRACKET  */
#line 744 "assgn_4_21CS30059_21CS30038.y"
                                                                                           {
            type *t = (yyvsp[-3].pointer)->type;
            type* prev = NULL;
            while(t->type == "arr")
            {
                prev = t;
                t = t->arrType;
            }
            if(prev == NULL)
            {
                int temp=atoi((yyvsp[-1].exp)->loc->value.c_str());
                if(temp<=0)
                {
                    yyerror("Array size must be greater than 0");
                }
                type* tp = new ttype("arr",(yyvsp[-3].pointer)->type,temp);
                (yyval.pointer) = (yyvsp[-3].pointer)->update(tp);
            }
            else
            {
                int temp=atoi((yyvsp[-1].exp)->loc->value.c_str());
                if(temp<=0)
                {
                    yyerror("Array size must be greater than 0");
                }
                type* tp = new ttype("arr",t,temp);
                prev->arrType = tp;
                (yyval.pointer) = (yyvsp[-3].pointer)->update((yyvsp[-3].pointer)->type);
            }

        }
#line 3140 "y.tab.c"
    break;

  case 126: /* direct-declarator: direct-declarator LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET  */
#line 775 "assgn_4_21CS30059_21CS30038.y"
                                                                    {
            type* t=(yyvsp[-2].pointer)->type;
            type* prev=NULL;
            while(t->type=="arr")
            {
                prev=t;
                t=t->arrType;
            }
            if(prev==NULL)
            {
                type* tp=new ttype("arr",(yyvsp[-2].pointer)->type,0);
                (yyval.pointer)=(yyvsp[-2].pointer)->update(tp);
            }
            else
            {
                type* tp=new ttype("arr",t,0);
                prev->arrType=tp;
                (yyval.pointer)=(yyvsp[-2].pointer)->update((yyvsp[-2].pointer)->type);
            }
        }
#line 3165 "y.tab.c"
    break;

  case 127: /* direct-declarator: direct-declarator LEFT_SQUARE_BRACKET STATIC_TOKEN type-qualifier-list assignment-expression RIGHT_SQUARE_BRACKET  */
#line 795 "assgn_4_21CS30059_21CS30038.y"
                                                                                                                            {printf("direct-declarator-> direct-declarator [STATIC type-qualifier-listopt assignment-expression]\n");}
#line 3171 "y.tab.c"
    break;

  case 128: /* direct-declarator: direct-declarator LEFT_SQUARE_BRACKET STATIC_TOKEN assignment-expression RIGHT_SQUARE_BRACKET  */
#line 796 "assgn_4_21CS30059_21CS30038.y"
                                                                                                        {printf("direct-declarator-> direct-declarator [type-qualifier-list STATIC assignment-expression]\n");}
#line 3177 "y.tab.c"
    break;

  case 129: /* direct-declarator: direct-declarator LEFT_SQUARE_BRACKET type-qualifier-list STATIC_TOKEN assignment-expression RIGHT_SQUARE_BRACKET  */
#line 797 "assgn_4_21CS30059_21CS30038.y"
                                                                                                                            {printf("direct-declarator-> direct-declarator [type-qualifier-list STATIC assignment-expression]\n");}
#line 3183 "y.tab.c"
    break;

  case 130: /* direct-declarator: direct-declarator LEFT_SQUARE_BRACKET type-qualifier-list STAR RIGHT_SQUARE_BRACKET  */
#line 798 "assgn_4_21CS30059_21CS30038.y"
                                                                                              {printf("direct-declarator-> direct-declarator [type-qualifier-listopt *]\n");}
#line 3189 "y.tab.c"
    break;

  case 131: /* direct-declarator: direct-declarator LEFT_SQUARE_BRACKET STAR RIGHT_SQUARE_BRACKET  */
#line 799 "assgn_4_21CS30059_21CS30038.y"
                                                                          {printf("direct-declarator-> direct-declarator [*]\n");}
#line 3195 "y.tab.c"
    break;

  case 132: /* direct-declarator: direct-declarator LEFT_PARENTHESIS change-table parameter-type-list RIGHT_PARENTHESIS  */
#line 800 "assgn_4_21CS30059_21CS30038.y"
                                                                                                {
            currentST->name = (yyvsp[-4].pointer)->name;
            if((yyvsp[-4].pointer)->type->type != "void") {
                symbol* s = currentST->lookup("return");   
                s->update((yyvsp[-4].pointer)->type);
            }
            (yyvsp[-4].pointer)->nestedTable = currentST;
            currentST->parent = globalST; 
            switchTable(globalST);        
            currentSymbol = (yyval.pointer);
        }
#line 3211 "y.tab.c"
    break;

  case 133: /* direct-declarator: direct-declarator LEFT_PARENTHESIS identifier-list RIGHT_PARENTHESIS  */
#line 811 "assgn_4_21CS30059_21CS30038.y"
                                                                               {printf("direct-declarator-> direct-declarator (identifier-listopt)\n");}
#line 3217 "y.tab.c"
    break;

  case 134: /* direct-declarator: direct-declarator LEFT_PARENTHESIS change-table RIGHT_PARENTHESIS  */
#line 813 "assgn_4_21CS30059_21CS30038.y"
        {
            currentST->name = (yyvsp[-3].pointer)->name;
            if((yyvsp[-3].pointer)->type->type != "void") {
                symbol* s = currentST->lookup("return");   
                s->update((yyvsp[-3].pointer)->type);
            }
            (yyvsp[-3].pointer)->nestedTable = currentST;
            currentST->parent = globalST; 
            switchTable(globalST);        
            currentSymbol = (yyval.pointer);
        }
#line 3233 "y.tab.c"
    break;

  case 135: /* type-qualifier-listopt: type-qualifier-list  */
#line 826 "assgn_4_21CS30059_21CS30038.y"
                            {printf("type-qualifier-listopt-> type-qualifier-list\n");}
#line 3239 "y.tab.c"
    break;

  case 136: /* type-qualifier-listopt: %empty  */
#line 827 "assgn_4_21CS30059_21CS30038.y"
                 {printf("type-qualifier-listopt-> \n");}
#line 3245 "y.tab.c"
    break;

  case 137: /* pointer: STAR type-qualifier-listopt  */
#line 830 "assgn_4_21CS30059_21CS30038.y"
                                    {
            (yyval.ptr) = new ttype("ptr");
        }
#line 3253 "y.tab.c"
    break;

  case 138: /* pointer: STAR type-qualifier-listopt pointer  */
#line 833 "assgn_4_21CS30059_21CS30038.y"
                                              {
            (yyval.ptr) = new ttype("ptr",(yyvsp[0].ptr));
        }
#line 3261 "y.tab.c"
    break;

  case 139: /* type-qualifier-list: TYPE_QUALIFIER  */
#line 838 "assgn_4_21CS30059_21CS30038.y"
                       {printf("type-qualifier-list-> type-qualifier\n");}
#line 3267 "y.tab.c"
    break;

  case 140: /* type-qualifier-list: type-qualifier-list TYPE_QUALIFIER  */
#line 839 "assgn_4_21CS30059_21CS30038.y"
                                             {printf("type-qualifier-list-> type-qualifier-list type-qualifier\n");}
#line 3273 "y.tab.c"
    break;

  case 141: /* parameter-type-list: parameter-list  */
#line 842 "assgn_4_21CS30059_21CS30038.y"
                       {printf("parameter-type-list-> parameter-list\n");}
#line 3279 "y.tab.c"
    break;

  case 142: /* parameter-type-list: parameter-list COMMA ELLIPSIS  */
#line 843 "assgn_4_21CS30059_21CS30038.y"
                                        {printf("parameter-type-list-> parameter-list , ...\n");}
#line 3285 "y.tab.c"
    break;

  case 143: /* parameter-list: parameter-declaration  */
#line 846 "assgn_4_21CS30059_21CS30038.y"
                              {printf("parameter-list-> parameter-declaration\n");}
#line 3291 "y.tab.c"
    break;

  case 144: /* parameter-list: parameter-list COMMA parameter-declaration  */
#line 847 "assgn_4_21CS30059_21CS30038.y"
                                                     {printf("parameter-list-> parameter-list , parameter-declaration\n");}
#line 3297 "y.tab.c"
    break;

  case 145: /* parameter-declaration: declaration-specifiers declarator  */
#line 850 "assgn_4_21CS30059_21CS30038.y"
                                          {printf("parameter-declaration-> declaration-specifiers declarator\n");}
#line 3303 "y.tab.c"
    break;

  case 146: /* parameter-declaration: declaration-specifiers  */
#line 851 "assgn_4_21CS30059_21CS30038.y"
                                 {printf("parameter-declaration-> declaration-specifiers\n");}
#line 3309 "y.tab.c"
    break;

  case 147: /* identifier-list: IDENTIFIER  */
#line 854 "assgn_4_21CS30059_21CS30038.y"
                   {printf("identifier-list-> IDENTIFIER\n");}
#line 3315 "y.tab.c"
    break;

  case 148: /* identifier-list: identifier-list COMMA IDENTIFIER  */
#line 855 "assgn_4_21CS30059_21CS30038.y"
                                           {printf("identifier-list-> identifier-list , IDENTIFIER\n");}
#line 3321 "y.tab.c"
    break;

  case 149: /* type-name: specifier-qualifier-list  */
#line 858 "assgn_4_21CS30059_21CS30038.y"
                                 {printf("type-name-> specifier-qualifier-list\n");}
#line 3327 "y.tab.c"
    break;

  case 150: /* initializer: assignment-expression  */
#line 861 "assgn_4_21CS30059_21CS30038.y"
                              {
            (yyval.numParams) = (yyvsp[0].exp)->loc;
        }
#line 3335 "y.tab.c"
    break;

  case 151: /* initializer: LEFT_CURLY_BRACKET initializer-list RIGHT_CURLY_BRACKET  */
#line 864 "assgn_4_21CS30059_21CS30038.y"
                                                                  {printf("initializer-> {initializer-list}\n");}
#line 3341 "y.tab.c"
    break;

  case 152: /* initializer: LEFT_CURLY_BRACKET initializer-list COMMA RIGHT_CURLY_BRACKET  */
#line 865 "assgn_4_21CS30059_21CS30038.y"
                                                                        {printf("initializer-> {initializer-list,}\n");}
#line 3347 "y.tab.c"
    break;

  case 153: /* initializer-list: designationopt initializer  */
#line 868 "assgn_4_21CS30059_21CS30038.y"
                                   {printf("initializer-list-> designationopt initializer\n");}
#line 3353 "y.tab.c"
    break;

  case 154: /* initializer-list: initializer-list COMMA designationopt initializer  */
#line 869 "assgn_4_21CS30059_21CS30038.y"
                                                            {printf("initializer-list-> initializer-list , designationopt initializer\n");}
#line 3359 "y.tab.c"
    break;

  case 155: /* designationopt: designation  */
#line 872 "assgn_4_21CS30059_21CS30038.y"
                    {printf("designationopt-> designation\n");}
#line 3365 "y.tab.c"
    break;

  case 156: /* designationopt: %empty  */
#line 873 "assgn_4_21CS30059_21CS30038.y"
                 {printf("designationopt-> \n");}
#line 3371 "y.tab.c"
    break;

  case 157: /* designation: designator-list EQUALS  */
#line 876 "assgn_4_21CS30059_21CS30038.y"
                               {printf("designation-> designator-list =\n");}
#line 3377 "y.tab.c"
    break;

  case 158: /* designator-list: designator  */
#line 879 "assgn_4_21CS30059_21CS30038.y"
                   {printf("designator-list-> designator\n");}
#line 3383 "y.tab.c"
    break;

  case 159: /* designator-list: designator-list designator  */
#line 880 "assgn_4_21CS30059_21CS30038.y"
                                     {printf("designator-list-> designation-list designator\n");}
#line 3389 "y.tab.c"
    break;

  case 160: /* designator: LEFT_SQUARE_BRACKET constant-expression RIGHT_SQUARE_BRACKET  */
#line 883 "assgn_4_21CS30059_21CS30038.y"
                                                                     {printf("designator-> [constant-expression]\n");}
#line 3395 "y.tab.c"
    break;

  case 161: /* designator: DOT IDENTIFIER  */
#line 884 "assgn_4_21CS30059_21CS30038.y"
                         {printf("designator-> . IDENTIFIER\n");}
#line 3401 "y.tab.c"
    break;

  case 162: /* statement: labeled-statement  */
#line 887 "assgn_4_21CS30059_21CS30038.y"
                          {printf("statement-> labeled-statement\n");}
#line 3407 "y.tab.c"
    break;

  case 163: /* statement: compound-statement  */
#line 888 "assgn_4_21CS30059_21CS30038.y"
                             {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3415 "y.tab.c"
    break;

  case 164: /* statement: expression-statement  */
#line 891 "assgn_4_21CS30059_21CS30038.y"
                               {
            (yyval.stmt) = new statement();
            (yyval.stmt)->nextlist = (yyvsp[0].exp)->nextlist;
        }
#line 3424 "y.tab.c"
    break;

  case 165: /* statement: selection-statement  */
#line 895 "assgn_4_21CS30059_21CS30038.y"
                              {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3432 "y.tab.c"
    break;

  case 166: /* statement: iteration-statement  */
#line 898 "assgn_4_21CS30059_21CS30038.y"
                              {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3440 "y.tab.c"
    break;

  case 167: /* statement: jump-statement  */
#line 901 "assgn_4_21CS30059_21CS30038.y"
                         {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3448 "y.tab.c"
    break;

  case 168: /* loop-statement: labeled-statement  */
#line 905 "assgn_4_21CS30059_21CS30038.y"
                          {printf("loop-statement-> labeled-statement\n");}
#line 3454 "y.tab.c"
    break;

  case 169: /* loop-statement: expression-statement  */
#line 906 "assgn_4_21CS30059_21CS30038.y"
                               {
            (yyval.stmt) = new statement();
            (yyval.stmt)->nextlist = (yyvsp[0].exp)->nextlist;
        }
#line 3463 "y.tab.c"
    break;

  case 170: /* loop-statement: selection-statement  */
#line 910 "assgn_4_21CS30059_21CS30038.y"
                              {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3471 "y.tab.c"
    break;

  case 171: /* loop-statement: iteration-statement  */
#line 913 "assgn_4_21CS30059_21CS30038.y"
                              {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3479 "y.tab.c"
    break;

  case 172: /* loop-statement: jump-statement  */
#line 916 "assgn_4_21CS30059_21CS30038.y"
                         {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3487 "y.tab.c"
    break;

  case 173: /* labeled-statement: IDENTIFIER COLON statement  */
#line 921 "assgn_4_21CS30059_21CS30038.y"
                                   {printf("labeled-statement-> IDENTIFIER : statement\n");}
#line 3493 "y.tab.c"
    break;

  case 174: /* labeled-statement: CASE constant-expression COLON statement  */
#line 922 "assgn_4_21CS30059_21CS30038.y"
                                                   {printf("labeled-statement-> CASE constant-expression : statement\n");}
#line 3499 "y.tab.c"
    break;

  case 175: /* labeled-statement: DEFAULT COLON statement  */
#line 923 "assgn_4_21CS30059_21CS30038.y"
                                  {printf("labeled-statement-> DEFAULT : statement\n");}
#line 3505 "y.tab.c"
    break;

  case 176: /* compound-statement: LEFT_CURLY_BRACKET A change-table block-item-listopt RIGHT_CURLY_BRACKET  */
#line 926 "assgn_4_21CS30059_21CS30038.y"
                                                                                 {
            (yyval.stmt) = (yyvsp[-1].stmt);
            switch_table(currentST->parent);
        }
#line 3514 "y.tab.c"
    break;

  case 177: /* A: %empty  */
#line 932 "assgn_4_21CS30059_21CS30038.y"
        {
            string new_ST = currentST->name + "_" + block_name + "_" + to_string(stcount++);
            symbol* sym = currentST->lookup(new_ST);
            sym->NestedTable = new symbolTable(new_ST);
            sym->name = new_ST;
            sym->NestedTable->parent = currentST;
            sym->type = new symbolType("block");
            currentSymbol = sym;
        }
#line 3528 "y.tab.c"
    break;

  case 178: /* change-table: %empty  */
#line 943 "assgn_4_21CS30059_21CS30038.y"
        {
            if(currentSymbol->nestedTable != NULL)
            {
                switchTable(currentSymbol->nestedTable);
                quads.emit("label",currentST->name);
            }
            else
            {
                switchTable(new symbolTable(""));
            }
        }
#line 3544 "y.tab.c"
    break;

  case 179: /* block-item-listopt: block-item-list  */
#line 956 "assgn_4_21CS30059_21CS30038.y"
                        {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3552 "y.tab.c"
    break;

  case 180: /* block-item-listopt: %empty  */
#line 959 "assgn_4_21CS30059_21CS30038.y"
                 {
            (yyval.stmt) = new statement();
        }
#line 3560 "y.tab.c"
    break;

  case 181: /* block-item-list: block-item  */
#line 964 "assgn_4_21CS30059_21CS30038.y"
                   {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3568 "y.tab.c"
    break;

  case 182: /* block-item-list: block-item-list M block-item  */
#line 967 "assgn_4_21CS30059_21CS30038.y"
                                       {
            (yyval.stmt) = (yyvsp[0].stmt);
            backpatch((yyvsp[-2].stmt)->nextlist, (yyvsp[-1].intval));
        }
#line 3577 "y.tab.c"
    break;

  case 183: /* block-item: declaration  */
#line 973 "assgn_4_21CS30059_21CS30038.y"
                    {
            (yyval.stmt) = new statement();
        }
#line 3585 "y.tab.c"
    break;

  case 184: /* block-item: statement  */
#line 976 "assgn_4_21CS30059_21CS30038.y"
                    {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3593 "y.tab.c"
    break;

  case 185: /* expression-statement: expression SEMICOLON  */
#line 981 "assgn_4_21CS30059_21CS30038.y"
                             {
            (yyval.exp) = (yyvsp[-1].exp);
        }
#line 3601 "y.tab.c"
    break;

  case 186: /* expression-statement: SEMICOLON  */
#line 984 "assgn_4_21CS30059_21CS30038.y"
                    {
            (yyval.exp) = new expression();
        }
#line 3609 "y.tab.c"
    break;

  case 187: /* selection-statement: IF LEFT_PARENTHESIS expression N RIGHT_PARENTHESIS M statement N  */
#line 990 "assgn_4_21CS30059_21CS30038.y"
        {
            backpatch((yyvsp[-4].stmt)->nextlist,nextinstr());
            convertIntToBool((yyvsp[-5].exp));
            (yyval.stmt) = new statement();
            backpatch((yyvsp[-5].exp)->truelist,(yyvsp[-2].intval));
            list<int> l1 = merge((yyvsp[-5].exp)->falselist,(yyvsp[-1].stmt)->nextlist);
            (yyval.stmt)->nextlist = merge(l1,(yyvsp[0].stmt)->nextlist);
        }
#line 3622 "y.tab.c"
    break;

  case 188: /* selection-statement: IF LEFT_PARENTHESIS expression N RIGHT_PARENTHESIS M statement N ELSE M statement  */
#line 998 "assgn_4_21CS30059_21CS30038.y"
                                                                                             {
            backpatch((yyvsp[-7].stmt)->nextlist,nextinstr());
            convertIntToBool((yyvsp[-8].exp));
            (yyval.stmt) = new statement();
            backpatch((yyvsp[-8].exp)->truelist,(yyvsp[-5].intval));
            backpatch((yyvsp[-8].exp)->falselist,(yyvsp[-1].intval));
            list<int> l1 = merge((yyvsp[-4].stmt)->nextlist,(yyvsp[-3].stmt)->nextlist);
            (yyval.stmt)->nextlist = merge(l1,(yyvsp[0].stmt)->nextlist);
        }
#line 3636 "y.tab.c"
    break;

  case 189: /* selection-statement: SWITCH LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement  */
#line 1007 "assgn_4_21CS30059_21CS30038.y"
                                                                         {printf("selection-statement-> SWITCH (expression) statement\n");}
#line 3642 "y.tab.c"
    break;

  case 190: /* iteration-statement: WHILE W LEFT_PARENTHESIS A change-table M expression RIGHT_PARENTHESIS M loop-statement  */
#line 1010 "assgn_4_21CS30059_21CS30038.y"
                                                                                                {
            (yyval.stmt) = new statement();
            convertInttoBool((yyvsp[-3].exp));
            backpatch((yyvsp[0].stmt)->nextlist, (yyvsp[-4].intval));
            backpatch((yyvsp[-3].exp)->trulist, (yyvsp[-1].intval));
            (yyval.stmt)->nextlist = (yyvsp[-3].exp)->falselist;
            quads.emit("goto", convertInttoString((yyvsp[-4].intval)));
            blockName = "";
            switchTable(currentST->parent);

        }
#line 3658 "y.tab.c"
    break;

  case 191: /* iteration-statement: WHILE W LEFT_PARENTHESIS A change-table M expression RIGHT_PARENTHESIS LEFT_CURLY_BRACKET M block-item-listopt RIGHT_CURLY_BRACKET  */
#line 1021 "assgn_4_21CS30059_21CS30038.y"
                                                                                                                                             {
            (yyval.stmt) = new statement();
            convertInttoBool((yyvsp[-5].exp));
            backpatch((yyvsp[-1].stmt)->nextlist, (yyvsp[-6].intval));
            backpatch((yyvsp[-5].exp)->truelist, (yyvsp[-2].intval));
            (yyval.stmt)->nextlist = (yyvsp[-5].exp)->falselist;
            quads.emit("goto", convertInttoString((yyvsp[-6].intval)));
            blockName = "";
            switchTable(currentST->parent);
        }
#line 3673 "y.tab.c"
    break;

  case 192: /* iteration-statement: DO D M loop-statement M WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS SEMICOLON  */
#line 1031 "assgn_4_21CS30059_21CS30038.y"
                                                                                                {
            (yyval.stmt) = new statement();
            convertInttoBool((yyvsp[-2].exp));
            backpatch((yyvsp[-2].exp)->truelist, (yyvsp[-7].intval));
            backpatch((yyvsp[-6].stmt)->nextlist, (yyvsp[-5].intval));
            (yyval.stmt)->nextlist = (yyvsp[-2].exp)->falselist;
            blockName = "";
        }
#line 3686 "y.tab.c"
    break;

  case 193: /* iteration-statement: DO D LEFT_CURLY_BRACKET M block-item-listopt RIGHT_CURLY_BRACKET M WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS SEMICOLON  */
#line 1039 "assgn_4_21CS30059_21CS30038.y"
                                                                                                                                           {
            (yyval.stmt) = new statement();
            convertInttoBool((yyvsp[-2].exp));
            backpatch((yyvsp[-2].exp)->truelist, (yyvsp[-8].intval));
            backpatch((yyvsp[-7].stmt)->nextlist, (yyvsp[-5].intval));
            (yyval.stmt)->nextlist = (yyvsp[-2].exp)->falselist;
            blockName = "";
        }
#line 3699 "y.tab.c"
    break;

  case 194: /* iteration-statement: FOR F LEFT_PARENTHESIS A change-table declaration M expression-statement M expression N RIGHT_PARENTHESIS M loop-statement  */
#line 1047 "assgn_4_21CS30059_21CS30038.y"
                                                                                                                                     {
            (yyval.stmt) = new statement();
            convertInttoBool((yyvsp[-6].exp));
            backpatch((yyvsp[-6].exp)->nextlist, (yyvsp[-1].intval));
            backpatch((yyvsp[-3].stmt)->nextlist, (yyvsp[-7].intval));
            backpatch((yyvsp[0].stmt)->nextlist, (yyvsp[-5].intval));
            quads.emit("goto", convertInttoString((yyvsp[-5].intval)));
            (yyval.stmt)->nextlist = (yyvsp[-6].exp)->falselist;
            blockName = "";
            switchTable(currentST->parent);
        }
#line 3715 "y.tab.c"
    break;

  case 195: /* iteration-statement: FOR F LEFT_PARENTHESIS A change-table expression-statement M expression-statement M expression N RIGHT_PARENTHESIS M loop-statement  */
#line 1058 "assgn_4_21CS30059_21CS30038.y"
                                                                                                                                              {
            (yyval.stmt) = new statement();
            convertInttoBool((yyvsp[-6].exp));
            backpatch((yyvsp[-6].exp)->truelist, (yyvsp[-1].intval));
            backpatch((yyvsp[-3].stmt)->nextlist, (yyvsp[-7].intval));
            backpatch((yyvsp[0].stmt)->nextlist, (yyvsp[-5].intval));
            quads.emit("goto", convertInttoString((yyvsp[-5].intval)));
            (yyval.stmt)->nextlist = (yyvsp[-6].exp)->falselist;
            blockName = "";
            switchTable(currentST->parent);
        }
#line 3731 "y.tab.c"
    break;

  case 196: /* iteration-statement: FOR F LEFT_PARENTHESIS A change-table declaration M expression-statement M expression N RIGHT_PARENTHESIS M LEFT_CURLY_BRACKET block-item-listopt RIGHT_CURLY_BRACKET  */
#line 1069 "assgn_4_21CS30059_21CS30038.y"
                                                                                                                                                                                {
            (yyval.stmt) = new statement();
            convertInttoBool((yyvsp[-8].exp));
            backpatch((yyvsp[-8].exp)->truelist, (yyvsp[-3].intval));
            backpatch((yyvsp[-5].stmt)->nextlist, (yyvsp[-9].intval));
            backpatch((yyvsp[-1].stmt)->nextlist, (yyvsp[-7].intval));
            quads.emit("goto", convertInttoString((yyvsp[-7].intval)));
            (yyval.stmt)->nextlist = (yyvsp[-8].exp)->falselist;
            blockName = "";
            switchTable(currentST->parent);
        }
#line 3747 "y.tab.c"
    break;

  case 197: /* iteration-statement: FOR F LEFT_PARENTHESIS A change-table expression-statement M expression-statement M expression N RIGHT_PARENTHESIS M LEFT_CURLY_BRACKET block-item-listopt RIGHT_CURLY_BRACKET  */
#line 1080 "assgn_4_21CS30059_21CS30038.y"
                                                                                                                                                                                        {
            (yyval.stmt) = new statement();                   
            convertInttoBool((yyvsp[-8].exp));                 
            backpatch((yyvsp[-8].exp)->truelist, (yyvsp[-3].intval));          
            backpatch((yyvsp[-5].stmt)->nextlist, (yyvsp[-9].intval));          
            backpatch((yyvsp[-1].stmt)->nextlist, (yyvsp[-7].intval));          
            emit("goto", convertIntToString((yyvsp[-7].intval))); 
            (yyval.stmt)->nextlist = (yyvsp[-8].exp)->falselist;           
            blockName = "";
            switchTable(currentST->parent);
        }
#line 3763 "y.tab.c"
    break;

  case 198: /* F: %empty  */
#line 1092 "assgn_4_21CS30059_21CS30038.y"
             {
        blockName = "FOR";
    }
#line 3771 "y.tab.c"
    break;

  case 199: /* W: %empty  */
#line 1096 "assgn_4_21CS30059_21CS30038.y"
             {
        blockName = "WHILE";
    }
#line 3779 "y.tab.c"
    break;

  case 200: /* D: %empty  */
#line 1100 "assgn_4_21CS30059_21CS30038.y"
             {
        blockName = "DO_WHILE";
    }
#line 3787 "y.tab.c"
    break;

  case 201: /* jump-statement: GOTO IDENTIFIER SEMICOLON  */
#line 1105 "assgn_4_21CS30059_21CS30038.y"
                                  {printf("jump-statement-> GOTO IDENTIFIER ;\n");}
#line 3793 "y.tab.c"
    break;

  case 202: /* jump-statement: CONTINUE SEMICOLON  */
#line 1106 "assgn_4_21CS30059_21CS30038.y"
                             {
            (yyval.stmt) = new statement();
        }
#line 3801 "y.tab.c"
    break;

  case 203: /* jump-statement: BREAK SEMICOLON  */
#line 1109 "assgn_4_21CS30059_21CS30038.y"
                          {
            (yyval.stmt) = new statement();
        }
#line 3809 "y.tab.c"
    break;

  case 204: /* jump-statement: RETURN expression SEMICOLON  */
#line 1112 "assgn_4_21CS30059_21CS30038.y"
                                      {
            (yyval.stmt) = new statement();
            quads.emit("return", (yyvsp[-1].exp)->loc->name);
        }
#line 3818 "y.tab.c"
    break;

  case 205: /* jump-statement: RETURN SEMICOLON  */
#line 1116 "assgn_4_21CS30059_21CS30038.y"
                           {
            (yyval.stmt) = new statement();
            quads.emit("return", "");
        }
#line 3827 "y.tab.c"
    break;

  case 206: /* translation-unit: external-declaration  */
#line 1122 "assgn_4_21CS30059_21CS30038.y"
                             {printf("translation-unit-> external-declaration\n");}
#line 3833 "y.tab.c"
    break;

  case 207: /* translation-unit: translation-unit external-declaration  */
#line 1123 "assgn_4_21CS30059_21CS30038.y"
                                                {printf("translation-unit-> translation-unit external-declaration\n");}
#line 3839 "y.tab.c"
    break;

  case 208: /* external-declaration: function-definition  */
#line 1126 "assgn_4_21CS30059_21CS30038.y"
                            {printf("external-declaration-> function-definition\n");}
#line 3845 "y.tab.c"
    break;

  case 209: /* external-declaration: declaration  */
#line 1127 "assgn_4_21CS30059_21CS30038.y"
                      {printf("external-declaration-> declaration\n");}
#line 3851 "y.tab.c"
    break;

  case 210: /* function-definition: declaration-specifiers declarator declaration-listopt change-table LEFT_CURLY_BRACKET block-item-listopt RIGHT_CURLY_BRACKET  */
#line 1130 "assgn_4_21CS30059_21CS30038.y"
                                                                                                                                     {
            currentST->parent = globalST;
            STcount=0;
            switchTable(globalST);
        }
#line 3861 "y.tab.c"
    break;

  case 211: /* declaration-listopt: declaration-list  */
#line 1137 "assgn_4_21CS30059_21CS30038.y"
                         {printf("declaration-listopt-> declaration-list\n");}
#line 3867 "y.tab.c"
    break;

  case 212: /* declaration-listopt: %empty  */
#line 1138 "assgn_4_21CS30059_21CS30038.y"
          {printf("declaration-listopt-> \n");}
#line 3873 "y.tab.c"
    break;

  case 213: /* declaration-list: declaration  */
#line 1141 "assgn_4_21CS30059_21CS30038.y"
                    {printf("declaration-list-> declaration\n");}
#line 3879 "y.tab.c"
    break;

  case 214: /* declaration-list: declaration-list declaration  */
#line 1142 "assgn_4_21CS30059_21CS30038.y"
                                       {printf("declaration-list-> declaration-list declaration\n");}
#line 3885 "y.tab.c"
    break;


#line 3889 "y.tab.c"

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

#line 1144 "assgn_4_21CS30059_21CS30038.y"




int yywrap()
{
    return 1;
}
