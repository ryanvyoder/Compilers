%{ /* definition */
#include "proj2.h"
#include <stdio.h>
%}
%start Program
%token <intg> ANDnum ASSGNnum DECLARATIONSnum DOTnum ENDDECLARATIONSnum EQUALnum GTnum IDnum INTnum LBRACnum LPARENnum METHODnum NEnum ORnum PROGRAMnum RBRACnum RPARENnum SEMInum VALnum WHILEnum CLASSnum COMMAnum DIVIDEnum ELSEnum EQnum GEnum ICONSTnum IFnum LBRACEnum LEnum LTnum MINUSnum NOTnum PLUSnum RBRACEnum RETURNnum SCONSTnum TIMESnum VOIDnum ERRORnum STRERRORnum COMMERRORnum IDERRORnum BACKSLASHnum EOFnum			
%type <tptr> Variable Expre MethodCallStatement Expression AssignmentStatement SimpleExpression WhileStatement IfStatement Statements_Op4 Statements_Op3 Comp_op Comp_op2 Comp_op3 Comp_op4 Comp_op5 ReturnStatement Statementsop Statement StatementList AssignmentStatement Statements_Op MethodCallStatement Statements_Op2 IFState_Op Term Simple_op Simple_op2 Simple_op3 Simple_op4 Simple_op5 Simple_op6 Simple_op7 Simple_op8 Simple_op9 UnsignedConstant Term Term_op2 Term_op3 Term_op4 Term_op Term_op6 Term_op7 Term_op8  Factor Factor_op Variable Variable_op2 Variable_op3 Variable_op
Program ProgramB ClassDecl ClassBody ClassBodyB Decls DeclsB FieldDecl FieldDeclB VariableDeclId VariableDeclIdB VariableInitializer ArrayCreationExpression ArrayCreationExpressionB MethodDecl  Block GlobalType ReturnType Temp
%% /* yacc specification */
// First Half of Grammar //

/* To Do List 
 - Verify left-recursive
 - Fix Type storage using a global variable
 */
 

/* GlobalType = Make:e

/* Program */
Program: 
	PROGRAMnum IDnum SEMInum ProgramB {$$ = MakeTree(ProgramOp, $4, MakeLeaf(IDNode, $2));};
ProgramB:
	ClassDecl {$$ = MakeTree(ClassOp, MakeLeaf(DUMMYNode, 0), $1);} |
	ClassDecl ProgramB {$$ = MakeTree(ClassOp, $2, $1);};

/* Class Declarations */
ClassDecl:
	CLASSnum IDnum ClassBody {$$ = MakeTree(ClassDefOp, $3, MakeLeaf(IDNode, $2);};
	
/* ClassBody */
ClassBody:
	LBRACEnum ClassBodyB RBRACEnum {$$ = $3;} |
	LBRACEnum RBRACEnum {$$ = MakeLeaf(DUMMYNode, 0);};
ClassBodyB:
	Decls MethodDecl {$$ = MakeTree(BodyOp, $1, $2);} |
	Decls {$$ = $1;} |
	ClassBodyB MethodDecl {$$ = MakeTree(BodyOp, $1, $2);};
	
/* Declarations */
Decls:
	DECLARATIONSnum ENDDECLARATIONSnum {$$ = MakeLeaf(DUMMYNode, 0);} |
	DECLARATIONSnum DeclsB ENDDECLARATIONSnum {$$ = $2};
DeclsB:
	FieldDecl {$$ = MakeTree(BodyOp, MakeLeaf(DUMMYNode, 0), $1);} |
	DeclsB FieldDecl {$$ = MakeTree(BodyOp, $1, $2);};

	
/* Field Declarations */
//Needs fixing (Should be left-recursive but isn't)
FieldDecl:
	Type FieldDeclB {$$ = $2; GlobalType = $1;};
FieldDeclB:
	VariableDeclId SEMInum {$$ = MakeTree(DeclOp, MakeLeaf(DUMMYNode, 0), MakeTree(CommaOp, $1, MakeTree(CommaOp, GlobalType, MakeLeaf(DUMMYNode, 0))));} |
	VariableDeclId FieldDeclD SEMInum {$$ = MakeTree(DeclOp, MakeLeaf(DUMMYNode, 0), MakeTree(CommaOp, $1, MakeTree(CommaOp, GlobalType, $2)));} |
	VariableDeclId FieldDeclD FieldDeclE {$$ = MakeTree(DeclOp, $3, MakeTree(CommaOp, $1, MakeTree(CommaOp, GlobalType, $2)));};
FieldDeclD:
	EQUALnum VariableInitializer{$$ = $2;};
FieldDeclE:
	COMMAnum FieldDeclB {$$ = $2;};
	
	

/* Variable Declaration ID */
VariableDeclId:
	IDnum VariableDeclIdB {$$ = $1;} |
	IDnum {$$ = $1;};
VariableDeclIdB:
	LBRACnum RBRACnum {} |
	VariableDeclIdB LBRACnum RBRACnum {};
	
	
/* VariableInitializer */
VariableInitializer:
	Expression {$$ = $1;} |
	ArrayInitializer {$$ = $1;} |
	ArrayCreationExpression {$$ = $1;};
	

/* ArrayInitializer */
ArrayInitializer:
	LBRACEnum VariableInitializer RBRACEnum {$$ = MakeTree(ArrayTypeOp, MakeTree(CommaOp, MakeLeaf(DUMMYNode, 0), $2), GlobalType);} |
	LBRACEnum VariableInitializer ArrayInitializerB RBRACEnum {$$ = MakeTree(ArrayTypeOp, $3, GlobalType);};
ArrayInitializerB:
	COMMAnum VariableInitializer {$$ = MakeTree(CommaOp, MakeLeaf(DUMMYNode, 0), $2);} |
	ArrayInitializerB COMMAnum VariableInitializer {$$ = MakeTree(CommaOp, $1, $3);};
	
	
/* ArrayCreationExpression */
ArrayCreationExpression:
	INTnum ArrayCreationExpressionB {$$ = MakeTree(ArrayTypeOp, $2, MakeLeaf(INTEGER T, $1));};
ArrayCreationExpressionB:
	LBRACnum Expression RBRACnum {$$ = MakeTree(BoundOp, MakeLeaf(DUMMYNode, 0), $2);} |
	ArrayCreationExpressionB LBRACnum Expression RBRACnum {$$ = MakeTree(BoundOp, $1, $3);};

	
/* Method Declaration */
MethodDecl:
	METHODnum Type IDnum LPARENnum RPARENnum Block {ReturnType = $2; $$ = MakeTree(MethodOp, MakeTree(HeadOp, MakeLeaf(IDNode, $3), MakeLeaf(DUMMYNode, 0)), $6);} |
	METHODnum VOIDnum IDnum LPARENnum RPARENnum Block {$$ = MakeTree(MethodOp, MakeTree(HeadOp, MakeLeaf(IDNode, $3), MakeLeaf(DUMMYNode, 0)), $6);} |
	METHODnum Type IDnum LPARENnum FormalParameterList RPARENnum Block {ReturnType = $2; $$ = MakeTree(MethodOp, MakeTree(HeadOp, MakeLeaf(IDNode, $3), $5), $6);} |
	METHODnum VOIDnum IDnum LPARENnum FormalParameterList RPARENnum Block {$$ = MakeTree(MethodOp, MakeTree(HeadOp, MakeLeaf(IDNode, $3), $5), $6);};

	
/* !!!!!!!!!!!FormalParameterList */
/*FormalParameterList:
	FormalParameterListB {$$ = MakeTree(SpecOp, $1, ReturnType);};
FormalParameterListB:
	VALnum INTnum IDnum {$$ = MakeTree(R/VArgTypeOp, MakeTree(CommaOp, MakeLeaf(IDNode, $3), MakeLeaf(INTEGER T, $2)), MakeLeaf(DUMMYNode, 0));} |
	VALnum INTnum IDnum FormalParameterListC {Temp = $2; $$ = MakeTree(R/VArgTypeOp, MakeTree(CommaOp, MakeLeaf(IDNode, $3), MakeLeaf(INTEGER T, $2)), $4);} |
	INTnum IDnum {$$ = MakeTree(R/VArgTypeOp, MakeTree(CommaOp, MakeLeaf(IDNode, $2), MakeLeaf(INTEGER T, $1)), MakeLeaf(DUMMYNode, 0));} |
	INTnum IDnum FormalParameterListC {Temp = $1; $$ = MakeTree(R/VArgTypeOp, MakeTree(CommaOp, MakeLeaf(IDNode, $2), MakeLeaf(INTEGER T, $1)), $3);};
FormalParameterListC:
	COMMAnum IDnum {$$ = MakeTree(R/VArgTypeOp, MakeTree(CommaOp, MakeLeaf(IDNode, $2), MakeLeaf(INTEGER T, Temp)), MakeLeaf(DUMMYNode, 0));} |
	//How to make this tree
	FormalParameterListC COMMAnum IDnum {} |
	SEMInum FormalParameterListB {$$ = $2;};*/
FormalParameterList:
	FormalParameterListD {};
FormalParameterListD:
	VALnum FormalParameterListB {$$ = MakeTree();} |
	FormalParameterListB {};
FormalParameterListB:
	INTnum IDnum FormalParameterListC {};
FormalParameterListC:
	COMMAnum IDnum FormalParameterListC {} |
	epsilon {} |
	SEMInum FormalParameterList {};

/* Block */
Block:
	Decls StatementList {$$ = MakeTree(BodyOp, $1, $2);} |
	StatementList {$$ = MakeTree(BodyOp, MakeLeaf(DUMMYNode, 0), $1);};

/* !!!!!!!!!Type */
Type:
	IDnum TypeB {$$ = MakeTree(TypeIdOp, $1, $2);} |
	INTnum TypeB {$$ = MakeTree(TypeIdOp, $1, $2);};
TypeB:
	LBRACnum RBRACnum {$$ = MakeTree(IndexOp, MakeNode(DUMMYNode, 0), MakeNode(DUMMYNode, 0));} |
	TypeB LBRACnum RBRACnum {$$ = MakeTree(IndexOp, MakeLeaf(DUMMYNode, 0), $1); } |
	LBRACnum RBRACnum TypeC {} |
	TypeB LBRACnum RBRACnum TypeC {};
TypeC:
	DOTnum Type {$$ = MakeTree(FieldOp, $2, MakeNode(DUMMYNode, 0));};
	

// Second Half of Grammar //

/*Statement List rule*/
StatementList: LBRACEnum Statementsop RBRACEnum {$$ = $2;};
Statementsop: Statement {$$ = MakeTree(StmtOp,MakeLeaf(DUMMYNode,0), $1);} | Statementsop SEMInum Statement {$$ = MakeTree(StmtOp,$1,$2);};
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
Expre: Expression {$$ = MakeTree(CommaOp, $1,MakeLeaf(DUMMYNode,0) );}| Expre COMMAnum Expression {$$ = MakeTree(CommaOp,$3,$1);}; 
/*Return rule*/
ReturnStatement: RETURNnum {$$ = MakeTree(ReturnOp,MakeLeaf(DUMMYNode,0), MakeLeaf(DUMMYNode,0) );  } | RETURNnum Expression {$$=MakeTree(ReturnOp, $2,MakeLeaf(DUMMYNode,0) ) };
/*If rule*/
IfStatement : IFState_Op {$$= $1;}| IFState_Op ELSEnum StatementList {$$ = MakeTree(IfElseOp, $1,$3);};
IFState_Op : IFnum Expression StatementList {$$= MakeTree(IfElseOp,MakeLeaf(DUMMYNode,0) ,MakeTree(CommaOp, $2, $3));} | IFState_Op ELSEnum IFnum Expression StatementList {$$=MakeTree(IfElseOp, $1, MakeTree(CommaOp,$3,$4));}
/*While rule*/
WhileStatement : WHILEnum Expression StatementList {$$= MakeTree(LoopOp,$2, $3 );};
/* Expression rule */
Expression : SimpleExpression {$$ = $1;}
 | SimpleExpression Comp_op SimpleExpression
 { $$=MakeTree($2,$1,$3); };
Comp_op : LTnum {$$ = LTOp;} | Comp_op2 {$$ = $1;};
Comp_op2 : GTnum {$$ = GTOp;} | Comp_op3 {$$ = $1;};
Comp_op3 : EQnum {$$ = EQOp;} | Comp_op4 {$$ = $1;};
Comp_op4 : NEnum {$$ = NEOp;} | Comp_op5 {$$ = $1;};
Comp_op5 : LEnum {$$ = LEOp;} | GEnum {$$ = GEOp;};
/*Simple Expression*/
SimpleExpression : Simple_op6 {$$ = $1;}| Simple_op2 Term Simple_op {$$= MakeTree($1, $3,$2);};
Simple_op2 : PLUSnum {$$ = AddOp; }| MINUSnum {$$=UnaryNegOp;};
Simple_op : Simple_op3 {$$= $1;} | Simple_op4 {$$=$1;} | Simple_op5 {$$=$1;};
Simple_op3 :  PLUSnum Term Simple_op {$$ = MakeTree(AddOp, $3,$2); } | epsilon {$$ = MakeLeaf(DUMMYNode,0);};
Simple_op4 :  MINUSnum Term Simple_op {$$ = MakeTree(UnaryNegOp, $3,$2); } | epsilon {$$ = MakeLeaf(DUMMYNode,0);};
Simple_op5 :  ORnum Term Simple_op {$$ = MakeTree(OrOp, $3,$2); } | epsilon {$$ = MakeLeaf(DUMMYNode,0);};
Simple_op6 : Simple_op7 {$$= $1;} | Simple_op8 {$$=$1;} | Simple_op9 {$$=$1;};
Simple_op7 :  Term PLUSnum Term Simple_op {$$ = MakeTree(AddOp, MakeTree(AddOp,$4,$3),$1); } | Term {$$ = $1};
Simple_op8 :  Term MINUSnum Term Simple_op {$$ = MakeTree(UnaryNegOp, MakeTree(UnaryNegOp,$4,$3),$1); } | Term {$$ = $1};
Simple_op9 :  Term ORnum Term Simple_op {$$ = MakeTree(OrOp, MakeTree(OrOp,$4,$3),$1); } | Term {$$ = $1};
/*Term rules*/
Term : Term_op {$$=$1;};
Term_op: Term_op2 {$$= $1;} | Term_op3 {$$= $1;} | Term_op4 {$$= $1;} | Factor {$$= $1;};
Term_op2: Factor TIMESnum Factor Term_op5 {$$ = MakeTree(MultOp, MakeTree(MultOp,$4,$3),$1); };
Term_op3: Factor DIVIDEnum Factor Term_op5 {$$ = MakeTree(DivOp, MakeTree(DivOp,$4,$3),$1); };
Term_op4: Factor ANDnum Factor Term_op5 {$$ = MakeTree(AndOp, MakeTree(AndOp,$4,$3),$1); };
Term_op5 : Term_op6 {$$= $1;} | Term_op7 {$$= $1;} | Term_op8 {$$= $1;}| epsilon {$$= $1;};
Term_op6: TIMESnum Factor Term_op5 {$$ = MakeTree(MultOp, $3,$2); };
Term_op7: DIVIDEnum Factor Term_op5{$$ = MakeTree(DivOp, $3,$2); };
Term_op8: ANDnum Factor Term_op5 {$$ = MakeTree(AndOp, $3,$2); };
/*Factor rules*/
Factor : Factor_op {$$=$1;} | LPARENnum Expression RPARENnum {$$=$2;} | NOTnum Factor {$$ = MakeTree(NotOp, MakeLeaf(DUMMYNode,0),$2); } ;
Factor_op: UnsignedConstant {$$=$1;} | Variable {$$=$1;} |MethodCallStatement {$$=$1;};
/*UnsignedConstant rules*/
UnsignedConstant : ICONSTnum {$$= MakeLeaf(NUMNode, $1);} | SCONSTnum {$$ = MakeLeaf(STRINGNode, $1);}; 
/*Variable rule*/
Variable : IDnum Variable_op {$$ = MakeTree(VarOp, MakeLeaf(IDNode, $1), $2);};
Variable_op: Variable_op2 {$$=$1;} | epsilon {$$ = MakeLeaf(DUMMYNode,0);};
Variable_op2 : LBRACnum Variable_op3 RBRACnum Variable_op {$$=MakeTree(SelectOp, $2, $4);} | DOTnum IDnum Variable_op {$$= MakeTree(SelectOp,MakeTree(FieldOp,MakeLeaf(IDNode, $2),MakeLeaf(DUMMYNode,0)), $3);};
Variable_op3 : Expression {$$ = MakeTree(IndexOp, $1,MakeLeaf(DUMMYNode,0); )} | Expression COMMAnum Expression {$$ = MakeTree(IndexOp,$1 ,MakeTree(IndexOp, $3,MakeLeaf(DUMMYNode,0)));} ;
epsilon : ;
%%
int yycolumn, yyline;
FILE *treelst;
main() { treelst = stdout; yyparse(); }
yyerror(char *str) { printf("yyerror: %s at line %d\n", str, yyline); }
#include "lex.yy.c"
