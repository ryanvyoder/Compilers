%{ /* definition */
#include "proj2.h"
#include <stdio.h>
%}
%token <intg> PROGRAMnum IDnum .... SCONSTnum
%type <tptr> Program ClassDecl ProgramB Variable
%% /* yacc specification */

/* Program */
Program : PROGRAMnum IDnum SEMInum ProgramB
{ $$ = MakeTree(ProgramOp, $4, MakeLeaf(IDNode, $2)); printtree($$, 0); };
ProgramB : ClassDecl
{ $$ = MakeTree(ClassOp, MakeLeaf(DUMMYNode, 0), $1);} | 
ProgramB ClassDecl
{ $$ = MakeTree(ClassOp, $1, $2); };
 /* Class */
ClassDecl : CLASSnum IDnum ClassBody
{ $$ = MakeTree(ClassDefOp, $3, MakeLeaf(IDNode, $2);};


/* other rules */

%%
int yycolumn, yyline;
FILE *treelst;
main() { treelst = stdout; yyparse(); }
yyerror(char *str) { printf("yyerror: %s at line %d\n", str, yyline); }
#include "lex.yy.c
