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
    0,   31,   31,   32,   33,   33,   33,   34,   28,   28,
   28,   35,   35,   36,   36,   37,   37,   37,   37,   29,
   29,   29,   29,   52,   30,   38,   38,   39,   39,   40,
   40,   40,   49,   49,   50,   50,   41,   42,   42,   43,
   43,   43,   43,   44,   44,   44,   44,   45,   45,   45,
   46,   46,   47,   47,   47,   47,   48,   48,   48,   14,
   14,   12,   12,   12,   13,   13,   15,   15,   16,   16,
   10,   10,    9,    5,    3,    3,    2,    2,   11,   11,
    8,    8,   17,   17,    7,    4,    4,    4,    4,    4,
    4,    4,    6,   19,   19,   19,   20,   20,   20,   20,
   18,   22,   22,   22,   22,   23,   23,   23,   24,   24,
   24,   21,   21,    1,   27,   27,   25,   25,   26,   26,
   51,
};
static const short yylen[] = {                            2,
    4,    1,    2,    3,    3,    2,    3,    1,    2,    1,
    1,    2,    3,    1,    2,    3,    4,    5,    6,    1,
    2,    3,    4,    2,    1,    2,    1,    2,    3,    1,
    1,    1,    3,    3,    1,    3,    2,    3,    4,    6,
    6,    7,    7,    4,    3,    3,    2,    2,    3,    2,
    2,    1,    2,    2,    1,    1,    2,    3,    4,    3,
    2,    1,    2,    3,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    3,    3,    4,    1,    3,    1,    2,
    1,    3,    3,    5,    3,    1,    3,    3,    3,    3,
    3,    3,    1,    2,    2,    1,    3,    3,    3,    1,
    1,    3,    3,    3,    1,    1,    3,    2,    1,    1,
    1,    1,    1,    2,    1,    1,    4,    3,    1,    3,
    0,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    0,    0,    0,    2,    0,    3,    0,
    4,    0,    0,    6,    0,    0,    8,   10,   12,    0,
    0,    0,    0,   14,   25,    0,    0,    7,    9,    5,
    0,   53,   54,    0,    0,    0,   13,   15,    0,    0,
    0,    0,    0,    0,    0,   16,    0,    0,    0,    0,
   58,   28,    0,    0,    0,    0,    0,  112,    0,    0,
    0,    0,  113,    0,  111,   30,    0,   96,  100,    0,
  109,    0,  105,  106,   24,   32,   31,   17,    0,    0,
    0,    0,    0,    0,   59,   29,   18,    0,    0,    0,
  115,  114,  116,    0,    0,    0,    0,    0,   95,  108,
   94,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   52,    0,   41,    0,
    0,   40,    0,   19,    0,    0,    0,    0,    0,  107,
   33,    0,   34,   75,    0,    0,   88,   90,   89,   92,
   91,   87,   99,   98,   97,  104,  103,  102,    0,    0,
   46,    0,    0,   61,    0,    0,   67,   65,   73,   71,
   72,   70,   69,    0,   62,   66,   68,    0,   51,    0,
   43,   42,  118,    0,    0,   38,    0,   36,   76,    0,
   50,    0,    0,    0,   80,    0,    0,   60,    0,   44,
  120,  117,   39,   78,   49,   85,   83,   74,   64,    0,
   82,    0,   84,
};
static const short yydgoto[] = {                          2,
   64,  135,   65,   66,  158,   67,  159,  160,  161,  162,
  163,  164,  165,  117,  166,  167,  168,   68,   69,   70,
   71,   72,   73,   74,   91,  127,   92,   15,   35,   22,
    6,    7,   11,   16,  118,   23,   24,   36,   43,   75,
   76,   95,   18,   82,  151,  119,   25,   32,   77,   98,
   93,   47,
};
static const short yysindex[] = {                      -201,
 -236,    0, -190, -177, -171, -177,    0, -150,    0, -238,
    0,  -15, -208,    0, -249, -154,    0,    0,    0, -127,
 -127,  -96,  -13,    0,    0,  -81,  -77,    0,    0,    0,
  -67,    0,    0,  -59,  -62, -122,    0,    0,  -42,  -39,
  -49,  -36,  -35,  -96, -134,    0,  -44,  -41,  -38, -119,
    0,    0,  -34, -104,  -37,  -19, -114,    0, -134, -184,
 -184, -184,    0,  -14,    0,    0, -121,    0,    0, -156,
    0, -243,    0,    0,    0,    0,    0,    0,  -46, -235,
  -11,  -18, -235,  -17,    0,    0,    0,  -16,   -7, -114,
    0,    0,    0, -114,   -6,  -10,  -32, -199,    0,    0,
    0, -126, -114, -114, -114, -114, -114, -114, -184, -184,
 -184, -184, -184, -184, -189, -210,    0,  -24,    0,   -2,
 -235,    0, -235,    0,  -37,   -9,   -8,   -5, -114,    0,
    0, -134,    0,    0,   -3,   -4,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -139,    1,
    0, -114, -114,    0, -114,  -55,    0,    0,    0,    0,
    0,    0,    0, -222,    0,    0,    0,    2,    0, -189,
    0,    0,    0, -114,  -37,    0,    4,    0,    0, -114,
    0, -189,  -24,  -24,    0, -114, -174,    0, -267,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -114,
    0,  -24,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,  266,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    5,    0,    0,    0,    7,
    8,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  -90,    0,    6,    0,    0,    0,    0,
   11,    0,  -70,    0,    0,    0,    9,    0,    0,    0,
    0,    0,    0,   10, -247,    0,    0,    0,    0,    0,
    0,    0,    0, -166,    0,    0,  -52,    0,    0,  -72,
    0,  -92,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   12,    0,    0,
    0,    0,    0,    0, -213,    0,   13,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   16,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -247,   14,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   19,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -203,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -180,    0,   20,
    0,    0,    0,    0, -247,    0,    0,    0,    0,    0,
    0,   21,    0,    0,    0,    0, -147,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,
};
static const short yygindex[] = {                         0,
 -112,   88, -110,  -57,    0,  137,    0,    0,    0,    0,
    0,    0,   90, -116,    0,    0,    0,  -47,    0,    0,
    0,    0,  -54,    0,    0,    0, -120,    0,    0,    0,
    0,  272,    0,    0,  269,    0,  257,  237,    0,  -56,
    0,    0,  268,  -48,    3,  -75,   -1,  -12,    0,    0,
    0,  231,
};
#define YYTABLESIZE 294
static const short yytable[] = {                         96,
   84,  169,   97,  156,  173,  157,  100,  122,   33,  121,
  121,   27,   99,  112,  101,  121,  200,  116,   13,  121,
   12,  121,  121,   12,  121,  121,  121,    3,   51,   13,
  121,  121,  126,  121,  121,  113,  128,  121,  121,  121,
  121,   28,  121,  121,  136,  171,  121,  172,   85,  116,
  114,  187,   14,   55,  192,   20,   21,  146,  147,  148,
   37,  143,  144,  145,   37,  152,  196,  197,  188,    1,
   79,  177,  201,  153,  156,  178,  157,   37,  132,   55,
  154,  155,   57,    4,  149,  203,   26,   79,  150,   55,
  110,  133,    8,   81,  183,  184,  110,  185,   58,    5,
  181,  152,  110,  110,   61,  110,  110,  110,   63,  153,
   81,  110,  110,  109,  110,  110,  191,  155,  110,  110,
  110,  110,  136,  110,  110,   79,   63,  110,  198,   55,
   56,  110,   57,  111,   10,   81,   30,   55,   31,   45,
   57,  103,  202,   63,   20,   21,  134,  104,   58,   55,
   59,   46,   57,   60,   61,   62,   58,   45,   63,  105,
  106,   60,   61,   62,  107,  108,   63,   34,   58,   87,
  101,   27,  190,   60,   61,   62,  101,  101,   63,  101,
  101,  101,   39,   27,  195,  101,   40,   27,  101,  101,
   93,   26,  101,  101,  101,  101,   93,  101,  101,   93,
   93,   93,  186,   26,   41,   93,   42,   26,   93,   93,
   50,  102,   93,   93,   93,   44,   31,  115,   93,   86,
   86,   86,   89,   79,   48,   86,   79,   49,   90,   78,
   53,   80,   86,   81,   83,   52,   81,   86,   86,  137,
  138,  139,  140,  141,  142,   19,   94,   37,   20,   21,
   20,   21,  102,  120,  121,  123,  125,  124,  131,  129,
  116,  170,  130,  175,  182,    1,  176,  194,  174,  179,
   55,   56,   11,  180,   57,  193,  199,    9,   17,   38,
   54,  189,   29,   20,   88,  119,   21,   22,   47,   23,
   35,   77,   45,   48,
};
static const short yycheck[] = {                         57,
   49,  118,   59,  116,  125,  116,   61,   83,   21,  257,
  258,   13,   60,  257,   62,  263,  284,  285,  268,  267,
  259,  269,  270,  259,  272,  273,  274,  264,   41,  268,
  278,  279,   90,  281,  282,  279,   94,  285,  286,  287,
  288,  291,  290,  291,  102,  121,  294,  123,   50,  285,
  294,  274,  291,  264,  175,  264,  265,  112,  113,  114,
  274,  109,  110,  111,  278,  276,  183,  184,  291,  271,
  274,  129,  189,  284,  187,  132,  187,  291,  278,  264,
  291,  292,  267,  274,  274,  202,  295,  291,  278,  264,
  257,  291,  264,  274,  152,  153,  263,  155,  283,  277,
  149,  276,  269,  270,  289,  272,  273,  274,  293,  284,
  291,  278,  279,  270,  281,  282,  174,  292,  285,  286,
  287,  288,  180,  290,  291,  265,  274,  294,  186,  264,
  265,  288,  267,  290,  285,  275,  291,  264,  266,  262,
  267,  263,  200,  291,  264,  265,  273,  269,  283,  264,
  285,  274,  267,  288,  289,  290,  283,  262,  293,  281,
  282,  288,  289,  290,  286,  287,  293,  264,  283,  274,
  263,  262,  170,  288,  289,  290,  269,  270,  293,  272,
  273,  274,  264,  274,  182,  278,  264,  278,  281,  282,
  263,  262,  285,  286,  287,  288,  269,  290,  291,  272,
  273,  274,  258,  274,  272,  278,  266,  278,  281,  282,
  260,  267,  285,  286,  287,  278,  266,  264,  291,  272,
  273,  274,  260,  265,  267,  278,  265,  267,  266,  274,
  266,  273,  285,  275,  273,  272,  275,  272,  291,  103,
  104,  105,  106,  107,  108,  261,  266,  261,  264,  265,
  264,  265,  267,  265,  273,  273,  264,  274,  291,  266,
  285,  264,  273,  272,  264,    0,  272,  180,  278,  273,
  264,  264,  268,  278,  264,  272,  187,    6,   10,   23,
   44,  280,   15,  278,   54,  272,  278,  278,  273,  278,
  278,  273,  273,  273,
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
"FieldDecl : FieldDeclE VariableDeclId SEMInum",
"FieldDecl : FieldDeclE VariableDeclId FieldDeclD SEMInum",
"FieldDecl : FieldDeclE FieldDeclC COMMAnum VariableDeclId SEMInum",
"FieldDecl : FieldDeclE FieldDeclC COMMAnum VariableDeclId FieldDeclD SEMInum",
"FieldDeclC : VariableDeclId",
"FieldDeclC : VariableDeclId FieldDeclD",
"FieldDeclC : FieldDeclC COMMAnum VariableDeclId",
"FieldDeclC : FieldDeclC COMMAnum VariableDeclId FieldDeclD",
"FieldDeclD : EQUALnum VariableInitializer",
"FieldDeclE : Type",
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
"Statementsop : Statementsop SEMInum",
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
#line 234 "grammer.y"

tree GlobalType = NULL; 
tree ReturnType = NULL;
int yycolumn, yyline;
FILE *treelst;
main() { treelst = stdout; yyparse(); }
yyerror(char *str) { printf("yyerror: %s at line %d\n", str, yyline); }
#include "lex.yy.c"

#line 476 "y.tab.c"

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
#line 24 "grammer.y"
	{yyval.tptr = MakeTree(ProgramOp, yystack.l_mark[0].tptr, MakeLeaf(IDNode, yystack.l_mark[-2].intg)); printtree(yyval.tptr, 0);}
break;
case 2:
#line 26 "grammer.y"
	{yyval.tptr = MakeTree(ClassOp, MakeLeaf(DUMMYNode, 0), yystack.l_mark[0].tptr);}
break;
case 3:
#line 27 "grammer.y"
	{yyval.tptr = MakeTree(ClassOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);}
break;
case 4:
#line 31 "grammer.y"
	{yyval.tptr = MakeTree(ClassDefOp, yystack.l_mark[0].tptr, MakeLeaf(IDNode, yystack.l_mark[-1].intg));}
break;
case 5:
#line 35 "grammer.y"
	{yyval.tptr = yystack.l_mark[-1].tptr;}
break;
case 6:
#line 36 "grammer.y"
	{yyval.tptr = MakeLeaf(DUMMYNode, 0);}
break;
case 7:
#line 37 "grammer.y"
	{yyval.tptr = yystack.l_mark[-1].tptr;}
break;
case 8:
#line 41 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 9:
#line 44 "grammer.y"
	{ yyval.tptr = MakeTree(BodyOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);}
break;
case 10:
#line 45 "grammer.y"
	{yyval.tptr = MakeTree(BodyOp, MakeLeaf(DUMMYNode,0), yystack.l_mark[0].tptr);}
break;
case 11:
#line 46 "grammer.y"
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
#line 79 "grammer.y"
	{yyval.tptr = MakeTree(DeclOp, MakeLeaf(DUMMYNode, 0), MakeTree(CommaOp, yystack.l_mark[-1].tptr, MakeTree(CommaOp, yystack.l_mark[-2].tptr, MakeLeaf(DUMMYNode, 0))));}
break;
case 17:
#line 80 "grammer.y"
	{yyval.tptr = MakeTree(DeclOp, MakeLeaf(DUMMYNode, 0), MakeTree(CommaOp, yystack.l_mark[-2].tptr, MakeTree(CommaOp, yystack.l_mark[-3].tptr, yystack.l_mark[-1].tptr)));}
break;
case 18:
#line 81 "grammer.y"
	{yyval.tptr = MakeTree(DeclOp, yystack.l_mark[-3].tptr, MakeTree(CommaOp, yystack.l_mark[-1].tptr, MakeTree(CommaOp, GlobalType, MakeLeaf(DUMMYNode, 0))));}
break;
case 19:
#line 82 "grammer.y"
	{yyval.tptr = MakeTree(DeclOp, yystack.l_mark[-4].tptr, MakeTree(CommaOp, yystack.l_mark[-2].tptr, MakeTree(CommaOp, GlobalType, yystack.l_mark[-1].tptr)));}
break;
case 20:
#line 84 "grammer.y"
	{yyval.tptr = MakeTree(DeclOp, MakeLeaf(DUMMYNode, 0), MakeTree(CommaOp, yystack.l_mark[0].tptr, MakeTree(CommaOp, GlobalType, MakeLeaf(DUMMYNode, 0))));}
break;
case 21:
#line 85 "grammer.y"
	{yyval.tptr = MakeTree(DeclOp, MakeLeaf(DUMMYNode, 0), MakeTree(CommaOp, yystack.l_mark[-1].tptr, MakeTree(CommaOp, GlobalType, yystack.l_mark[0].tptr)));}
break;
case 22:
#line 86 "grammer.y"
	{yyval.tptr = MakeTree(DeclOp, yystack.l_mark[-2].tptr, MakeTree(CommaOp, yystack.l_mark[0].tptr, MakeTree(CommaOp, GlobalType, MakeLeaf(DUMMYNode, 0))));}
break;
case 23:
#line 87 "grammer.y"
	{yyval.tptr = MakeTree(DeclOp, yystack.l_mark[-3].tptr, MakeTree(CommaOp, yystack.l_mark[-1].tptr, MakeTree(CommaOp, GlobalType, yystack.l_mark[0].tptr)));}
break;
case 24:
#line 90 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 25:
#line 92 "grammer.y"
	{GlobalType = yystack.l_mark[0].tptr; yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 26:
#line 117 "grammer.y"
	{yyval.tptr = MakeLeaf(IDNode, yystack.l_mark[-1].intg);}
break;
case 27:
#line 118 "grammer.y"
	{yyval.tptr = MakeLeaf(IDNode, yystack.l_mark[0].intg);}
break;
case 28:
#line 120 "grammer.y"
	{}
break;
case 29:
#line 121 "grammer.y"
	{}
break;
case 30:
#line 126 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 31:
#line 127 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 32:
#line 128 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 33:
#line 133 "grammer.y"
	{yyval.tptr = MakeTree(ArrayTypeOp, MakeTree(CommaOp, MakeLeaf(DUMMYNode, 0), yystack.l_mark[-1].tptr), GlobalType);}
break;
case 34:
#line 134 "grammer.y"
	{yyval.tptr = MakeTree(ArrayTypeOp, yystack.l_mark[-1].tptr, GlobalType);}
break;
case 35:
#line 136 "grammer.y"
	{yyval.tptr = MakeTree(CommaOp, MakeLeaf(DUMMYNode, 0), yystack.l_mark[0].tptr);}
break;
case 36:
#line 137 "grammer.y"
	{yyval.tptr = MakeTree(CommaOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);}
break;
case 37:
#line 142 "grammer.y"
	{yyval.tptr = MakeTree(ArrayTypeOp, yystack.l_mark[0].tptr, MakeLeaf(INTEGERTNode, 0));}
break;
case 38:
#line 144 "grammer.y"
	{yyval.tptr = MakeTree(BoundOp, MakeLeaf(DUMMYNode, 0), yystack.l_mark[-1].tptr);}
break;
case 39:
#line 145 "grammer.y"
	{yyval.tptr = MakeTree(BoundOp, yystack.l_mark[-3].tptr, yystack.l_mark[-1].tptr);}
break;
case 40:
#line 150 "grammer.y"
	{ReturnType = yystack.l_mark[-4].tptr; yyval.tptr = MakeTree(MethodOp, MakeTree(HeadOp, MakeLeaf(IDNode, yystack.l_mark[-3].intg), MakeTree(SpecOp,MakeLeaf(DUMMYNode, 0) , ReturnType)), yystack.l_mark[0].tptr);}
break;
case 41:
#line 151 "grammer.y"
	{yyval.tptr = MakeTree(MethodOp, MakeTree(HeadOp, MakeLeaf(IDNode, yystack.l_mark[-3].intg), MakeTree(SpecOp,MakeLeaf(DUMMYNode, 0) , MakeLeaf(DUMMYNode, 0))), yystack.l_mark[0].tptr);}
break;
case 42:
#line 152 "grammer.y"
	{ReturnType = yystack.l_mark[-5].tptr; yyval.tptr = MakeTree(MethodOp, MakeTree(HeadOp, MakeLeaf(IDNode, yystack.l_mark[-4].intg), MakeTree(SpecOp, yystack.l_mark[-2].tptr, ReturnType)), yystack.l_mark[0].tptr);}
break;
case 43:
#line 153 "grammer.y"
	{yyval.tptr = MakeTree(MethodOp, MakeTree(HeadOp, MakeLeaf(IDNode, yystack.l_mark[-4].intg), MakeTree(SpecOp, yystack.l_mark[-2].tptr, MakeLeaf(DUMMYNode, 0))), yystack.l_mark[0].tptr);}
break;
case 44:
#line 159 "grammer.y"
	{yyval.tptr = MakeTree(VArgTypeOp, MakeTree(CommaOp, MakeLeaf(IDNode, yystack.l_mark[-1].intg), MakeLeaf(INTEGERTNode, 0)), yystack.l_mark[0].tptr);}
break;
case 45:
#line 160 "grammer.y"
	{yyval.tptr = MakeTree(VArgTypeOp, MakeTree(CommaOp, MakeLeaf(IDNode, yystack.l_mark[0].intg), MakeLeaf(INTEGERTNode, 0)), MakeLeaf(DUMMYNode, 0));}
break;
case 46:
#line 161 "grammer.y"
	{yyval.tptr = MakeTree(RArgTypeOp, MakeTree(CommaOp, MakeLeaf(IDNode, yystack.l_mark[-1].intg), MakeLeaf(INTEGERTNode, 0)), yystack.l_mark[0].tptr);}
break;
case 47:
#line 162 "grammer.y"
	{yyval.tptr = MakeTree(RArgTypeOp, MakeTree(CommaOp, MakeLeaf(IDNode, yystack.l_mark[0].intg), MakeLeaf(INTEGERTNode, 0)), MakeLeaf(DUMMYNode, 0));}
break;
case 48:
#line 164 "grammer.y"
	{yyval.tptr = MakeTree(RArgTypeOp, MakeTree(CommaOp, MakeLeaf(IDNode, yystack.l_mark[0].intg), MakeLeaf(INTEGERTNode, 0)), MakeLeaf(DUMMYNode, 0));}
break;
case 49:
#line 165 "grammer.y"
	{yyval.tptr = MakeTree(RArgTypeOp, MakeTree(CommaOp, MakeLeaf(IDNode, yystack.l_mark[-1].intg), MakeLeaf(INTEGERTNode, 0)), yystack.l_mark[0].tptr);}
break;
case 50:
#line 166 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 51:
#line 170 "grammer.y"
	{yyval.tptr = MakeTree(BodyOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);}
break;
case 52:
#line 171 "grammer.y"
	{yyval.tptr = MakeTree(BodyOp, MakeLeaf(DUMMYNode, 0), yystack.l_mark[0].tptr);}
break;
case 53:
#line 175 "grammer.y"
	{yyval.tptr = MakeTree(TypeIdOp, MakeLeaf(IDNode, yystack.l_mark[-1].intg), yystack.l_mark[0].tptr);}
break;
case 54:
#line 176 "grammer.y"
	{yyval.tptr = MakeTree(TypeIdOp, MakeLeaf(INTEGERTNode, 0), yystack.l_mark[0].tptr);}
break;
case 55:
#line 177 "grammer.y"
	{yyval.tptr = MakeTree(TypeIdOp, MakeLeaf(IDNode, yystack.l_mark[0].intg), MakeLeaf(DUMMYNode, 0));}
break;
case 56:
#line 178 "grammer.y"
	{yyval.tptr = MakeTree(TypeIdOp, MakeLeaf(INTEGERTNode, 0), MakeLeaf(DUMMYNode, 0));}
break;
case 57:
#line 180 "grammer.y"
	{yyval.tptr = MakeTree(IndexOp, MakeLeaf(DUMMYNode, 0), MakeLeaf(DUMMYNode, 0));}
break;
case 58:
#line 181 "grammer.y"
	{yyval.tptr = MakeTree(IndexOp, MakeLeaf(DUMMYNode, 0), yystack.l_mark[0].tptr);}
break;
case 59:
#line 182 "grammer.y"
	{yyval.tptr = MakeTree(IndexOp, MakeLeaf(DUMMYNode, 0), MakeTree(FieldOp, yystack.l_mark[0].tptr, MakeLeaf(DUMMYNode, 0)));}
break;
case 60:
#line 187 "grammer.y"
	{yyval.tptr = yystack.l_mark[-1].tptr;}
break;
case 61:
#line 187 "grammer.y"
	{yyval.tptr = MakeTree(StmtOp,MakeLeaf(DUMMYNode,0),MakeLeaf(DUMMYNode,0));}
break;
case 62:
#line 188 "grammer.y"
	{yyval.tptr = MakeTree(StmtOp, MakeLeaf(DUMMYNode, 0),yystack.l_mark[0].tptr);}
break;
case 63:
#line 188 "grammer.y"
	{yyval.tptr = yystack.l_mark[-1].tptr;}
break;
case 64:
#line 188 "grammer.y"
	{yyval.tptr = MakeTree(StmtOp,yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);}
break;
case 65:
#line 190 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 66:
#line 190 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 67:
#line 191 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 68:
#line 191 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 69:
#line 192 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 70:
#line 192 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 71:
#line 193 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 72:
#line 193 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 73:
#line 194 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 74:
#line 196 "grammer.y"
	{yyval.tptr = MakeTree(AssignOp,MakeTree(AssignOp,MakeLeaf(DUMMYNode,0),yystack.l_mark[-2].tptr),yystack.l_mark[0].tptr);}
break;
case 75:
#line 198 "grammer.y"
	{yyval.tptr = MakeTree(RoutineCallOp,yystack.l_mark[-2].tptr,MakeLeaf(DUMMYNode,0)); }
break;
case 76:
#line 198 "grammer.y"
	{yyval.tptr = MakeTree(RoutineCallOp,yystack.l_mark[-3].tptr,yystack.l_mark[-1].tptr); }
break;
case 77:
#line 199 "grammer.y"
	{yyval.tptr = MakeTree(CommaOp, yystack.l_mark[0].tptr,MakeLeaf(DUMMYNode,0) );}
break;
case 78:
#line 199 "grammer.y"
	{yyval.tptr = MakeTree(CommaOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 79:
#line 201 "grammer.y"
	{yyval.tptr = MakeTree(ReturnOp,MakeLeaf(DUMMYNode,0), MakeLeaf(DUMMYNode,0) );}
break;
case 80:
#line 201 "grammer.y"
	{yyval.tptr=MakeTree(ReturnOp, yystack.l_mark[0].tptr,MakeLeaf(DUMMYNode,0) ); }
break;
case 81:
#line 203 "grammer.y"
	{yyval.tptr= yystack.l_mark[0].tptr;}
break;
case 82:
#line 203 "grammer.y"
	{yyval.tptr = MakeTree(IfElseOp, yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 83:
#line 204 "grammer.y"
	{yyval.tptr= MakeTree(IfElseOp,MakeLeaf(DUMMYNode,0) ,MakeTree(CommaOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr));}
break;
case 84:
#line 204 "grammer.y"
	{yyval.tptr=MakeTree(IfElseOp, yystack.l_mark[-4].tptr, MakeTree(CommaOp,yystack.l_mark[-1].tptr,yystack.l_mark[0].tptr));}
break;
case 85:
#line 206 "grammer.y"
	{yyval.tptr= MakeTree(LoopOp,yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr );}
break;
case 86:
#line 208 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 87:
#line 210 "grammer.y"
	{ yyval.tptr=MakeTree(LTOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr); }
break;
case 88:
#line 211 "grammer.y"
	{ yyval.tptr=MakeTree(GTOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr); }
break;
case 89:
#line 212 "grammer.y"
	{ yyval.tptr=MakeTree(EQOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr); }
break;
case 90:
#line 213 "grammer.y"
	{ yyval.tptr=MakeTree(NEOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr); }
break;
case 91:
#line 214 "grammer.y"
	{ yyval.tptr=MakeTree(LEOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr); }
break;
case 92:
#line 215 "grammer.y"
	{ yyval.tptr=MakeTree(GEOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr); }
break;
case 94:
#line 218 "grammer.y"
	{yyval.tptr=MakeTree(AddOp,yystack.l_mark[0].tptr,MakeLeaf(DUMMYNode,0));}
break;
case 95:
#line 218 "grammer.y"
	{yyval.tptr=MakeTree(UnaryNegOp,yystack.l_mark[0].tptr,MakeLeaf(DUMMYNode,0));}
break;
case 96:
#line 218 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 97:
#line 219 "grammer.y"
	{yyval.tptr= MakeTree(AddOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 98:
#line 219 "grammer.y"
	{yyval.tptr= MakeTree(UnaryNegOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 99:
#line 219 "grammer.y"
	{yyval.tptr= MakeTree(OrOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 100:
#line 219 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 101:
#line 221 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 102:
#line 222 "grammer.y"
	{yyval.tptr= MakeTree(MultOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 103:
#line 222 "grammer.y"
	{yyval.tptr= yyval.tptr= MakeTree(DivOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 104:
#line 222 "grammer.y"
	{yyval.tptr= MakeTree(AndOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 105:
#line 222 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 106:
#line 224 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 107:
#line 224 "grammer.y"
	{yyval.tptr=yystack.l_mark[-1].tptr;}
break;
case 108:
#line 224 "grammer.y"
	{yyval.tptr = MakeTree(NotOp, MakeLeaf(DUMMYNode,0),yystack.l_mark[0].tptr); }
break;
case 109:
#line 225 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 110:
#line 225 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 111:
#line 225 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 112:
#line 227 "grammer.y"
	{yyval.tptr= MakeLeaf(NUMNode, yystack.l_mark[0].intg);}
break;
case 113:
#line 227 "grammer.y"
	{yyval.tptr = MakeLeaf(STRINGNode, yystack.l_mark[0].intg);}
break;
case 114:
#line 229 "grammer.y"
	{yyval.tptr = MakeTree(VarOp, MakeLeaf(IDNode, yystack.l_mark[-1].intg), yystack.l_mark[0].tptr);}
break;
case 115:
#line 230 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 116:
#line 230 "grammer.y"
	{yyval.tptr = MakeLeaf(DUMMYNode,0);}
break;
case 117:
#line 231 "grammer.y"
	{yyval.tptr=MakeTree(SelectOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);}
break;
case 118:
#line 231 "grammer.y"
	{yyval.tptr= MakeTree(SelectOp,MakeTree(FieldOp,MakeLeaf(IDNode, yystack.l_mark[-1].intg),MakeLeaf(DUMMYNode,0)), yystack.l_mark[0].tptr);}
break;
case 119:
#line 232 "grammer.y"
	{yyval.tptr = MakeTree(IndexOp, yystack.l_mark[0].tptr,MakeLeaf(DUMMYNode,0) );}
break;
case 120:
#line 232 "grammer.y"
	{yyval.tptr = MakeTree(IndexOp,yystack.l_mark[-2].tptr ,MakeTree(IndexOp, yystack.l_mark[0].tptr,MakeLeaf(DUMMYNode,0)));}
break;
case 121:
#line 233 "grammer.y"
	{}
break;
#line 1158 "y.tab.c"
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
