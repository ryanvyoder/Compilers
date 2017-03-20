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
    0,   31,   31,   32,   33,   33,   33,   34,   34,   30,
   30,   35,   35,   36,   36,   37,   38,   38,   38,   28,
   29,   39,   39,   40,   40,   41,   41,   41,   53,   53,
   54,   54,   42,   43,   43,   44,   44,   44,   44,   45,
   48,   48,   46,   47,   47,   56,   47,   49,   49,   50,
   50,   51,   51,   51,   51,   52,   14,   12,   12,   13,
   13,   15,   15,   16,   16,   10,   10,    9,    9,    5,
    3,    3,    2,    2,   11,   11,    8,    8,   17,   17,
    7,    4,    4,    4,    4,    4,    4,    4,    6,   19,
   19,   19,   20,   20,   20,   20,   18,   22,   22,   22,
   22,   23,   23,   23,   24,   24,   24,   21,   21,    1,
   27,   27,   25,   25,   26,   26,   55,
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
    3,    1,    3,    3,    3,    3,    3,    3,    1,    2,
    2,    1,    3,    3,    3,    1,    1,    3,    3,    3,
    1,    1,    3,    2,    1,    1,    1,    1,    1,    2,
    1,    1,    4,    3,    1,    3,    0,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    0,    0,    1,    0,    0,    3,    0,
    4,    0,    0,    6,    0,    0,    0,    0,   12,    0,
    0,    0,   14,    0,    0,    0,    7,    5,    8,   10,
    0,    0,    0,   13,   15,    0,   16,    0,    0,    0,
    0,    0,    0,    0,    0,   17,    0,    0,    0,    0,
   54,    0,   24,    0,    0,    0,    0,  108,    0,    0,
    0,    0,  109,    0,  107,   26,    0,   92,   96,    0,
  105,    0,  101,  102,   20,   28,   27,   18,    0,   19,
    0,    0,    0,    0,   42,   40,    0,    0,   56,   55,
   25,    0,    0,  111,  110,  112,    0,    0,    0,    0,
   91,  104,   90,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   21,    0,    0,   49,
    0,   37,   41,    0,   36,    0,    0,    0,    0,    0,
    0,  103,    0,   29,    0,   71,    0,   73,   84,   86,
   85,   88,   87,   83,   95,   94,   93,  100,   99,   98,
    0,    0,   43,   45,    0,    0,    0,    0,   62,   60,
   68,   66,   67,   65,   64,    0,   58,   61,   63,    0,
   69,   48,   39,   38,  114,    0,    0,   34,    0,   31,
    0,   30,   72,    0,   46,    0,    0,    0,   76,    0,
    0,   57,    0,  116,  113,   35,   32,   74,    0,   44,
   81,   79,   70,   59,    0,   78,    0,    0,   47,   80,
};
static const short yydgoto[] = {                          2,
   64,  137,   65,   66,  160,   67,  161,  162,  163,  164,
  165,  166,  167,  120,  168,  169,  170,   68,   69,   70,
   71,   72,   73,   74,   94,  129,   95,   47,   80,   15,
    6,    7,   11,   16,  121,   22,   23,   37,   38,   44,
   75,   76,   98,   18,   84,   85,  153,   86,  122,   24,
   32,   51,   77,  135,   96,  199,
};
static const short yysindex[] = {                      -225,
 -184,    0, -217, -218, -176,    0, -218, -183,    0, -246,
    0, -234, -241,    0, -167, -161, -123, -123,    0, -117,
 -117,  -71,    0, -107, -106, -102,    0,    0,    0,    0,
 -111,  -98,  -98,    0,    0,  -93,    0, -201, -104,  -86,
  -95,  -73,  -68,  -61, -182,    0, -160, -144, -101, -236,
    0,  -95,    0,  -65, -171,  -54, -173,    0, -182,  -75,
  -75,  -75,    0,  -58,    0,    0,  -19,    0,    0, -251,
    0, -245,    0,    0,    0,    0,    0,    0, -107,    0,
  -49, -243,  -52,  -62,    0,    0, -243,  -50,    0,    0,
    0,  -42, -173,    0,    0,    0, -173,  -40,  -46, -258,
    0,    0,    0,  -87, -173, -173, -173, -173, -173, -173,
  -75,  -75,  -75,  -75,  -75,  -75,    0, -138, -232,    0,
  -43,    0,    0, -243,    0, -243, -171,  -35,  -48,  -41,
 -173,    0, -182,    0, -207,    0, -186,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 -179,  -18,    0,    0, -173, -173, -173, -205,    0,    0,
    0,    0,    0,    0,    0, -256,    0,    0,    0,  -29,
    0,    0,    0,    0,    0, -173, -171,    0,  -25,    0,
 -182,    0,    0, -173,    0, -138,  -43,  -43,    0, -173,
 -232,    0, -172,    0,    0,    0,    0,    0,  -17,    0,
    0,    0,    0,    0, -173,    0,  -52,  -43,    0,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,  255,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  -27,  -22,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   -8,    2,    0,    0, -169,    0,    0,    0,    0,
  -69,    0,    0, -165,    0,    0,    0,    0,    0,    0,
    0,  -66,    0,    0, -135,    0,    0,    0,    0,    0,
    0,    0,    0, -103,    0,    0,  -13,    0,    0,  -33,
    0,  -53,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -253,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   -3, -248,    0,
    0,    0,    0,    0,    0,    0, -135,   -1,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -233,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -219,
    0,    0,    0,    0,    0,    0, -135,    0,    0,    0,
    0,    0,    0,    0,    0,   -3,    0,    0,    0,    0,
 -248,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
};
static const short yygindex[] = {                         0,
 -114,    0, -112,  -57,    0,  174,    0,    0,    0,    0,
    0,    0,   82, -118,    0,    0,    0,  -45,    0,    0,
    0,    0,  -51,    0,    0,    0, -121,    0,    0,  124,
  267,    0,    0,    0,  265,    0,  254,  198,    0,    0,
  -55,    0,    0,    0,  -47,  -82,   99,    0,  -76,    1,
  266,  234,    0,    0, -110,    0,
};
#define YYTABLESIZE 287
static const short yytable[] = {                         99,
  123,   88,  172,  100,  158,  175,  159,  154,  171,  102,
  125,  114,   12,   26,  101,   12,  103,  191,  111,  133,
   33,   13,   20,   21,   33,  117,   19,   20,   21,   20,
   21,   55,  134,  115,  192,  128,  112,   33,  113,  130,
   75,  119,  117,  155,   14,    1,  138,  173,  116,  174,
   89,  156,  190,   25,   77,  195,    4,   75,    5,  157,
   45,  104,  148,  149,  150,  145,  146,  147,  201,  202,
  181,   77,   46,  179,  206,  154,  158,  180,  159,    3,
  171,   55,   56,  182,   57,   81,  183,    8,   92,  210,
   55,  184,   23,   57,   93,   83,   22,  187,  188,  189,
   58,   10,   59,  185,   23,   60,   61,   62,   22,   58,
   63,  205,  119,   78,   60,   61,   62,   79,  194,   63,
   81,  117,  117,   27,  209,  197,  198,  117,   82,   28,
   83,  117,  203,  117,  117,  151,  117,  117,  117,  152,
   29,   30,  117,  117,   13,  117,  117,  208,   31,  117,
  117,  117,  117,  106,  117,  117,   36,   39,  117,  106,
   41,   40,   48,   81,   50,  106,  106,   42,  106,  106,
  106,   87,   43,   83,  106,  106,   55,  106,  106,   57,
   49,  106,  106,  106,  106,  136,  106,  106,   55,   34,
  106,   57,   20,   21,   52,   58,   52,   53,   52,   53,
   60,   61,   62,   53,   54,   63,   91,   58,  104,   97,
  124,   97,   81,   61,  118,   97,   97,   63,   97,   97,
   97,  127,  126,  177,   97,  131,  132,   97,   97,   89,
  178,   97,   97,   97,   97,   89,   97,   97,   89,   89,
   89,  119,  176,  105,   89,  186,  196,   89,   89,  106,
  193,   89,   89,   89,    2,   50,  207,   89,   82,   82,
   82,  107,  108,    9,   82,   51,  109,  110,   11,  117,
  115,   82,  204,    9,   17,   35,  117,   82,  139,  140,
  141,  142,  143,  144,  200,   90,   33,
};
static const short yycheck[] = {                         57,
   83,   49,  121,   59,  119,  127,  119,  118,  119,   61,
   87,  257,  259,   13,   60,  259,   62,  274,  270,  278,
  274,  268,  264,  265,  278,  274,  261,  264,  265,  264,
  265,  264,  291,  279,  291,   93,  288,  291,  290,   97,
  274,  285,  291,  276,  291,  271,  104,  124,  294,  126,
   50,  284,  258,  295,  274,  177,  274,  291,  277,  292,
  262,  267,  114,  115,  116,  111,  112,  113,  187,  188,
  278,  291,  274,  131,  193,  186,  191,  133,  191,  264,
  191,  264,  265,  291,  267,  265,  273,  264,  260,  208,
  264,  278,  262,  267,  266,  275,  262,  155,  156,  157,
  283,  285,  285,  151,  274,  288,  289,  290,  274,  283,
  293,  284,  285,  274,  288,  289,  290,  278,  176,  293,
  265,  257,  258,  291,  207,  181,  184,  263,  273,  291,
  275,  267,  190,  269,  270,  274,  272,  273,  274,  278,
   17,   18,  278,  279,  268,  281,  282,  205,  266,  285,
  286,  287,  288,  257,  290,  291,  264,  264,  294,  263,
  272,  264,  267,  265,  260,  269,  270,  266,  272,  273,
  274,  273,  266,  275,  278,  279,  264,  281,  282,  267,
  267,  285,  286,  287,  288,  273,  290,  291,  264,  261,
  294,  267,  264,  265,  264,  283,  266,  264,  272,  266,
  288,  289,  290,  272,  266,  293,  272,  283,  267,  263,
  273,  266,  265,  289,  264,  269,  270,  293,  272,  273,
  274,  264,  273,  272,  278,  266,  273,  281,  282,  263,
  272,  285,  286,  287,  288,  269,  290,  291,  272,  273,
  274,  285,  278,  263,  278,  264,  272,  281,  282,  269,
  280,  285,  286,  287,    0,  264,  274,  291,  272,  273,
  274,  281,  282,  291,  278,  264,  286,  287,  291,  273,
  272,  285,  191,    7,   10,   22,   79,  291,  105,  106,
  107,  108,  109,  110,  186,   52,   21,
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
case 90:
	{yyval.tptr=MakeTree(AddOp,yystack.l_mark[0].tptr,MakeLeaf(DUMMYNode,0));}
break;
case 91:
	{yyval.tptr=MakeTree(UnaryNegOp,yystack.l_mark[0].tptr,MakeLeaf(DUMMYNode,0));}
break;
case 92:
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 93:
	{yyval.tptr= MakeTree(AddOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 94:
	{yyval.tptr= MakeTree(UnaryNegOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 95:
	{yyval.tptr= MakeTree(OrOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 96:
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 97:
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 98:
	{yyval.tptr= MakeTree(MultOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 99:
	{yyval.tptr= yyval.tptr= MakeTree(DivOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 100:
	{yyval.tptr= MakeTree(AndOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 101:
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 102:
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 103:
	{yyval.tptr=yystack.l_mark[-1].tptr;}
break;
case 104:
	{yyval.tptr = MakeTree(NotOp, MakeLeaf(DUMMYNode,0),yystack.l_mark[0].tptr); }
break;
case 105:
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 106:
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 107:
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 108:
	{yyval.tptr= MakeLeaf(NUMNode, yystack.l_mark[0].intg);}
break;
case 109:
	{yyval.tptr = MakeLeaf(STRINGNode, yystack.l_mark[0].intg);}
break;
case 110:
	{yyval.tptr = MakeTree(VarOp, MakeLeaf(IDNode, yystack.l_mark[-1].intg), yystack.l_mark[0].tptr);}
break;
case 111:
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 112:
	{yyval.tptr = MakeLeaf(DUMMYNode,0);}
break;
case 113:
	{yyval.tptr=MakeTree(SelectOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);}
break;
case 114:
	{yyval.tptr= MakeTree(SelectOp,MakeTree(FieldOp,MakeLeaf(IDNode, yystack.l_mark[-1].intg),MakeLeaf(DUMMYNode,0)), yystack.l_mark[0].tptr);}
break;
case 115:
	{yyval.tptr = MakeTree(IndexOp, yystack.l_mark[0].tptr,MakeLeaf(DUMMYNode,0) );}
break;
case 116:
	{yyval.tptr = MakeTree(IndexOp,yystack.l_mark[-2].tptr ,MakeTree(IndexOp, yystack.l_mark[0].tptr,MakeLeaf(DUMMYNode,0)));}
break;
case 117:
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
