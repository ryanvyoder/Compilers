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

#line 24 "y.tab.c"

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
    0,   32,   32,   33,   34,   34,   34,   35,   30,   30,
   30,   36,   36,   37,   37,   38,   39,   39,   39,   31,
   31,   31,   28,   29,   40,   40,   41,   41,   42,   42,
   42,   51,   51,   52,   52,   43,   44,   44,   45,   45,
   45,   45,   46,   46,   46,   46,   47,   47,   47,   48,
   48,   49,   49,   49,   49,   50,   50,   50,   14,   14,
   12,   12,   12,   13,   13,   15,   15,   16,   16,   10,
   10,    9,    5,    3,    3,    2,    2,   11,   11,    8,
    8,   17,   17,    7,    4,    4,    4,    4,    4,    4,
    4,    6,   19,   19,   19,   20,   20,   20,   20,   18,
   22,   22,   22,   22,   23,   23,   23,   24,   24,   24,
   21,   21,    1,   27,   27,   25,   25,   26,   26,   53,
};
static const short yylen[] = {                            2,
    4,    1,    2,    3,    3,    2,    3,    1,    2,    1,
    1,    2,    3,    1,    2,    1,    3,    4,    4,    2,
    3,    3,    2,    2,    2,    1,    2,    3,    1,    1,
    1,    3,    3,    1,    3,    2,    3,    4,    6,    6,
    7,    7,    4,    3,    3,    2,    2,    3,    2,    2,
    1,    2,    2,    1,    1,    2,    3,    4,    3,    2,
    1,    2,    3,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    3,    3,    4,    1,    3,    1,    2,    1,
    3,    3,    5,    3,    1,    3,    3,    3,    3,    3,
    3,    1,    2,    2,    1,    3,    3,    3,    1,    1,
    3,    3,    3,    1,    1,    3,    2,    1,    1,    1,
    1,    1,    2,    1,    1,    4,    3,    1,    3,    0,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    0,    0,    0,    2,    0,    3,    0,
    4,    0,    0,    6,    0,    0,    8,   10,   12,    0,
    0,    0,   14,   16,    0,    0,    0,    7,    9,    5,
    0,   52,   53,   13,   15,    0,    0,    0,    0,    0,
    0,    0,    0,   17,    0,    0,    0,    0,   57,   27,
    0,    0,    0,    0,  111,    0,    0,    0,    0,  112,
    0,  110,   29,    0,   95,   99,    0,  108,    0,  104,
  105,   23,   31,   30,   18,    0,   19,    0,    0,    0,
    0,    0,    0,   58,   28,    0,    0,  114,  113,  115,
    0,    0,    0,    0,    0,   94,  107,   93,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   24,    0,    0,    0,   51,    0,   40,    0,    0,
   39,    0,    0,    0,    0,    0,    0,  106,   32,    0,
   33,   74,    0,    0,   87,   89,   88,   91,   90,   86,
   98,   97,   96,  103,  102,  101,   20,    0,    0,    0,
   45,    0,    0,   60,    0,    0,   66,   64,   72,   70,
   71,   69,   68,    0,    0,   65,   67,    0,   50,    0,
   42,   41,  117,    0,    0,   37,    0,   35,   75,    0,
   21,   22,   49,    0,    0,    0,   79,    0,   59,    0,
    0,   43,  119,  116,   38,   77,   48,   84,   82,   73,
   63,    0,   81,    0,   83,
};
static const short yydgoto[] = {                          2,
   61,  133,   62,   63,  158,   64,  159,  160,  161,  162,
  163,  164,  165,  116,  166,  167,  168,   65,   66,   67,
   68,   69,   70,   71,   88,  125,   89,   45,   77,   15,
  112,    6,    7,   11,   16,  117,   22,   23,   24,   37,
   42,   72,   73,   92,   18,   81,  151,  118,   25,   32,
   74,   95,   90,
};
static const short yysindex[] = {                      -262,
 -222,    0, -223, -217, -182, -217,    0, -201,    0, -238,
    0,  -35, -246,    0, -255, -187,    0,    0,    0, -119,
 -119,  -33,    0,    0,  -87,  -85,  -66,    0,    0,    0,
  -61,    0,    0,    0,    0, -106, -104,  -99,  -43, -124,
  -51,  -60, -198,    0,  -92, -122,  -63,  -23,    0,    0,
  -29,  -41,  -19, -126,    0, -198, -181, -181, -181,    0,
  -18,    0,    0,  -64,    0,    0, -216,    0, -229,    0,
    0,    0,    0,    0,    0,  -87,    0,  -16, -230,  -15,
  -22, -230,  -21,    0,    0,  -11, -126,    0,    0,    0,
 -126,  -12,  -17,  -36, -203,    0,    0,    0, -134, -126,
 -126, -126, -126, -126, -126, -181, -181, -181, -181, -181,
 -181,    0, -101,  -77, -147,    0,  -28,    0,   -6, -230,
    0, -230,  -41,  -14,  -13,  -10, -126,    0,    0, -198,
    0,    0,   -8,   -9,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  -34, -125,   -4,
    0, -126, -126,    0, -126, -243,    0,    0,    0,    0,
    0,    0,    0,  -30,   -7,    0,    0,   -5,    0,  -77,
    0,    0,    0, -126,  -41,    0,   -2,    0,    0, -126,
    0,    0,    0,  -77,  -28,  -28,    0, -126,    0, -171,
  -39,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -126,    0,  -28,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,  263,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    3,    0,    0,    0,    2,
    8,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  -96,    0,    0,    0,    9,
    0,  -93,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -247,    0,    0,    0,    0,    0,    0,    0,    0,
 -163,    0,    0,  -58,    0,    0,  -78,    0,  -98,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -210,    0,   -1,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    1,    0,    0,    0,    0,    0,    0,
    0,    0, -247,    6,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    7,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -177,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   -3,    0,    0, -139,    0,   10,
    0,    0,    0,    0, -247,    0,    0,    0,    0,    0,
    0,    0,    0,   11,    0,    0,    0,    0,    0,    5,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,
};
static const short yygindex[] = {                         0,
 -112,   88, -111,  -54,    0,  134,    0,    0,    0,    0,
    0,   86,    0, -115,    0,    0,    0,  -45,    0,    0,
    0,    0,  -53,    0,    0,    0, -116,  166,  133,    0,
    0,    0,  276,    0,    0,  275,    0,  264,    0,  211,
    0,  -50,    0,    0,  274,  -46,  -38,  -74,    4,   56,
    0,    0,    0,
};
#define YYTABLESIZE 296
static const short yytable[] = {                         93,
   83,  169,  156,  157,   97,   94,  173,  121,    1,  120,
  120,   96,   13,   98,  188,  120,   27,   20,   21,  120,
   12,  120,  120,   99,  120,  120,  120,  109,   12,   13,
  120,  120,  124,  120,  120,   28,  126,  120,  120,  120,
  120,    3,  120,  120,  134,  171,  120,  172,   26,  110,
    4,   84,   14,  106,  115,  144,  145,  146,  194,    5,
  141,  142,  143,   36,  111,   52,   53,   36,   54,  198,
  199,  107,  177,  108,  130,  203,   33,  156,  157,  178,
   36,    8,   52,   10,   55,   54,   56,  131,  205,   57,
   58,   59,   52,  109,   60,   49,   78,  185,  186,  109,
  187,   55,  183,   30,  152,  109,  109,   58,  109,  109,
  109,   60,  153,   78,  109,  109,   52,  109,  109,  193,
  155,  109,  109,  109,  109,  134,  109,  109,  152,   52,
  109,  192,   54,  200,   80,   48,  153,   52,  132,   78,
   54,   31,   78,  154,  155,  197,   31,  204,   55,   80,
   79,   80,   80,   57,   58,   59,   55,   43,   60,   41,
   43,   57,   58,   59,  100,   26,   60,   46,   25,   44,
  100,  100,  147,  100,  100,  100,   36,   26,   38,  100,
   25,   75,  100,  100,   92,   76,  100,  100,  100,  100,
   92,  100,  100,   92,   92,   92,  149,   39,  100,   92,
  150,   78,   92,   92,  101,   51,   92,   92,   92,   82,
   40,   80,   92,   85,   85,   85,  102,  103,   86,   85,
   50,  104,  105,   47,   87,   19,   85,   34,   20,   21,
   20,   21,   85,  135,  136,  137,  138,  139,  140,  181,
   20,   21,   85,   76,  202,  115,   91,  114,   99,  119,
  120,  122,  123,  127,  129,  128,  115,  170,  175,  184,
  189,  176,    1,  174,  179,   54,  190,  196,  180,  195,
   11,   55,   56,   46,  191,  201,   34,  118,  148,   76,
  182,    9,   44,   47,   17,   35,  113,   61,   29,    0,
    0,    0,    0,    0,    0,   62,
};
static const short yycheck[] = {                         54,
   47,  117,  115,  115,   58,   56,  123,   82,  271,  257,
  258,   57,  268,   59,  258,  263,   13,  264,  265,  267,
  259,  269,  270,  267,  272,  273,  274,  257,  259,  268,
  278,  279,   87,  281,  282,  291,   91,  285,  286,  287,
  288,  264,  290,  291,   99,  120,  294,  122,  295,  279,
  274,   48,  291,  270,  285,  109,  110,  111,  175,  277,
  106,  107,  108,  274,  294,  264,  265,  278,  267,  185,
  186,  288,  127,  290,  278,  191,   21,  190,  190,  130,
  291,  264,  264,  285,  283,  267,  285,  291,  204,  288,
  289,  290,  264,  257,  293,   40,  274,  152,  153,  263,
  155,  283,  149,  291,  276,  269,  270,  289,  272,  273,
  274,  293,  284,  291,  278,  279,  264,  281,  282,  174,
  292,  285,  286,  287,  288,  180,  290,  291,  276,  264,
  294,  170,  267,  188,  274,  260,  284,  264,  273,  265,
  267,  266,  265,  291,  292,  184,  266,  202,  283,  275,
  273,  291,  275,  288,  289,  290,  283,  262,  293,  266,
  262,  288,  289,  290,  263,  262,  293,  267,  262,  274,
  269,  270,  274,  272,  273,  274,  264,  274,  264,  278,
  274,  274,  281,  282,  263,  278,  285,  286,  287,  288,
  269,  290,  291,  272,  273,  274,  274,  264,  263,  278,
  278,  265,  281,  282,  269,  266,  285,  286,  287,  273,
  272,  275,  291,  272,  273,  274,  281,  282,  260,  278,
  272,  286,  287,  267,  266,  261,  285,  261,  264,  265,
  264,  265,  291,  100,  101,  102,  103,  104,  105,  274,
  264,  265,  272,  278,  284,  285,  266,  264,  267,  265,
  273,  273,  264,  266,  291,  273,  285,  264,  272,  264,
  291,  272,    0,  278,  273,  264,  274,  180,  278,  272,
  268,  264,  264,  273,  280,  190,  278,  272,  113,  273,
  148,    6,  273,  273,   10,   22,   76,  291,   15,   -1,
   -1,   -1,   -1,   -1,   -1,  291,
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
"ProgramB : ProgramB ClassDecl",
"ClassDecl : CLASSnum IDnum ClassBody",
"ClassBody : LBRACEnum ClassBodyB RBRACEnum",
"ClassBody : LBRACEnum RBRACEnum",
"ClassBody : LBRACEnum ClassBodyC RBRACEnum",
"ClassBodyB : Decls",
"ClassBodyC : ClassBodyC MethodDecl",
"ClassBodyC : MethodDecl",
"ClassBodyC : ClassBodyB",
"Decls : DECLARATIONSnum ENDDECLARATIONSnum",
"Decls : DECLARATIONSnum DeclsB ENDDECLARATIONSnum",
"DeclsB : FieldDecl",
"DeclsB : DeclsB FieldDecl",
"FieldDecl : FieldDeclB",
"FieldDeclB : Type VariableDeclId SEMInum",
"FieldDeclB : Type VariableDeclId FieldDeclD SEMInum",
"FieldDeclB : Type VariableDeclId FieldDeclD FieldDeclE",
"FieldDeclC : VariableDeclId SEMInum",
"FieldDeclC : VariableDeclId FieldDeclD SEMInum",
"FieldDeclC : VariableDeclId FieldDeclD FieldDeclE",
"FieldDeclD : EQUALnum VariableInitializer",
"FieldDeclE : COMMAnum FieldDeclC",
"VariableDeclId : IDnum VariableDeclIdB",
"VariableDeclId : IDnum",
"VariableDeclIdB : LBRACnum RBRACnum",
"VariableDeclIdB : VariableDeclIdB LBRACnum RBRACnum",
"VariableInitializer : Expression",
"VariableInitializer : ArrayInitializer",
"VariableInitializer : ArrayCreationExpression",
"ArrayInitializer : LBRACEnum VariableInitializer RBRACEnum",
"ArrayInitializer : LBRACEnum ArrayInitializerB RBRACEnum",
"ArrayInitializerB : VariableInitializer",
"ArrayInitializerB : ArrayInitializerB COMMAnum VariableInitializer",
"ArrayCreationExpression : INTnum ArrayCreationExpressionB",
"ArrayCreationExpressionB : LBRACnum Expression RBRACnum",
"ArrayCreationExpressionB : ArrayCreationExpressionB LBRACnum Expression RBRACnum",
"MethodDecl : METHODnum Type IDnum LPARENnum RPARENnum Block",
"MethodDecl : METHODnum VOIDnum IDnum LPARENnum RPARENnum Block",
"MethodDecl : METHODnum Type IDnum LPARENnum FormalParameterList RPARENnum Block",
"MethodDecl : METHODnum VOIDnum IDnum LPARENnum FormalParameterList RPARENnum Block",
"FormalParameterList : VALnum INTnum IDnum FormalParameterListC",
"FormalParameterList : VALnum INTnum IDnum",
"FormalParameterList : INTnum IDnum FormalParameterListC",
"FormalParameterList : INTnum IDnum",
"FormalParameterListC : COMMAnum IDnum",
"FormalParameterListC : COMMAnum IDnum FormalParameterListC",
"FormalParameterListC : SEMInum FormalParameterList",
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
"StatementList : LBRACEnum RBRACEnum",
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
"AssignmentStatement : Variable ASSGNnum Expression",
"MethodCallStatement : Variable LPARENnum RPARENnum",
"MethodCallStatement : Variable LPARENnum Expre RPARENnum",
"Expre : Expression",
"Expre : Expression COMMAnum Expre",
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
tree GlobalType = NULL; 
tree ReturnType = NULL;
int yycolumn, yyline;
FILE *treelst;
main() { treelst = stdout; yyparse(); }
yyerror(char *str) { printf("yyerror: %s at line %d\n", str, yyline); }
#include "lex.yy.c"

#line 472 "y.tab.c"

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
#line 26 "grammer.y"
	{yyval.tptr = MakeTree(ProgramOp, yystack.l_mark[0].tptr, MakeLeaf(IDNode, yystack.l_mark[-2].intg)); printtree(yyval.tptr, 0);}
break;
case 2:
#line 28 "grammer.y"
	{yyval.tptr = MakeTree(ClassOp, MakeLeaf(DUMMYNode, 0), yystack.l_mark[0].tptr);}
break;
case 3:
#line 29 "grammer.y"
	{yyval.tptr = MakeTree(ClassOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);}
break;
case 4:
#line 33 "grammer.y"
	{yyval.tptr = MakeTree(ClassDefOp, yystack.l_mark[0].tptr, MakeLeaf(IDNode, yystack.l_mark[-1].intg));}
break;
case 5:
#line 37 "grammer.y"
	{yyval.tptr = yystack.l_mark[-1].tptr;}
break;
case 6:
#line 38 "grammer.y"
	{yyval.tptr = MakeLeaf(DUMMYNode, 0);}
break;
case 7:
#line 39 "grammer.y"
	{yyval.tptr = yystack.l_mark[-1].tptr;}
break;
case 8:
#line 43 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 9:
#line 46 "grammer.y"
	{ yyval.tptr = MakeTree(BodyOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);}
break;
case 10:
#line 47 "grammer.y"
	{yyval.tptr = MakeTree(BodyOp, MakeLeaf(DUMMYNode,0), yystack.l_mark[0].tptr);}
break;
case 11:
#line 47 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 12:
#line 51 "grammer.y"
	{yyval.tptr = MakeTree(BodyOp, MakeLeaf(DUMMYNode, 0), MakeLeaf(DUMMYNode, 0));}
break;
case 13:
#line 52 "grammer.y"
	{yyval.tptr = yystack.l_mark[-1].tptr;}
break;
case 14:
#line 54 "grammer.y"
	{yyval.tptr = MakeTree(BodyOp, MakeLeaf(DUMMYNode, 0), yystack.l_mark[0].tptr);}
break;
case 15:
#line 55 "grammer.y"
	{yyval.tptr = MakeTree(BodyOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);}
break;
case 16:
#line 61 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 17:
#line 63 "grammer.y"
	{GlobalType = yystack.l_mark[-2].tptr; yyval.tptr = MakeTree(DeclOp, MakeLeaf(DUMMYNode, 0), MakeTree(CommaOp, yystack.l_mark[-1].tptr, MakeTree(CommaOp, GlobalType, MakeLeaf(DUMMYNode, 0))));}
break;
case 18:
#line 64 "grammer.y"
	{ GlobalType = yystack.l_mark[-3].tptr; yyval.tptr = MakeTree(DeclOp, MakeLeaf(DUMMYNode, 0), MakeTree(CommaOp, yystack.l_mark[-2].tptr, MakeTree(CommaOp, GlobalType, yystack.l_mark[-1].tptr)));}
break;
case 19:
#line 65 "grammer.y"
	{GlobalType = yystack.l_mark[-3].tptr; yyval.tptr = MakeTree(DeclOp, yystack.l_mark[0].tptr, MakeTree(CommaOp, yystack.l_mark[-2].tptr, MakeTree(CommaOp, GlobalType, yystack.l_mark[-1].tptr)));}
break;
case 20:
#line 67 "grammer.y"
	{yyval.tptr = MakeTree(DeclOp, MakeLeaf(DUMMYNode, 0), MakeTree(CommaOp, yystack.l_mark[-1].tptr, MakeTree(CommaOp, GlobalType, MakeLeaf(DUMMYNode, 0))));}
break;
case 21:
#line 68 "grammer.y"
	{yyval.tptr = MakeTree(DeclOp, MakeLeaf(DUMMYNode, 0), MakeTree(CommaOp, yystack.l_mark[-2].tptr, MakeTree(CommaOp, GlobalType, yystack.l_mark[-1].tptr)));}
break;
case 22:
#line 69 "grammer.y"
	{yyval.tptr = MakeTree(DeclOp, yystack.l_mark[0].tptr, MakeTree(CommaOp, yystack.l_mark[-2].tptr, MakeTree(CommaOp, GlobalType, yystack.l_mark[-1].tptr)));}
break;
case 23:
#line 71 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 24:
#line 73 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 25:
#line 79 "grammer.y"
	{yyval.tptr = MakeLeaf(IDNode, yystack.l_mark[-1].intg);}
break;
case 26:
#line 80 "grammer.y"
	{yyval.tptr = MakeLeaf(IDNode, yystack.l_mark[0].intg);}
break;
case 27:
#line 82 "grammer.y"
	{}
break;
case 28:
#line 83 "grammer.y"
	{}
break;
case 29:
#line 88 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 30:
#line 89 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 31:
#line 90 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 32:
#line 95 "grammer.y"
	{yyval.tptr = MakeTree(ArrayTypeOp, MakeTree(CommaOp, MakeLeaf(DUMMYNode, 0), yystack.l_mark[-1].tptr), GlobalType);}
break;
case 33:
#line 96 "grammer.y"
	{yyval.tptr = MakeTree(ArrayTypeOp, yystack.l_mark[-1].tptr, GlobalType);}
break;
case 34:
#line 98 "grammer.y"
	{yyval.tptr = MakeTree(CommaOp, MakeLeaf(DUMMYNode, 0), yystack.l_mark[0].tptr);}
break;
case 35:
#line 99 "grammer.y"
	{yyval.tptr = MakeTree(CommaOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);}
break;
case 36:
#line 104 "grammer.y"
	{yyval.tptr = MakeTree(ArrayTypeOp, yystack.l_mark[0].tptr, MakeLeaf(INTEGERTNode, 0));}
break;
case 37:
#line 106 "grammer.y"
	{yyval.tptr = MakeTree(BoundOp, MakeLeaf(DUMMYNode, 0), yystack.l_mark[-1].tptr);}
break;
case 38:
#line 107 "grammer.y"
	{yyval.tptr = MakeTree(BoundOp, yystack.l_mark[-3].tptr, yystack.l_mark[-1].tptr);}
break;
case 39:
#line 112 "grammer.y"
	{ReturnType = yystack.l_mark[-4].tptr; yyval.tptr = MakeTree(MethodOp, MakeTree(HeadOp, MakeLeaf(IDNode, yystack.l_mark[-3].intg), MakeTree(SpecOp,MakeLeaf(DUMMYNode, 0) , ReturnType)), yystack.l_mark[0].tptr);}
break;
case 40:
#line 113 "grammer.y"
	{yyval.tptr = MakeTree(MethodOp, MakeTree(HeadOp, MakeLeaf(IDNode, yystack.l_mark[-3].intg), MakeTree(SpecOp,MakeLeaf(DUMMYNode, 0) , MakeLeaf(DUMMYNode, 0))), yystack.l_mark[0].tptr);}
break;
case 41:
#line 114 "grammer.y"
	{ReturnType = yystack.l_mark[-5].tptr; yyval.tptr = MakeTree(MethodOp, MakeTree(HeadOp, MakeLeaf(IDNode, yystack.l_mark[-4].intg), MakeTree(SpecOp, yystack.l_mark[-2].tptr, ReturnType)), yystack.l_mark[0].tptr);}
break;
case 42:
#line 115 "grammer.y"
	{yyval.tptr = MakeTree(MethodOp, MakeTree(HeadOp, MakeLeaf(IDNode, yystack.l_mark[-4].intg), yystack.l_mark[-2].tptr), yystack.l_mark[0].tptr);}
break;
case 43:
#line 121 "grammer.y"
	{yyval.tptr = MakeTree(VArgTypeOp, MakeTree(CommaOp, MakeLeaf(IDNode, yystack.l_mark[-1].intg), MakeLeaf(INTEGERTNode, 0)), yystack.l_mark[0].tptr);}
break;
case 44:
#line 122 "grammer.y"
	{yyval.tptr = MakeTree(VArgTypeOp, MakeTree(CommaOp, MakeLeaf(IDNode, yystack.l_mark[0].intg), MakeLeaf(INTEGERTNode, 0)), MakeLeaf(DUMMYNode, 0));}
break;
case 45:
#line 123 "grammer.y"
	{yyval.tptr = MakeTree(RArgTypeOp, MakeTree(CommaOp, MakeLeaf(IDNode, yystack.l_mark[-1].intg), MakeLeaf(INTEGERTNode, 0)), yystack.l_mark[0].tptr);}
break;
case 46:
#line 124 "grammer.y"
	{yyval.tptr = MakeTree(RArgTypeOp, MakeTree(CommaOp, MakeLeaf(IDNode, yystack.l_mark[0].intg), MakeLeaf(INTEGERTNode, 0)), MakeLeaf(DUMMYNode, 0));}
break;
case 47:
#line 126 "grammer.y"
	{yyval.tptr = MakeTree(RArgTypeOp, MakeTree(CommaOp, MakeLeaf(IDNode, yystack.l_mark[0].intg), MakeLeaf(INTEGERTNode, 0)), MakeLeaf(DUMMYNode, 0));}
break;
case 48:
#line 127 "grammer.y"
	{yyval.tptr = MakeTree(RArgTypeOp, MakeTree(CommaOp, MakeLeaf(IDNode, yystack.l_mark[-1].intg), MakeLeaf(INTEGERTNode, 0)), yystack.l_mark[0].tptr);}
break;
case 49:
#line 128 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 50:
#line 132 "grammer.y"
	{yyval.tptr = MakeTree(BodyOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);}
break;
case 51:
#line 133 "grammer.y"
	{yyval.tptr = MakeTree(BodyOp, MakeLeaf(DUMMYNode, 0), yystack.l_mark[0].tptr);}
break;
case 52:
#line 137 "grammer.y"
	{yyval.tptr = MakeTree(TypeIdOp, MakeLeaf(IDNode, yystack.l_mark[-1].intg), yystack.l_mark[0].tptr);}
break;
case 53:
#line 138 "grammer.y"
	{yyval.tptr = MakeTree(TypeIdOp, MakeLeaf(INTEGERTNode, 0), yystack.l_mark[0].tptr);}
break;
case 54:
#line 139 "grammer.y"
	{yyval.tptr = MakeTree(TypeIdOp, MakeLeaf(IDNode, yystack.l_mark[0].intg), MakeLeaf(DUMMYNode, 0));}
break;
case 55:
#line 140 "grammer.y"
	{yyval.tptr = MakeTree(TypeIdOp, MakeLeaf(INTEGERTNode, 0), MakeLeaf(DUMMYNode, 0));}
break;
case 56:
#line 142 "grammer.y"
	{yyval.tptr = MakeTree(IndexOp, MakeLeaf(DUMMYNode, 0), MakeLeaf(DUMMYNode, 0));}
break;
case 57:
#line 143 "grammer.y"
	{yyval.tptr = MakeTree(IndexOp, MakeLeaf(DUMMYNode, 0), yystack.l_mark[0].tptr);}
break;
case 58:
#line 144 "grammer.y"
	{yyval.tptr = MakeTree(IndexOp, MakeLeaf(DUMMYNode, 0), MakeTree(FieldOp, yystack.l_mark[0].tptr, MakeLeaf(DUMMYNode, 0)));}
break;
case 59:
#line 149 "grammer.y"
	{yyval.tptr = yystack.l_mark[-1].tptr;}
break;
case 60:
#line 149 "grammer.y"
	{yyval.tptr = MakeTree(StmtOp,MakeLeaf(DUMMYNode,0),MakeLeaf(DUMMYNode,0));}
break;
case 61:
#line 150 "grammer.y"
	{yyval.tptr =yystack.l_mark[0].tptr;}
break;
case 62:
#line 150 "grammer.y"
	{yyval.tptr =yystack.l_mark[-1].tptr;}
break;
case 63:
#line 150 "grammer.y"
	{yyval.tptr = MakeTree(StmtOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 64:
#line 152 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 65:
#line 152 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 66:
#line 153 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 67:
#line 153 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 68:
#line 154 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 69:
#line 154 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 70:
#line 155 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 71:
#line 155 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 72:
#line 156 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 73:
#line 158 "grammer.y"
	{yyval.tptr = MakeTree(AssignOp,MakeTree(AssignOp,MakeLeaf(DUMMYNode,0),yystack.l_mark[-2].tptr),yystack.l_mark[0].tptr);}
break;
case 74:
#line 160 "grammer.y"
	{yyval.tptr = MakeTree(RoutineCallOp,yystack.l_mark[-2].tptr,MakeLeaf(DUMMYNode,0)); }
break;
case 75:
#line 160 "grammer.y"
	{yyval.tptr = MakeTree(RoutineCallOp,yystack.l_mark[-3].tptr,yystack.l_mark[-1].tptr); }
break;
case 76:
#line 161 "grammer.y"
	{yyval.tptr = MakeTree(CommaOp, yystack.l_mark[0].tptr,MakeLeaf(DUMMYNode,0) );}
break;
case 77:
#line 161 "grammer.y"
	{yyval.tptr = MakeTree(CommaOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 78:
#line 163 "grammer.y"
	{yyval.tptr = MakeTree(ReturnOp,MakeLeaf(DUMMYNode,0), MakeLeaf(DUMMYNode,0) );}
break;
case 79:
#line 163 "grammer.y"
	{yyval.tptr=MakeTree(ReturnOp, yystack.l_mark[0].tptr,MakeLeaf(DUMMYNode,0) ); }
break;
case 80:
#line 165 "grammer.y"
	{yyval.tptr= yystack.l_mark[0].tptr;}
break;
case 81:
#line 165 "grammer.y"
	{yyval.tptr = MakeTree(IfElseOp, yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 82:
#line 166 "grammer.y"
	{yyval.tptr= MakeTree(IfElseOp,MakeLeaf(DUMMYNode,0) ,MakeTree(CommaOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr));}
break;
case 83:
#line 166 "grammer.y"
	{yyval.tptr=MakeTree(IfElseOp, yystack.l_mark[-4].tptr, MakeTree(CommaOp,yystack.l_mark[-1].tptr,yystack.l_mark[0].tptr));}
break;
case 84:
#line 168 "grammer.y"
	{yyval.tptr= MakeTree(LoopOp,yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr );}
break;
case 85:
#line 170 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 86:
#line 172 "grammer.y"
	{ yyval.tptr=MakeTree(LTOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr); }
break;
case 87:
#line 173 "grammer.y"
	{ yyval.tptr=MakeTree(GTOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr); }
break;
case 88:
#line 174 "grammer.y"
	{ yyval.tptr=MakeTree(EQOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr); }
break;
case 89:
#line 175 "grammer.y"
	{ yyval.tptr=MakeTree(NEOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr); }
break;
case 90:
#line 176 "grammer.y"
	{ yyval.tptr=MakeTree(LEOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr); }
break;
case 91:
#line 177 "grammer.y"
	{ yyval.tptr=MakeTree(GEOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr); }
break;
case 93:
#line 180 "grammer.y"
	{yyval.tptr=MakeTree(AddOp,yystack.l_mark[0].tptr,MakeLeaf(DUMMYNode,0));}
break;
case 94:
#line 180 "grammer.y"
	{yyval.tptr=MakeTree(UnaryNegOp,yystack.l_mark[0].tptr,MakeLeaf(DUMMYNode,0));}
break;
case 95:
#line 180 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 96:
#line 181 "grammer.y"
	{yyval.tptr= MakeTree(AddOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 97:
#line 181 "grammer.y"
	{yyval.tptr= MakeTree(UnaryNegOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 98:
#line 181 "grammer.y"
	{yyval.tptr= MakeTree(OrOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 99:
#line 181 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 100:
#line 183 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 101:
#line 184 "grammer.y"
	{yyval.tptr= MakeTree(MultOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 102:
#line 184 "grammer.y"
	{yyval.tptr= yyval.tptr= MakeTree(DivOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 103:
#line 184 "grammer.y"
	{yyval.tptr= MakeTree(AndOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 104:
#line 184 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 105:
#line 186 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 106:
#line 186 "grammer.y"
	{yyval.tptr=yystack.l_mark[-1].tptr;}
break;
case 107:
#line 186 "grammer.y"
	{yyval.tptr = MakeTree(NotOp, MakeLeaf(DUMMYNode,0),yystack.l_mark[0].tptr); }
break;
case 108:
#line 187 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 109:
#line 187 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 110:
#line 187 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 111:
#line 189 "grammer.y"
	{yyval.tptr= MakeLeaf(NUMNode, yystack.l_mark[0].intg);}
break;
case 112:
#line 189 "grammer.y"
	{yyval.tptr = MakeLeaf(STRINGNode, yystack.l_mark[0].intg);}
break;
case 113:
#line 191 "grammer.y"
	{yyval.tptr = MakeTree(VarOp, MakeLeaf(IDNode, yystack.l_mark[-1].intg), yystack.l_mark[0].tptr);}
break;
case 114:
#line 192 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 115:
#line 192 "grammer.y"
	{yyval.tptr = MakeLeaf(DUMMYNode,0);}
break;
case 116:
#line 193 "grammer.y"
	{yyval.tptr=MakeTree(SelectOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);}
break;
case 117:
#line 193 "grammer.y"
	{yyval.tptr= MakeTree(SelectOp,MakeTree(FieldOp,MakeLeaf(IDNode, yystack.l_mark[-1].intg),MakeLeaf(DUMMYNode,0)), yystack.l_mark[0].tptr);}
break;
case 118:
#line 194 "grammer.y"
	{yyval.tptr = MakeTree(IndexOp, yystack.l_mark[0].tptr,MakeLeaf(DUMMYNode,0) );}
break;
case 119:
#line 194 "grammer.y"
	{yyval.tptr = MakeTree(IndexOp,yystack.l_mark[-2].tptr ,MakeTree(IndexOp, yystack.l_mark[0].tptr,MakeLeaf(DUMMYNode,0)));}
break;
case 120:
#line 195 "grammer.y"
	{}
break;
#line 1150 "y.tab.c"
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
