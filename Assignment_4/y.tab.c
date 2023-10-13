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

    #include<stdio.h>
    extern int yylex();
    //extern int yylineno=1;
    extern int lineno;
    void yyerror(char *s) {
        printf("error: %s at line %d\n", s, lineno);
    }

#line 81 "y.tab.c"

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
    ENUM = 258,                    /* ENUM  */
    TYPE_SPECIFIER_TOKEN = 259,    /* TYPE_SPECIFIER_TOKEN  */
    STORAGE_CLASS_SPECIFIER = 260, /* STORAGE_CLASS_SPECIFIER  */
    STATIC_TOKEN = 261,            /* STATIC_TOKEN  */
    FUNCTION_SPECIFIER = 262,      /* FUNCTION_SPECIFIER  */
    CASE = 263,                    /* CASE  */
    DEFAULT = 264,                 /* DEFAULT  */
    SIZEOF = 265,                  /* SIZEOF  */
    OF = 266,                      /* OF  */
    ELSE = 267,                    /* ELSE  */
    SWITCH = 268,                  /* SWITCH  */
    WHILE = 269,                   /* WHILE  */
    DO = 270,                      /* DO  */
    FOR = 271,                     /* FOR  */
    GOTO = 272,                    /* GOTO  */
    CONTINUE = 273,                /* CONTINUE  */
    BREAK = 274,                   /* BREAK  */
    RETURN = 275,                  /* RETURN  */
    TYPE_QUALIFIER = 276,          /* TYPE_QUALIFIER  */
    KEYWORD = 277,                 /* KEYWORD  */
    ENUMERATION_CONST = 278,       /* ENUMERATION_CONST  */
    IDENTIFIER = 279,              /* IDENTIFIER  */
    INTEGER = 280,                 /* INTEGER  */
    FLOAT = 281,                   /* FLOAT  */
    PUNCTUATOR = 282,              /* PUNCTUATOR  */
    CHARACTER_CONSTANT = 283,      /* CHARACTER_CONSTANT  */
    STRING_LITERAL = 284,          /* STRING_LITERAL  */
    ASSIGNMENT_OPERATOR = 285,     /* ASSIGNMENT_OPERATOR  */
    SINGLE_LINE_COMMENT = 286,     /* SINGLE_LINE_COMMENT  */
    MULTI_LINE_COMMENT = 287,      /* MULTI_LINE_COMMENT  */
    ERROR = 288,                   /* ERROR  */
    IF = 289,                      /* IF  */
    EQUALS = 290,                  /* EQUALS  */
    INCREMENT = 291,               /* INCREMENT  */
    DECREMENT = 292,               /* DECREMENT  */
    AND = 293,                     /* AND  */
    STAR = 294,                    /* STAR  */
    PLUS = 295,                    /* PLUS  */
    MINUS = 296,                   /* MINUS  */
    TILDE = 297,                   /* TILDE  */
    NOT = 298,                     /* NOT  */
    DIV = 299,                     /* DIV  */
    MOD = 300,                     /* MOD  */
    LEFT_SHIFT = 301,              /* LEFT_SHIFT  */
    RIGHT_SHIFT = 302,             /* RIGHT_SHIFT  */
    LESS_THAN = 303,               /* LESS_THAN  */
    GREATER_THAN = 304,            /* GREATER_THAN  */
    LESS_THAN_EQUAL = 305,         /* LESS_THAN_EQUAL  */
    GREATER_THAN_EQUAL = 306,      /* GREATER_THAN_EQUAL  */
    EQUAL_TO = 307,                /* EQUAL_TO  */
    NOT_EQUAL_TO = 308,            /* NOT_EQUAL_TO  */
    XOR = 309,                     /* XOR  */
    OR = 310,                      /* OR  */
    AND_AND = 311,                 /* AND_AND  */
    OR_OR = 312,                   /* OR_OR  */
    QUESTION = 313,                /* QUESTION  */
    COLON = 314,                   /* COLON  */
    SEMICOLON = 315,               /* SEMICOLON  */
    COMMA = 316,                   /* COMMA  */
    LEFT_SQUARE_BRACKET = 317,     /* LEFT_SQUARE_BRACKET  */
    RIGHT_SQUARE_BRACKET = 318,    /* RIGHT_SQUARE_BRACKET  */
    LEFT_CURLY_BRACKET = 319,      /* LEFT_CURLY_BRACKET  */
    RIGHT_CURLY_BRACKET = 320,     /* RIGHT_CURLY_BRACKET  */
    LEFT_PARENTHESIS = 321,        /* LEFT_PARENTHESIS  */
    RIGHT_PARENTHESIS = 322,       /* RIGHT_PARENTHESIS  */
    DOT = 323,                     /* DOT  */
    ELLIPSIS = 324,                /* ELLIPSIS  */
    ARROW = 325,                   /* ARROW  */
    LOWER_THAN_ELSE = 326          /* LOWER_THAN_ELSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define ENUM 258
#define TYPE_SPECIFIER_TOKEN 259
#define STORAGE_CLASS_SPECIFIER 260
#define STATIC_TOKEN 261
#define FUNCTION_SPECIFIER 262
#define CASE 263
#define DEFAULT 264
#define SIZEOF 265
#define OF 266
#define ELSE 267
#define SWITCH 268
#define WHILE 269
#define DO 270
#define FOR 271
#define GOTO 272
#define CONTINUE 273
#define BREAK 274
#define RETURN 275
#define TYPE_QUALIFIER 276
#define KEYWORD 277
#define ENUMERATION_CONST 278
#define IDENTIFIER 279
#define INTEGER 280
#define FLOAT 281
#define PUNCTUATOR 282
#define CHARACTER_CONSTANT 283
#define STRING_LITERAL 284
#define ASSIGNMENT_OPERATOR 285
#define SINGLE_LINE_COMMENT 286
#define MULTI_LINE_COMMENT 287
#define ERROR 288
#define IF 289
#define EQUALS 290
#define INCREMENT 291
#define DECREMENT 292
#define AND 293
#define STAR 294
#define PLUS 295
#define MINUS 296
#define TILDE 297
#define NOT 298
#define DIV 299
#define MOD 300
#define LEFT_SHIFT 301
#define RIGHT_SHIFT 302
#define LESS_THAN 303
#define GREATER_THAN 304
#define LESS_THAN_EQUAL 305
#define GREATER_THAN_EQUAL 306
#define EQUAL_TO 307
#define NOT_EQUAL_TO 308
#define XOR 309
#define OR 310
#define AND_AND 311
#define OR_OR 312
#define QUESTION 313
#define COLON 314
#define SEMICOLON 315
#define COMMA 316
#define LEFT_SQUARE_BRACKET 317
#define RIGHT_SQUARE_BRACKET 318
#define LEFT_CURLY_BRACKET 319
#define RIGHT_CURLY_BRACKET 320
#define LEFT_PARENTHESIS 321
#define RIGHT_PARENTHESIS 322
#define DOT 323
#define ELLIPSIS 324
#define ARROW 325
#define LOWER_THAN_ELSE 326

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 11 "assgn_4_21CS30059_21CS30038.y"

    int value;

#line 280 "y.tab.c"

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
  YYSYMBOL_ENUM = 3,                       /* ENUM  */
  YYSYMBOL_TYPE_SPECIFIER_TOKEN = 4,       /* TYPE_SPECIFIER_TOKEN  */
  YYSYMBOL_STORAGE_CLASS_SPECIFIER = 5,    /* STORAGE_CLASS_SPECIFIER  */
  YYSYMBOL_STATIC_TOKEN = 6,               /* STATIC_TOKEN  */
  YYSYMBOL_FUNCTION_SPECIFIER = 7,         /* FUNCTION_SPECIFIER  */
  YYSYMBOL_CASE = 8,                       /* CASE  */
  YYSYMBOL_DEFAULT = 9,                    /* DEFAULT  */
  YYSYMBOL_SIZEOF = 10,                    /* SIZEOF  */
  YYSYMBOL_OF = 11,                        /* OF  */
  YYSYMBOL_ELSE = 12,                      /* ELSE  */
  YYSYMBOL_SWITCH = 13,                    /* SWITCH  */
  YYSYMBOL_WHILE = 14,                     /* WHILE  */
  YYSYMBOL_DO = 15,                        /* DO  */
  YYSYMBOL_FOR = 16,                       /* FOR  */
  YYSYMBOL_GOTO = 17,                      /* GOTO  */
  YYSYMBOL_CONTINUE = 18,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 19,                     /* BREAK  */
  YYSYMBOL_RETURN = 20,                    /* RETURN  */
  YYSYMBOL_TYPE_QUALIFIER = 21,            /* TYPE_QUALIFIER  */
  YYSYMBOL_KEYWORD = 22,                   /* KEYWORD  */
  YYSYMBOL_ENUMERATION_CONST = 23,         /* ENUMERATION_CONST  */
  YYSYMBOL_IDENTIFIER = 24,                /* IDENTIFIER  */
  YYSYMBOL_INTEGER = 25,                   /* INTEGER  */
  YYSYMBOL_FLOAT = 26,                     /* FLOAT  */
  YYSYMBOL_PUNCTUATOR = 27,                /* PUNCTUATOR  */
  YYSYMBOL_CHARACTER_CONSTANT = 28,        /* CHARACTER_CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 29,            /* STRING_LITERAL  */
  YYSYMBOL_ASSIGNMENT_OPERATOR = 30,       /* ASSIGNMENT_OPERATOR  */
  YYSYMBOL_SINGLE_LINE_COMMENT = 31,       /* SINGLE_LINE_COMMENT  */
  YYSYMBOL_MULTI_LINE_COMMENT = 32,        /* MULTI_LINE_COMMENT  */
  YYSYMBOL_ERROR = 33,                     /* ERROR  */
  YYSYMBOL_IF = 34,                        /* IF  */
  YYSYMBOL_EQUALS = 35,                    /* EQUALS  */
  YYSYMBOL_INCREMENT = 36,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 37,                 /* DECREMENT  */
  YYSYMBOL_AND = 38,                       /* AND  */
  YYSYMBOL_STAR = 39,                      /* STAR  */
  YYSYMBOL_PLUS = 40,                      /* PLUS  */
  YYSYMBOL_MINUS = 41,                     /* MINUS  */
  YYSYMBOL_TILDE = 42,                     /* TILDE  */
  YYSYMBOL_NOT = 43,                       /* NOT  */
  YYSYMBOL_DIV = 44,                       /* DIV  */
  YYSYMBOL_MOD = 45,                       /* MOD  */
  YYSYMBOL_LEFT_SHIFT = 46,                /* LEFT_SHIFT  */
  YYSYMBOL_RIGHT_SHIFT = 47,               /* RIGHT_SHIFT  */
  YYSYMBOL_LESS_THAN = 48,                 /* LESS_THAN  */
  YYSYMBOL_GREATER_THAN = 49,              /* GREATER_THAN  */
  YYSYMBOL_LESS_THAN_EQUAL = 50,           /* LESS_THAN_EQUAL  */
  YYSYMBOL_GREATER_THAN_EQUAL = 51,        /* GREATER_THAN_EQUAL  */
  YYSYMBOL_EQUAL_TO = 52,                  /* EQUAL_TO  */
  YYSYMBOL_NOT_EQUAL_TO = 53,              /* NOT_EQUAL_TO  */
  YYSYMBOL_XOR = 54,                       /* XOR  */
  YYSYMBOL_OR = 55,                        /* OR  */
  YYSYMBOL_AND_AND = 56,                   /* AND_AND  */
  YYSYMBOL_OR_OR = 57,                     /* OR_OR  */
  YYSYMBOL_QUESTION = 58,                  /* QUESTION  */
  YYSYMBOL_COLON = 59,                     /* COLON  */
  YYSYMBOL_SEMICOLON = 60,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 61,                     /* COMMA  */
  YYSYMBOL_LEFT_SQUARE_BRACKET = 62,       /* LEFT_SQUARE_BRACKET  */
  YYSYMBOL_RIGHT_SQUARE_BRACKET = 63,      /* RIGHT_SQUARE_BRACKET  */
  YYSYMBOL_LEFT_CURLY_BRACKET = 64,        /* LEFT_CURLY_BRACKET  */
  YYSYMBOL_RIGHT_CURLY_BRACKET = 65,       /* RIGHT_CURLY_BRACKET  */
  YYSYMBOL_LEFT_PARENTHESIS = 66,          /* LEFT_PARENTHESIS  */
  YYSYMBOL_RIGHT_PARENTHESIS = 67,         /* RIGHT_PARENTHESIS  */
  YYSYMBOL_DOT = 68,                       /* DOT  */
  YYSYMBOL_ELLIPSIS = 69,                  /* ELLIPSIS  */
  YYSYMBOL_ARROW = 70,                     /* ARROW  */
  YYSYMBOL_LOWER_THAN_ELSE = 71,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_YYACCEPT = 72,                  /* $accept  */
  YYSYMBOL_73_primary_expression = 73,     /* primary-expression  */
  YYSYMBOL_74_postfix_expression = 74,     /* postfix-expression  */
  YYSYMBOL_75_argument_expression_list = 75, /* argument-expression-list  */
  YYSYMBOL_76_argument_expression_listopt = 76, /* argument-expression-listopt  */
  YYSYMBOL_77_unary_expression = 77,       /* unary-expression  */
  YYSYMBOL_78_unary_operator = 78,         /* unary-operator  */
  YYSYMBOL_79_cast_expression = 79,        /* cast-expression  */
  YYSYMBOL_80_multiplicative_expression = 80, /* multiplicative-expression  */
  YYSYMBOL_81_additive_expression = 81,    /* additive-expression  */
  YYSYMBOL_82_shift_expression = 82,       /* shift-expression  */
  YYSYMBOL_83_relational_expression = 83,  /* relational-expression  */
  YYSYMBOL_84_equality_expression = 84,    /* equality-expression  */
  YYSYMBOL_85_AND_expression = 85,         /* AND-expression  */
  YYSYMBOL_86_exclusive_OR_expression = 86, /* exclusive-OR-expression  */
  YYSYMBOL_87_inclusive_OR_expression = 87, /* inclusive-OR-expression  */
  YYSYMBOL_88_logical_AND_expression = 88, /* logical-AND-expression  */
  YYSYMBOL_89_logical_OR_expression = 89,  /* logical-OR-expression  */
  YYSYMBOL_90_conditional_expression = 90, /* conditional-expression  */
  YYSYMBOL_91_assignment_expression = 91,  /* assignment-expression  */
  YYSYMBOL_expression = 92,                /* expression  */
  YYSYMBOL_93_constant_expression = 93,    /* constant-expression  */
  YYSYMBOL_declaration = 94,               /* declaration  */
  YYSYMBOL_95_init_declarator_listopt = 95, /* init-declarator-listopt  */
  YYSYMBOL_96_declaration_specifiers = 96, /* declaration-specifiers  */
  YYSYMBOL_97_type_qualifier = 97,         /* type-qualifier  */
  YYSYMBOL_98_init_declarator_list = 98,   /* init-declarator-list  */
  YYSYMBOL_99_init_declarator = 99,        /* init-declarator  */
  YYSYMBOL_100_storage_class_specifier = 100, /* storage-class-specifier  */
  YYSYMBOL_101_specifier_qualifier_list = 101, /* specifier-qualifier-list  */
  YYSYMBOL_102_specifier_qualifier_listopt = 102, /* specifier-qualifier-listopt  */
  YYSYMBOL_103_enum_specifier = 103,       /* enum-specifier  */
  YYSYMBOL_identifieropt = 104,            /* identifieropt  */
  YYSYMBOL_105_enumerator_list = 105,      /* enumerator-list  */
  YYSYMBOL_enumerator = 106,               /* enumerator  */
  YYSYMBOL_107_function_specifier = 107,   /* function-specifier  */
  YYSYMBOL_declarator = 108,               /* declarator  */
  YYSYMBOL_109_direct_declarator = 109,    /* direct-declarator  */
  YYSYMBOL_110_type_qualifier_listopt = 110, /* type-qualifier-listopt  */
  YYSYMBOL_111_assignment_expressionopt = 111, /* assignment-expressionopt  */
  YYSYMBOL_112_identifier_listopt = 112,   /* identifier-listopt  */
  YYSYMBOL_pointer = 113,                  /* pointer  */
  YYSYMBOL_114_type_qualifier_list = 114,  /* type-qualifier-list  */
  YYSYMBOL_115_parameter_type_list = 115,  /* parameter-type-list  */
  YYSYMBOL_116_parameter_list = 116,       /* parameter-list  */
  YYSYMBOL_117_parameter_declaration = 117, /* parameter-declaration  */
  YYSYMBOL_118_identifier_list = 118,      /* identifier-list  */
  YYSYMBOL_119_type_name = 119,            /* type-name  */
  YYSYMBOL_initializer = 120,              /* initializer  */
  YYSYMBOL_121_initializer_list = 121,     /* initializer-list  */
  YYSYMBOL_designationopt = 122,           /* designationopt  */
  YYSYMBOL_designation = 123,              /* designation  */
  YYSYMBOL_124_designator_list = 124,      /* designator-list  */
  YYSYMBOL_designator = 125,               /* designator  */
  YYSYMBOL_statement = 126,                /* statement  */
  YYSYMBOL_127_labeled_statement = 127,    /* labeled-statement  */
  YYSYMBOL_128_compound_statement = 128,   /* compound-statement  */
  YYSYMBOL_129_block_item_listopt = 129,   /* block-item-listopt  */
  YYSYMBOL_130_block_item_list = 130,      /* block-item-list  */
  YYSYMBOL_131_block_item = 131,           /* block-item  */
  YYSYMBOL_132_expression_statement = 132, /* expression-statement  */
  YYSYMBOL_expressionopt = 133,            /* expressionopt  */
  YYSYMBOL_134_selection_statement = 134,  /* selection-statement  */
  YYSYMBOL_135_iteration_statement = 135,  /* iteration-statement  */
  YYSYMBOL_136_jump_statement = 136,       /* jump-statement  */
  YYSYMBOL_137_translation_unit = 137,     /* translation-unit  */
  YYSYMBOL_138_external_declaration = 138, /* external-declaration  */
  YYSYMBOL_139_function_definition = 139,  /* function-definition  */
  YYSYMBOL_140_declaration_listopt = 140,  /* declaration-listopt  */
  YYSYMBOL_141_declaration_list = 141      /* declaration-list  */
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
#define YYFINAL  32
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   553

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  72
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  70
/* YYNRULES -- Number of rules.  */
#define YYNRULES  186
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  316

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   326


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
      65,    66,    67,    68,    69,    70,    71
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    21,    21,    22,    23,    24,    25,    26,    27,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    41,    42,
      45,    46,    49,    50,    51,    52,    53,    54,    57,    58,
      59,    60,    61,    62,    65,    66,    69,    70,    71,    72,
      75,    76,    77,    80,    81,    82,    85,    86,    87,    88,
      89,    92,    93,    94,    97,    98,   101,   102,   105,   106,
     109,   110,   113,   114,   117,   118,   121,   122,   123,   126,
     127,   130,   133,   136,   137,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   152,   155,   156,   159,   160,
     163,   164,   167,   168,   169,   172,   173,   176,   177,   178,
     181,   182,   185,   186,   189,   190,   193,   196,   197,   200,
     201,   202,   203,   204,   205,   206,   207,   210,   211,   214,
     215,   218,   219,   222,   223,   226,   227,   230,   231,   234,
     235,   238,   239,   242,   243,   246,   249,   250,   251,   254,
     255,   258,   259,   262,   265,   266,   269,   270,   273,   274,
     275,   276,   277,   278,   280,   281,   282,   285,   288,   289,
     292,   293,   296,   297,   300,   303,   304,   307,   309,   310,
     313,   314,   315,   316,   319,   320,   321,   322,   325,   326,
     329,   330,   333,   336,   337,   340,   341
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
  "\"end of file\"", "error", "\"invalid token\"", "ENUM",
  "TYPE_SPECIFIER_TOKEN", "STORAGE_CLASS_SPECIFIER", "STATIC_TOKEN",
  "FUNCTION_SPECIFIER", "CASE", "DEFAULT", "SIZEOF", "OF", "ELSE",
  "SWITCH", "WHILE", "DO", "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN",
  "TYPE_QUALIFIER", "KEYWORD", "ENUMERATION_CONST", "IDENTIFIER",
  "INTEGER", "FLOAT", "PUNCTUATOR", "CHARACTER_CONSTANT", "STRING_LITERAL",
  "ASSIGNMENT_OPERATOR", "SINGLE_LINE_COMMENT", "MULTI_LINE_COMMENT",
  "ERROR", "IF", "EQUALS", "INCREMENT", "DECREMENT", "AND", "STAR", "PLUS",
  "MINUS", "TILDE", "NOT", "DIV", "MOD", "LEFT_SHIFT", "RIGHT_SHIFT",
  "LESS_THAN", "GREATER_THAN", "LESS_THAN_EQUAL", "GREATER_THAN_EQUAL",
  "EQUAL_TO", "NOT_EQUAL_TO", "XOR", "OR", "AND_AND", "OR_OR", "QUESTION",
  "COLON", "SEMICOLON", "COMMA", "LEFT_SQUARE_BRACKET",
  "RIGHT_SQUARE_BRACKET", "LEFT_CURLY_BRACKET", "RIGHT_CURLY_BRACKET",
  "LEFT_PARENTHESIS", "RIGHT_PARENTHESIS", "DOT", "ELLIPSIS", "ARROW",
  "LOWER_THAN_ELSE", "$accept", "primary-expression", "postfix-expression",
  "argument-expression-list", "argument-expression-listopt",
  "unary-expression", "unary-operator", "cast-expression",
  "multiplicative-expression", "additive-expression", "shift-expression",
  "relational-expression", "equality-expression", "AND-expression",
  "exclusive-OR-expression", "inclusive-OR-expression",
  "logical-AND-expression", "logical-OR-expression",
  "conditional-expression", "assignment-expression", "expression",
  "constant-expression", "declaration", "init-declarator-listopt",
  "declaration-specifiers", "type-qualifier", "init-declarator-list",
  "init-declarator", "storage-class-specifier", "specifier-qualifier-list",
  "specifier-qualifier-listopt", "enum-specifier", "identifieropt",
  "enumerator-list", "enumerator", "function-specifier", "declarator",
  "direct-declarator", "type-qualifier-listopt",
  "assignment-expressionopt", "identifier-listopt", "pointer",
  "type-qualifier-list", "parameter-type-list", "parameter-list",
  "parameter-declaration", "identifier-list", "type-name", "initializer",
  "initializer-list", "designationopt", "designation", "designator-list",
  "designator", "statement", "labeled-statement", "compound-statement",
  "block-item-listopt", "block-item-list", "block-item",
  "expression-statement", "expressionopt", "selection-statement",
  "iteration-statement", "jump-statement", "translation-unit",
  "external-declaration", "function-definition", "declaration-listopt",
  "declaration-list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-182)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-185)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     203,    -3,   203,  -182,  -182,  -182,  -182,  -182,    22,   203,
     203,   203,   203,   300,  -182,  -182,   -30,    13,  -182,  -182,
      39,    22,    82,    21,  -182,   122,   -18,   -14,  -182,  -182,
    -182,  -182,  -182,  -182,   139,  -182,   134,   162,   125,  -182,
      22,   343,  -182,    22,   133,   203,    58,   143,   -18,   154,
     110,  -182,  -182,  -182,  -182,  -182,   167,   411,  -182,  -182,
    -182,  -182,  -182,  -182,   432,   432,  -182,  -182,  -182,  -182,
    -182,  -182,    71,   273,  -182,     6,    23,   466,  -182,    -4,
      50,   227,   230,    67,   192,   186,   150,   195,   233,  -182,
    -182,  -182,   229,  -182,  -182,    39,   487,    75,  -182,    22,
     197,   208,   201,  -182,   221,   466,    -2,  -182,   273,  -182,
     273,  -182,  -182,   466,   264,   111,   343,  -182,    16,  -182,
      24,    24,  -182,    19,  -182,    24,   225,  -182,  -182,   466,
     466,   284,   296,   466,   466,  -182,  -182,   466,   466,   466,
     466,   466,   466,   466,   466,   466,   466,   466,   466,   466,
     466,   466,   466,   466,   466,   466,   466,   277,   276,   278,
     309,   290,   333,   298,   299,   466,   301,   295,   302,  -182,
    -182,  -182,  -182,   297,   229,  -182,  -182,   304,  -182,  -182,
    -182,   466,   307,  -182,   311,   466,  -182,  -182,  -182,    26,
     341,  -182,  -182,  -182,  -182,   310,   321,   313,  -182,    93,
    -182,  -182,  -182,  -182,  -182,  -182,  -182,   466,  -182,  -182,
     377,   166,   317,   322,  -182,  -182,  -182,  -182,  -182,  -182,
    -182,  -182,    -4,    -4,    50,    50,   227,   227,   227,   227,
     230,   230,    67,   192,   186,   150,   195,    73,   331,   309,
     466,   466,   378,   175,   334,  -182,  -182,   335,   309,   466,
    -182,  -182,  -182,   328,  -182,  -182,   330,  -182,  -182,  -182,
     332,   332,  -182,  -182,   343,  -182,    71,  -182,  -182,   466,
    -182,   466,   309,  -182,   123,   126,   338,   466,   337,  -182,
    -182,  -182,   127,  -182,  -182,  -182,   161,  -182,  -182,  -182,
     309,   309,   466,   339,   466,   309,    97,  -182,  -182,  -182,
     158,   466,   348,   386,  -182,   350,   344,   466,   309,  -182,
     309,   345,  -182,  -182,   309,  -182
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   101,    79,    90,    91,   106,    85,   181,    74,    82,
      76,    80,    84,     0,   178,   180,    98,     0,    77,   109,
     118,     0,     0,    73,    86,    88,   108,     0,    81,    75,
      78,    83,     1,   179,     0,   125,   123,   117,     0,    72,
       0,     0,   185,    74,     0,   183,   118,   122,   107,   104,
       0,   102,   124,   126,   110,    87,    88,     0,     6,     2,
       3,     4,     5,     7,     0,     0,    28,    29,    30,    31,
      32,    33,   142,     0,     9,    22,    34,     0,    36,    40,
      43,    46,    51,    54,    56,    58,    60,    62,    64,    66,
     136,    89,   159,   182,   186,   118,   120,   117,   133,   132,
       0,     0,   127,   129,   121,     0,     0,    97,     0,    26,
       0,    23,    24,     0,     0,     0,     0,   141,     0,   144,
      96,    96,    69,     0,   135,    96,     0,    14,    15,     0,
      21,     0,     0,     0,     0,    34,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     166,     0,     0,     0,     0,   166,     2,     0,   165,   162,
     163,   148,   149,     0,   158,   160,   150,     0,   151,   152,
     153,     0,    29,   119,     0,     0,   131,   116,   115,     0,
       0,    71,   105,    99,   103,     0,     0,     0,   147,   142,
     137,   139,   143,   145,    95,    92,    94,     0,     8,    93,
       0,     0,    20,     0,    18,    12,    13,    67,    68,    37,
      38,    39,    41,    42,    44,    45,    47,    48,    49,    50,
      52,    53,    55,    57,    59,    61,    63,     0,     0,   166,
       0,     0,     0,   166,     0,   175,   176,     0,   166,     0,
     157,   161,   164,     0,   114,   111,     0,   128,   130,   134,
      27,     0,   146,   138,     0,    70,   142,    35,    10,     0,
      11,     0,   166,   156,     0,     0,     0,   166,     0,   174,
     177,   154,     0,   112,   113,   140,     0,    19,    65,   155,
     166,   166,     0,     0,   166,   166,   142,    16,   169,   170,
       0,   166,     0,   167,    17,     0,     0,   166,   166,   171,
     166,     0,   168,   173,   166,   172
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -182,  -182,  -182,  -182,  -182,   -40,  -182,   -15,   190,   198,
     140,   206,   272,   274,   271,   275,   270,  -182,   -97,   -41,
     -72,  -106,   -22,  -182,     2,  -182,  -182,   387,  -182,    10,
     135,   -54,  -182,  -182,   320,  -182,    18,   402,   -26,  -182,
    -182,   394,   385,  -182,  -182,   243,  -182,   151,  -111,   172,
    -181,  -182,  -182,   315,  -154,  -182,   400,  -182,  -182,   285,
    -182,  -156,  -182,  -182,  -182,  -182,   433,  -182,  -182,  -182
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    74,    75,   212,   213,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,   122,
     168,   192,     7,    22,    43,     9,    23,    24,    10,   124,
     205,    11,    17,    50,    51,    12,    56,    26,    36,   184,
     100,    27,    37,   101,   102,   103,   104,   126,    91,   115,
     116,   117,   118,   119,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,    13,    14,    15,    44,    45
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      90,   123,     8,    42,    18,   201,   242,   197,   191,   247,
      19,    28,    29,    30,    31,     8,   191,   109,   264,   125,
      96,    16,    49,    94,   111,   112,    25,     1,   120,     1,
       2,     3,     4,     5,  -100,   137,   123,   135,   123,    38,
     138,   139,   127,   128,    46,   121,    19,     6,    47,    99,
     238,   202,    21,   133,   125,   183,   125,   211,   134,   191,
      35,    20,   136,   193,    95,   135,   125,   125,   129,   181,
     169,   125,   130,   135,   131,    90,   132,    34,   113,    35,
     207,   185,    40,   237,   114,   273,   208,   278,    21,   214,
     140,   141,   217,   218,   281,   257,    53,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   264,   135,   186,   289,   148,
     149,   293,   219,   220,   221,     1,     2,     3,     4,     5,
     204,   204,   271,   113,   207,   204,   298,   299,   302,   114,
     253,   303,    39,     6,   256,   306,     1,     2,     3,     4,
       5,   311,   169,   285,   312,   113,   313,    41,   263,   113,
     315,   114,   304,    49,     6,   114,   265,    98,   274,   275,
     135,   106,   199,    20,   288,   107,   200,   282,     1,     2,
       3,     4,     5,    53,   207,    57,  -184,   207,   207,   105,
     290,    99,    54,   291,   295,   267,     6,    92,    58,    59,
      60,    61,    41,    62,    63,   152,     1,     2,     3,     4,
       5,    64,    65,    66,    67,    68,    69,    70,    71,   207,
     300,   277,   296,    90,     6,   305,   297,   207,   287,   268,
     150,   135,     1,     2,     3,     4,     5,   156,   157,    57,
     151,    73,   158,   159,   160,   161,   162,   163,   164,   165,
       6,   153,    58,   166,    60,    61,   206,    62,    63,   195,
     209,   196,   189,   167,   187,    64,    65,    66,    67,    68,
      69,    70,    71,   142,   143,   188,     1,   120,   144,   145,
     146,   147,   190,    57,   226,   227,   228,   229,   198,  -166,
     154,   155,   210,    92,   121,    73,    58,    59,    60,    61,
      32,    62,    63,     1,     2,     3,     4,     5,   215,    64,
      65,    66,    67,    68,    69,    70,    71,   156,   157,    57,
     216,     6,   158,   159,   160,   161,   162,   163,   164,   165,
     222,   223,    58,   166,    60,    61,   239,    62,    63,    73,
     224,   225,   240,   167,   241,    64,    65,    66,    67,    68,
      69,    70,    71,    57,   230,   231,   243,   244,   245,   246,
     248,   249,   250,   207,   252,   259,    58,    59,    60,    61,
     254,    62,    63,    92,   255,    73,   262,   260,   269,    64,
      65,    66,    67,    68,    69,    70,    71,    57,   261,   270,
     272,   283,   276,   284,   279,   280,   266,   294,   308,   301,
      58,    59,    60,    61,   292,    62,    63,    72,   307,    73,
     309,   310,   314,    64,    65,    66,    67,    68,    69,    70,
      71,    57,   232,   234,   236,   233,   194,    55,   235,    48,
      52,    97,   258,   203,    58,    59,    60,    61,   286,    62,
      63,   266,    57,    73,    93,     0,    33,    64,    65,    66,
      67,    68,    69,    70,    71,    58,    59,    60,    61,   251,
      62,    63,     0,     0,     0,     0,     0,     0,    64,    65,
      66,    67,    68,    69,    70,    71,    57,   108,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    58,
      59,    60,    61,     0,    62,    63,     0,    57,   110,     0,
       0,     0,    64,    65,    66,    67,    68,    69,    70,    71,
      58,    59,    60,    61,     0,    62,    63,     0,     0,     0,
       0,     0,     0,    64,    65,    66,   182,    68,    69,    70,
      71,     0,    73,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    73
};

static const yytype_int16 yycheck[] =
{
      41,    73,     0,    25,     2,   116,   160,   113,   105,   165,
      24,     9,    10,    11,    12,    13,   113,    57,   199,    73,
      46,    24,    24,    45,    64,    65,     8,     3,     4,     3,
       4,     5,     6,     7,    64,    39,   108,    77,   110,    21,
      44,    45,    36,    37,    62,    21,    24,    21,    66,    47,
     156,    35,    66,    30,   108,    96,   110,   129,    35,   156,
      21,    39,    77,    65,     6,   105,   120,   121,    62,    95,
      92,   125,    66,   113,    68,   116,    70,    64,    62,    21,
      61,     6,    61,   155,    68,   239,    67,   243,    66,   130,
      40,    41,   133,   134,   248,    69,    21,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   296,   156,    99,   272,    52,
      53,   277,   137,   138,   139,     3,     4,     5,     6,     7,
     120,   121,    59,    62,    61,   125,   290,   291,   294,    68,
     181,   295,    60,    21,   185,   301,     3,     4,     5,     6,
       7,   307,   174,   264,   308,    62,   310,    35,    65,    62,
     314,    68,    65,    24,    21,    68,   207,    24,   240,   241,
     210,    61,    61,    39,   271,    65,    65,   249,     3,     4,
       5,     6,     7,    21,    61,    10,    64,    61,    61,    35,
      67,   189,    67,    67,    67,   210,    21,    64,    23,    24,
      25,    26,    35,    28,    29,    55,     3,     4,     5,     6,
       7,    36,    37,    38,    39,    40,    41,    42,    43,    61,
     292,   243,    61,   264,    21,    67,    65,    61,   269,    63,
      38,   271,     3,     4,     5,     6,     7,     8,     9,    10,
      54,    66,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    56,    23,    24,    25,    26,   121,    28,    29,   108,
     125,   110,    61,    34,    67,    36,    37,    38,    39,    40,
      41,    42,    43,    46,    47,    67,     3,     4,    48,    49,
      50,    51,    61,    10,   144,   145,   146,   147,    24,    60,
      57,    58,    67,    64,    21,    66,    23,    24,    25,    26,
       0,    28,    29,     3,     4,     5,     6,     7,    24,    36,
      37,    38,    39,    40,    41,    42,    43,     8,     9,    10,
      24,    21,    13,    14,    15,    16,    17,    18,    19,    20,
     140,   141,    23,    24,    25,    26,    59,    28,    29,    66,
     142,   143,    66,    34,    66,    36,    37,    38,    39,    40,
      41,    42,    43,    10,   148,   149,    66,    24,    60,    60,
      59,    66,    65,    61,    60,    24,    23,    24,    25,    26,
      63,    28,    29,    64,    63,    66,    63,    67,    61,    36,
      37,    38,    39,    40,    41,    42,    43,    10,    67,    67,
      59,    63,    14,    63,    60,    60,    64,    60,    12,    60,
      23,    24,    25,    26,    66,    28,    29,    64,    60,    66,
      60,    67,    67,    36,    37,    38,    39,    40,    41,    42,
      43,    10,   150,   152,   154,   151,   106,    40,   153,    27,
      36,    46,   189,   118,    23,    24,    25,    26,   266,    28,
      29,    64,    10,    66,    44,    -1,    13,    36,    37,    38,
      39,    40,    41,    42,    43,    23,    24,    25,    26,   174,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    36,    37,
      38,    39,    40,    41,    42,    43,    10,    66,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    26,    -1,    28,    29,    -1,    10,    66,    -1,
      -1,    -1,    36,    37,    38,    39,    40,    41,    42,    43,
      23,    24,    25,    26,    -1,    28,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    36,    37,    38,    39,    40,    41,    42,
      43,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,    21,    94,    96,    97,
     100,   103,   107,   137,   138,   139,    24,   104,    96,    24,
      39,    66,    95,    98,    99,   108,   109,   113,    96,    96,
      96,    96,     0,   138,    64,    21,   110,   114,   108,    60,
      61,    35,    94,    96,   140,   141,    62,    66,   109,    24,
     105,   106,   113,    21,    67,    99,   108,    10,    23,    24,
      25,    26,    28,    29,    36,    37,    38,    39,    40,    41,
      42,    43,    64,    66,    73,    74,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,   120,    64,   128,    94,     6,   110,   114,    24,    96,
     112,   115,   116,   117,   118,    35,    61,    65,    66,    77,
      66,    77,    77,    62,    68,   121,   122,   123,   124,   125,
       4,    21,    91,    92,   101,   103,   119,    36,    37,    62,
      66,    68,    70,    30,    35,    77,    79,    39,    44,    45,
      40,    41,    46,    47,    48,    49,    50,    51,    52,    53,
      38,    54,    55,    56,    57,    58,     8,     9,    13,    14,
      15,    16,    17,    18,    19,    20,    24,    34,    92,    94,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   110,    39,    91,   111,     6,   108,    67,    67,    61,
      61,    90,    93,    65,   106,   119,   119,    93,    24,    61,
      65,   120,    35,   125,   101,   102,   102,    61,    67,   102,
      67,    92,    75,    76,    91,    24,    24,    91,    91,    79,
      79,    79,    80,    80,    81,    81,    82,    82,    82,    82,
      83,    83,    84,    85,    86,    87,    88,    92,    93,    59,
      66,    66,   126,    66,    24,    60,    60,   133,    59,    66,
      65,   131,    60,    91,    63,    63,    91,    69,   117,    24,
      67,    67,    63,    65,   122,    91,    64,    79,    63,    61,
      67,    59,    59,   126,    92,    92,    14,    94,   133,    60,
      60,   126,    92,    63,    63,   120,   121,    91,    90,   126,
      67,    67,    66,   133,    60,    67,    61,    65,   126,   126,
      92,    60,   133,   126,    65,    67,   133,    60,    12,    60,
      67,   133,   126,   126,    67,   126
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    72,    73,    73,    73,    73,    73,    73,    73,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    75,    75,
      76,    76,    77,    77,    77,    77,    77,    77,    78,    78,
      78,    78,    78,    78,    79,    79,    80,    80,    80,    80,
      81,    81,    81,    82,    82,    82,    83,    83,    83,    83,
      83,    84,    84,    84,    85,    85,    86,    86,    87,    87,
      88,    88,    89,    89,    90,    90,    91,    91,    91,    92,
      92,    93,    94,    95,    95,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    97,    98,    98,    99,    99,
     100,   100,   101,   101,   101,   102,   102,   103,   103,   103,
     104,   104,   105,   105,   106,   106,   107,   108,   108,   109,
     109,   109,   109,   109,   109,   109,   109,   110,   110,   111,
     111,   112,   112,   113,   113,   114,   114,   115,   115,   116,
     116,   117,   117,   118,   118,   119,   120,   120,   120,   121,
     121,   122,   122,   123,   124,   124,   125,   125,   126,   126,
     126,   126,   126,   126,   127,   127,   127,   128,   129,   129,
     130,   130,   131,   131,   132,   133,   133,   134,   134,   134,
     135,   135,   135,   135,   136,   136,   136,   136,   137,   137,
     138,   138,   139,   140,   140,   141,   141
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
       1,     3,     1,     3,     1,     5,     1,     3,     3,     1,
       3,     1,     3,     1,     0,     2,     1,     2,     2,     1,
       1,     2,     1,     2,     1,     1,     1,     3,     1,     3,
       1,     1,     2,     2,     2,     1,     0,     5,     2,     6,
       1,     0,     1,     3,     1,     3,     1,     2,     1,     1,
       3,     5,     6,     6,     5,     4,     4,     1,     0,     1,
       0,     1,     0,     2,     3,     1,     2,     1,     3,     1,
       3,     2,     1,     1,     3,     1,     1,     3,     4,     2,
       4,     1,     0,     2,     1,     2,     3,     2,     1,     1,
       1,     1,     1,     1,     3,     4,     3,     3,     1,     0,
       1,     2,     1,     1,     2,     1,     0,     5,     7,     5,
       5,     7,     9,     8,     3,     2,     2,     3,     1,     2,
       1,     1,     4,     1,     0,     1,     2
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
#line 21 "assgn_4_21CS30059_21CS30038.y"
                    {printf("primary-expression-> IDENTIFIER\n");}
#line 1698 "y.tab.c"
    break;

  case 3: /* primary-expression: INTEGER  */
#line 22 "assgn_4_21CS30059_21CS30038.y"
                    {printf("primary-expression-> INTEGER\n");}
#line 1704 "y.tab.c"
    break;

  case 4: /* primary-expression: FLOAT  */
#line 23 "assgn_4_21CS30059_21CS30038.y"
                   {printf("primary-expression-> FLOAT\n");}
#line 1710 "y.tab.c"
    break;

  case 5: /* primary-expression: CHARACTER_CONSTANT  */
#line 24 "assgn_4_21CS30059_21CS30038.y"
                                {printf("primary-expression-> CHARACTER_CONSTANT\n");}
#line 1716 "y.tab.c"
    break;

  case 6: /* primary-expression: ENUMERATION_CONST  */
#line 25 "assgn_4_21CS30059_21CS30038.y"
                              {printf("primary-expression-> ENUMERATION_CONST\n");}
#line 1722 "y.tab.c"
    break;

  case 7: /* primary-expression: STRING_LITERAL  */
#line 26 "assgn_4_21CS30059_21CS30038.y"
                            {printf("primary-expression-> STRING_LITERAL\n");}
#line 1728 "y.tab.c"
    break;

  case 8: /* primary-expression: LEFT_PARENTHESIS expression RIGHT_PARENTHESIS  */
#line 27 "assgn_4_21CS30059_21CS30038.y"
                                                         {printf("primary-expression-> (expression)\n");}
#line 1734 "y.tab.c"
    break;

  case 9: /* postfix-expression: primary-expression  */
#line 30 "assgn_4_21CS30059_21CS30038.y"
                            {printf("postfix-expression-> primary-expression\n");}
#line 1740 "y.tab.c"
    break;

  case 10: /* postfix-expression: postfix-expression LEFT_SQUARE_BRACKET expression RIGHT_SQUARE_BRACKET  */
#line 31 "assgn_4_21CS30059_21CS30038.y"
                                                                                  {printf("postfix-expression-> postfix-expression [expression]\n");}
#line 1746 "y.tab.c"
    break;

  case 11: /* postfix-expression: postfix-expression LEFT_PARENTHESIS argument-expression-listopt RIGHT_PARENTHESIS  */
#line 32 "assgn_4_21CS30059_21CS30038.y"
                                                                                             {printf("postfix-expression-> postfix-expression (argument_list_optional)\n");}
#line 1752 "y.tab.c"
    break;

  case 12: /* postfix-expression: postfix-expression DOT IDENTIFIER  */
#line 33 "assgn_4_21CS30059_21CS30038.y"
                                             {printf("postfix-expression-> postfix-expression . IDENTIFIER\n");}
#line 1758 "y.tab.c"
    break;

  case 13: /* postfix-expression: postfix-expression ARROW IDENTIFIER  */
#line 34 "assgn_4_21CS30059_21CS30038.y"
                                               {printf("postfix-expression-> postfix-expression -> IDENTIFIER\n");}
#line 1764 "y.tab.c"
    break;

  case 14: /* postfix-expression: postfix-expression INCREMENT  */
#line 35 "assgn_4_21CS30059_21CS30038.y"
                                        {printf("postfix-expression-> postfix-expression ++\n");}
#line 1770 "y.tab.c"
    break;

  case 15: /* postfix-expression: postfix-expression DECREMENT  */
#line 36 "assgn_4_21CS30059_21CS30038.y"
                                        {printf("postfix-expression-> postfix-expression --\n");}
#line 1776 "y.tab.c"
    break;

  case 16: /* postfix-expression: LEFT_PARENTHESIS type-name RIGHT_PARENTHESIS LEFT_CURLY_BRACKET initializer-list RIGHT_CURLY_BRACKET  */
#line 37 "assgn_4_21CS30059_21CS30038.y"
                                                                                                                {printf("postfix-expression-> (type-name) {initializer-list}\n");}
#line 1782 "y.tab.c"
    break;

  case 17: /* postfix-expression: LEFT_PARENTHESIS type-name RIGHT_PARENTHESIS LEFT_CURLY_BRACKET initializer-list COMMA RIGHT_CURLY_BRACKET  */
#line 38 "assgn_4_21CS30059_21CS30038.y"
                                                                                                                      {printf("postfix-expression-> (type-name) {initializer-list,}\n");}
#line 1788 "y.tab.c"
    break;

  case 18: /* argument-expression-list: assignment-expression  */
#line 41 "assgn_4_21CS30059_21CS30038.y"
                               {printf("argument-expression-list-> assignment-expression\n");}
#line 1794 "y.tab.c"
    break;

  case 19: /* argument-expression-list: argument-expression-list COMMA assignment-expression  */
#line 42 "assgn_4_21CS30059_21CS30038.y"
                                                                {printf("argument-expression-list-> argument-expression-list , assignment-expression\n");}
#line 1800 "y.tab.c"
    break;

  case 20: /* argument-expression-listopt: argument-expression-list  */
#line 45 "assgn_4_21CS30059_21CS30038.y"
                                  {printf("argument-expression-listopt-> argument-expression-list\n");}
#line 1806 "y.tab.c"
    break;

  case 21: /* argument-expression-listopt: %empty  */
#line 46 "assgn_4_21CS30059_21CS30038.y"
           {printf("argument-expression-listopt-> \n");}
#line 1812 "y.tab.c"
    break;

  case 22: /* unary-expression: postfix-expression  */
#line 49 "assgn_4_21CS30059_21CS30038.y"
                            {printf("unary-expression-> postfix-expression\n");}
#line 1818 "y.tab.c"
    break;

  case 23: /* unary-expression: INCREMENT unary-expression  */
#line 50 "assgn_4_21CS30059_21CS30038.y"
                                      {printf("unary-expression-> ++ unary-expression\n");}
#line 1824 "y.tab.c"
    break;

  case 24: /* unary-expression: DECREMENT unary-expression  */
#line 51 "assgn_4_21CS30059_21CS30038.y"
                                      {printf("unary-expression-> -- unary-expression\n");}
#line 1830 "y.tab.c"
    break;

  case 25: /* unary-expression: unary-operator cast-expression  */
#line 52 "assgn_4_21CS30059_21CS30038.y"
                                          {printf("unary-expression-> unary-operator cast-expression\n");}
#line 1836 "y.tab.c"
    break;

  case 26: /* unary-expression: SIZEOF unary-expression  */
#line 53 "assgn_4_21CS30059_21CS30038.y"
                                   {printf("unary-expression-> SIZEOF unary-expression\n");}
#line 1842 "y.tab.c"
    break;

  case 27: /* unary-expression: SIZEOF LEFT_PARENTHESIS type-name RIGHT_PARENTHESIS  */
#line 54 "assgn_4_21CS30059_21CS30038.y"
                                                               {printf("unary-expression-> SIZEOF (type-name)\n");}
#line 1848 "y.tab.c"
    break;

  case 28: /* unary-operator: AND  */
#line 57 "assgn_4_21CS30059_21CS30038.y"
             {printf("unary-operator-> &\n");}
#line 1854 "y.tab.c"
    break;

  case 29: /* unary-operator: STAR  */
#line 58 "assgn_4_21CS30059_21CS30038.y"
                {printf("unary-operator-> *\n");}
#line 1860 "y.tab.c"
    break;

  case 30: /* unary-operator: PLUS  */
#line 59 "assgn_4_21CS30059_21CS30038.y"
                {printf("unary-operator-> +\n");}
#line 1866 "y.tab.c"
    break;

  case 31: /* unary-operator: MINUS  */
#line 60 "assgn_4_21CS30059_21CS30038.y"
                 {printf("unary-operator-> -\n");}
#line 1872 "y.tab.c"
    break;

  case 32: /* unary-operator: TILDE  */
#line 61 "assgn_4_21CS30059_21CS30038.y"
                 {printf("unary-operator-> ~\n");}
#line 1878 "y.tab.c"
    break;

  case 33: /* unary-operator: NOT  */
#line 62 "assgn_4_21CS30059_21CS30038.y"
               {printf("unary-operator-> !\n");}
#line 1884 "y.tab.c"
    break;

  case 34: /* cast-expression: unary-expression  */
#line 65 "assgn_4_21CS30059_21CS30038.y"
                          {printf("cast-expression-> unary-expression\n");}
#line 1890 "y.tab.c"
    break;

  case 35: /* cast-expression: LEFT_PARENTHESIS type-name RIGHT_PARENTHESIS cast-expression  */
#line 66 "assgn_4_21CS30059_21CS30038.y"
                                                                        {printf("cast-expression-> (type-name) cast-expression\n");}
#line 1896 "y.tab.c"
    break;

  case 36: /* multiplicative-expression: cast-expression  */
#line 69 "assgn_4_21CS30059_21CS30038.y"
                         {printf("multiplicative-expression-> cast-expression\n");}
#line 1902 "y.tab.c"
    break;

  case 37: /* multiplicative-expression: multiplicative-expression STAR cast-expression  */
#line 70 "assgn_4_21CS30059_21CS30038.y"
                                                          {printf("multiplicative-expression-> multiplicative-expression * cast-expression\n");}
#line 1908 "y.tab.c"
    break;

  case 38: /* multiplicative-expression: multiplicative-expression DIV cast-expression  */
#line 71 "assgn_4_21CS30059_21CS30038.y"
                                                         {printf("multiplicative-expression-> multiplicative-expression / cast-expression\n");}
#line 1914 "y.tab.c"
    break;

  case 39: /* multiplicative-expression: multiplicative-expression MOD cast-expression  */
#line 72 "assgn_4_21CS30059_21CS30038.y"
                                                         {printf("multiplicative-expression-> multiplicative-expression %% cast-expression\n");}
#line 1920 "y.tab.c"
    break;

  case 40: /* additive-expression: multiplicative-expression  */
#line 75 "assgn_4_21CS30059_21CS30038.y"
                                   {printf("additive-expression-> multiplicative-expression\n");}
#line 1926 "y.tab.c"
    break;

  case 41: /* additive-expression: additive-expression PLUS multiplicative-expression  */
#line 76 "assgn_4_21CS30059_21CS30038.y"
                                                              {printf("additive-expression-> additive-expression + multiplicative-expression\n");}
#line 1932 "y.tab.c"
    break;

  case 42: /* additive-expression: additive-expression MINUS multiplicative-expression  */
#line 77 "assgn_4_21CS30059_21CS30038.y"
                                                               {printf("additive-expression-> additive-expression - multiplicative-expression\n");}
#line 1938 "y.tab.c"
    break;

  case 43: /* shift-expression: additive-expression  */
#line 80 "assgn_4_21CS30059_21CS30038.y"
                             {printf("shift-expression-> additive-expression\n");}
#line 1944 "y.tab.c"
    break;

  case 44: /* shift-expression: shift-expression LEFT_SHIFT additive-expression  */
#line 81 "assgn_4_21CS30059_21CS30038.y"
                                                           {printf("shift-expression-> shift-expression << additive-expression\n");}
#line 1950 "y.tab.c"
    break;

  case 45: /* shift-expression: shift-expression RIGHT_SHIFT additive-expression  */
#line 82 "assgn_4_21CS30059_21CS30038.y"
                                                            {printf("shift-expression-> shift-expression >> additive-expression\n");}
#line 1956 "y.tab.c"
    break;

  case 46: /* relational-expression: shift-expression  */
#line 85 "assgn_4_21CS30059_21CS30038.y"
                          {printf("relational-expression-> shift-expression\n");}
#line 1962 "y.tab.c"
    break;

  case 47: /* relational-expression: relational-expression LESS_THAN shift-expression  */
#line 86 "assgn_4_21CS30059_21CS30038.y"
                                                            {printf("relational-expression-> relational-expression < shift-expression\n");}
#line 1968 "y.tab.c"
    break;

  case 48: /* relational-expression: relational-expression GREATER_THAN shift-expression  */
#line 87 "assgn_4_21CS30059_21CS30038.y"
                                                               {printf("relational-expression-> relational-expression > shift-expression\n");}
#line 1974 "y.tab.c"
    break;

  case 49: /* relational-expression: relational-expression LESS_THAN_EQUAL shift-expression  */
#line 88 "assgn_4_21CS30059_21CS30038.y"
                                                                  {printf("relational-expression-> relational-expression <= shift-expression\n");}
#line 1980 "y.tab.c"
    break;

  case 50: /* relational-expression: relational-expression GREATER_THAN_EQUAL shift-expression  */
#line 89 "assgn_4_21CS30059_21CS30038.y"
                                                                     {printf("relational-expression-> relational-expression >= shift-expression\n");}
#line 1986 "y.tab.c"
    break;

  case 51: /* equality-expression: relational-expression  */
#line 92 "assgn_4_21CS30059_21CS30038.y"
                               {printf("equality-expression-> relational-expression\n");}
#line 1992 "y.tab.c"
    break;

  case 52: /* equality-expression: equality-expression EQUAL_TO relational-expression  */
#line 93 "assgn_4_21CS30059_21CS30038.y"
                                                              {printf("equality-expression-> equality-expression == relational-expression\n");}
#line 1998 "y.tab.c"
    break;

  case 53: /* equality-expression: equality-expression NOT_EQUAL_TO relational-expression  */
#line 94 "assgn_4_21CS30059_21CS30038.y"
                                                                  {printf("equality-expression-> equality-expression != relational-expression\n");}
#line 2004 "y.tab.c"
    break;

  case 54: /* AND-expression: equality-expression  */
#line 97 "assgn_4_21CS30059_21CS30038.y"
                             {printf("AND-expression-> equality-expression\n");}
#line 2010 "y.tab.c"
    break;

  case 55: /* AND-expression: AND-expression AND equality-expression  */
#line 98 "assgn_4_21CS30059_21CS30038.y"
                                                  {printf("AND-expression-> AND-expression & equality-expression\n");}
#line 2016 "y.tab.c"
    break;

  case 56: /* exclusive-OR-expression: AND-expression  */
#line 101 "assgn_4_21CS30059_21CS30038.y"
                        {printf("exclusive-OR-expression-> AND-expression\n");}
#line 2022 "y.tab.c"
    break;

  case 57: /* exclusive-OR-expression: exclusive-OR-expression XOR AND-expression  */
#line 102 "assgn_4_21CS30059_21CS30038.y"
                                                      {printf("exclusive-OR-expression-> exclusive-OR-expression ^ AND-expression\n");}
#line 2028 "y.tab.c"
    break;

  case 58: /* inclusive-OR-expression: exclusive-OR-expression  */
#line 105 "assgn_4_21CS30059_21CS30038.y"
                                 {printf("inclusive-OR-expression-> exclusive-OR-expression\n");}
#line 2034 "y.tab.c"
    break;

  case 59: /* inclusive-OR-expression: inclusive-OR-expression OR exclusive-OR-expression  */
#line 106 "assgn_4_21CS30059_21CS30038.y"
                                                              {printf("inclusive-OR-expression-> inclusive-OR-expression | exclusive-OR-expression\n");}
#line 2040 "y.tab.c"
    break;

  case 60: /* logical-AND-expression: inclusive-OR-expression  */
#line 109 "assgn_4_21CS30059_21CS30038.y"
                                 {printf("logical-AND-expression-> inclusive-OR-expression\n");}
#line 2046 "y.tab.c"
    break;

  case 61: /* logical-AND-expression: logical-AND-expression AND_AND inclusive-OR-expression  */
#line 110 "assgn_4_21CS30059_21CS30038.y"
                                                                  {printf("logical-AND-expression-> logical-AND-expression && inclusive-OR-expression\n");}
#line 2052 "y.tab.c"
    break;

  case 62: /* logical-OR-expression: logical-AND-expression  */
#line 113 "assgn_4_21CS30059_21CS30038.y"
                                {printf("logical-OR-expression-> logical-AND-expression\n");}
#line 2058 "y.tab.c"
    break;

  case 63: /* logical-OR-expression: logical-OR-expression OR_OR logical-AND-expression  */
#line 114 "assgn_4_21CS30059_21CS30038.y"
                                                              {printf("logical-OR-expression-> logical-OR-expression || logical-AND-expression\n");}
#line 2064 "y.tab.c"
    break;

  case 64: /* conditional-expression: logical-OR-expression  */
#line 117 "assgn_4_21CS30059_21CS30038.y"
                               {printf("conditional-expression-> logical-OR-expression\n");}
#line 2070 "y.tab.c"
    break;

  case 65: /* conditional-expression: logical-OR-expression QUESTION expression COLON conditional-expression  */
#line 118 "assgn_4_21CS30059_21CS30038.y"
                                                                                  {printf("conditional-expression-> logical-OR-expression ? expression : conditional-expression\n");}
#line 2076 "y.tab.c"
    break;

  case 66: /* assignment-expression: conditional-expression  */
#line 121 "assgn_4_21CS30059_21CS30038.y"
                                {printf("assignment-expression-> conditional-expression\n");}
#line 2082 "y.tab.c"
    break;

  case 67: /* assignment-expression: unary-expression ASSIGNMENT_OPERATOR assignment-expression  */
#line 122 "assgn_4_21CS30059_21CS30038.y"
                                                                      {printf("assignment-expression-> unary-expression assignment-operator assignment-expression\n");}
#line 2088 "y.tab.c"
    break;

  case 68: /* assignment-expression: unary-expression EQUALS assignment-expression  */
#line 123 "assgn_4_21CS30059_21CS30038.y"
                                                        {printf("assignment-expression-> unary-expression assignment-operator assignment-expression\n");}
#line 2094 "y.tab.c"
    break;

  case 69: /* expression: assignment-expression  */
#line 126 "assgn_4_21CS30059_21CS30038.y"
                               {printf("expression-> assignment-expression\n");}
#line 2100 "y.tab.c"
    break;

  case 70: /* expression: expression COMMA assignment-expression  */
#line 127 "assgn_4_21CS30059_21CS30038.y"
                                                  {printf("expression-> expression , assignment-expression\n");}
#line 2106 "y.tab.c"
    break;

  case 71: /* constant-expression: conditional-expression  */
#line 130 "assgn_4_21CS30059_21CS30038.y"
                                {printf("constant-expression-> conditional-expression\n");}
#line 2112 "y.tab.c"
    break;

  case 72: /* declaration: declaration-specifiers init-declarator-listopt SEMICOLON  */
#line 133 "assgn_4_21CS30059_21CS30038.y"
                                                                  {printf("declaration-> declaration-specifiers init-declarator-listopt ;\n");}
#line 2118 "y.tab.c"
    break;

  case 73: /* init-declarator-listopt: init-declarator-list  */
#line 136 "assgn_4_21CS30059_21CS30038.y"
                              {printf("init-declarator-listopt-> init-declarator-list\n");}
#line 2124 "y.tab.c"
    break;

  case 74: /* init-declarator-listopt: %empty  */
#line 137 "assgn_4_21CS30059_21CS30038.y"
          {printf("init-declarator-listopt-> \n");}
#line 2130 "y.tab.c"
    break;

  case 75: /* declaration-specifiers: storage-class-specifier declaration-specifiers  */
#line 140 "assgn_4_21CS30059_21CS30038.y"
                                                        {printf("declaration-specifiers-> storage-class-specifier declaration-specifiers\n");}
#line 2136 "y.tab.c"
    break;

  case 76: /* declaration-specifiers: storage-class-specifier  */
#line 141 "assgn_4_21CS30059_21CS30038.y"
                                   {printf("declaration-specifiers-> storage-class-specifier\n");}
#line 2142 "y.tab.c"
    break;

  case 77: /* declaration-specifiers: TYPE_SPECIFIER_TOKEN declaration-specifiers  */
#line 142 "assgn_4_21CS30059_21CS30038.y"
                                                       {printf("declaration-specifiers-> type-specifier declaration-specifiers\n");}
#line 2148 "y.tab.c"
    break;

  case 78: /* declaration-specifiers: enum-specifier declaration-specifiers  */
#line 143 "assgn_4_21CS30059_21CS30038.y"
                                                 {printf("declaration-specifiers-> enum-specifier declaration-specifiers\n");}
#line 2154 "y.tab.c"
    break;

  case 79: /* declaration-specifiers: TYPE_SPECIFIER_TOKEN  */
#line 144 "assgn_4_21CS30059_21CS30038.y"
                                {printf("declaration-specifiers-> type-specifier\n");}
#line 2160 "y.tab.c"
    break;

  case 80: /* declaration-specifiers: enum-specifier  */
#line 145 "assgn_4_21CS30059_21CS30038.y"
                          {printf("declaration-specifiers-> enum-specifier\n");}
#line 2166 "y.tab.c"
    break;

  case 81: /* declaration-specifiers: type-qualifier declaration-specifiers  */
#line 146 "assgn_4_21CS30059_21CS30038.y"
                                                 {printf("declaration-specifiers-> type-qualifier declaration-specifiers\n");}
#line 2172 "y.tab.c"
    break;

  case 82: /* declaration-specifiers: type-qualifier  */
#line 147 "assgn_4_21CS30059_21CS30038.y"
                          {printf("declaration-specifiers-> type-qualifier\n");}
#line 2178 "y.tab.c"
    break;

  case 83: /* declaration-specifiers: function-specifier declaration-specifiers  */
#line 148 "assgn_4_21CS30059_21CS30038.y"
                                                     {printf("declaration-specifiers-> function-specifier declaration-specifiers\n");}
#line 2184 "y.tab.c"
    break;

  case 84: /* declaration-specifiers: function-specifier  */
#line 149 "assgn_4_21CS30059_21CS30038.y"
                              {printf("declaration-specifiers-> function-specifier\n");}
#line 2190 "y.tab.c"
    break;

  case 85: /* type-qualifier: TYPE_QUALIFIER  */
#line 152 "assgn_4_21CS30059_21CS30038.y"
                        {printf("type-qualifier-> type-qualifier-token\n");}
#line 2196 "y.tab.c"
    break;

  case 86: /* init-declarator-list: init-declarator  */
#line 155 "assgn_4_21CS30059_21CS30038.y"
                         {printf("init-declarator-list-> init-declarator\n");}
#line 2202 "y.tab.c"
    break;

  case 87: /* init-declarator-list: init-declarator-list COMMA init-declarator  */
#line 156 "assgn_4_21CS30059_21CS30038.y"
                                                      {printf("init-declarator-list-> init-declarator-list , init-declarator\n");}
#line 2208 "y.tab.c"
    break;

  case 88: /* init-declarator: declarator  */
#line 159 "assgn_4_21CS30059_21CS30038.y"
                    {printf("init-declarator-> declarator\n");}
#line 2214 "y.tab.c"
    break;

  case 89: /* init-declarator: declarator EQUALS initializer  */
#line 160 "assgn_4_21CS30059_21CS30038.y"
                                         {printf("init-declarator-> declarator = initializer\n");}
#line 2220 "y.tab.c"
    break;

  case 90: /* storage-class-specifier: STORAGE_CLASS_SPECIFIER  */
#line 163 "assgn_4_21CS30059_21CS30038.y"
                                {printf("storage-class-specifier-> storage_class_specifier_token\n");}
#line 2226 "y.tab.c"
    break;

  case 91: /* storage-class-specifier: STATIC_TOKEN  */
#line 164 "assgn_4_21CS30059_21CS30038.y"
                       {printf("storage-class-specifier-> storage_class_specifier_token\n");}
#line 2232 "y.tab.c"
    break;

  case 92: /* specifier-qualifier-list: TYPE_SPECIFIER_TOKEN specifier-qualifier-listopt  */
#line 167 "assgn_4_21CS30059_21CS30038.y"
                                                         {printf("specifier-qualifier-list-> type-specifier specifier-qualifier-listopt\n");}
#line 2238 "y.tab.c"
    break;

  case 93: /* specifier-qualifier-list: enum-specifier specifier-qualifier-listopt  */
#line 168 "assgn_4_21CS30059_21CS30038.y"
                                                     {printf("specifier-qualifier-list-> enum-specifier specifier-qualifier-listopt\n");}
#line 2244 "y.tab.c"
    break;

  case 94: /* specifier-qualifier-list: TYPE_QUALIFIER specifier-qualifier-listopt  */
#line 169 "assgn_4_21CS30059_21CS30038.y"
                                                     {printf("specifier-qualifier-list-> type-qualifier specifier-qualifier-listopt\n");}
#line 2250 "y.tab.c"
    break;

  case 95: /* specifier-qualifier-listopt: specifier-qualifier-list  */
#line 172 "assgn_4_21CS30059_21CS30038.y"
                                 {printf("specifier-qualifier-listopt-> specifier-qualifier-list\n");}
#line 2256 "y.tab.c"
    break;

  case 96: /* specifier-qualifier-listopt: %empty  */
#line 173 "assgn_4_21CS30059_21CS30038.y"
          {printf("specifier-qualifier-listopt-> \n");}
#line 2262 "y.tab.c"
    break;

  case 97: /* enum-specifier: ENUM identifieropt LEFT_CURLY_BRACKET enumerator-list RIGHT_CURLY_BRACKET  */
#line 176 "assgn_4_21CS30059_21CS30038.y"
                                                                                  {printf("enum-specifier-> enum IDENTIFIERopt {enumerator-list}\n");}
#line 2268 "y.tab.c"
    break;

  case 98: /* enum-specifier: ENUM IDENTIFIER  */
#line 177 "assgn_4_21CS30059_21CS30038.y"
                          {printf("enum-specifier-> enum IDENTIFIER\n");}
#line 2274 "y.tab.c"
    break;

  case 99: /* enum-specifier: ENUM identifieropt LEFT_CURLY_BRACKET enumerator-list COMMA RIGHT_CURLY_BRACKET  */
#line 178 "assgn_4_21CS30059_21CS30038.y"
                                                                                          {printf("enum-specifier-> enum IDENTIFIERopt {enumerator-list,}\n");}
#line 2280 "y.tab.c"
    break;

  case 100: /* identifieropt: IDENTIFIER  */
#line 181 "assgn_4_21CS30059_21CS30038.y"
                   {printf("identifieropt-> IDENTIFIER\n");}
#line 2286 "y.tab.c"
    break;

  case 101: /* identifieropt: %empty  */
#line 182 "assgn_4_21CS30059_21CS30038.y"
          {printf("identifieropt-> \n");}
#line 2292 "y.tab.c"
    break;

  case 102: /* enumerator-list: enumerator  */
#line 185 "assgn_4_21CS30059_21CS30038.y"
                   {printf("enumerator-list-> enumerator\n");}
#line 2298 "y.tab.c"
    break;

  case 103: /* enumerator-list: enumerator-list COMMA enumerator  */
#line 186 "assgn_4_21CS30059_21CS30038.y"
                                           {printf("enumerator-list-> enumerator-list , enumerator\n");}
#line 2304 "y.tab.c"
    break;

  case 104: /* enumerator: IDENTIFIER  */
#line 189 "assgn_4_21CS30059_21CS30038.y"
                   {printf("enumerator-> enumeration-const\n");}
#line 2310 "y.tab.c"
    break;

  case 105: /* enumerator: IDENTIFIER EQUALS constant-expression  */
#line 190 "assgn_4_21CS30059_21CS30038.y"
                                                {printf("enumerator-> enumeration-const = constant-expression\n");}
#line 2316 "y.tab.c"
    break;

  case 106: /* function-specifier: FUNCTION_SPECIFIER  */
#line 193 "assgn_4_21CS30059_21CS30038.y"
                           {printf("function-specifier-> function-specifier-token\n");}
#line 2322 "y.tab.c"
    break;

  case 107: /* declarator: pointer direct-declarator  */
#line 196 "assgn_4_21CS30059_21CS30038.y"
                                  {printf("declarator-> pointer direct-declarator\n");}
#line 2328 "y.tab.c"
    break;

  case 108: /* declarator: direct-declarator  */
#line 197 "assgn_4_21CS30059_21CS30038.y"
                            {printf("declarator-> direct-declarator\n");}
#line 2334 "y.tab.c"
    break;

  case 109: /* direct-declarator: IDENTIFIER  */
#line 200 "assgn_4_21CS30059_21CS30038.y"
                   {printf("direct-declarator-> IDENTIFIER\n");}
#line 2340 "y.tab.c"
    break;

  case 110: /* direct-declarator: LEFT_PARENTHESIS declarator RIGHT_PARENTHESIS  */
#line 201 "assgn_4_21CS30059_21CS30038.y"
                                                        {printf("direct-declarator-> (declarator)\n");}
#line 2346 "y.tab.c"
    break;

  case 111: /* direct-declarator: direct-declarator LEFT_SQUARE_BRACKET type-qualifier-listopt assignment-expressionopt RIGHT_SQUARE_BRACKET  */
#line 202 "assgn_4_21CS30059_21CS30038.y"
                                                                                                                     {printf("direct-declarator-> direct-declarator [type-qualifier-listopt assignment-expressionopt]\n");}
#line 2352 "y.tab.c"
    break;

  case 112: /* direct-declarator: direct-declarator LEFT_SQUARE_BRACKET STATIC_TOKEN type-qualifier-listopt assignment-expression RIGHT_SQUARE_BRACKET  */
#line 203 "assgn_4_21CS30059_21CS30038.y"
                                                                                                                               {printf("direct-declarator-> direct-declarator [STATIC type-qualifier-listopt assignment-expression]\n");}
#line 2358 "y.tab.c"
    break;

  case 113: /* direct-declarator: direct-declarator LEFT_SQUARE_BRACKET type-qualifier-list STATIC_TOKEN assignment-expression RIGHT_SQUARE_BRACKET  */
#line 204 "assgn_4_21CS30059_21CS30038.y"
                                                                                                                            {printf("direct-declarator-> direct-declarator [type-qualifier-list STATIC assignment-expression]\n");}
#line 2364 "y.tab.c"
    break;

  case 114: /* direct-declarator: direct-declarator LEFT_SQUARE_BRACKET type-qualifier-listopt STAR RIGHT_SQUARE_BRACKET  */
#line 205 "assgn_4_21CS30059_21CS30038.y"
                                                                                                 {printf("direct-declarator-> direct-declarator [type-qualifier-listopt *]\n");}
#line 2370 "y.tab.c"
    break;

  case 115: /* direct-declarator: direct-declarator LEFT_PARENTHESIS parameter-type-list RIGHT_PARENTHESIS  */
#line 206 "assgn_4_21CS30059_21CS30038.y"
                                                                                   {printf("direct-declarator-> direct-declarator (parameter-type-list)\n");}
#line 2376 "y.tab.c"
    break;

  case 116: /* direct-declarator: direct-declarator LEFT_PARENTHESIS identifier-listopt RIGHT_PARENTHESIS  */
#line 207 "assgn_4_21CS30059_21CS30038.y"
                                                                                  {printf("direct-declarator-> direct-declarator (identifier-listopt)\n");}
#line 2382 "y.tab.c"
    break;

  case 117: /* type-qualifier-listopt: type-qualifier-list  */
#line 210 "assgn_4_21CS30059_21CS30038.y"
                            {printf("type-qualifier-listopt-> type-qualifier-list\n");}
#line 2388 "y.tab.c"
    break;

  case 118: /* type-qualifier-listopt: %empty  */
#line 211 "assgn_4_21CS30059_21CS30038.y"
          {printf("type-qualifier-listopt-> \n");}
#line 2394 "y.tab.c"
    break;

  case 119: /* assignment-expressionopt: assignment-expression  */
#line 214 "assgn_4_21CS30059_21CS30038.y"
                              {printf("assignment-expressionopt-> assignment-expression\n");}
#line 2400 "y.tab.c"
    break;

  case 120: /* assignment-expressionopt: %empty  */
#line 215 "assgn_4_21CS30059_21CS30038.y"
          {printf("assignment-expressionopt-> \n");}
#line 2406 "y.tab.c"
    break;

  case 121: /* identifier-listopt: identifier-list  */
#line 218 "assgn_4_21CS30059_21CS30038.y"
                        {printf("identifier-listopt-> identifier-list\n");}
#line 2412 "y.tab.c"
    break;

  case 122: /* identifier-listopt: %empty  */
#line 219 "assgn_4_21CS30059_21CS30038.y"
          {printf("identifier-listopt-> \n");}
#line 2418 "y.tab.c"
    break;

  case 123: /* pointer: STAR type-qualifier-listopt  */
#line 222 "assgn_4_21CS30059_21CS30038.y"
                                    {printf("pointer-> * type-qualifier-listopt\n");}
#line 2424 "y.tab.c"
    break;

  case 124: /* pointer: STAR type-qualifier-listopt pointer  */
#line 223 "assgn_4_21CS30059_21CS30038.y"
                                              {printf("pointer-> * type-qualifier-listopt pointer\n");}
#line 2430 "y.tab.c"
    break;

  case 125: /* type-qualifier-list: TYPE_QUALIFIER  */
#line 226 "assgn_4_21CS30059_21CS30038.y"
                       {printf("type-qualifier-list-> type-qualifier\n");}
#line 2436 "y.tab.c"
    break;

  case 126: /* type-qualifier-list: type-qualifier-list TYPE_QUALIFIER  */
#line 227 "assgn_4_21CS30059_21CS30038.y"
                                             {printf("type-qualifier-list-> type-qualifier-list type-qualifier\n");}
#line 2442 "y.tab.c"
    break;

  case 127: /* parameter-type-list: parameter-list  */
#line 230 "assgn_4_21CS30059_21CS30038.y"
                       {printf("parameter-type-list-> parameter-list\n");}
#line 2448 "y.tab.c"
    break;

  case 128: /* parameter-type-list: parameter-list COMMA ELLIPSIS  */
#line 231 "assgn_4_21CS30059_21CS30038.y"
                                        {printf("parameter-type-list-> parameter-list , ...\n");}
#line 2454 "y.tab.c"
    break;

  case 129: /* parameter-list: parameter-declaration  */
#line 234 "assgn_4_21CS30059_21CS30038.y"
                              {printf("parameter-list-> parameter-declaration\n");}
#line 2460 "y.tab.c"
    break;

  case 130: /* parameter-list: parameter-list COMMA parameter-declaration  */
#line 235 "assgn_4_21CS30059_21CS30038.y"
                                                     {printf("parameter-list-> parameter-list , parameter-declaration\n");}
#line 2466 "y.tab.c"
    break;

  case 131: /* parameter-declaration: declaration-specifiers declarator  */
#line 238 "assgn_4_21CS30059_21CS30038.y"
                                          {printf("parameter-declaration-> declaration-specifiers declarator\n");}
#line 2472 "y.tab.c"
    break;

  case 132: /* parameter-declaration: declaration-specifiers  */
#line 239 "assgn_4_21CS30059_21CS30038.y"
                                 {printf("parameter-declaration-> declaration-specifiers\n");}
#line 2478 "y.tab.c"
    break;

  case 133: /* identifier-list: IDENTIFIER  */
#line 242 "assgn_4_21CS30059_21CS30038.y"
                   {printf("identifier-list-> IDENTIFIER\n");}
#line 2484 "y.tab.c"
    break;

  case 134: /* identifier-list: identifier-list COMMA IDENTIFIER  */
#line 243 "assgn_4_21CS30059_21CS30038.y"
                                           {printf("identifier-list-> identifier-list , IDENTIFIER\n");}
#line 2490 "y.tab.c"
    break;

  case 135: /* type-name: specifier-qualifier-list  */
#line 246 "assgn_4_21CS30059_21CS30038.y"
                                 {printf("type-name-> specifier-qualifier-list\n");}
#line 2496 "y.tab.c"
    break;

  case 136: /* initializer: assignment-expression  */
#line 249 "assgn_4_21CS30059_21CS30038.y"
                              {printf("initializer-> assignment-expression\n");}
#line 2502 "y.tab.c"
    break;

  case 137: /* initializer: LEFT_CURLY_BRACKET initializer-list RIGHT_CURLY_BRACKET  */
#line 250 "assgn_4_21CS30059_21CS30038.y"
                                                                  {printf("initializer-> {initializer-list}\n");}
#line 2508 "y.tab.c"
    break;

  case 138: /* initializer: LEFT_CURLY_BRACKET initializer-list COMMA RIGHT_CURLY_BRACKET  */
#line 251 "assgn_4_21CS30059_21CS30038.y"
                                                                        {printf("initializer-> {initializer-list,}\n");}
#line 2514 "y.tab.c"
    break;

  case 139: /* initializer-list: designationopt initializer  */
#line 254 "assgn_4_21CS30059_21CS30038.y"
                                   {printf("initializer-list-> designationopt initializer\n");}
#line 2520 "y.tab.c"
    break;

  case 140: /* initializer-list: initializer-list COMMA designationopt initializer  */
#line 255 "assgn_4_21CS30059_21CS30038.y"
                                                            {printf("initializer-list-> initializer-list , designationopt initializer\n");}
#line 2526 "y.tab.c"
    break;

  case 141: /* designationopt: designation  */
#line 258 "assgn_4_21CS30059_21CS30038.y"
                    {printf("designationopt-> designation\n");}
#line 2532 "y.tab.c"
    break;

  case 142: /* designationopt: %empty  */
#line 259 "assgn_4_21CS30059_21CS30038.y"
          {printf("designationopt-> \n");}
#line 2538 "y.tab.c"
    break;

  case 143: /* designation: designator-list EQUALS  */
#line 262 "assgn_4_21CS30059_21CS30038.y"
                               {printf("designation-> designator-list =\n");}
#line 2544 "y.tab.c"
    break;

  case 144: /* designator-list: designator  */
#line 265 "assgn_4_21CS30059_21CS30038.y"
                   {printf("designator-list-> designator\n");}
#line 2550 "y.tab.c"
    break;

  case 145: /* designator-list: designator-list designator  */
#line 266 "assgn_4_21CS30059_21CS30038.y"
                                     {printf("designator-list-> designation-list designator\n");}
#line 2556 "y.tab.c"
    break;

  case 146: /* designator: LEFT_SQUARE_BRACKET constant-expression RIGHT_SQUARE_BRACKET  */
#line 269 "assgn_4_21CS30059_21CS30038.y"
                                                                     {printf("designator-> [constant-expression]\n");}
#line 2562 "y.tab.c"
    break;

  case 147: /* designator: DOT IDENTIFIER  */
#line 270 "assgn_4_21CS30059_21CS30038.y"
                         {printf("designator-> . IDENTIFIER\n");}
#line 2568 "y.tab.c"
    break;

  case 148: /* statement: labeled-statement  */
#line 273 "assgn_4_21CS30059_21CS30038.y"
                          {printf("statement-> labeled-statement\n");}
#line 2574 "y.tab.c"
    break;

  case 149: /* statement: compound-statement  */
#line 274 "assgn_4_21CS30059_21CS30038.y"
                             {printf("statement-> compound-statement\n");}
#line 2580 "y.tab.c"
    break;

  case 150: /* statement: expression-statement  */
#line 275 "assgn_4_21CS30059_21CS30038.y"
                               {printf("statement-> expression-statement\n");}
#line 2586 "y.tab.c"
    break;

  case 151: /* statement: selection-statement  */
#line 276 "assgn_4_21CS30059_21CS30038.y"
                              {printf("statement-> selection-statement\n");}
#line 2592 "y.tab.c"
    break;

  case 152: /* statement: iteration-statement  */
#line 277 "assgn_4_21CS30059_21CS30038.y"
                              {printf("statement-> iteration-statement\n");}
#line 2598 "y.tab.c"
    break;

  case 153: /* statement: jump-statement  */
#line 278 "assgn_4_21CS30059_21CS30038.y"
                         {printf("statement-> jump-statement\n");}
#line 2604 "y.tab.c"
    break;

  case 154: /* labeled-statement: IDENTIFIER COLON statement  */
#line 280 "assgn_4_21CS30059_21CS30038.y"
                                   {printf("labeled-statement-> IDENTIFIER : statement\n");}
#line 2610 "y.tab.c"
    break;

  case 155: /* labeled-statement: CASE constant-expression COLON statement  */
#line 281 "assgn_4_21CS30059_21CS30038.y"
                                                   {printf("labeled-statement-> CASE constant-expression : statement\n");}
#line 2616 "y.tab.c"
    break;

  case 156: /* labeled-statement: DEFAULT COLON statement  */
#line 282 "assgn_4_21CS30059_21CS30038.y"
                                  {printf("labeled-statement-> DEFAULT : statement\n");}
#line 2622 "y.tab.c"
    break;

  case 157: /* compound-statement: LEFT_CURLY_BRACKET block-item-listopt RIGHT_CURLY_BRACKET  */
#line 285 "assgn_4_21CS30059_21CS30038.y"
                                                                  {printf("compound-statement-> {block-item-listopt}\n");}
#line 2628 "y.tab.c"
    break;

  case 158: /* block-item-listopt: block-item-list  */
#line 288 "assgn_4_21CS30059_21CS30038.y"
                        {printf("block-item-listopt-> block-item-list\n");}
#line 2634 "y.tab.c"
    break;

  case 159: /* block-item-listopt: %empty  */
#line 289 "assgn_4_21CS30059_21CS30038.y"
          {printf("block-item-listopt-> \n");}
#line 2640 "y.tab.c"
    break;

  case 160: /* block-item-list: block-item  */
#line 292 "assgn_4_21CS30059_21CS30038.y"
                   {printf("block-item-list-> block-item\n");}
#line 2646 "y.tab.c"
    break;

  case 161: /* block-item-list: block-item-list block-item  */
#line 293 "assgn_4_21CS30059_21CS30038.y"
                                     {printf("block-item-list-> block-item-list block-item\n");}
#line 2652 "y.tab.c"
    break;

  case 162: /* block-item: declaration  */
#line 296 "assgn_4_21CS30059_21CS30038.y"
                    {printf("block-item-> declaration\n");}
#line 2658 "y.tab.c"
    break;

  case 163: /* block-item: statement  */
#line 297 "assgn_4_21CS30059_21CS30038.y"
                    {printf("block-item-> statement\n");}
#line 2664 "y.tab.c"
    break;

  case 164: /* expression-statement: expressionopt SEMICOLON  */
#line 300 "assgn_4_21CS30059_21CS30038.y"
                                {printf("expression-statement-> expressionopt ;\n");}
#line 2670 "y.tab.c"
    break;

  case 165: /* expressionopt: expression  */
#line 303 "assgn_4_21CS30059_21CS30038.y"
                   {printf("expressionopt-> expression\n");}
#line 2676 "y.tab.c"
    break;

  case 166: /* expressionopt: %empty  */
#line 304 "assgn_4_21CS30059_21CS30038.y"
          {printf("expressionopt-> \n");}
#line 2682 "y.tab.c"
    break;

  case 167: /* selection-statement: IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement  */
#line 308 "assgn_4_21CS30059_21CS30038.y"
        {printf("selection-statement-> IF (expression) statement\n");}
#line 2688 "y.tab.c"
    break;

  case 168: /* selection-statement: IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement ELSE statement  */
#line 309 "assgn_4_21CS30059_21CS30038.y"
                                                                                    {printf("selection-statement-> IF (expression) statement ELSE statement\n");}
#line 2694 "y.tab.c"
    break;

  case 169: /* selection-statement: SWITCH LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement  */
#line 310 "assgn_4_21CS30059_21CS30038.y"
                                                                         {printf("selection-statement-> SWITCH (expression) statement\n");}
#line 2700 "y.tab.c"
    break;

  case 170: /* iteration-statement: WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement  */
#line 313 "assgn_4_21CS30059_21CS30038.y"
                                                                      {printf("iteration-statement-> WHILE (expression) statement\n");}
#line 2706 "y.tab.c"
    break;

  case 171: /* iteration-statement: DO statement WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS SEMICOLON  */
#line 314 "assgn_4_21CS30059_21CS30038.y"
                                                                                     {printf("iteration-statement-> DO statement WHILE (expression) ;\n");}
#line 2712 "y.tab.c"
    break;

  case 172: /* iteration-statement: FOR LEFT_PARENTHESIS expressionopt SEMICOLON expressionopt SEMICOLON expressionopt RIGHT_PARENTHESIS statement  */
#line 315 "assgn_4_21CS30059_21CS30038.y"
                                                                                                                         {printf("iteration-statement-> FOR (expressionopt ; expressionopt ; expressionopt) statement\n");}
#line 2718 "y.tab.c"
    break;

  case 173: /* iteration-statement: FOR LEFT_PARENTHESIS declaration expressionopt SEMICOLON expressionopt RIGHT_PARENTHESIS statement  */
#line 316 "assgn_4_21CS30059_21CS30038.y"
                                                                                                             {printf("iteration-statement-> FOR (declaration expressionopt ; expressionopt) statement\n");}
#line 2724 "y.tab.c"
    break;

  case 174: /* jump-statement: GOTO IDENTIFIER SEMICOLON  */
#line 319 "assgn_4_21CS30059_21CS30038.y"
                                  {printf("jump-statement-> GOTO IDENTIFIER ;\n");}
#line 2730 "y.tab.c"
    break;

  case 175: /* jump-statement: CONTINUE SEMICOLON  */
#line 320 "assgn_4_21CS30059_21CS30038.y"
                             {printf("jump-statement-> CONTINUE ;\n");}
#line 2736 "y.tab.c"
    break;

  case 176: /* jump-statement: BREAK SEMICOLON  */
#line 321 "assgn_4_21CS30059_21CS30038.y"
                          {printf("jump-statement-> BREAK ;\n");}
#line 2742 "y.tab.c"
    break;

  case 177: /* jump-statement: RETURN expressionopt SEMICOLON  */
#line 322 "assgn_4_21CS30059_21CS30038.y"
                                         {printf("jump-statement-> RETURN expressionopt ;\n");}
#line 2748 "y.tab.c"
    break;

  case 178: /* translation-unit: external-declaration  */
#line 325 "assgn_4_21CS30059_21CS30038.y"
                             {printf("translation-unit-> external-declaration\n");}
#line 2754 "y.tab.c"
    break;

  case 179: /* translation-unit: translation-unit external-declaration  */
#line 326 "assgn_4_21CS30059_21CS30038.y"
                                                {printf("translation-unit-> translation-unit external-declaration\n");}
#line 2760 "y.tab.c"
    break;

  case 180: /* external-declaration: function-definition  */
#line 329 "assgn_4_21CS30059_21CS30038.y"
                            {printf("external-declaration-> function-definition\n");}
#line 2766 "y.tab.c"
    break;

  case 181: /* external-declaration: declaration  */
#line 330 "assgn_4_21CS30059_21CS30038.y"
                      {printf("external-declaration-> declaration\n");}
#line 2772 "y.tab.c"
    break;

  case 182: /* function-definition: declaration-specifiers declarator declaration-listopt compound-statement  */
#line 333 "assgn_4_21CS30059_21CS30038.y"
                                                                                 {printf("function-definition-> declaration-specifiers declarator declaration-listopt compound-statement\n");}
#line 2778 "y.tab.c"
    break;

  case 183: /* declaration-listopt: declaration-list  */
#line 336 "assgn_4_21CS30059_21CS30038.y"
                         {printf("declaration-listopt-> declaration-list\n");}
#line 2784 "y.tab.c"
    break;

  case 184: /* declaration-listopt: %empty  */
#line 337 "assgn_4_21CS30059_21CS30038.y"
          {printf("declaration-listopt-> \n");}
#line 2790 "y.tab.c"
    break;

  case 185: /* declaration-list: declaration  */
#line 340 "assgn_4_21CS30059_21CS30038.y"
                    {printf("declaration-list-> declaration\n");}
#line 2796 "y.tab.c"
    break;

  case 186: /* declaration-list: declaration-list declaration  */
#line 341 "assgn_4_21CS30059_21CS30038.y"
                                       {printf("declaration-list-> declaration-list declaration\n");}
#line 2802 "y.tab.c"
    break;


#line 2806 "y.tab.c"

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

#line 343 "assgn_4_21CS30059_21CS30038.y"




int yywrap()
{
    return 1;
}
