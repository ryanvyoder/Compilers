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

#line 1 "grammer.y"
 /* definition */
#include "proj2.h"
#include <stdio.h>
tree GlobalType = NULL; 
tree ReturnType = NULL;
#line 25 "y.tab.c"

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
    0,   31,   31,   32,   33,   33,   33,   34,   34,   30,
   30,   35,   35,   36,   36,   37,   38,   38,   38,   28,
   29,   39,   39,   40,   40,   41,   41,   41,   51,   51,
   52,   52,   42,   43,   43,   44,   44,   44,   44,   45,
   46,   46,   46,   46,   47,   47,   47,   48,   48,   49,
   49,   49,   49,   50,   50,   50,   14,   12,   12,   12,
   13,   13,   15,   15,   16,   16,   10,   10,    9,    9,
    5,    3,    3,    2,    2,   11,   11,    8,    8,   17,
   17,    7,    4,    4,    4,    4,    4,    4,    4,    6,
   19,   19,   19,   20,   20,   20,   20,   18,   22,   22,
   22,   22,   23,   23,   23,   24,   24,   24,   21,   21,
    1,   27,   27,   25,   25,   26,   26,   53,
};
static const short yylen[] = {                            2,
    4,    1,    2,    3,    3,    2,    3,    2,    1,    2,
    1,    2,    3,    1,    2,    2,    2,    3,    3,    2,
    2,    2,    1,    2,    3,    1,    1,    1,    3,    4,
    2,    3,    2,    3,    4,    6,    6,    7,    7,    1,
    4,    3,    3,    2,    2,    3,    2,    2,    1,    2,
    2,    1,    1,    2,    3,    4,    3,    1,    2,    3,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    3,    3,    4,    1,    3,    1,    2,    1,    3,    3,
    5,    3,    1,    3,    3,    3,    3,    3,    3,    1,
    2,    2,    1,    3,    3,    3,    1,    1,    3,    3,
    3,    1,    1,    3,    2,    1,    1,    1,    1,    1,
    2,    1,    1,    4,    3,    1,    3,    0,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    0,    0,    1,    0,    0,    3,    0,
    4,    0,    0,    6,    0,    0,    0,    0,   12,    0,
    0,    0,   14,    0,    0,    0,    7,    5,    8,   10,
    0,   50,   51,   13,   15,    0,   16,    0,    0,    0,
    0,    0,    0,    0,   17,    0,    0,    0,    0,   55,
   24,    0,    0,    0,    0,  109,    0,    0,    0,    0,
  110,    0,  108,   26,    0,   93,   97,    0,  106,    0,
  102,  103,   20,   28,   27,   18,    0,   19,    0,    0,
    0,    0,   40,    0,    0,   56,   25,    0,    0,  112,
  111,  113,    0,    0,    0,    0,   92,  105,   91,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   21,    0,    0,   49,    0,   37,    0,    0,
   36,    0,    0,    0,    0,    0,    0,  104,    0,   29,
    0,   72,    0,   74,   85,   87,   86,   89,   88,   84,
   96,   95,   94,  101,  100,   99,    0,    0,   43,    0,
    0,    0,    0,   63,   61,   69,   67,   68,   66,   65,
    0,    0,   62,   64,    0,   70,   48,    0,   39,   38,
  115,    0,    0,   34,    0,   31,    0,   30,   73,    0,
   47,    0,    0,    0,   77,    0,   57,    0,    0,   41,
  117,  114,   35,   32,   75,   46,   82,   80,   71,   60,
    0,   79,    0,   81,
};
static const short yydgoto[] = {                          2,
   62,  133,   63,   64,  155,   65,  156,  157,  158,  159,
  160,  161,  162,  116,  163,  164,  165,   66,   67,   68,
   69,   70,   71,   72,   90,  125,   91,   46,   78,   15,
    6,    7,   11,   16,  117,   22,   23,   37,   38,   43,
   73,   74,   94,   18,   82,   83,  149,  118,   24,   32,
   75,  131,   92,
};
static const short yysindex[] = {                      -243,
 -201,    0, -253, -175, -172,    0, -175, -165,    0, -250,
    0,  -58, -245,    0, -141, -133, -105, -105,    0, -107,
 -107,  -41,    0,  -97,  -96,  -89,    0,    0,    0,    0,
  -88,    0,    0,    0,    0,  -90,    0, -173,  -82,  -80,
 -236,  -70,  -74, -185,    0, -144, -147,  -84, -179,    0,
    0,  -68, -153,  -50,  -95,    0, -185, -241, -241, -241,
    0,  -57,    0,    0,  -42,    0,    0, -255,    0, -247,
    0,    0,    0,    0,    0,    0,  -97,    0,  -38, -234,
  -54,  -51,    0, -234,  -40,    0,    0,  -33,  -95,    0,
    0,    0,  -95,  -34,  -37, -251,    0,    0,    0, -174,
  -95,  -95,  -95,  -95,  -95,  -95, -241, -241, -241, -241,
 -241, -241,    0, -137, -209,    0,  -39,    0,  -29, -234,
    0, -234, -153,  -27,  -20,  -19,  -95,    0, -185,    0,
 -207,    0, -146,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -184,   -2,    0,  -95,
  -95,  -95, -202,    0,    0,    0,    0,    0,    0,    0,
  -28,  -10,    0,    0,  -15,    0,    0, -137,    0,    0,
    0,  -95, -153,    0,   -4,    0, -185,    0,    0,  -95,
    0, -137,  -39,  -39,    0,  -95,    0, -209, -142,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  -95,    0,  -39,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,  266,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  -22,  -21,    0,    7,
    8,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0, -168,    0,    0,    0,    0,
    9,    0, -152,    0,    0,    0,    0,    0,    0,    0,
    0,    0, -134,    0,    0,    0,    0,    0,    0,    0,
    0, -108,    0,    0,  -24,    0,    0,  -44,    0,  -73,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0, -225,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    1, -262,    0,    0,    0,    0,    0,
    0,    0, -134,    3,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -252,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  -14,    0,    0, -237,    0,    0,    5,    0,    0,
    0,    0, -134,    0,    0,    0,    0,    0,    0,    0,
    0,    6,    0,    0,    0,    0,    0, -204,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,
};
static const short yygindex[] = {                         0,
 -112,    0, -111,  -55,    0,  154,    0,    0,    0,    0,
    0,   88,    0, -115,    0,    0,    0,  -47,    0,    0,
    0,    0,  -53,    0,    0,    0, -109,    0,    0,   94,
  273,    0,    0,    0,  271,    0,  260,  206,    0,    0,
  -56,    0,    0,    0,  236,  138, -151,  -76,   -6,   -5,
    0,    0, -110,
};
#define YYTABLESIZE 285
static const short yytable[] = {                         95,
   96,  167,  153,  154,  166,   98,   26,  121,   12,  110,
   97,  118,   99,  171,  107,   33,  190,   13,   20,   21,
    4,   76,   53,   49,   12,   55,  129,    1,  118,   31,
  196,  111,  108,  124,  109,   50,   78,  126,   76,  130,
   14,   56,   86,  169,  134,  170,  112,   59,   33,   25,
  115,   61,   33,   78,   53,  186,  144,  145,  146,  141,
  142,  143,    3,  192,  100,   33,  150,  197,  198,  118,
  177,  175,  176,  202,  151,  153,  154,  166,   53,   54,
   79,   55,  152,  178,   20,   21,   59,  204,   44,   53,
   81,    8,   55,   23,  183,  184,  185,   56,  132,   57,
   45,    5,   58,   59,   60,   23,   88,   61,   56,   22,
   29,   30,   89,   58,   59,   60,  191,   79,   61,   10,
  194,   22,  118,  118,  195,   80,  179,   81,  118,   76,
  199,  180,  118,   77,  118,  118,  147,  118,  118,  118,
  148,  201,  115,  118,  118,  203,  118,  118,  107,   27,
  118,  118,  118,  118,  107,  118,  118,   28,   31,  118,
  107,  107,   13,  107,  107,  107,   36,   39,   53,  107,
  107,   55,  107,  107,   40,   42,  107,  107,  107,  107,
   79,  107,  107,   41,   47,  107,   48,   56,   84,   98,
   81,   52,   58,   59,   60,   98,   98,   61,   98,   98,
   98,   51,   19,   87,   98,   20,   21,   98,   98,  100,
  119,   98,   98,   98,   98,   93,   98,   98,   90,   34,
  101,  120,   20,   21,   90,  114,  102,   90,   90,   90,
  123,  127,  122,   90,  168,  128,   90,   90,  103,  104,
   90,   90,   90,  105,  106,  115,   90,   83,   83,   83,
  172,  173,  174,   83,  135,  136,  137,  138,  139,  140,
   83,  182,  187,  188,  189,    2,   83,  193,    9,   11,
   52,   53,   54,   44,  116,  200,   58,   42,   45,    9,
   17,   35,  113,   85,  181,
};
static const short yycheck[] = {                         55,
   57,  117,  115,  115,  115,   59,   13,   84,  259,  257,
   58,  274,   60,  123,  270,   21,  168,  268,  264,  265,
  274,  274,  264,  260,  259,  267,  278,  271,  291,  266,
  182,  279,  288,   89,  290,   41,  274,   93,  291,  291,
  291,  283,   49,  120,  100,  122,  294,  289,  274,  295,
  285,  293,  278,  291,  264,  258,  110,  111,  112,  107,
  108,  109,  264,  173,  267,  291,  276,  183,  184,  274,
  278,  127,  129,  189,  284,  188,  188,  188,  264,  265,
  265,  267,  292,  291,  264,  265,  291,  203,  262,  264,
  275,  264,  267,  262,  150,  151,  152,  283,  273,  285,
  274,  277,  288,  289,  290,  274,  260,  293,  283,  262,
   17,   18,  266,  288,  289,  290,  172,  265,  293,  285,
  177,  274,  257,  258,  180,  273,  273,  275,  263,  274,
  186,  278,  267,  278,  269,  270,  274,  272,  273,  274,
  278,  284,  285,  278,  279,  201,  281,  282,  257,  291,
  285,  286,  287,  288,  263,  290,  291,  291,  266,  294,
  269,  270,  268,  272,  273,  274,  264,  264,  264,  278,
  279,  267,  281,  282,  264,  266,  285,  286,  287,  288,
  265,  290,  291,  272,  267,  294,  267,  283,  273,  263,
  275,  266,  288,  289,  290,  269,  270,  293,  272,  273,
  274,  272,  261,  272,  278,  264,  265,  281,  282,  267,
  265,  285,  286,  287,  288,  266,  290,  291,  263,  261,
  263,  273,  264,  265,  269,  264,  269,  272,  273,  274,
  264,  266,  273,  278,  264,  273,  281,  282,  281,  282,
  285,  286,  287,  286,  287,  285,  291,  272,  273,  274,
  278,  272,  272,  278,  101,  102,  103,  104,  105,  106,
  285,  264,  291,  274,  280,    0,  291,  272,  291,  291,
  264,  264,  264,  273,  272,  188,  291,  273,  273,    7,
   10,   22,   77,   48,  147,
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
"FormalParameterList : FormalParameterListB",
"FormalParameterListB : VALnum INTnum IDnum FormalParameterListC",
"FormalParameterListB : VALnum INTnum IDnum",
"FormalParameterListB : INTnum IDnum FormalParameterListC",
"FormalParameterListB : INTnum IDnum",
"FormalParameterListC : COMMAnum IDnum",
"FormalParameterListC : COMMAnum IDnum FormalParameterListC",
"FormalParameterListC : SEMInum FormalParameterListB",
"Block : Decls StatementList",
"Block : StatementList",
"Type : IDnum TypeB",
"Type : INTnum TypeB",
"Type : IDnum",
"Type : INTnum",
"TypeB : LBRACnum RBRACnum",
"TypeB : LBRACnum RBRACnum TypeB",
"TypeB : LBRACnum RBRACnum DOTnum Type",
"StatementList : LBRACEnum Statementsop RBRACEnum",
"Statementsop : Statement",
"Statementsop : Statement SEMInum",
"Statementsop : Statement SEMInum Statementsop",
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
"SimpleExpression : Simple_op2",
"Simple_op : PLUSnum Term",
"Simple_op : MINUSnum Term",
"Simple_op : Term",
"Simple_op2 : Simple_op2 PLUSnum Term",
"Simple_op2 : Simple_op2 MINUSnum Term",
"Simple_op2 : Simple_op2 ORnum Term",
"Simple_op2 : Simple_op",
"Term : Term_op",
"Term_op : Term_op TIMESnum Factor",
"Term_op : Term_op DIVIDEnum Factor",
"Term_op : Term_op ANDnum Factor",
"Term_op : Factor",
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
#line 197 "grammer.y"
int yycolumn, yyline;
FILE *treelst;
main() { treelst = stdout; yyparse(); }
yyerror(char *str) { printf("yyerror: %s at line %d\n", str, yyline); }
#include "lex.yy.c"

#line 467 "y.tab.c"

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
#line 27 "grammer.y"
	{yyval.tptr = MakeTree(ProgramOp, yystack.l_mark[0].tptr, MakeLeaf(IDNode, yystack.l_mark[-2].intg)); printtree(yyval.tptr, 0);}
break;
case 2:
#line 29 "grammer.y"
	{yyval.tptr = MakeTree(ClassOp, MakeLeaf(DUMMYNode, 0), yystack.l_mark[0].tptr);}
break;
case 3:
#line 30 "grammer.y"
	{yyval.tptr = MakeTree(ClassOp, yystack.l_mark[0].tptr, yystack.l_mark[-1].tptr);}
break;
case 4:
#line 34 "grammer.y"
	{yyval.tptr = MakeTree(ClassDefOp, yystack.l_mark[0].tptr, MakeLeaf(IDNode, yystack.l_mark[-1].intg));}
break;
case 5:
#line 38 "grammer.y"
	{yyval.tptr = yystack.l_mark[-1].tptr;}
break;
case 6:
#line 39 "grammer.y"
	{yyval.tptr = MakeLeaf(DUMMYNode, 0);}
break;
case 7:
#line 40 "grammer.y"
	{yyval.tptr = yystack.l_mark[-1].tptr;}
break;
case 8:
#line 44 "grammer.y"
	{yyval.tptr = MkLeftC(yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);}
break;
case 9:
#line 45 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 10:
#line 48 "grammer.y"
	{yyval.tptr = MakeTree(BodyOp, yystack.l_mark[0].tptr, yystack.l_mark[-1].tptr);}
break;
case 11:
#line 49 "grammer.y"
	{yyval.tptr = MakeTree(BodyOp, MakeLeaf(DUMMYNode,0), yystack.l_mark[0].tptr);}
break;
case 12:
#line 53 "grammer.y"
	{yyval.tptr = MakeLeaf(DUMMYNode, 0);}
break;
case 13:
#line 54 "grammer.y"
	{yyval.tptr = yystack.l_mark[-1].tptr;}
break;
case 14:
#line 56 "grammer.y"
	{yyval.tptr = MakeTree(BodyOp, MakeLeaf(DUMMYNode, 0), yystack.l_mark[0].tptr);}
break;
case 15:
#line 57 "grammer.y"
	{yyval.tptr = MakeTree(BodyOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);}
break;
case 16:
#line 63 "grammer.y"
	{GlobalType = yystack.l_mark[-1].tptr;yyval.tptr = yystack.l_mark[0].tptr; }
break;
case 17:
#line 65 "grammer.y"
	{yyval.tptr = MakeTree(DeclOp, MakeLeaf(DUMMYNode, 0), MakeTree(CommaOp, yystack.l_mark[-1].tptr, MakeTree(CommaOp, GlobalType, MakeLeaf(DUMMYNode, 0))));}
break;
case 18:
#line 66 "grammer.y"
	{yyval.tptr = MakeTree(DeclOp, MakeLeaf(DUMMYNode, 0), MakeTree(CommaOp, yystack.l_mark[-2].tptr, MakeTree(CommaOp, GlobalType, yystack.l_mark[-1].tptr)));}
break;
case 19:
#line 67 "grammer.y"
	{yyval.tptr = MakeTree(DeclOp, yystack.l_mark[0].tptr, MakeTree(CommaOp, yystack.l_mark[-2].tptr, MakeTree(CommaOp, GlobalType, yystack.l_mark[-1].tptr)));}
break;
case 20:
#line 69 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 21:
#line 71 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 22:
#line 77 "grammer.y"
	{yyval.tptr = MakeLeaf(IDNode, yystack.l_mark[-1].intg);}
break;
case 23:
#line 78 "grammer.y"
	{yyval.tptr = MakeLeaf(IDNode, yystack.l_mark[0].intg);}
break;
case 24:
#line 80 "grammer.y"
	{}
break;
case 25:
#line 81 "grammer.y"
	{}
break;
case 26:
#line 86 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 27:
#line 87 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 28:
#line 88 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 29:
#line 93 "grammer.y"
	{yyval.tptr = MakeTree(ArrayTypeOp, MakeTree(CommaOp, MakeLeaf(DUMMYNode, 0), yystack.l_mark[-1].tptr), GlobalType);}
break;
case 30:
#line 94 "grammer.y"
	{yyval.tptr = MakeTree(ArrayTypeOp, yystack.l_mark[-1].tptr, GlobalType);}
break;
case 31:
#line 96 "grammer.y"
	{yyval.tptr = MakeTree(CommaOp, MakeLeaf(DUMMYNode, 0), yystack.l_mark[0].tptr);}
break;
case 32:
#line 97 "grammer.y"
	{yyval.tptr = MakeTree(CommaOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);}
break;
case 33:
#line 102 "grammer.y"
	{yyval.tptr = MakeTree(ArrayTypeOp, yystack.l_mark[0].tptr, MakeLeaf(INTEGERTNode, yystack.l_mark[-1].intg));}
break;
case 34:
#line 104 "grammer.y"
	{yyval.tptr = MakeTree(BoundOp, MakeLeaf(DUMMYNode, 0), yystack.l_mark[-1].tptr);}
break;
case 35:
#line 105 "grammer.y"
	{yyval.tptr = MakeTree(BoundOp, yystack.l_mark[-3].tptr, yystack.l_mark[-1].tptr);}
break;
case 36:
#line 110 "grammer.y"
	{ReturnType = yystack.l_mark[-4].tptr; yyval.tptr = MakeTree(MethodOp, MakeTree(HeadOp, MakeLeaf(IDNode, yystack.l_mark[-3].intg), MakeLeaf(DUMMYNode, 0)), yystack.l_mark[0].tptr);}
break;
case 37:
#line 111 "grammer.y"
	{yyval.tptr = MakeTree(MethodOp, MakeTree(HeadOp, MakeLeaf(IDNode, yystack.l_mark[-3].intg), MakeLeaf(DUMMYNode, 0)), yystack.l_mark[0].tptr);}
break;
case 38:
#line 112 "grammer.y"
	{ReturnType = yystack.l_mark[-5].tptr; yyval.tptr = MakeTree(MethodOp, MakeTree(HeadOp, MakeLeaf(IDNode, yystack.l_mark[-4].intg), yystack.l_mark[-2].tptr), yystack.l_mark[0].tptr);}
break;
case 39:
#line 113 "grammer.y"
	{yyval.tptr = MakeTree(MethodOp, MakeTree(HeadOp, MakeLeaf(IDNode, yystack.l_mark[-4].intg), yystack.l_mark[-2].tptr), yystack.l_mark[0].tptr);}
break;
case 40:
#line 119 "grammer.y"
	{yyval.tptr = MakeTree(SpecOp, yystack.l_mark[0].tptr, ReturnType);}
break;
case 41:
#line 121 "grammer.y"
	{yyval.tptr = MakeTree(RArgTypeOp, MakeTree(CommaOp, MakeLeaf(IDNode, yystack.l_mark[-1].intg), MakeLeaf(INTEGERTNode, yystack.l_mark[-2].intg)), yystack.l_mark[0].tptr);}
break;
case 42:
#line 122 "grammer.y"
	{yyval.tptr = MakeTree(RArgTypeOp, MakeTree(CommaOp, MakeLeaf(IDNode, yystack.l_mark[0].intg), MakeLeaf(INTEGERTNode, yystack.l_mark[-1].intg)), MakeLeaf(DUMMYNode, 0));}
break;
case 43:
#line 123 "grammer.y"
	{yyval.tptr = MakeTree(RArgTypeOp, MakeTree(CommaOp, MakeLeaf(IDNode, yystack.l_mark[-1].intg), MakeLeaf(INTEGERTNode, yystack.l_mark[-2].intg)), yystack.l_mark[0].tptr);}
break;
case 44:
#line 124 "grammer.y"
	{yyval.tptr = MakeTree(RArgTypeOp, MakeTree(CommaOp, MakeLeaf(IDNode, yystack.l_mark[0].intg), MakeLeaf(INTEGERTNode, yystack.l_mark[-1].intg)), MakeLeaf(DUMMYNode, 0));}
break;
case 45:
#line 126 "grammer.y"
	{yyval.tptr = MakeTree(RArgTypeOp, MakeTree(CommaOp, MakeLeaf(IDNode, yystack.l_mark[0].intg), MakeLeaf(INTEGERTNode, 0)), MakeLeaf(DUMMYNode, 0));}
break;
case 46:
#line 127 "grammer.y"
	{yyval.tptr = MakeTree(RArgTypeOp, MakeTree(CommaOp, MakeLeaf(IDNode, yystack.l_mark[-1].intg), MakeLeaf(INTEGERTNode, 0)), yystack.l_mark[0].tptr);}
break;
case 47:
#line 128 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 48:
#line 132 "grammer.y"
	{yyval.tptr = MakeTree(BodyOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);}
break;
case 49:
#line 133 "grammer.y"
	{yyval.tptr = MakeTree(BodyOp, MakeLeaf(DUMMYNode, 0), yystack.l_mark[0].tptr);}
break;
case 50:
#line 137 "grammer.y"
	{yyval.tptr = MakeTree(TypeIdOp, MakeLeaf(IDNode, yystack.l_mark[-1].intg), yystack.l_mark[0].tptr);}
break;
case 51:
#line 138 "grammer.y"
	{yyval.tptr = MakeTree(TypeIdOp, MakeLeaf(INTEGERTNode, yystack.l_mark[-1].intg), yystack.l_mark[0].tptr);}
break;
case 52:
#line 139 "grammer.y"
	{yyval.tptr = MakeTree(TypeIdOp, MakeLeaf(IDNode, yystack.l_mark[0].intg), MakeLeaf(DUMMYNode, 0));}
break;
case 53:
#line 140 "grammer.y"
	{yyval.tptr = MakeTree(TypeIdOp, MakeLeaf(INTEGERTNode, yystack.l_mark[0].intg), MakeLeaf(DUMMYNode, 0));}
break;
case 54:
#line 142 "grammer.y"
	{yyval.tptr = MakeTree(IndexOp, MakeLeaf(DUMMYNode, 0), MakeLeaf(DUMMYNode, 0));}
break;
case 55:
#line 143 "grammer.y"
	{yyval.tptr = MakeTree(IndexOp, MakeLeaf(DUMMYNode, 0), yystack.l_mark[0].tptr);}
break;
case 56:
#line 144 "grammer.y"
	{yyval.tptr = MakeTree(IndexOp, MakeLeaf(DUMMYNode, 0), MakeTree(FieldOp, yystack.l_mark[0].tptr, MakeLeaf(DUMMYNode, 0)));}
break;
case 57:
#line 149 "grammer.y"
	{yyval.tptr = yystack.l_mark[-1].tptr;}
break;
case 58:
#line 150 "grammer.y"
	{yyval.tptr = MakeTree(StmtOp,MakeLeaf(DUMMYNode,0),yystack.l_mark[0].tptr);}
break;
case 59:
#line 150 "grammer.y"
	{yyval.tptr = MakeTree(StmtOp,MakeLeaf(DUMMYNode,0),yystack.l_mark[-1].tptr);}
break;
case 60:
#line 150 "grammer.y"
	{yyval.tptr = MakeTree(StmtOp,yystack.l_mark[0].tptr,yystack.l_mark[-2].tptr);}
break;
case 61:
#line 152 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 62:
#line 152 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 63:
#line 153 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 64:
#line 153 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 65:
#line 154 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 66:
#line 154 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 67:
#line 155 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 68:
#line 155 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 69:
#line 156 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 70:
#line 156 "grammer.y"
	{MakeLeaf(DUMMYNode,0);}
break;
case 71:
#line 158 "grammer.y"
	{yyval.tptr = MakeTree(AssignOp,MakeTree(AssignOp,MakeLeaf(DUMMYNode,0),yystack.l_mark[-2].tptr),yystack.l_mark[0].tptr);}
break;
case 72:
#line 160 "grammer.y"
	{yyval.tptr = MakeTree(RoutineCallOp,yystack.l_mark[-2].tptr,MakeLeaf(DUMMYNode,0)); }
break;
case 73:
#line 160 "grammer.y"
	{yyval.tptr = MakeTree(RoutineCallOp,yystack.l_mark[-3].tptr,yystack.l_mark[-1].tptr); }
break;
case 74:
#line 161 "grammer.y"
	{yyval.tptr = MakeTree(CommaOp, yystack.l_mark[0].tptr,MakeLeaf(DUMMYNode,0) );}
break;
case 75:
#line 161 "grammer.y"
	{yyval.tptr = MakeTree(CommaOp,yystack.l_mark[0].tptr,yystack.l_mark[-2].tptr);}
break;
case 76:
#line 163 "grammer.y"
	{yyval.tptr = MakeTree(ReturnOp,MakeLeaf(DUMMYNode,0), MakeLeaf(DUMMYNode,0) );}
break;
case 77:
#line 163 "grammer.y"
	{yyval.tptr=MakeTree(ReturnOp, yystack.l_mark[0].tptr,MakeLeaf(DUMMYNode,0) ); }
break;
case 78:
#line 165 "grammer.y"
	{yyval.tptr= yystack.l_mark[0].tptr;}
break;
case 79:
#line 165 "grammer.y"
	{yyval.tptr = MakeTree(IfElseOp, yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 80:
#line 166 "grammer.y"
	{yyval.tptr= MakeTree(IfElseOp,MakeLeaf(DUMMYNode,0) ,MakeTree(CommaOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr));}
break;
case 81:
#line 166 "grammer.y"
	{yyval.tptr=MakeTree(IfElseOp, yystack.l_mark[-4].tptr, MakeTree(CommaOp,yystack.l_mark[-1].tptr,yystack.l_mark[0].tptr));}
break;
case 82:
#line 168 "grammer.y"
	{yyval.tptr= MakeTree(LoopOp,yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr );}
break;
case 83:
#line 170 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 84:
#line 172 "grammer.y"
	{ yyval.tptr=MakeTree(LTOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr); }
break;
case 85:
#line 173 "grammer.y"
	{ yyval.tptr=MakeTree(GTOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr); }
break;
case 86:
#line 174 "grammer.y"
	{ yyval.tptr=MakeTree(EQOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr); }
break;
case 87:
#line 175 "grammer.y"
	{ yyval.tptr=MakeTree(NEOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr); }
break;
case 88:
#line 176 "grammer.y"
	{ yyval.tptr=MakeTree(LEOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr); }
break;
case 89:
#line 177 "grammer.y"
	{ yyval.tptr=MakeTree(GEOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr); }
break;
case 91:
#line 180 "grammer.y"
	{yyval.tptr=MakeTree(AddOp,yystack.l_mark[0].tptr,MakeLeaf(DUMMYNode,0));}
break;
case 92:
#line 180 "grammer.y"
	{yyval.tptr=MakeTree(UnaryNegOp,yystack.l_mark[0].tptr,MakeLeaf(DUMMYNode,0));}
break;
case 93:
#line 180 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 94:
#line 181 "grammer.y"
	{yyval.tptr= MakeTree(AddOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 95:
#line 181 "grammer.y"
	{yyval.tptr= MakeTree(UnaryNegOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 96:
#line 181 "grammer.y"
	{yyval.tptr= MakeTree(OrOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 97:
#line 181 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 98:
#line 183 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 99:
#line 184 "grammer.y"
	{yyval.tptr= MakeTree(MultOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 100:
#line 184 "grammer.y"
	{yyval.tptr= yyval.tptr= MakeTree(DivOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 101:
#line 184 "grammer.y"
	{yyval.tptr= MakeTree(AndOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 102:
#line 184 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 103:
#line 186 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 104:
#line 186 "grammer.y"
	{yyval.tptr=yystack.l_mark[-1].tptr;}
break;
case 105:
#line 186 "grammer.y"
	{yyval.tptr = MakeTree(NotOp, MakeLeaf(DUMMYNode,0),yystack.l_mark[0].tptr); }
break;
case 106:
#line 187 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 107:
#line 187 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 108:
#line 187 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 109:
#line 189 "grammer.y"
	{yyval.tptr= MakeLeaf(NUMNode, yystack.l_mark[0].intg);}
break;
case 110:
#line 189 "grammer.y"
	{yyval.tptr = MakeLeaf(STRINGNode, yystack.l_mark[0].intg);}
break;
case 111:
#line 191 "grammer.y"
	{yyval.tptr = MakeTree(VarOp, MakeLeaf(IDNode, yystack.l_mark[-1].intg), yystack.l_mark[0].tptr);}
break;
case 112:
#line 192 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 113:
#line 192 "grammer.y"
	{yyval.tptr = MakeLeaf(DUMMYNode,0);}
break;
case 114:
#line 193 "grammer.y"
	{yyval.tptr=MakeTree(SelectOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);}
break;
case 115:
#line 193 "grammer.y"
	{yyval.tptr= MakeTree(SelectOp,MakeTree(FieldOp,MakeLeaf(IDNode, yystack.l_mark[-1].intg),MakeLeaf(DUMMYNode,0)), yystack.l_mark[0].tptr);}
break;
case 116:
#line 194 "grammer.y"
	{yyval.tptr = MakeTree(IndexOp, yystack.l_mark[0].tptr,MakeLeaf(DUMMYNode,0) );}
break;
case 117:
#line 194 "grammer.y"
	{yyval.tptr = MakeTree(IndexOp,yystack.l_mark[-2].tptr ,MakeTree(IndexOp, yystack.l_mark[0].tptr,MakeLeaf(DUMMYNode,0)));}
break;
case 118:
#line 195 "grammer.y"
	{}
break;
#line 1137 "y.tab.c"
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
