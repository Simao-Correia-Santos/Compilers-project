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
#line 1 "uccompiler.y"

  #include <stdio.h>
  #include "ast.h"
  extern int yylex(void);
  void yyerror(char *);
  struct node *program;

#line 79 "y.tab.c"

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
    BITWISEAND = 258,              /* BITWISEAND  */
    BITWISEOR = 259,               /* BITWISEOR  */
    BITWISEXOR = 260,              /* BITWISEXOR  */
    AND = 261,                     /* AND  */
    ASSIGN = 262,                  /* ASSIGN  */
    MUL = 263,                     /* MUL  */
    COMMA = 264,                   /* COMMA  */
    DIV = 265,                     /* DIV  */
    EQ = 266,                      /* EQ  */
    GE = 267,                      /* GE  */
    GT = 268,                      /* GT  */
    LBRACE = 269,                  /* LBRACE  */
    LE = 270,                      /* LE  */
    LPAR = 271,                    /* LPAR  */
    LT = 272,                      /* LT  */
    MINUS = 273,                   /* MINUS  */
    MOD = 274,                     /* MOD  */
    NE = 275,                      /* NE  */
    NOT = 276,                     /* NOT  */
    OR = 277,                      /* OR  */
    PLUS = 278,                    /* PLUS  */
    RBRACE = 279,                  /* RBRACE  */
    RPAR = 280,                    /* RPAR  */
    SEMI = 281,                    /* SEMI  */
    IDENTIFIER = 282,              /* IDENTIFIER  */
    DECIMAL = 283,                 /* DECIMAL  */
    NATURAL = 284,                 /* NATURAL  */
    CHRLIT = 285,                  /* CHRLIT  */
    CHAR = 286,                    /* CHAR  */
    ELSE = 287,                    /* ELSE  */
    WHILE = 288,                   /* WHILE  */
    IF = 289,                      /* IF  */
    INT = 290,                     /* INT  */
    SHORT = 291,                   /* SHORT  */
    DOUBLE = 292,                  /* DOUBLE  */
    RETURN = 293,                  /* RETURN  */
    VOID = 294,                    /* VOID  */
    RESERVED = 295                 /* RESERVED  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define BITWISEAND 258
#define BITWISEOR 259
#define BITWISEXOR 260
#define AND 261
#define ASSIGN 262
#define MUL 263
#define COMMA 264
#define DIV 265
#define EQ 266
#define GE 267
#define GT 268
#define LBRACE 269
#define LE 270
#define LPAR 271
#define LT 272
#define MINUS 273
#define MOD 274
#define NE 275
#define NOT 276
#define OR 277
#define PLUS 278
#define RBRACE 279
#define RPAR 280
#define SEMI 281
#define IDENTIFIER 282
#define DECIMAL 283
#define NATURAL 284
#define CHRLIT 285
#define CHAR 286
#define ELSE 287
#define WHILE 288
#define IF 289
#define INT 290
#define SHORT 291
#define DOUBLE 292
#define RETURN 293
#define VOID 294
#define RESERVED 295

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
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
  YYSYMBOL_BITWISEAND = 3,                 /* BITWISEAND  */
  YYSYMBOL_BITWISEOR = 4,                  /* BITWISEOR  */
  YYSYMBOL_BITWISEXOR = 5,                 /* BITWISEXOR  */
  YYSYMBOL_AND = 6,                        /* AND  */
  YYSYMBOL_ASSIGN = 7,                     /* ASSIGN  */
  YYSYMBOL_MUL = 8,                        /* MUL  */
  YYSYMBOL_COMMA = 9,                      /* COMMA  */
  YYSYMBOL_DIV = 10,                       /* DIV  */
  YYSYMBOL_EQ = 11,                        /* EQ  */
  YYSYMBOL_GE = 12,                        /* GE  */
  YYSYMBOL_GT = 13,                        /* GT  */
  YYSYMBOL_LBRACE = 14,                    /* LBRACE  */
  YYSYMBOL_LE = 15,                        /* LE  */
  YYSYMBOL_LPAR = 16,                      /* LPAR  */
  YYSYMBOL_LT = 17,                        /* LT  */
  YYSYMBOL_MINUS = 18,                     /* MINUS  */
  YYSYMBOL_MOD = 19,                       /* MOD  */
  YYSYMBOL_NE = 20,                        /* NE  */
  YYSYMBOL_NOT = 21,                       /* NOT  */
  YYSYMBOL_OR = 22,                        /* OR  */
  YYSYMBOL_PLUS = 23,                      /* PLUS  */
  YYSYMBOL_RBRACE = 24,                    /* RBRACE  */
  YYSYMBOL_RPAR = 25,                      /* RPAR  */
  YYSYMBOL_SEMI = 26,                      /* SEMI  */
  YYSYMBOL_IDENTIFIER = 27,                /* IDENTIFIER  */
  YYSYMBOL_DECIMAL = 28,                   /* DECIMAL  */
  YYSYMBOL_NATURAL = 29,                   /* NATURAL  */
  YYSYMBOL_CHRLIT = 30,                    /* CHRLIT  */
  YYSYMBOL_CHAR = 31,                      /* CHAR  */
  YYSYMBOL_ELSE = 32,                      /* ELSE  */
  YYSYMBOL_WHILE = 33,                     /* WHILE  */
  YYSYMBOL_IF = 34,                        /* IF  */
  YYSYMBOL_INT = 35,                       /* INT  */
  YYSYMBOL_SHORT = 36,                     /* SHORT  */
  YYSYMBOL_DOUBLE = 37,                    /* DOUBLE  */
  YYSYMBOL_RETURN = 38,                    /* RETURN  */
  YYSYMBOL_VOID = 39,                      /* VOID  */
  YYSYMBOL_RESERVED = 40,                  /* RESERVED  */
  YYSYMBOL_YYACCEPT = 41,                  /* $accept  */
  YYSYMBOL_FuctionsAndDeclarations = 42,   /* FuctionsAndDeclarations  */
  YYSYMBOL_FuctionDefinition = 43,         /* FuctionDefinition  */
  YYSYMBOL_FuctionBody = 44,               /* FuctionBody  */
  YYSYMBOL_DeclarationAndStatements = 45,  /* DeclarationAndStatements  */
  YYSYMBOL_FuctionDeclaration = 46,        /* FuctionDeclaration  */
  YYSYMBOL_FuctionDeclarator = 47,         /* FuctionDeclarator  */
  YYSYMBOL_ParameterList = 48,             /* ParameterList  */
  YYSYMBOL_ParameterDeclaration = 49,      /* ParameterDeclaration  */
  YYSYMBOL_Declaration = 50,               /* Declaration  */
  YYSYMBOL_AuxDeclaration = 51,            /* AuxDeclaration  */
  YYSYMBOL_TypeSpec = 52,                  /* TypeSpec  */
  YYSYMBOL_Declarator = 53,                /* Declarator  */
  YYSYMBOL_Statement = 54,                 /* Statement  */
  YYSYMBOL_AuxStatement = 55,              /* AuxStatement  */
  YYSYMBOL_Expr = 56,                      /* Expr  */
  YYSYMBOL_Expr_comma = 57                 /* Expr_comma  */
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
typedef yytype_int8 yy_state_t;

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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   487

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  17
/* YYNRULES -- Number of rules.  */
#define YYNRULES  70
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  123

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   295


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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    28,    28,    32,    33,    34,    35,    36,    39,    41,
      42,    44,    45,    46,    47,    50,    52,    54,    55,    58,
      59,    62,    64,    65,    68,    69,    70,    71,    72,    75,
      76,    79,    80,    83,    85,    86,    89,    90,    93,    95,
      96,    99,   100,   103,   104,   105,   106,   107,   110,   111,
     112,   113,   114,   117,   118,   119,   120,   121,   122,   125,
     126,   127,   130,   131,   134,   135,   138,   139,   140,   141,
     142
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
  "\"end of file\"", "error", "\"invalid token\"", "BITWISEAND",
  "BITWISEOR", "BITWISEXOR", "AND", "ASSIGN", "MUL", "COMMA", "DIV", "EQ",
  "GE", "GT", "LBRACE", "LE", "LPAR", "LT", "MINUS", "MOD", "NE", "NOT",
  "OR", "PLUS", "RBRACE", "RPAR", "SEMI", "IDENTIFIER", "DECIMAL",
  "NATURAL", "CHRLIT", "CHAR", "ELSE", "WHILE", "IF", "INT", "SHORT",
  "DOUBLE", "RETURN", "VOID", "RESERVED", "$accept",
  "FuctionsAndDeclarations", "FuctionDefinition", "FuctionBody",
  "DeclarationAndStatements", "FuctionDeclaration", "FuctionDeclarator",
  "ParameterList", "ParameterDeclaration", "Declaration", "AuxDeclaration",
  "TypeSpec", "Declarator", "Statement", "AuxStatement", "Expr",
  "Expr_comma", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-62)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     448,   -62,   -62,   -62,   -62,   -62,    26,   -62,   -62,   -62,
     -25,   -62,   -62,   -62,   -62,     9,    -4,   -62,   447,   448,
      52,   -62,   -62,    -8,   447,   447,   447,   447,    -3,   -62,
     -62,   -62,   300,    -6,   -62,   -15,   -62,   -62,   -62,     1,
      12,   417,     6,    79,     4,    79,   162,     4,   -62,   210,
      84,   -62,    84,   432,   447,   447,   447,   447,   447,   447,
     447,   447,   447,   447,   447,   447,   447,   447,   447,   447,
     447,   447,   448,   -62,   -62,   105,   447,   447,   -62,   186,
     -62,   -62,    25,   -62,   -62,   -62,   -62,   -62,   279,    -5,
     393,   361,   379,   342,   300,   -62,   300,   -62,   407,   413,
     413,   413,   413,    84,   -62,   407,   321,    84,   -62,   -62,
     -62,   233,   256,   -62,   447,   -62,   126,   126,   300,   -62,
       2,   126,   -62
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    24,    25,    27,    28,    26,     0,     5,     6,     7,
       0,     1,     2,     3,     4,    30,     0,    23,     0,     0,
       0,    15,     8,     0,     0,     0,     0,     0,    66,    69,
      67,    68,    29,     0,    17,    20,    35,    10,    32,     0,
       0,     0,     0,    14,     0,    13,     0,     0,    21,     0,
      60,    61,    59,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    16,    19,     0,     0,     0,    40,     0,
       9,    12,    30,    11,    31,    22,    70,    62,    65,     0,
      50,    51,    52,    49,    41,    45,    42,    46,    53,    56,
      58,    55,    57,    44,    47,    54,    48,    43,    18,    33,
      34,     0,     0,    39,     0,    63,     0,     0,    64,    38,
      37,     0,    36
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -62,   -62,    27,   -62,   -16,    48,   -62,   -62,    -1,    15,
     -62,     5,    17,   -61,   -62,   -18,   -62
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     6,     7,    22,    42,     8,    16,    33,    34,    43,
      23,    44,    17,    45,    75,    46,    89
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      32,    47,    15,    72,   114,    10,    49,    50,    51,    52,
      20,    10,    74,    53,   110,     9,    18,    76,    48,    73,
     115,    14,    21,    79,    35,    19,    11,    81,    77,    83,
      80,    82,    18,    12,   121,    88,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,    13,   119,   120,     1,   111,   112,
     122,     2,     3,     4,    85,     5,    36,     0,    24,     0,
      25,   108,     0,    26,     0,    27,    37,    35,    38,    28,
      29,    30,    31,     1,     0,    39,    40,     2,     3,     4,
      41,     5,    59,    36,    61,    24,   118,    25,     0,     0,
      26,     0,    27,    68,     0,    38,    28,    29,    30,    31,
       1,     0,    39,    40,     2,     3,     4,    41,     5,    36,
       0,    24,     0,    25,     0,     0,    26,     0,    27,   109,
       0,    38,    28,    29,    30,    31,     0,     0,    39,    40,
      36,     0,    24,    41,    25,     0,     0,    26,     0,    27,
       0,     0,    38,    28,    29,    30,    31,     0,     0,    39,
      40,     0,     0,     0,    41,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,     0,    65,     0,    66,
      67,    68,    69,     0,    70,    71,     0,     0,    84,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
       0,    65,     0,    66,    67,    68,    69,     0,    70,    71,
       0,     0,   113,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,     0,    65,     0,    66,    67,    68,
      69,     0,    70,    71,     0,    86,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,     0,    65,     0,
      66,    67,    68,    69,     0,    70,    71,     0,   116,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
       0,    65,     0,    66,    67,    68,    69,     0,    70,    71,
       0,   117,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     0,    65,     0,    66,    67,    68,    69,
       0,    70,    71,    54,    55,    56,    57,    58,    59,     0,
      61,    62,    63,    64,     0,    65,     0,    66,    67,    68,
      69,     0,    70,    71,    54,    55,    56,    57,     0,    59,
       0,    61,    62,    63,    64,     0,    65,     0,    66,    67,
      68,    69,     0,     0,    71,    54,    55,    56,     0,     0,
      59,     0,    61,    62,    63,    64,     0,    65,     0,    66,
      67,    68,    69,     0,    54,    71,    56,     0,     0,    59,
       0,    61,    62,    63,    64,     0,    65,     0,    66,    67,
      68,    69,    54,     0,    71,     0,     0,    59,     0,    61,
      62,    63,    64,     0,    65,     0,    66,    67,    68,    69,
       0,    59,    71,    61,    62,    63,    64,     0,    65,     0,
      66,    67,    68,    69,     0,    59,    71,    61,     0,    63,
      64,    59,    65,    61,    66,    67,    68,     0,     0,     0,
      71,    67,    68,    24,     0,    25,    71,     0,    26,     0,
      27,     0,     0,    78,    28,    29,    30,    31,    24,     0,
      25,     0,     0,    26,     0,    27,     0,    87,     0,    28,
      29,    30,    31,    24,     0,    25,     0,     0,    26,     0,
      27,     0,     0,     0,    28,    29,    30,    31,     0,     1,
       0,     0,     0,     2,     3,     4,     0,     5
};

static const yytype_int8 yycheck[] =
{
      18,     9,    27,     9,     9,     0,    24,    25,    26,    27,
      14,     6,    27,    16,    75,     0,     7,    16,    26,    25,
      25,     6,    26,    41,    19,    16,     0,    43,    16,    45,
      24,    27,     7,     6,    32,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,     6,   116,   117,    31,    76,    77,
     121,    35,    36,    37,    47,    39,    14,    -1,    16,    -1,
      18,    72,    -1,    21,    -1,    23,    24,    72,    26,    27,
      28,    29,    30,    31,    -1,    33,    34,    35,    36,    37,
      38,    39,     8,    14,    10,    16,   114,    18,    -1,    -1,
      21,    -1,    23,    19,    -1,    26,    27,    28,    29,    30,
      31,    -1,    33,    34,    35,    36,    37,    38,    39,    14,
      -1,    16,    -1,    18,    -1,    -1,    21,    -1,    23,    24,
      -1,    26,    27,    28,    29,    30,    -1,    -1,    33,    34,
      14,    -1,    16,    38,    18,    -1,    -1,    21,    -1,    23,
      -1,    -1,    26,    27,    28,    29,    30,    -1,    -1,    33,
      34,    -1,    -1,    -1,    38,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    15,    -1,    17,
      18,    19,    20,    -1,    22,    23,    -1,    -1,    26,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    -1,    17,    18,    19,    20,    -1,    22,    23,
      -1,    -1,    26,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    -1,    15,    -1,    17,    18,    19,
      20,    -1,    22,    23,    -1,    25,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      17,    18,    19,    20,    -1,    22,    23,    -1,    25,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    -1,    17,    18,    19,    20,    -1,    22,    23,
      -1,    25,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    15,    -1,    17,    18,    19,    20,
      -1,    22,    23,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    12,    13,    -1,    15,    -1,    17,    18,    19,
      20,    -1,    22,    23,     3,     4,     5,     6,    -1,     8,
      -1,    10,    11,    12,    13,    -1,    15,    -1,    17,    18,
      19,    20,    -1,    -1,    23,     3,     4,     5,    -1,    -1,
       8,    -1,    10,    11,    12,    13,    -1,    15,    -1,    17,
      18,    19,    20,    -1,     3,    23,     5,    -1,    -1,     8,
      -1,    10,    11,    12,    13,    -1,    15,    -1,    17,    18,
      19,    20,     3,    -1,    23,    -1,    -1,     8,    -1,    10,
      11,    12,    13,    -1,    15,    -1,    17,    18,    19,    20,
      -1,     8,    23,    10,    11,    12,    13,    -1,    15,    -1,
      17,    18,    19,    20,    -1,     8,    23,    10,    -1,    12,
      13,     8,    15,    10,    17,    18,    19,    -1,    -1,    -1,
      23,    18,    19,    16,    -1,    18,    23,    -1,    21,    -1,
      23,    -1,    -1,    26,    27,    28,    29,    30,    16,    -1,
      18,    -1,    -1,    21,    -1,    23,    -1,    25,    -1,    27,
      28,    29,    30,    16,    -1,    18,    -1,    -1,    21,    -1,
      23,    -1,    -1,    -1,    27,    28,    29,    30,    -1,    31,
      -1,    -1,    -1,    35,    36,    37,    -1,    39
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    31,    35,    36,    37,    39,    42,    43,    46,    50,
      52,     0,    43,    46,    50,    27,    47,    53,     7,    16,
      14,    26,    44,    51,    16,    18,    21,    23,    27,    28,
      29,    30,    56,    48,    49,    52,    14,    24,    26,    33,
      34,    38,    45,    50,    52,    54,    56,     9,    26,    56,
      56,    56,    56,    16,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    15,    17,    18,    19,    20,
      22,    23,     9,    25,    27,    55,    16,    16,    26,    56,
      24,    45,    27,    45,    26,    53,    25,    25,    56,    57,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    49,    24,
      54,    56,    56,    26,     9,    25,    25,    25,    56,    54,
      54,    32,    54
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    41,    42,    42,    42,    42,    42,    42,    43,    44,
      44,    45,    45,    45,    45,    46,    47,    48,    48,    49,
      49,    50,    51,    51,    52,    52,    52,    52,    52,    53,
      53,    54,    54,    54,    55,    55,    54,    54,    54,    54,
      54,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    57,    57,    56,    56,    56,    56,
      56
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     2,     1,     1,     1,     3,     3,
       2,     2,     2,     1,     1,     3,     4,     1,     3,     2,
       1,     4,     3,     0,     1,     1,     1,     1,     1,     3,
       1,     2,     1,     3,     2,     0,     7,     5,     5,     3,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     2,     3,     4,     3,     1,     1,     1,     1,     1,
       3
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
  case 2: /* FuctionsAndDeclarations: FuctionsAndDeclarations FuctionDefinition  */
#line 28 "uccompiler.y"
                                                                   {yyval = program = newnode(FuctionsAndDeclarations, NULL);
                                                                      struct node *function = newnode(Function, NULL);
                                                                      addchild(function, newnode(FuctionDefinition, yyvsp[0]));
                                                                      addchild(yyval, function);}
#line 1400 "y.tab.c"
    break;

  case 3: /* FuctionsAndDeclarations: FuctionsAndDeclarations FuctionDeclaration  */
#line 32 "uccompiler.y"
                                                                    {;}
#line 1406 "y.tab.c"
    break;

  case 4: /* FuctionsAndDeclarations: FuctionsAndDeclarations Declaration  */
#line 33 "uccompiler.y"
                                                             {;}
#line 1412 "y.tab.c"
    break;

  case 5: /* FuctionsAndDeclarations: FuctionDefinition  */
#line 34 "uccompiler.y"
                                           {;}
#line 1418 "y.tab.c"
    break;

  case 6: /* FuctionsAndDeclarations: FuctionDeclaration  */
#line 35 "uccompiler.y"
                                            {;}
#line 1424 "y.tab.c"
    break;

  case 7: /* FuctionsAndDeclarations: Declaration  */
#line 36 "uccompiler.y"
                                     {;}
#line 1430 "y.tab.c"
    break;

  case 8: /* FuctionDefinition: TypeSpec FuctionDeclarator FuctionBody  */
#line 39 "uccompiler.y"
                                                          {;}
#line 1436 "y.tab.c"
    break;

  case 9: /* FuctionBody: LBRACE DeclarationAndStatements RBRACE  */
#line 41 "uccompiler.y"
                                                    {;}
#line 1442 "y.tab.c"
    break;

  case 10: /* FuctionBody: LBRACE RBRACE  */
#line 42 "uccompiler.y"
                           {;}
#line 1448 "y.tab.c"
    break;

  case 11: /* DeclarationAndStatements: Statement DeclarationAndStatements  */
#line 44 "uccompiler.y"
                                                             {;}
#line 1454 "y.tab.c"
    break;

  case 12: /* DeclarationAndStatements: Declaration DeclarationAndStatements  */
#line 45 "uccompiler.y"
                                                               {;}
#line 1460 "y.tab.c"
    break;

  case 13: /* DeclarationAndStatements: Statement  */
#line 46 "uccompiler.y"
                                    {;}
#line 1466 "y.tab.c"
    break;

  case 14: /* DeclarationAndStatements: Declaration  */
#line 47 "uccompiler.y"
                                      {;}
#line 1472 "y.tab.c"
    break;

  case 15: /* FuctionDeclaration: TypeSpec FuctionDeclarator SEMI  */
#line 50 "uccompiler.y"
                                                    {;}
#line 1478 "y.tab.c"
    break;

  case 16: /* FuctionDeclarator: IDENTIFIER LPAR ParameterList RPAR  */
#line 52 "uccompiler.y"
                                                      {;}
#line 1484 "y.tab.c"
    break;

  case 17: /* ParameterList: ParameterDeclaration  */
#line 54 "uccompiler.y"
                                    {;}
#line 1490 "y.tab.c"
    break;

  case 18: /* ParameterList: ParameterList COMMA ParameterDeclaration  */
#line 55 "uccompiler.y"
                                                        {;}
#line 1496 "y.tab.c"
    break;

  case 19: /* ParameterDeclaration: TypeSpec IDENTIFIER  */
#line 58 "uccompiler.y"
                                          {;}
#line 1502 "y.tab.c"
    break;

  case 20: /* ParameterDeclaration: TypeSpec  */
#line 59 "uccompiler.y"
                               {;}
#line 1508 "y.tab.c"
    break;

  case 21: /* Declaration: TypeSpec Declarator AuxDeclaration SEMI  */
#line 62 "uccompiler.y"
                                                     {;}
#line 1514 "y.tab.c"
    break;

  case 22: /* AuxDeclaration: AuxDeclaration COMMA Declarator  */
#line 64 "uccompiler.y"
                                                {;}
#line 1520 "y.tab.c"
    break;

  case 24: /* TypeSpec: CHAR  */
#line 68 "uccompiler.y"
               {;}
#line 1526 "y.tab.c"
    break;

  case 25: /* TypeSpec: INT  */
#line 69 "uccompiler.y"
              {;}
#line 1532 "y.tab.c"
    break;

  case 26: /* TypeSpec: VOID  */
#line 70 "uccompiler.y"
               {;}
#line 1538 "y.tab.c"
    break;

  case 27: /* TypeSpec: SHORT  */
#line 71 "uccompiler.y"
                {;}
#line 1544 "y.tab.c"
    break;

  case 28: /* TypeSpec: DOUBLE  */
#line 72 "uccompiler.y"
                 {;}
#line 1550 "y.tab.c"
    break;

  case 29: /* Declarator: IDENTIFIER ASSIGN Expr  */
#line 75 "uccompiler.y"
                                   {;}
#line 1556 "y.tab.c"
    break;

  case 30: /* Declarator: IDENTIFIER  */
#line 76 "uccompiler.y"
                       {;}
#line 1562 "y.tab.c"
    break;

  case 31: /* Statement: Expr SEMI  */
#line 79 "uccompiler.y"
                     {;}
#line 1568 "y.tab.c"
    break;

  case 32: /* Statement: SEMI  */
#line 80 "uccompiler.y"
                {;}
#line 1574 "y.tab.c"
    break;

  case 33: /* Statement: LBRACE AuxStatement RBRACE  */
#line 83 "uccompiler.y"
                                      {;}
#line 1580 "y.tab.c"
    break;

  case 34: /* AuxStatement: AuxStatement Statement  */
#line 85 "uccompiler.y"
                                     {;}
#line 1586 "y.tab.c"
    break;

  case 36: /* Statement: IF LPAR Expr RPAR Statement ELSE Statement  */
#line 89 "uccompiler.y"
                                                      {;}
#line 1592 "y.tab.c"
    break;

  case 37: /* Statement: IF LPAR Expr RPAR Statement  */
#line 90 "uccompiler.y"
                                       {;}
#line 1598 "y.tab.c"
    break;

  case 38: /* Statement: WHILE LPAR Expr RPAR Statement  */
#line 93 "uccompiler.y"
                                          {;}
#line 1604 "y.tab.c"
    break;

  case 39: /* Statement: RETURN Expr SEMI  */
#line 95 "uccompiler.y"
                            {;}
#line 1610 "y.tab.c"
    break;

  case 40: /* Statement: RETURN SEMI  */
#line 96 "uccompiler.y"
                       {;}
#line 1616 "y.tab.c"
    break;

  case 41: /* Expr: Expr ASSIGN Expr  */
#line 99 "uccompiler.y"
                       {;}
#line 1622 "y.tab.c"
    break;

  case 42: /* Expr: Expr COMMA Expr  */
#line 100 "uccompiler.y"
                      {;}
#line 1628 "y.tab.c"
    break;

  case 43: /* Expr: Expr PLUS Expr  */
#line 103 "uccompiler.y"
                     {;}
#line 1634 "y.tab.c"
    break;

  case 44: /* Expr: Expr MINUS Expr  */
#line 104 "uccompiler.y"
                      {;}
#line 1640 "y.tab.c"
    break;

  case 45: /* Expr: Expr MUL Expr  */
#line 105 "uccompiler.y"
                    {;}
#line 1646 "y.tab.c"
    break;

  case 46: /* Expr: Expr DIV Expr  */
#line 106 "uccompiler.y"
                    {;}
#line 1652 "y.tab.c"
    break;

  case 47: /* Expr: Expr MOD Expr  */
#line 107 "uccompiler.y"
                    {;}
#line 1658 "y.tab.c"
    break;

  case 48: /* Expr: Expr OR Expr  */
#line 110 "uccompiler.y"
                   {;}
#line 1664 "y.tab.c"
    break;

  case 49: /* Expr: Expr AND Expr  */
#line 111 "uccompiler.y"
                    {;}
#line 1670 "y.tab.c"
    break;

  case 50: /* Expr: Expr BITWISEAND Expr  */
#line 112 "uccompiler.y"
                           {;}
#line 1676 "y.tab.c"
    break;

  case 51: /* Expr: Expr BITWISEOR Expr  */
#line 113 "uccompiler.y"
                          {;}
#line 1682 "y.tab.c"
    break;

  case 52: /* Expr: Expr BITWISEXOR Expr  */
#line 114 "uccompiler.y"
                           {;}
#line 1688 "y.tab.c"
    break;

  case 53: /* Expr: Expr EQ Expr  */
#line 117 "uccompiler.y"
                   {;}
#line 1694 "y.tab.c"
    break;

  case 54: /* Expr: Expr NE Expr  */
#line 118 "uccompiler.y"
                   {;}
#line 1700 "y.tab.c"
    break;

  case 55: /* Expr: Expr LE Expr  */
#line 119 "uccompiler.y"
                   {;}
#line 1706 "y.tab.c"
    break;

  case 56: /* Expr: Expr GE Expr  */
#line 120 "uccompiler.y"
                   {;}
#line 1712 "y.tab.c"
    break;

  case 57: /* Expr: Expr LT Expr  */
#line 121 "uccompiler.y"
                   {;}
#line 1718 "y.tab.c"
    break;

  case 58: /* Expr: Expr GT Expr  */
#line 122 "uccompiler.y"
                   {;}
#line 1724 "y.tab.c"
    break;

  case 59: /* Expr: PLUS Expr  */
#line 125 "uccompiler.y"
                {;}
#line 1730 "y.tab.c"
    break;

  case 60: /* Expr: MINUS Expr  */
#line 126 "uccompiler.y"
                 {;}
#line 1736 "y.tab.c"
    break;

  case 61: /* Expr: NOT Expr  */
#line 127 "uccompiler.y"
               {;}
#line 1742 "y.tab.c"
    break;

  case 62: /* Expr: IDENTIFIER LPAR RPAR  */
#line 130 "uccompiler.y"
                           {;}
#line 1748 "y.tab.c"
    break;

  case 63: /* Expr: IDENTIFIER LPAR Expr_comma RPAR  */
#line 131 "uccompiler.y"
                                      {;}
#line 1754 "y.tab.c"
    break;

  case 64: /* Expr_comma: Expr_comma COMMA Expr  */
#line 134 "uccompiler.y"
                                  {;}
#line 1760 "y.tab.c"
    break;

  case 65: /* Expr_comma: Expr  */
#line 135 "uccompiler.y"
                 {;}
#line 1766 "y.tab.c"
    break;

  case 66: /* Expr: IDENTIFIER  */
#line 138 "uccompiler.y"
                 {;}
#line 1772 "y.tab.c"
    break;

  case 67: /* Expr: NATURAL  */
#line 139 "uccompiler.y"
              {;}
#line 1778 "y.tab.c"
    break;

  case 68: /* Expr: CHRLIT  */
#line 140 "uccompiler.y"
             {;}
#line 1784 "y.tab.c"
    break;

  case 69: /* Expr: DECIMAL  */
#line 141 "uccompiler.y"
              {;}
#line 1790 "y.tab.c"
    break;

  case 70: /* Expr: LPAR Expr RPAR  */
#line 142 "uccompiler.y"
                     {;}
#line 1796 "y.tab.c"
    break;


#line 1800 "y.tab.c"

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

