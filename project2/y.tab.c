#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140101

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)

#define YYPREFIX "yy"

#define YYPURE 0

 /* definition */
#include "proj2.h"
#include <stdio.h>
tree GlobalType = NULL; 
tree ReturnType = NULL;

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define ANDnum 257
#define ASSGNnum 258
#define DECLARATIONSnum 259
#define DOTnum 260
#define ENDDECLARATIONSnum 261
#define EQUALnum 262
#define GTnum 263
#define IDnum 264
#define INTnum 265
#define LBRACnum 266
#define LPARENnum 267
#define METHODnum 268
#define NEnum 269
#define ORnum 270
#define PROGRAMnum 271
#define RBRACnum 272
#define RPARENnum 273
#define SEMInum 274
#define VALnum 275
#define WHILEnum 276
#define CLASSnum 277
#define COMMAnum 278
#define DIVIDEnum 279
#define ELSEnum 280
#define EQnum 281
#define GEnum 282
#define ICONSTnum 283
#define IFnum 284
#define LBRACEnum 285
#define LEnum 286
#define LTnum 287
#define MINUSnum 288
#define NOTnum 289
#define PLUSnum 290
#define RBRACEnum 291
#define RETURNnum 292
#define SCONSTnum 293
#define TIMESnum 294
#define VOIDnum 295
#define ERRORnum 296
#define STRERRORnum 297
#define COMMERRORnum 298
#define IDERRORnum 299
#define BACKSLASHnum 300
#define EOFnum 301
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,   41,   41,   42,   43,   43,   43,   44,   44,   40,
   40,   45,   45,   46,   46,   47,   48,   48,   48,   38,
   39,   49,   49,   50,   50,   51,   51,   51,   63,   63,
   64,   64,   52,   53,   53,   54,   54,   54,   54,   55,
   58,   58,   56,   57,   57,   66,   57,   59,   59,   60,
   60,   61,   61,   61,   61,   62,   14,   12,   12,   13,
   13,   15,   15,   16,   16,   10,   10,    9,    9,    5,
    3,    3,    2,    2,   11,   11,    8,    8,   17,   17,
    7,    4,    4,    4,    4,    4,    4,    4,    6,    6,
    6,   19,   19,   19,   19,   20,   21,   22,   23,   23,
   23,   23,   18,   28,   28,   28,   28,   25,   26,   27,
   29,   29,   29,   29,   30,   31,   32,   33,   33,   33,
   34,   34,   34,   24,   24,    1,   37,   37,   35,   35,
   36,   36,   65,
};
static const short yylen[] = {                            2,
    4,    1,    2,    3,    3,    2,    3,    2,    1,    2,
    1,    2,    3,    1,    2,    2,    2,    3,    3,    2,
    2,    2,    1,    2,    3,    1,    1,    1,    3,    4,
    2,    3,    2,    3,    4,    6,    6,    7,    7,    1,
    2,    1,    3,    3,    1,    0,    5,    2,    1,    2,
    2,    2,    3,    3,    4,    2,    3,    1,    3,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    3,
    3,    4,    1,    3,    1,    2,    1,    3,    3,    5,
    3,    1,    3,    3,    3,    3,    3,    3,    1,    3,
    3,    1,    1,    1,    1,    3,    3,    3,    4,    4,
    4,    1,    1,    1,    1,    1,    1,    4,    4,    4,
    1,    1,    1,    1,    3,    3,    3,    1,    3,    2,
    1,    1,    1,    1,    1,    2,    1,    1,    4,    3,
    1,    3,    0,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    0,    0,    1,    0,    0,    3,    0,
    4,    0,    0,    6,    0,    0,    0,    0,   12,    0,
    0,    0,   14,    0,    0,    0,    7,    5,    8,   10,
    0,    0,    0,   13,   15,    0,   16,    0,    0,    0,
    0,    0,    0,    0,    0,   17,    0,    0,    0,    0,
   54,    0,   24,    0,    0,    0,    0,  124,    0,    0,
    0,    0,  125,    0,  123,   26,    0,    0,   89,  121,
  104,  105,  106,  103,    0,  118,   20,   28,   27,   18,
    0,   19,    0,    0,    0,    0,   42,   40,    0,    0,
   56,   55,   25,    0,    0,  127,  126,  128,    0,    0,
    0,    0,    0,  120,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   21,    0,
    0,   49,    0,   37,   41,    0,   36,    0,    0,    0,
    0,    0,    0,  119,    0,   29,    0,    0,    0,    0,
   91,   92,   93,   94,   95,   90,   71,    0,   73,   84,
   86,   85,   88,   87,   83,    0,    0,    0,    0,    0,
    0,    0,    0,   43,   45,    0,    0,    0,    0,   62,
   60,   68,   66,   67,   65,   64,    0,   58,   61,   63,
    0,   69,   48,   39,   38,  130,    0,    0,   34,    0,
   31,    0,   30,    0,    0,    0,   72,    0,  101,  100,
   99,    0,    0,    0,  110,  111,  112,  113,  114,  109,
  108,   46,    0,    0,    0,   76,    0,    0,   57,    0,
  132,  129,   35,   32,   98,   97,   96,   74,    0,    0,
    0,    0,   44,   81,   79,   70,   59,    0,   78,  117,
  116,  115,    0,    0,   47,   80,
};
static const short yydgoto[] = {                          2,
   64,  148,   65,   66,  171,   67,  172,  173,  174,  175,
  176,  177,  178,  122,  179,  180,  181,   68,  141,  142,
  143,  144,   69,   70,   71,   72,   73,   74,  205,  206,
  207,  208,   75,   76,   96,  131,   97,   47,   82,   15,
    6,    7,   11,   16,  123,   22,   23,   37,   38,   44,
   77,   78,  100,   18,   86,   87,  164,   88,  124,   24,
   32,   51,   79,  137,  145,  232,
};
static const short yysindex[] = {                      -238,
 -229,    0, -218, -205, -183,    0, -205, -162,    0, -236,
    0,  -66, -245,    0, -197, -128, -113, -113,    0,  -95,
  -95,  -21,    0,  -90,  -78,  -73,    0,    0,    0,    0,
  -89,  -58,  -58,    0,    0,  -51,    0, -231,  -60,  -56,
  -47,  -48,  -41,  -19, -136,    0, -249, -148, -125,  -42,
    0,  -47,    0,  -27, -230,  -18,  -25,    0, -136, -151,
 -151, -151,    0,  -49,    0,    0, -195, -244,    0,    0,
    0,    0,    0,    0, -242,    0,    0,    0,    0,    0,
  -90,    0,  -15, -237,  -11,  -23,    0,    0, -237,  -16,
    0,    0,    0,   -9,  -25,    0,    0,    0,  -25,   -7,
  -12, -257, -219,    0, -219,  -37,  -25,  -25,  -25,  -25,
  -25,  -25, -151, -151, -151, -151, -151, -151,    0, -116,
 -191,    0,  -13,    0,    0, -237,    0, -237, -230,   -5,
  -10,    2,  -25,    0, -136,    0, -251, -151, -151, -151,
    0,    0,    0,    0,    0,    0,    0, -122,    0,    0,
    0,    0,    0,    0,    0, -219, -219, -219, -240, -240,
 -240, -129,   12,    0,    0,  -25,  -25,  -25, -188,    0,
    0,    0,    0,    0,    0,    0, -196,    0,    0,    0,
    1,    0,    0,    0,    0,    0,  -25, -230,    0,    5,
    0, -136,    0, -219, -219, -219,    0,  -25,    0,    0,
    0, -151, -151, -151,    0,    0,    0,    0,    0,    0,
    0,    0, -116,  -13,  -13,    0,  -25, -191,    0, -170,
    0,    0,    0,    0,    0,    0,    0,    0, -240, -240,
 -240,    6,    0,    0,    0,    0,    0,  -25,    0,    0,
    0,    0,  -11,  -13,    0,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,  289,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   -1,    7,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   27,   30,    0,    0, -150,    0,    0,    0,    0,
  -74,    0,    0, -141,    0,    0,    0,    0,    0,    0,
    0,  -52,    0,    0,  -85,    0,    0,    0,    0,    0,
    0,    0,    0,  -53,    0,    0,   79,   43,    0,    0,
    0,    0,    0,    0,   -3,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -250,
    0,    0,   63,    0,   63,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   26,
 -171,    0,    0,    0,    0,    0,    0,    0,  -85,   28,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   63,   63,   63,   23,   23,
   23,    0,    0,    0,    0,    0,    0, -156,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 -152,    0,    0,    0,    0,    0,    0,  -85,    0,    0,
    0,    0,    0,   63,   63,   63,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   26,    0,    0,    0,    0, -171,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   23,   23,
   23,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,
};
static const short yygindex[] = {                         0,
 -114,    0, -110,  -57,    0,   58,    0,    0,    0,    0,
    0,    0,   84, -118,    0,    0,    0,  -50,  -96,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -147,    0,
    0,    0,  -59,    0,    0,    0, -111,    0,    0,  162,
  296,    0,    0,    0,  297,    0,  298,  237,    0,    0,
  -55,    0,    0,    0,  -43,  -82,  106,    0,  -81,    3,
  301,  271,    0,    0,  -54,    0,
};
#define YYTABLESIZE 370
static const short yytable[] = {                        101,
   98,  104,  125,  102,  183,   90,  169,  127,  146,  103,
  170,  105,  210,  211,  116,   26,  202,  186,   20,   21,
  135,   12,   12,   33,   80,  113,  192,   33,   81,   94,
   45,   13,    1,  136,    3,   95,  117,  130,  203,  193,
   33,  132,   46,  114,  184,  115,  185,  121,  149,   25,
  138,  118,   91,  204,   14,    4,  159,  160,  161,  199,
  200,  201,  156,  157,  158,  165,  182,  107,  139,  217,
  140,    5,   55,  108,   98,  190,  222,  218,  106,  191,
    8,  240,  241,  242,  166,  109,  110,  194,  195,  196,
  111,  112,  167,   27,  219,  234,  235,  225,  226,  227,
  168,  239,  133,  169,  209,  209,  209,  170,  214,  215,
  216,   23,   55,  238,  121,   57,   83,   75,  212,  133,
   22,   77,   10,   23,   84,  246,   85,   55,   56,  221,
   57,   58,   22,   98,   75,   83,  224,   61,   77,   83,
  228,   63,  229,  230,  231,   85,   58,   89,   59,   85,
  197,   60,   61,   62,   13,  198,   63,  162,  165,  236,
  245,  163,   28,  182,  150,  151,  152,  153,  154,  155,
   31,  133,  133,   36,  209,  209,  209,  133,   29,   30,
  244,  133,   41,  133,  133,   39,  133,  133,  133,   52,
   40,   52,  133,  133,   19,  133,  133,   20,   21,  133,
  133,  133,  133,  122,  133,  133,   48,   42,  133,  122,
   49,   53,   50,   53,   43,  122,  122,  106,  122,  122,
  122,   20,   21,   52,  122,  122,   55,  122,  122,   57,
   53,  122,  122,  122,  122,  147,  122,  122,   55,   34,
  122,   57,   20,   21,   93,   58,   54,   99,  120,  126,
   60,   61,   62,   83,  129,   63,  128,   58,  133,  107,
  134,  188,   60,   61,   62,  107,  107,   63,  107,  107,
  107,  121,  187,  189,  107,  213,  223,  107,  107,  243,
  220,  107,  107,  107,  107,  133,  107,  107,    2,    9,
   50,  133,  133,   51,  133,  133,  133,   11,  133,  131,
  133,  237,    9,  133,  133,  102,   17,  133,  133,  133,
  133,  102,  133,  133,  102,  102,  102,  119,  233,   35,
  102,   33,   92,  102,  102,  133,    0,  102,  102,  102,
    0,  133,    0,  102,  133,  133,  133,    0,    0,    0,
  133,    0,    0,  133,  133,    0,    0,  133,  133,  133,
   82,   82,   82,  133,    0,    0,   82,    0,    0,    0,
    0,    0,    0,   82,    0,    0,    0,    0,    0,   82,
};
static const short yycheck[] = {                         57,
   55,   61,   85,   59,  123,   49,  121,   89,  105,   60,
  121,   62,  160,  161,  257,   13,  257,  129,  264,  265,
  278,  259,  259,  274,  274,  270,  278,  278,  278,  260,
  262,  268,  271,  291,  264,  266,  279,   95,  279,  291,
  291,   99,  274,  288,  126,  290,  128,  285,  106,  295,
  270,  294,   50,  294,  291,  274,  116,  117,  118,  156,
  157,  158,  113,  114,  115,  120,  121,  263,  288,  258,
  290,  277,  264,  269,  129,  133,  188,  274,  267,  135,
  264,  229,  230,  231,  276,  281,  282,  138,  139,  140,
  286,  287,  284,  291,  291,  214,  215,  194,  195,  196,
  292,  220,  274,  218,  159,  160,  161,  218,  166,  167,
  168,  262,  264,  284,  285,  267,  265,  274,  162,  291,
  262,  274,  285,  274,  273,  244,  275,  264,  265,  187,
  267,  283,  274,  188,  291,  265,  192,  289,  291,  265,
  198,  293,  202,  203,  204,  275,  283,  273,  285,  275,
  273,  288,  289,  290,  268,  278,  293,  274,  213,  217,
  243,  278,  291,  218,  107,  108,  109,  110,  111,  112,
  266,  257,  258,  264,  229,  230,  231,  263,   17,   18,
  238,  267,  272,  269,  270,  264,  272,  273,  274,  264,
  264,  266,  278,  279,  261,  281,  282,  264,  265,  285,
  286,  287,  288,  257,  290,  291,  267,  266,  294,  263,
  267,  264,  260,  266,  266,  269,  270,  267,  272,  273,
  274,  264,  265,  272,  278,  279,  264,  281,  282,  267,
  272,  285,  286,  287,  288,  273,  290,  291,  264,  261,
  294,  267,  264,  265,  272,  283,  266,  266,  264,  273,
  288,  289,  290,  265,  264,  293,  273,  283,  266,  263,
  273,  272,  288,  289,  290,  269,  270,  293,  272,  273,
  274,  285,  278,  272,  278,  264,  272,  281,  282,  274,
  280,  285,  286,  287,  288,  263,  290,  291,    0,  291,
  264,  269,  270,  264,  272,  273,  274,  291,  273,  272,
  278,  218,    7,  281,  282,  263,   10,  285,  286,  287,
  288,  269,  290,  291,  272,  273,  274,   81,  213,   22,
  278,   21,   52,  281,  282,  263,   -1,  285,  286,  287,
   -1,  269,   -1,  291,  272,  273,  274,   -1,   -1,   -1,
  278,   -1,   -1,  281,  282,   -1,   -1,  285,  286,  287,
  272,  273,  274,  291,   -1,   -1,  278,   -1,   -1,   -1,
   -1,   -1,   -1,  285,   -1,   -1,   -1,   -1,   -1,  291,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 301
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? (YYMAXTOKEN + 1) : (a))
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"ANDnum","ASSGNnum",
"DECLARATIONSnum","DOTnum","ENDDECLARATIONSnum","EQUALnum","GTnum","IDnum",
"INTnum","LBRACnum","LPARENnum","METHODnum","NEnum","ORnum","PROGRAMnum",
"RBRACnum","RPARENnum","SEMInum","VALnum","WHILEnum","CLASSnum","COMMAnum",
"DIVIDEnum","ELSEnum","EQnum","GEnum","ICONSTnum","IFnum","LBRACEnum","LEnum",
"LTnum","MINUSnum","NOTnum","PLUSnum","RBRACEnum","RETURNnum","SCONSTnum",
"TIMESnum","VOIDnum","ERRORnum","STRERRORnum","COMMERRORnum","IDERRORnum",
"BACKSLASHnum","EOFnum","illegal-symbol",
};
static const char *yyrule[] = {
"$accept : Program",
"Program : PROGRAMnum IDnum SEMInum ProgramB",
"ProgramB : ClassDecl",
"ProgramB : ClassDecl ProgramB",
"ClassDecl : CLASSnum IDnum ClassBody",
"ClassBody : LBRACEnum ClassBodyB RBRACEnum",
"ClassBody : LBRACEnum RBRACEnum",
"ClassBody : LBRACEnum ClassBodyC RBRACEnum",
"ClassBodyB : Decls ClassBodyC",
"ClassBodyB : Decls",
"ClassBodyC : MethodDecl ClassBodyC",
"ClassBodyC : MethodDecl",
"Decls : DECLARATIONSnum ENDDECLARATIONSnum",
"Decls : DECLARATIONSnum DeclsB ENDDECLARATIONSnum",
"DeclsB : FieldDecl",
"DeclsB : DeclsB FieldDecl",
"FieldDecl : Type FieldDeclB",
"FieldDeclB : VariableDeclId SEMInum",
"FieldDeclB : VariableDeclId FieldDeclD SEMInum",
"FieldDeclB : VariableDeclId FieldDeclD FieldDeclE",
"FieldDeclD : EQUALnum VariableInitializer",
"FieldDeclE : COMMAnum FieldDeclB",
"VariableDeclId : IDnum VariableDeclIdB",
"VariableDeclId : IDnum",
"VariableDeclIdB : LBRACnum RBRACnum",
"VariableDeclIdB : VariableDeclIdB LBRACnum RBRACnum",
"VariableInitializer : Expression",
"VariableInitializer : ArrayInitializer",
"VariableInitializer : ArrayCreationExpression",
"ArrayInitializer : LBRACEnum VariableInitializer RBRACEnum",
"ArrayInitializer : LBRACEnum VariableInitializer ArrayInitializerB RBRACEnum",
"ArrayInitializerB : COMMAnum VariableInitializer",
"ArrayInitializerB : ArrayInitializerB COMMAnum VariableInitializer",
"ArrayCreationExpression : INTnum ArrayCreationExpressionB",
"ArrayCreationExpressionB : LBRACnum Expression RBRACnum",
"ArrayCreationExpressionB : ArrayCreationExpressionB LBRACnum Expression RBRACnum",
"MethodDecl : METHODnum Type IDnum LPARENnum RPARENnum Block",
"MethodDecl : METHODnum VOIDnum IDnum LPARENnum RPARENnum Block",
"MethodDecl : METHODnum Type IDnum LPARENnum FormalParameterList RPARENnum Block",
"MethodDecl : METHODnum VOIDnum IDnum LPARENnum FormalParameterList RPARENnum Block",
"FormalParameterList : FormalParameterListD",
"FormalParameterListD : VALnum FormalParameterListB",
"FormalParameterListD : FormalParameterListB",
"FormalParameterListB : INTnum IDnum FormalParameterListC",
"FormalParameterListC : COMMAnum IDnum FormalParameterListC",
"FormalParameterListC : epsilon",
"$$1 :",
"FormalParameterListC : SEMInum FormalParameterList $$1 SEMInum FormalParameterListB",
"Block : Decls StatementList",
"Block : StatementList",
"Type : IDnum TypeB",
"Type : INTnum TypeB",
"TypeB : LBRACnum RBRACnum",
"TypeB : TypeB LBRACnum RBRACnum",
"TypeB : LBRACnum RBRACnum TypeC",
"TypeB : TypeB LBRACnum RBRACnum TypeC",
"TypeC : DOTnum Type",
"StatementList : LBRACEnum Statementsop RBRACEnum",
"Statementsop : Statement",
"Statementsop : Statementsop SEMInum Statement",
"Statement : AssignmentStatement",
"Statement : Statements_Op",
"Statements_Op : MethodCallStatement",
"Statements_Op : Statements_Op2",
"Statements_Op2 : ReturnStatement",
"Statements_Op2 : Statements_Op3",
"Statements_Op3 : IfStatement",
"Statements_Op3 : Statements_Op4",
"Statements_Op4 : WhileStatement",
"Statements_Op4 : epsilon",
"AssignmentStatement : Variable ASSGNnum Expression",
"MethodCallStatement : Variable LPARENnum RPARENnum",
"MethodCallStatement : Variable LPARENnum Expre RPARENnum",
"Expre : Expression",
"Expre : Expre COMMAnum Expression",
"ReturnStatement : RETURNnum",
"ReturnStatement : RETURNnum Expression",
"IfStatement : IFState_Op",
"IfStatement : IFState_Op ELSEnum StatementList",
"IFState_Op : IFnum Expression StatementList",
"IFState_Op : IFState_Op ELSEnum IFnum Expression StatementList",
"WhileStatement : WHILEnum Expression StatementList",
"Expression : SimpleExpression",
"Expression : SimpleExpression LTnum SimpleExpression",
"Expression : SimpleExpression GTnum SimpleExpression",
"Expression : SimpleExpression EQnum SimpleExpression",
"Expression : SimpleExpression NEnum SimpleExpression",
"Expression : SimpleExpression LEnum SimpleExpression",
"Expression : SimpleExpression GEnum SimpleExpression",
"SimpleExpression : Simple_op6",
"SimpleExpression : PLUSnum Term Simple_op",
"SimpleExpression : MINUSnum Term Simple_op",
"Simple_op : Simple_op3",
"Simple_op : Simple_op4",
"Simple_op : Simple_op5",
"Simple_op : epsilon",
"Simple_op3 : PLUSnum Term Simple_op",
"Simple_op4 : MINUSnum Term Simple_op",
"Simple_op5 : ORnum Term Simple_op",
"Simple_op6 : Term PLUSnum Term Simple_op",
"Simple_op6 : Term MINUSnum Term Simple_op",
"Simple_op6 : Term ORnum Term Simple_op",
"Simple_op6 : Term",
"Term : Term_op",
"Term_op : Term_op2",
"Term_op : Term_op3",
"Term_op : Term_op4",
"Term_op : Factor",
"Term_op2 : Factor TIMESnum Factor Term_op5",
"Term_op3 : Factor DIVIDEnum Factor Term_op5",
"Term_op4 : Factor ANDnum Factor Term_op5",
"Term_op5 : Term_op6",
"Term_op5 : Term_op7",
"Term_op5 : Term_op8",
"Term_op5 : epsilon",
"Term_op6 : TIMESnum Factor Term_op5",
"Term_op7 : DIVIDEnum Factor Term_op5",
"Term_op8 : ANDnum Factor Term_op5",
"Factor : Factor_op",
"Factor : LPARENnum Expression RPARENnum",
"Factor : NOTnum Factor",
"Factor_op : UnsignedConstant",
"Factor_op : Variable",
"Factor_op : MethodCallStatement",
"UnsignedConstant : ICONSTnum",
"UnsignedConstant : SCONSTnum",
"Variable : IDnum Variable_op",
"Variable_op : Variable_op2",
"Variable_op : epsilon",
"Variable_op2 : LBRACnum Variable_op3 RBRACnum Variable_op",
"Variable_op2 : DOTnum IDnum Variable_op",
"Variable_op3 : Expression",
"Variable_op3 : Expression COMMAnum Expression",
"epsilon :",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    short    *s_base;
    short    *s_mark;
    short    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
int yycolumn, yyline;
FILE *treelst;
main() { treelst = stdout; yyparse(); }
yyerror(char *str) { printf("yyerror: %s at line %d\n", str, yyline); }
#include "lex.yy.c"


#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (short *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack)) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 1:
	{yyval.tptr = MakeTree(ProgramOp, yystack.l_mark[0].tptr, MakeLeaf(IDNode, yystack.l_mark[-2].intg)); printtree(yyval.tptr, 0);}
break;
case 2:
	{yyval.tptr = MakeTree(ClassOp, MakeLeaf(DUMMYNode, 0), yystack.l_mark[0].tptr);}
break;
case 3:
	{yyval.tptr = MakeTree(ClassOp, yystack.l_mark[0].tptr, yystack.l_mark[-1].tptr);}
break;
case 4:
	{yyval.tptr = MakeTree(ClassDefOp, yystack.l_mark[0].tptr, MakeLeaf(IDNode, yystack.l_mark[-1].intg));}
break;
case 5:
	{yyval.tptr = yystack.l_mark[-1].tptr;}
break;
case 6:
	{yyval.tptr = MakeLeaf(DUMMYNode, 0);}
break;
case 7:
	{yyval.tptr = yystack.l_mark[-1].tptr;}
break;
case 8:
	{yyval.tptr = MkLeftC(yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);}
break;
case 9:
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 10:
	{yyval.tptr = MakeTree(BodyOp, yystack.l_mark[0].tptr, yystack.l_mark[-1].tptr);}
break;
case 11:
	{yyval.tptr = MakeTree(BodyOp, MakeLeaf(DUMMYNode,0), yystack.l_mark[0].tptr);}
break;
case 12:
	{yyval.tptr = MakeLeaf(DUMMYNode, 0);}
break;
case 13:
	{yyval.tptr = yystack.l_mark[-1].tptr;}
break;
case 14:
	{yyval.tptr = MakeTree(BodyOp, MakeLeaf(DUMMYNode, 0), yystack.l_mark[0].tptr);}
break;
case 15:
	{yyval.tptr = MakeTree(BodyOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);}
break;
case 16:
	{yyval.tptr = yystack.l_mark[0].tptr; GlobalType = yystack.l_mark[-1].tptr;}
break;
case 17:
	{yyval.tptr = MakeTree(DeclOp, MakeLeaf(DUMMYNode, 0), MakeTree(CommaOp, yystack.l_mark[-1].tptr, MakeTree(CommaOp, GlobalType, MakeLeaf(DUMMYNode, 0))));}
break;
case 18:
	{yyval.tptr = MakeTree(DeclOp, MakeLeaf(DUMMYNode, 0), MakeTree(CommaOp, yystack.l_mark[-2].tptr, MakeTree(CommaOp, GlobalType, yystack.l_mark[-1].tptr)));}
break;
case 19:
	{yyval.tptr = MakeTree(DeclOp, yystack.l_mark[0].tptr, MakeTree(CommaOp, yystack.l_mark[-2].tptr, MakeTree(CommaOp, GlobalType, yystack.l_mark[-1].tptr)));}
break;
case 20:
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 21:
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 22:
	{yyval.tptr = MakeLeaf(IDNode, yystack.l_mark[-1].intg);}
break;
case 23:
	{yyval.tptr = MakeLeaf(IDNode, yystack.l_mark[0].intg);}
break;
case 24:
	{}
break;
case 25:
	{}
break;
case 26:
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 27:
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 28:
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 29:
	{yyval.tptr = MakeTree(ArrayTypeOp, MakeTree(CommaOp, MakeLeaf(DUMMYNode, 0), yystack.l_mark[-1].tptr), GlobalType);}
break;
case 30:
	{yyval.tptr = MakeTree(ArrayTypeOp, yystack.l_mark[-1].tptr, GlobalType);}
break;
case 31:
	{yyval.tptr = MakeTree(CommaOp, MakeLeaf(DUMMYNode, 0), yystack.l_mark[0].tptr);}
break;
case 32:
	{yyval.tptr = MakeTree(CommaOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);}
break;
case 33:
	{yyval.tptr = MakeTree(ArrayTypeOp, yystack.l_mark[0].tptr, MakeLeaf(INTEGERTNode, yystack.l_mark[-1].intg));}
break;
case 34:
	{yyval.tptr = MakeTree(BoundOp, MakeLeaf(DUMMYNode, 0), yystack.l_mark[-1].tptr);}
break;
case 35:
	{yyval.tptr = MakeTree(BoundOp, yystack.l_mark[-3].tptr, yystack.l_mark[-1].tptr);}
break;
case 36:
	{ReturnType = yystack.l_mark[-4].tptr; yyval.tptr = MakeTree(MethodOp, MakeTree(HeadOp, MakeLeaf(IDNode, yystack.l_mark[-3].intg), MakeLeaf(DUMMYNode, 0)), yystack.l_mark[0].tptr);}
break;
case 37:
	{yyval.tptr = MakeTree(MethodOp, MakeTree(HeadOp, MakeLeaf(IDNode, yystack.l_mark[-3].intg), MakeLeaf(DUMMYNode, 0)), yystack.l_mark[0].tptr);}
break;
case 38:
	{ReturnType = yystack.l_mark[-5].tptr; yyval.tptr = MakeTree(MethodOp, MakeTree(HeadOp, MakeLeaf(IDNode, yystack.l_mark[-4].intg), yystack.l_mark[-2].tptr), yystack.l_mark[0].tptr);}
break;
case 39:
	{yyval.tptr = MakeTree(MethodOp, MakeTree(HeadOp, MakeLeaf(IDNode, yystack.l_mark[-4].intg), yystack.l_mark[-2].tptr), yystack.l_mark[0].tptr);}
break;
case 40:
	{}
break;
case 41:
	{}
break;
case 42:
	{}
break;
case 43:
	{}
break;
case 44:
	{}
break;
case 45:
	{}
break;
case 46:
	{}
break;
case 47:
	{yyval.tptr = yystack.l_mark[-3].tptr;}
break;
case 48:
	{yyval.tptr = MakeTree(BodyOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);}
break;
case 49:
	{yyval.tptr = MakeTree(BodyOp, MakeLeaf(DUMMYNode, 0), yystack.l_mark[0].tptr);}
break;
case 50:
	{}
break;
case 51:
	{}
break;
case 52:
	{}
break;
case 53:
	{ }
break;
case 54:
	{}
break;
case 55:
	{}
break;
case 56:
	{}
break;
case 57:
	{yyval.tptr = yystack.l_mark[-1].tptr;}
break;
case 58:
	{yyval.tptr = MakeTree(StmtOp,MakeLeaf(DUMMYNode,0), yystack.l_mark[0].tptr);}
break;
case 59:
	{yyval.tptr = MakeTree(StmtOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 60:
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 61:
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 62:
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 63:
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 64:
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 65:
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 66:
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 67:
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 68:
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 69:
	{yyval.tptr = MakeLeaf(DUMMYNode,0);}
break;
case 70:
	{yyval.tptr = MakeTree(AssignOp,MakeTree(AssignOp,MakeLeaf(DUMMYNode,0),yystack.l_mark[-2].tptr),yystack.l_mark[0].tptr);}
break;
case 71:
	{yyval.tptr = MakeTree(RoutineCallOp,yystack.l_mark[-2].tptr,MakeLeaf(DUMMYNode,0)); }
break;
case 72:
	{yyval.tptr = MakeTree(RoutineCallOp,yystack.l_mark[-3].tptr,yystack.l_mark[-1].tptr); }
break;
case 73:
	{yyval.tptr = MakeTree(CommaOp, yystack.l_mark[0].tptr,MakeLeaf(DUMMYNode,0) );}
break;
case 74:
	{yyval.tptr = MakeTree(CommaOp,yystack.l_mark[0].tptr,yystack.l_mark[-2].tptr);}
break;
case 75:
	{yyval.tptr = MakeTree(ReturnOp,MakeLeaf(DUMMYNode,0), MakeLeaf(DUMMYNode,0) );}
break;
case 76:
	{yyval.tptr=MakeTree(ReturnOp, yystack.l_mark[0].tptr,MakeLeaf(DUMMYNode,0) ); }
break;
case 77:
	{yyval.tptr= yystack.l_mark[0].tptr;}
break;
case 78:
	{yyval.tptr = MakeTree(IfElseOp, yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 79:
	{yyval.tptr= MakeTree(IfElseOp,MakeLeaf(DUMMYNode,0) ,MakeTree(CommaOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr));}
break;
case 80:
	{yyval.tptr=MakeTree(IfElseOp, yystack.l_mark[-4].tptr, MakeTree(CommaOp,yystack.l_mark[-1].tptr,yystack.l_mark[0].tptr));}
break;
case 81:
	{yyval.tptr= MakeTree(LoopOp,yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr );}
break;
case 82:
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 83:
	{ yyval.tptr=MakeTree(LTOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr); }
break;
case 84:
	{ yyval.tptr=MakeTree(GTOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr); }
break;
case 85:
	{ yyval.tptr=MakeTree(EQOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr); }
break;
case 86:
	{ yyval.tptr=MakeTree(NEOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr); }
break;
case 87:
	{ yyval.tptr=MakeTree(LEOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr); }
break;
case 88:
	{ yyval.tptr=MakeTree(GEOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr); }
break;
case 89:
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 90:
	{yyval.tptr= MakeTree(AddOp, yystack.l_mark[0].tptr,yystack.l_mark[-1].tptr);}
break;
case 91:
	{yyval.tptr= MakeTree(UnaryNegOp, yystack.l_mark[0].tptr,yystack.l_mark[-1].tptr);}
break;
case 92:
	{yyval.tptr= yystack.l_mark[0].tptr;}
break;
case 93:
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 94:
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 95:
	{yyval.tptr = MakeLeaf(DUMMYNode,0);}
break;
case 96:
	{yyval.tptr = MakeTree(AddOp, yystack.l_mark[0].tptr,yystack.l_mark[-1].tptr); }
break;
case 97:
	{yyval.tptr = MakeTree(UnaryNegOp, yystack.l_mark[0].tptr,yystack.l_mark[-1].tptr); }
break;
case 98:
	{yyval.tptr = MakeTree(OrOp, yystack.l_mark[0].tptr,yystack.l_mark[-1].tptr); }
break;
case 99:
	{yyval.tptr = MakeTree(AddOp, MakeTree(AddOp,yystack.l_mark[0].tptr,yystack.l_mark[-1].tptr),yystack.l_mark[-3].tptr); }
break;
case 100:
	{yyval.tptr = MakeTree(UnaryNegOp, MakeTree(UnaryNegOp,yystack.l_mark[0].tptr,yystack.l_mark[-1].tptr),yystack.l_mark[-3].tptr); }
break;
case 101:
	{yyval.tptr = MakeTree(OrOp, MakeTree(OrOp,yystack.l_mark[0].tptr,yystack.l_mark[-1].tptr),yystack.l_mark[-3].tptr); }
break;
case 102:
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 103:
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 104:
	{yyval.tptr= yystack.l_mark[0].tptr;}
break;
case 105:
	{yyval.tptr= yystack.l_mark[0].tptr;}
break;
case 106:
	{yyval.tptr= yystack.l_mark[0].tptr;}
break;
case 107:
	{yyval.tptr= yystack.l_mark[0].tptr;}
break;
case 108:
	{yyval.tptr = MakeTree(MultOp, MakeTree(MultOp,yystack.l_mark[0].tptr,yystack.l_mark[-1].tptr),yystack.l_mark[-3].tptr); }
break;
case 109:
	{yyval.tptr = MakeTree(DivOp, MakeTree(DivOp,yystack.l_mark[0].tptr,yystack.l_mark[-1].tptr),yystack.l_mark[-3].tptr); }
break;
case 110:
	{yyval.tptr = MakeTree(AndOp, MakeTree(AndOp,yystack.l_mark[0].tptr,yystack.l_mark[-1].tptr),yystack.l_mark[-3].tptr); }
break;
case 111:
	{yyval.tptr= yystack.l_mark[0].tptr;}
break;
case 112:
	{yyval.tptr= yystack.l_mark[0].tptr;}
break;
case 113:
	{yyval.tptr= yystack.l_mark[0].tptr;}
break;
case 114:
	{yyval.tptr= yystack.l_mark[0].tptr;}
break;
case 115:
	{yyval.tptr = MakeTree(MultOp, yystack.l_mark[0].tptr,yystack.l_mark[-1].tptr); }
break;
case 116:
	{yyval.tptr = MakeTree(DivOp, yystack.l_mark[0].tptr,yystack.l_mark[-1].tptr); }
break;
case 117:
	{yyval.tptr = MakeTree(AndOp, yystack.l_mark[0].tptr,yystack.l_mark[-1].tptr); }
break;
case 118:
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 119:
	{yyval.tptr=yystack.l_mark[-1].tptr;}
break;
case 120:
	{yyval.tptr = MakeTree(NotOp, MakeLeaf(DUMMYNode,0),yystack.l_mark[0].tptr); }
break;
case 121:
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 122:
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 123:
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 124:
	{yyval.tptr= MakeLeaf(NUMNode, yystack.l_mark[0].intg);}
break;
case 125:
	{yyval.tptr = MakeLeaf(STRINGNode, yystack.l_mark[0].intg);}
break;
case 126:
	{yyval.tptr = MakeTree(VarOp, MakeLeaf(IDNode, yystack.l_mark[-1].intg), yystack.l_mark[0].tptr);}
break;
case 127:
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 128:
	{yyval.tptr = MakeLeaf(DUMMYNode,0);}
break;
case 129:
	{yyval.tptr=MakeTree(SelectOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);}
break;
case 130:
	{yyval.tptr= MakeTree(SelectOp,MakeTree(FieldOp,MakeLeaf(IDNode, yystack.l_mark[-1].intg),MakeLeaf(DUMMYNode,0)), yystack.l_mark[0].tptr);}
break;
case 131:
	{yyval.tptr = MakeTree(IndexOp, yystack.l_mark[0].tptr,MakeLeaf(DUMMYNode,0) );}
break;
case 132:
	{yyval.tptr = MakeTree(IndexOp,yystack.l_mark[-2].tptr ,MakeTree(IndexOp, yystack.l_mark[0].tptr,MakeLeaf(DUMMYNode,0)));}
break;
case 133:
	{}
break;
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (short) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
