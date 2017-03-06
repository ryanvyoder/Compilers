#include <stdlib.h>
#include "token.h"
#include "lex.yy.c"

// CS 1622 Project 1: Lexical Analyzer -- Ryan Yoder (rvy1@pitt.edu)
main(int argc, char **argv)
{
	//Defining the strings to print out that correspond to token number - 257 (not including EOF)
	char * tokens[45];
	tokens[0] = "ANDnum";
	tokens[1] = "ASSGNnum";
	tokens[2] = "DECLARATIONSnum";
	tokens[3] = "DOTnum";
	tokens[4] = "ENDDECLARATIONSnum";
	tokens[5] = "EQUALnum";
	tokens[6] = "GTnum";
	tokens[7] = "IDnum";
	tokens[8] = "INTnum";
	tokens[9] = "LBRACnum";
	tokens[10] = "LPARENnum";
	tokens[11] = "METHODnum";
	tokens[12] = "NEnum";
	tokens[13] = "ORnum";
	tokens[14] = "PROGRAMnum";
	tokens[15] = "RBRACnum";
	tokens[16] = "RPARENnum";
	tokens[17] = "SEMInum";
	tokens[18] = "VALnum";
	tokens[19] = "WHILEnum";
	tokens[20] = "CLASSnum";
	tokens[21] = "COMMAnum";
	tokens[22] = "DIVIDEnum";
	tokens[23] = "ELSEnum";
	tokens[24] = "EQnum";
	tokens[25] = "GEnum";
	tokens[26] = "ICONSTnum";
	tokens[27] = "IFnum";
	tokens[28] = "LBRACEnum";
	tokens[29] = "LEnum";
	tokens[30] = "LTnum";
	tokens[31] = "MINUSnum";
	tokens[32] = "NOTnum";
	tokens[33] = "PLUSnum";
	tokens[34] = "RBRACEnum";
	tokens[35] = "RETURNnum";
	tokens[36] = "SCONSTnum";
	tokens[37] = "TIMESnum";
	tokens[38] = "VOIDnum";
	tokens[39] = "ERRORnum";
	tokens[40] = "STRERRORnum";
	tokens[41] = "COMMERRORnum";
	tokens[42] = "EOFnum";
	tokens[43] = "IDERRORnum";
	tokens[44] = "BACKSLASHnum";
	
	
	yyin = fopen(argv[1], "r");
	int i;
	printf("Line\tColumn(last char of the token)\tToken\t\tIndex_in_String_table\n");
	while(1){
		i = yylex();
		// Because of how I set the table for token names, I have to adjust some numbers so that the indexes align properly
		// Specifically, EOF needs to be adjusted as I don't have it at index 0.
		int eof = 0;
		int afterEOF = 0;
		if(i >= 299){
			i++;
			afterEOF = 1;
		}
		if(i == 0){
			i = (i+257+42);
			eof = 1;
		}
		
		// Printing out the different information depending on what token is returned
		switch(i){
			case SCONSTnum:		printf("%d\t\t%d\t\t\t%s\t\t%d\n", yyline, yycolumn,tokens[i - 257], yylval);break;
			case IDnum:			printf("%d\t\t%d\t\t\t%s\t\t\t%d\n", yyline, yycolumn,tokens[i - 257], yylval);break;
			case ICONSTnum:		printf("%d\t\t%d\t\t\t%s\t\t%d\n", yyline, yycolumn,tokens[i - 257], yylval);break;
			case STRERRORnum:	printf("%d:%d: %s: String constant missing end quote: %s", yyline, yycolumn, tokens[i -257], yytext);break;
			case COMMERRORnum:	printf("%d:%d: %s: Comment block never ends.\n", yyline, yycolumn, tokens[i-257]);break;
			case (IDERRORnum+1):	printf("%d:%d: %s: Invalid identifier: %s\n", yyline, yycolumn, tokens[i-257], yytext);break;
			default:		printf("%d\t\t%d\t\t\t%s\t\n", yyline, yycolumn,tokens[i - 257]);
		}
		if(eof == 1){
			i = 0;
			eof = 0;
		}
		if(afterEOF == 1){
			i--;
			afterEOF = 0;
		}
		
		// If we've reached the end of the file, quit.
		if(i == EOFnum){
			break;
		}
	}
	
	printf("String Table: %s\n",getStringTable());
}