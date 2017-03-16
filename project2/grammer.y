%{ /* definition */
#include "proj2.h"
#include <stdio.h>
%}
%start Program
%token <intg> ANDnum ASSGNnum DECLARATIONSnum DOTnum ENDDECLARATIONSnum EQUALnum GTnum IDnum INTnum LBRACnum LPARENnum METHODnum NEnum ORnum PROGRAMnum RBRACnum RPARENnum SEMInum VALnum WHILEnum CLASSnum COMMAnum DIVIDEnum ELSEnum EQnum GEnum ICONSTnum IFnum LBRACEnum LEnum LTnum MINUSnum NOTnum PLUSnum RBRACEnum RETURNnum SCONSTnum TIMESnum VOIDnum ERRORnum STRERRORnum COMMERRORnum IDERRORnum BACKSLASHnum EOFnum			
%type <tptr> Program ClassDecl Variable Expre MethodCallStatement Expression AssignmentStatement SimpleExpression WhileStatement IfStatement Statements_Op4 Statements_Op3 Comp_op Comp_op2 Comp_op3 Comp_op4 Comp_op5 ReturnStatement Statementsop Statement StatementList AssignmentStatement Statements_Op MethodCallStatement Statements_Op2 IFState_Op Term Simple_op Simple_op2 Simple_op3 Simple_op4 Simple_op5 UnsignedConstant Term Term_op2 Term_op3 Term_op4 Term_op Factor Factor_op Factor_op2 Factor_op3 Factor_op4 Factor_op5 Factor_op6 Factor_op7 Variable Variable_op2 Variable_op3 Variable_op
%% /* yacc specification */
/*Statement List rule*/
StatementList: LBRACEnum Statementsop RBRACEnum {$$ = $2;};
Statementsop: Statement {$$ = MakeTree(StmtOp,MakeLeaf(DUMMYNode,0), $1);} | Statement SEMInum Statement {$$ = MakeTree(StmtOp,$1,$2);};
/*Statement*/
Statement : AssignmentStatement {$$ = $1;} | Statements_Op {$$ = $1;};
Statements_Op : MethodCallStatement {$$ = $1;} | Statements_Op2 {$$ = $1;};
Statements_Op2: ReturnStatement {$$ = $1;} | Statements_Op3 {$$=$1;};
Statements_Op3: IfStatement {$$ = $1;} | Statements_Op4 {$$ = $1;};
Statements_Op4: WhileStatement {$$ = $1} | epsilon {$$ = MakeLeaf(DUMMYNode,0);};
/*Assignemnt*/
AssignmentStatement: Variable ASSGNnum Expression {$$ = MakeTree(AssignOp,MakeTree(AssignOp,MakeLeaf(DUMMYNode,0),$1),$3);};
/*MethodCallStatement*/
MethodCallStatement: Variable LPARENnum RPARENnum {$$ = MakeTree(RoutineCallOp,$1,MakeLeaf(DUMMYNode,0)); } | Variable LPARENnum Expre RPARENnum {$$ = MakeTree(RoutineCallOp,$1,$3); };
Expre: Expression {$$ = MakeTree(CommaOp, $1,MakeLeaf(DUMMYNode,0) );}| Expression COMMAnum Expression {$$ = MakeTree(CommaOp,$1,$2);}; 
/*Return rule*/
ReturnStatement: RETURNnum {$$ = MakeTree(ReturnOp, NULL, NULL);  } | RETURNnum Expression {$$=MakeTree(ReturnOp, $2,MakeLeaf(DUMMYNode,0) ) };
/*If rule*/
IfStatement : IFnum Expression StatementList {$$=MakeTree(IfElseOp,$2,$3);} | IFnum Expression StatementList IFState_Op {$$ = MakeTree(IfElseOp,$2, MakeTree(IfElseOp,$4, $3));};
IFState_Op : ELSEnum IfStatement {$$ = MakeTree(IfElseOp,MakeLeaf(DUMMYNode,0),$2);} | ELSEnum StatementList {$$ = MakeTree(IfElseOp,MakeLeaf(DUMMYNode,0),$2);};
/*While rule*/
WhileStatement : WHILEnum Expression StatementList {$$= MakeTree(LoopOp,$2, $1 );};
/* Expression rule */
Expression : SimpleExpression {$$ = $1;}
 | SimpleExpression Comp_op SimpleExpression
 { $$=MakeTree($1,$2,$3); };
Comp_op : LTnum {$$ = LTOp;} | Comp_op2 {$$ = $1;};
Comp_op2 : GTnum {$$ = GTOp;} | Comp_op3 {$$ = $1;};
Comp_op3 : EQnum {$$ = EQOp;} | Comp_op4 {$$ = $1;};
Comp_op4 : NEnum {$$ = NEOp;} | Comp_op5 {$$ = $1;};
Comp_op5 : LEnum {$$ = LEOp;} | GEnum {$$ = GEOp;};
/*Simple Expression*/
SimpleExpression : Term Simple_op {$$ = MKRightC($2,$1);}| Simple_op2 Term Simple_op {$$= MakeTree($1, $3,$2);};
Simple_op2 : PLUSnum {$$ = AddOp;} | MINUSnum {$$ = UnaryNegOp;};
Simple_op : Simple_op3 {$$ = $1;} | Simple_op4 {$$ = $1;} | Simple_op5 {$$ = $1;};
Simple_op3 : PLUSnum Term Simple_op {$$= MakeTree(AddOp, $3,$2);} | epsilon {$$ = MakeLeaf(DUMMYNode,0);};
Simple_op4: MINUSnum Term Simple_op {$$= MakeTree(UnaryNegOp, $3,$2);} | epsilon {$$ = MakeLeaf(DUMMYNode,0);};
Simple_op5: ORnum Term Simple_op {$$= MakeTree(OrOp, $3,$2);} | epsilon {$$ = MakeLeaf(DUMMYNode,0);};
/*Term rules*/
Term : Factor {$$ = $1;}| Factor Term_op {$$ = MKRightC($2,$1);};
Term_op : Term_op2 {$$ = $1} | Term_op3 {$$ = $1} | Term_op4 {$$ = $1};
Term_op2 : TIMESnum Factor Term_op {$$ = MakeTree(MultOp, $3, $2);}| epsilon {$$ = MakeLeaf(DUMMYNode,0);};
Term_op3 : DIVIDEnum Factor Term_op {$$ = MakeTree(DivOp, $3, $2);} |  epsilon {$$ = MakeLeaf(DUMMYNode,0);};
Term_op4 : ANDnum Factor Term_op {$$ = MakeTree(AndOp, $3, $2);} | epsilon {$$ = MakeLeaf(DUMMYNode,0);};
/*Factor rules*/
Factor : Factor_op Factor_op2 Factor_op3 {$$=MKRightC($1,$2);};
Factor_op : Factor_op4 {$$ = $1;} | epsilon {$$ = MakeLeaf(DUMMYNode,0);};
Factor_op4: LPARENnum {$$ = MakeLeaf(DUMMYNode,0);} | NOTnum {$$= NotOp;};
Factor_op3: RPARENnum {$$ = MakeLeaf(DUMMYNode,0);} | epsilon {$$ = MakeLeaf(DUMMYNode,0);};
Factor_op2: UnsignedConstant {$$=$1;} | Factor_op5 {$$=$1;};
Factor_op5: Variable {$$=$1;} | Factor_op6 {$$=$1;};
Factor_op6: MethodCallStatement {$$=$1;} | Factor_op7 {$$=$1;};
Factor_op7: Expression {$$=$1;} | Factor {$$=$1;};

/*UnsignedConstant rules*/
UnsignedConstant : ICONSTnum {$$= MakeLeaf(NUMNode, yyval);} | SCONSTnum {$$ = MakeLeaf(STRINGNode, yyval);}; 
/*Variable rule*/
Variable : IDnum Variable_op {$$ = MakeTree(VarOp, MakeLeaf(IDNode, $1), $2);};
Variable_op: Variable_op2 {$$=$1;} | epsilon {$$ = MakeLeaf(DUMMYNode,0);};
Variable_op2 : LBRACnum Variable_op3 RBRACnum Variable_op {$$=MakeTree(SelectOp, $2, $4);} | DOTnum IDnum Variable_op {$$= MakeTree(SelectOp,MakeTree(FieldOp,MakeLeaf(IDNode, $2),MakeLeaf(DUMMYNode,0)), $3);};
Variable_op3 : Expression {$$ = MakeTree(IndexOp, $1,MakeLeaf(DUMMYNode,0); )} | Expression COMMAnum Expression {$$ = MakeTree(IndexOp, MakeTree(CommaOp, $1, $3),MakeLeaf(DUMMYNode,0);} ;
epsilon : ;
%%
int yycolumn, yyline;
FILE *treelst;
main() { treelst = stdout; yyparse(); }
yyerror(char *str) { printf("yyerror: %s at line %d\n", str, yyline); }
#include "lex.yy.c
