%{ /* definition */
#include "proj2.h"
#include <stdio.h>

%}
%start Program
%token <intg> ANDnum ASSGNnum DECLARATIONSnum DOTnum ENDDECLARATIONSnum EQUALnum GTnum IDnum INTnum LBRACnum LPARENnum METHODnum NEnum ORnum PROGRAMnum RBRACnum RPARENnum SEMInum VALnum WHILEnum CLASSnum COMMAnum DIVIDEnum ELSEnum EQnum GEnum ICONSTnum IFnum LBRACEnum LEnum LTnum MINUSnum NOTnum PLUSnum RBRACEnum RETURNnum SCONSTnum TIMESnum VOIDnum ERRORnum STRERRORnum COMMERRORnum IDERRORnum BACKSLASHnum EOFnum			
%type <tptr> Variable Expre MethodCallStatement Expression AssignmentStatement SimpleExpression WhileStatement IfStatement Statements_Op4 Statements_Op3  ReturnStatement Statementsop Statement StatementList AssignmentStatement Statements_Op MethodCallStatement Statements_Op2 IFState_Op Term Simple_op Simple_op2 UnsignedConstant Term_op Factor Factor_op Variable Variable_op2 Variable_op3 Variable_op ClassBodyC FieldDeclC FieldDeclE
Program ProgramB ClassDecl ClassBody ClassBodyB Decls DeclsB FieldDecl VariableDeclId VariableDeclIdB VariableInitializer ArrayCreationExpression ArrayCreationExpressionB MethodDecl FormalParameterList FormalParameterListC Block Type TypeB ArrayInitializer ArrayInitializerB epsilon
FieldDeclD
%% /* yacc specification */

// First Half of Grammar - Ryan //

/* Program */
Program: 
	PROGRAMnum IDnum SEMInum ProgramB {$$ = MakeTree(ProgramOp, $4, MakeLeaf(IDNode, $2)); printtree($$, 0);};
ProgramB:
	ClassDecl {$$ = MakeTree(ClassOp, MakeLeaf(DUMMYNode, 0), $1);} |
	ProgramB ClassDecl  {$$ = MakeTree(ClassOp, $1, $2);};

/* Class Declarations */
ClassDecl:
	CLASSnum IDnum ClassBody {$$ = MakeTree(ClassDefOp, $3, MakeLeaf(IDNode, $2));};
	
/* ClassBody */
ClassBody:
    LBRACEnum ClassBodyB RBRACEnum {$$ = $2;} |
    LBRACEnum RBRACEnum {$$ = MakeLeaf(DUMMYNode, 0);}| 
	LBRACEnum ClassBodyC RBRACEnum {$$ = $2;};
ClassBodyB:
    Decls {$$ = $1;};
ClassBodyC:
    ClassBodyC MethodDecl  { $$ = MakeTree(BodyOp, $1, $2);} |
    MethodDecl {$$ = MakeTree(BodyOp, MakeLeaf(DUMMYNode,0), $1);} | 
	ClassBodyB {$$=$1;};
	
/* Declarations */
Decls:
	DECLARATIONSnum ENDDECLARATIONSnum {$$ = MakeTree(BodyOp, MakeLeaf(DUMMYNode, 0), MakeLeaf(DUMMYNode, 0));} |
	DECLARATIONSnum DeclsB ENDDECLARATIONSnum {$$ = $2;};
DeclsB:
	FieldDecl {$$ = MakeTree(BodyOp, MakeLeaf(DUMMYNode, 0), $1);} |
	DeclsB FieldDecl {$$ = MakeTree(BodyOp, $1, $2);};
	
/* Field Declarations */
FieldDecl:
	FieldDeclE VariableDeclId SEMInum {$$ = MakeTree(DeclOp, MakeLeaf(DUMMYNode, 0), MakeTree(CommaOp, $2, MakeTree(CommaOp, $1, MakeLeaf(DUMMYNode, 0))));} |
	FieldDeclE VariableDeclId FieldDeclD SEMInum {$$ = MakeTree(DeclOp, MakeLeaf(DUMMYNode, 0), MakeTree(CommaOp, $2, MakeTree(CommaOp, $1, $3)));} |
	FieldDeclE FieldDeclC COMMAnum VariableDeclId SEMInum {$$ = MakeTree(DeclOp, $2, MakeTree(CommaOp, $4, MakeTree(CommaOp, GlobalType, MakeLeaf(DUMMYNode, 0))));} |
	FieldDeclE FieldDeclC COMMAnum VariableDeclId FieldDeclD SEMInum {$$ = MakeTree(DeclOp, $2, MakeTree(CommaOp, $4, MakeTree(CommaOp, GlobalType, $5)));} ;
FieldDeclC:
	VariableDeclId {$$ = MakeTree(DeclOp, MakeLeaf(DUMMYNode, 0), MakeTree(CommaOp, $1, MakeTree(CommaOp, GlobalType, MakeLeaf(DUMMYNode, 0))));} |
	VariableDeclId FieldDeclD {$$ = MakeTree(DeclOp, MakeLeaf(DUMMYNode, 0), MakeTree(CommaOp, $1, MakeTree(CommaOp, GlobalType, $2)));} |
	FieldDeclC COMMAnum VariableDeclId {$$ = MakeTree(DeclOp, $1, MakeTree(CommaOp, $3, MakeTree(CommaOp, GlobalType, MakeLeaf(DUMMYNode, 0))));} |
	FieldDeclC COMMAnum VariableDeclId FieldDeclD {$$ = MakeTree(DeclOp, $1, MakeTree(CommaOp, $3, MakeTree(CommaOp, GlobalType, $4)));};
FieldDeclD:
	EQUALnum VariableInitializer{$$ = $2;};
FieldDeclE:
	Type {GlobalType = $1; $$=$1;};

/* Variable Declaration ID */
VariableDeclId:
	IDnum VariableDeclIdB {$$ = MakeLeaf(IDNode, $1);} |
	IDnum {$$ = MakeLeaf(IDNode, $1);};
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
	LBRACEnum ArrayInitializerB RBRACEnum {$$ = MakeTree(ArrayTypeOp, $2, GlobalType);};
ArrayInitializerB:
	VariableInitializer {$$ = MakeTree(CommaOp, MakeLeaf(DUMMYNode, 0), $1);} |
	ArrayInitializerB COMMAnum VariableInitializer {$$ = MakeTree(CommaOp, $1, $3);};
	
/* ArrayCreationExpression */
ArrayCreationExpression:
	INTnum ArrayCreationExpressionB {$$ = MakeTree(ArrayTypeOp, $2, MakeLeaf(INTEGERTNode, 0));};
ArrayCreationExpressionB:
	LBRACnum Expression RBRACnum {$$ = MakeTree(BoundOp, MakeLeaf(DUMMYNode, 0), $2);} |
	ArrayCreationExpressionB LBRACnum Expression RBRACnum {$$ = MakeTree(BoundOp, $1, $3);};

/* Method Declaration */
MethodDecl:
	METHODnum Type IDnum LPARENnum RPARENnum Block {ReturnType = $2; $$ = MakeTree(MethodOp, MakeTree(HeadOp, MakeLeaf(IDNode, $3), MakeTree(SpecOp,MakeLeaf(DUMMYNode, 0) , ReturnType)), $6);} |
	METHODnum VOIDnum IDnum LPARENnum RPARENnum Block {$$ = MakeTree(MethodOp, MakeTree(HeadOp, MakeLeaf(IDNode, $3), MakeTree(SpecOp,MakeLeaf(DUMMYNode, 0) , MakeLeaf(DUMMYNode, 0))), $6);} |
	METHODnum Type IDnum LPARENnum FormalParameterList RPARENnum Block {ReturnType = $2; $$ = MakeTree(MethodOp, MakeTree(HeadOp, MakeLeaf(IDNode, $3), MakeTree(SpecOp, $5, ReturnType)), $7);} |
	METHODnum VOIDnum IDnum LPARENnum FormalParameterList RPARENnum Block {$$ = MakeTree(MethodOp, MakeTree(HeadOp, MakeLeaf(IDNode, $3), MakeTree(SpecOp, $5, MakeLeaf(DUMMYNode, 0))), $7);};
	
/* FormalParameterList */
FormalParameterList:
	VALnum INTnum IDnum FormalParameterListC {$$ = MakeTree(VArgTypeOp, MakeTree(CommaOp, MakeLeaf(IDNode, $3), MakeLeaf(INTEGERTNode, 0)), $4);}|
	VALnum INTnum IDnum {$$ = MakeTree(VArgTypeOp, MakeTree(CommaOp, MakeLeaf(IDNode, $3), MakeLeaf(INTEGERTNode, 0)), MakeLeaf(DUMMYNode, 0));} |
	INTnum IDnum FormalParameterListC {$$ = MakeTree(RArgTypeOp, MakeTree(CommaOp, MakeLeaf(IDNode, $2), MakeLeaf(INTEGERTNode, 0)), $3);} |
	INTnum IDnum {$$ = MakeTree(RArgTypeOp, MakeTree(CommaOp, MakeLeaf(IDNode, $2), MakeLeaf(INTEGERTNode, 0)), MakeLeaf(DUMMYNode, 0));};
FormalParameterListC:
	COMMAnum IDnum {$$ = MakeTree(RArgTypeOp, MakeTree(CommaOp, MakeLeaf(IDNode, $2), MakeLeaf(INTEGERTNode, 0)), MakeLeaf(DUMMYNode, 0));} |
	COMMAnum IDnum FormalParameterListC {$$ = MakeTree(RArgTypeOp, MakeTree(CommaOp, MakeLeaf(IDNode, $2), MakeLeaf(INTEGERTNode, 0)), $3);} |
	SEMInum FormalParameterList {$$ = $2;};

/* Block */
Block:
	Decls StatementList {$$ = MakeTree(BodyOp, $1, $2);} |
	StatementList {$$ = MakeTree(BodyOp, MakeLeaf(DUMMYNode, 0), $1);};

/* Type */
Type:
	IDnum TypeB {$$ = MakeTree(TypeIdOp, MakeLeaf(IDNode, $1), $2);} |
	INTnum TypeB {$$ = MakeTree(TypeIdOp, MakeLeaf(INTEGERTNode, 0), $2);} |
	IDnum {$$ = MakeTree(TypeIdOp, MakeLeaf(IDNode, $1), MakeLeaf(DUMMYNode, 0));} |
	INTnum {$$ = MakeTree(TypeIdOp, MakeLeaf(INTEGERTNode, 0), MakeLeaf(DUMMYNode, 0));};
TypeB:
	LBRACnum RBRACnum {$$ = MakeTree(IndexOp, MakeLeaf(DUMMYNode, 0), MakeLeaf(DUMMYNode, 0));} |
	LBRACnum RBRACnum TypeB {$$ = MakeTree(IndexOp, MakeLeaf(DUMMYNode, 0), $3);} |
	LBRACnum RBRACnum DOTnum Type {$$ = MakeTree(IndexOp, MakeLeaf(DUMMYNode, 0), MakeTree(FieldOp, $4, MakeLeaf(DUMMYNode, 0)));};

	
// Second Half of Grammar - Vin //

/*Statement List rule*/
StatementList: 
	LBRACEnum Statementsop RBRACEnum {$$ = $2;} |  
	LBRACEnum RBRACEnum {$$ = MakeTree(StmtOp,MakeLeaf(DUMMYNode,0),MakeLeaf(DUMMYNode,0));} ;
Statementsop: 
	Statement {$$ = MakeTree(StmtOp, MakeLeaf(DUMMYNode, 0),$1);}|
	Statementsop SEMInum {$$ = $1;}|
	Statementsop SEMInum Statement {$$ = MakeTree(StmtOp,$1, $3);};
	
/*Statement*/
Statement : 
	AssignmentStatement {$$ = $1;} | 
	Statements_Op {$$ = $1;};
Statements_Op : 
	MethodCallStatement {$$ = $1;} | 
	Statements_Op2 {$$ = $1;};
Statements_Op2: 
	ReturnStatement {$$ = $1;} | 
	Statements_Op3 {$$=$1;};
Statements_Op3: 
	IfStatement {$$ = $1;} | 
	Statements_Op4 {$$ = $1;};
Statements_Op4: 
	WhileStatement {$$ = $1;};
	
/*Assignemnt*/
AssignmentStatement: 
	Variable ASSGNnum Expression {$$ = MakeTree(AssignOp,MakeTree(AssignOp,MakeLeaf(DUMMYNode,0),$1),$3);};
	
/*MethodCallStatement*/
MethodCallStatement: 
	Variable LPARENnum RPARENnum {$$ = MakeTree(RoutineCallOp,$1,MakeLeaf(DUMMYNode,0)); } | 
	Variable LPARENnum Expre RPARENnum {$$ = MakeTree(RoutineCallOp,$1,$3); };
Expre: 
	Expression {$$ = MakeTree(CommaOp, $1,MakeLeaf(DUMMYNode,0) );}|  
	Expression COMMAnum Expre {$$ = MakeTree(CommaOp,$1,$3);}; 
	
/*Return rule*/
ReturnStatement: 
	RETURNnum {$$ = MakeTree(ReturnOp,MakeLeaf(DUMMYNode,0), MakeLeaf(DUMMYNode,0) );} | 
	RETURNnum Expression {$$=MakeTree(ReturnOp, $2,MakeLeaf(DUMMYNode,0) ); };
	
/*If rule*/
IfStatement : 
	IFState_Op {$$= $1;}| 
	IFState_Op ELSEnum StatementList {$$ = MakeTree(IfElseOp, $1,$3);};
IFState_Op : 
	IFnum Expression StatementList {$$= MakeTree(IfElseOp,MakeLeaf(DUMMYNode,0) ,MakeTree(CommaOp, $2, $3));} | 
	IFState_Op ELSEnum IFnum Expression StatementList {$$=MakeTree(IfElseOp, $1, MakeTree(CommaOp,$4,$5));}
	
/*While rule*/
WhileStatement : 
	WHILEnum Expression StatementList {$$= MakeTree(LoopOp,$2, $3 );};
	
/* Expression rule */
Expression : 
	SimpleExpression {$$ = $1;}
	| SimpleExpression LTnum SimpleExpression { $$=MakeTree(LTOp,$1,$3); }| 
	SimpleExpression GTnum SimpleExpression { $$=MakeTree(GTOp,$1,$3); } | 
	SimpleExpression EQnum SimpleExpression { $$=MakeTree(EQOp,$1,$3); } | 
	SimpleExpression NEnum SimpleExpression { $$=MakeTree(NEOp,$1,$3); } | 
	SimpleExpression LEnum SimpleExpression { $$=MakeTree(LEOp,$1,$3); } | 
	SimpleExpression GEnum SimpleExpression { $$=MakeTree(GEOp,$1,$3); };
	
/*Simple Expression*/
SimpleExpression : 
	Simple_op2;
Simple_op : 
	PLUSnum Term {$$=MakeTree(AddOp,$2,MakeLeaf(DUMMYNode,0));} | 
	MINUSnum Term {$$=MakeTree(UnaryNegOp,$2,MakeLeaf(DUMMYNode,0));} | 
	Term {$$=$1;} ;
Simple_op2: 
	Simple_op2 PLUSnum Term {$$= MakeTree(AddOp,$1,$3);} | 
	Simple_op2 MINUSnum Term {$$= MakeTree(UnaryNegOp,$1,$3);}| 
	Simple_op2 ORnum Term {$$= MakeTree(OrOp,$1,$3);} | 
	Simple_op {$$=$1;};
	
/*Term rules*/
Term : 
	Term_op {$$=$1;};
Term_op: 
	Term_op  TIMESnum Factor {$$= MakeTree(MultOp,$1,$3);} | 
	Term_op DIVIDEnum Factor {$$= $$= MakeTree(DivOp,$1,$3);} | 
	Term_op ANDnum Factor {$$= MakeTree(AndOp,$1,$3);} | 
	Factor {$$=$1;};
	
/*Factor rules*/
Factor : 
	Factor_op {$$=$1;} | 
	LPARENnum Expression RPARENnum {$$=$2;} | 
	NOTnum Factor {$$ = MakeTree(NotOp, MakeLeaf(DUMMYNode,0),$2); } ;
Factor_op: 
	UnsignedConstant {$$=$1;} | 
	Variable {$$=$1;} |
	MethodCallStatement {$$=$1;};
	
/*UnsignedConstant rules*/
UnsignedConstant: 
	ICONSTnum {$$= MakeLeaf(NUMNode, $1);} | 
	SCONSTnum {$$ = MakeLeaf(STRINGNode, $1);}; 
	
/*Variable rule*/
Variable : 
	IDnum Variable_op {$$ = MakeTree(VarOp, MakeLeaf(IDNode, $1), $2);};
Variable_op: 
	Variable_op2 {$$=$1;} | 
	epsilon {$$ = MakeLeaf(DUMMYNode,0);};
Variable_op2 : 
	LBRACnum Variable_op3 RBRACnum Variable_op {$$=MakeTree(SelectOp, $2, $4);} | 
	DOTnum IDnum Variable_op {$$= MakeTree(SelectOp,MakeTree(FieldOp,MakeLeaf(IDNode, $2),MakeLeaf(DUMMYNode,0)), $3);};
Variable_op3 : 
	Expression {$$ = MakeTree(IndexOp, $1,MakeLeaf(DUMMYNode,0) );} | 
	Expression COMMAnum Expression {$$ = MakeTree(IndexOp,$1 ,MakeTree(IndexOp, $3,MakeLeaf(DUMMYNode,0)));} ;
	
/* Epsilon */
epsilon : {};

%%
tree GlobalType = NULL; 
tree ReturnType = NULL;
int yycolumn, yyline;
FILE *treelst;
main() { treelst = stdout; yyparse(); }
// Print out Errors
yyerror(char *str) { printf("yyerror: %s at line %d\n", str, yyline); }
#include "lex.yy.c"
