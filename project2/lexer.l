%{
#include <stdlib.h>
#include "y.tab.h"

extern int yycolumn, yylength, yyline, sizeST, indexST;
extern char* p;
%}

/* regular definitions */


program			(?i:program)
class			(?i:class)
ret			(?:"return")
voidTok			(?:"void")
ifstate			(?i:"if")
elsestate		(?i:"else")
whileloop		(?i:"while")
method			(?i:method)
integer			(?:"int")
declaration		(?:declarations)
endDecl			(?:enddeclarations)
val			(?i:"val")
assign			":="
and			"&&"
or			"||"
string		  	"'"([^"'"\n]*|"\\'")*"'"
stringERROR		"'"([^"'"\n]*|"\\'")*[\n]
comment			"/*"[^*]*[*]+([^"*/"][^*]*[*]+)*"/"
commentLine		"//"(.)*
commentERR		"/*"
commentERROR	{commentERR}([*]*[^/])*
id            		[a-zA-Z][a-zA-Z0-9]*
integerConst		[0-9]+
idERROR				[0-9][a-zA-Z0-9]*
delim         		[ \t]
ws            		{delim}+
newline       		[\n]
backslash		"\\"
semi			";"
lbrack			"{"
rbrack			"}"
lsqua			"["
rsqua			"]"
lpar			"("
rpar			")"
dot			"."
comma			","
equalto			"=="
notequalto		"!="
lesst			"<"
lessoe			"<="
greatt			">"
greatoe			">="
equals			"="
plus			"+"
minus			"-"
not			"!"
times			"*"
divide			"/"



%%	
{commentLine}	{}
{comment}		{
					//printf("comment: %s\n", yytext);
					yyline += comCount(yytext, yyleng);
				}
{commentERROR}	{yycolumn+=yyleng;return(COMMERRORnum);}
{val}			{yycolumn+=yyleng; return(VALnum);}
{ret}			{yycolumn+=yyleng; return(RETURNnum);}
{class}			{yycolumn+=yyleng; return(CLASSnum);}
{comma}			{yycolumn+=1; return(COMMAnum);}
{integer}		{yycolumn+=3; return(INTnum);}
{elsestate}		{yycolumn+=yyleng; return(ELSEnum);}
{ifstate}		{yycolumn+=2; return(IFnum);}
{voidTok}		{yycolumn+=yyleng; return(VOIDnum);}
{whileloop}		{yycolumn+=yyleng; return(WHILEnum);}
{semi}			{yycolumn++; return(SEMInum);}
{method}		{yycolumn+=yyleng; return(METHODnum);}
{program}		{yycolumn+=yyleng; return(PROGRAMnum);}
{and}			{yycolumn+=2; return(ANDnum);}
{assign}		{yycolumn+=2; return(ASSGNnum);}
{declaration}	{yycolumn+=yyleng; return(DECLARATIONSnum);}
{endDecl}		{yycolumn+=yyleng; return(ENDDECLARATIONSnum);}
{dot}			{yycolumn++; return(DOTnum);}
{equals}		{yycolumn++; return(EQUALnum);}
{greatt}		{yycolumn++; return(GTnum);}
{integerConst}	{
					yycolumn+=yyleng;
					yylval.intg = atoi(yytext);
					return(ICONSTnum);
				}
{id}		    {
					int result = STMatch(yytext);
					if(result == -1){
						yycolumn+=yyleng; 
						yylval.intg = STadd(yytext, yyleng);
						return (IDnum);
					}
					else{
						yylval.intg = result;
						return (IDnum);
					}
				}
{idERROR}		{yycolumn+=yyleng; return(IDERRORnum);}
{lsqua}			{yycolumn++; return(LBRACnum);}
{lpar}			{yycolumn++; return(LPARENnum);}
{notequalto}	{yycolumn+=2; return(NEnum);}
{or}			{yycolumn+=2; return(ORnum);}
{rsqua}			{yycolumn++; return(RBRACnum);}
{rpar}			{yycolumn++; return(RPARENnum);}
{divide}		{yycolumn+=1; return(DIVIDEnum);}
{equalto}		{yycolumn+=2; return(EQnum);}
{greatoe}		{yycolumn+=2; return(GEnum);}
{lbrack}		{yycolumn++; return(LBRACEnum);}
{lessoe}		{yycolumn+=2; return(LEnum);}
{lesst}			{yycolumn++; return(LTnum);}
{minus}			{yycolumn++; return(MINUSnum);}
{not}			{yycolumn++; return(NOTnum);}
{plus}			{yycolumn++; return(PLUSnum);}
{rbrack}		{yycolumn++; return(RBRACEnum);}
{string}		{	
					int result = STMatch(yytext);
					if(result == -1){
						yycolumn+=yyleng; 
						char* text = calloc(yyleng, sizeof(char));
						escapeChar(text, yytext, yyleng);
						yylval.intg = STadd(text, yyleng);
						return(SCONSTnum);
					}
					else{
						yylval.intg = result;
						return (SCONSTnum);
					}
				}
{stringERROR}	{yycolumn+=yyleng; yyline++; return(STRERRORnum);}
{times}			{yycolumn++; return(TIMESnum);}
{ws}			{yycolumn+=yyleng;}
{newline}       {yyline++; yycolumn=0;}
{backslash}		{return(BACKSLASHnum);}

%%
/* user subroutines */
// CS 1622 Project 1: Lexical Analyzer -- Ryan Yoder (rvy1@pitt.edu)
// lines start on 0, columns start on 1
// defining the variables that we will need access to throughout the code
int yyline = 0;
int yycolumn = 0;
int sizeST = 25;
int indexST = 0;
char* p; // reference variable to string


/* :IGNORE ME:
 * Notes about some C functions:
 * strcmp() returns 0 if they are equal
 * strchr() returns a pointer to the first occurence of the character c in the string s
 * strrchr() returns a pointer to the last occurence of the character c in the string s
 * strchr(const char* s, int c);
Delete ST check, make STMatch return an int. -1 if not found and 0-inf representing the i value in p+i
*/


/* escapeChar()
 * This method takes a string and searches through it for any possible escape characters that the user may have implemented.
 * It then writes the new string with the escape characters properly implemented to a passed in char array.
 *
 * paramaters: 	newString 	- an empty character array that is the size of the string to be checked
 *				string		- the string to be searched through
 *				length		- the length of the string
 *
 * Escape Characters: '\n':newline, '\t':tab, '\\': \ character, '\'': ' character
*/
escapeChar(char* newString, char * string, int length){
	int i = 0;
	int j = 0;
	if(strchr(string,'\\') != NULL){
		// While there are still unobserved instances of the '\' character somewhere in the string
		while(strchr(string + i, '\\') != NULL){
			char check = string[i];
			while(check != '\\'){
				newString[j] = check;
				i++;
				j++;
				check = string[i];
			}
			if(string[i+1] == 'n'){
				newString[j] = '\n';
				i+=2;
				j++;
			}
			else if(string[i+1] == 't'){
				newString[j] = '\t';
				i+=2;
				j++;
			}
			else if(string[i+1] == '\\'){
				newString[j] = '\\';
				i+=2;
				j++;
			}
			else if(string[i+1] == '\''){
				newString[j] = '\'';
				i+=2;
				j++;
			}
			else{
				newString[j] = '\\';
				i++;
				j++;
				check = string[i];
			}
		}
		for(;i<length;i++){
			newString[j] = string[i];
			j++;
 		}
	}
	else{	 // If no instances of the '\' character are found, just copy the original string
		for(i = 0; i < length; i++){
			newString[i] = string[i];
		}
	}
}


/* comCount()
 * This method takes a string that has been identified as a comment block and searches through it for any newline characters.
 * It counts all of the newline characters and returns that number so that the yyline value can be incremented accordingly.
 *
 * paramaters: 	comment 	- the comment block to be searched through
 *				length		- the length of the comment block
 *
 * return: 		int			- the number of newline characters in the comment block
*/
int comCount(char* comment, int length){
	int i;
	int count = 0;
	for(i = 0; i < length; i++){
		if(comment[i] == '\n'){
			count++;
		}
	}
	return count;
}


/* STMatch()
 * This method takes a string and checks the predefined string table (here, the 'p' pointer) to see if that string was already used.
 * It can search for both strings and IDs, and when found it will return the index that it was found at. If not found, it returns the value -1.
 *
 * paramaters: 	value 		- the string to be searched for within the string table
 *
 * return:		int			- the index in the string table character array if found; -1 if not found
*/
int STMatch(char* value){
	int k;
	for(k = 0; value[k]; k++){
		value[k] = tolower(value[k]);
	}
	int i = 0;
	int match = -1;
	char* end;
	char* start;
	int iterations = 0;
	while(i < indexST){
		int strin = 0;
		char firstChar;
		firstChar = value[0];
		//If the value is a string constant, the first char is the first single quote we come across and the last character is the first single quote after that
		if(firstChar == '\''){
			if(strchr(p+i, '\'') == NULL){
				break;
			}
			else{
				start = strchr(p+i, '\'');
				if(iterations == 0){
					strin = start - p;
				}
				else{
					strin = (start - end) - 1;
				}
				end = strchr((start+1), '\'');
				// right here we are being sure to not stop constructing the comparison string if the string contains a single quote escape character
				char * temp = end;
				while(*(temp-1) == '\\'){
					temp = strchr((temp+1), '\'');
					end = temp;
				}
				iterations++;
			}
		}
		//otherwise, first character is the first character following a space that isn't a single quote and the last character is the following character that is followed by a space
		else{
			while(strchr(p+i, '\'') == (p+i)){
				start = p+i;
				end = strchr((start+1), '\'');
				i+=(end - start) + 2;
				if(i >= indexST){
					break;
				}
			}
			if (i >= indexST){
				break;
			}
			else{
				start = p+i;
				end = (strchr((p+i), ' ')) - 1;
			}
		}
		end+=1;
		int j;
		char * currentSearch;
		//the current word we're looking at is the length of the end of the string - the start position
		currentSearch = calloc((end-start), sizeof(char));
		//Moving the string from the string table into our currentSearch string
		for(j = 0; j < (end - start); j++){
			*(currentSearch+j) = *(p+i+strin+j);
		}
		//the result is the result of comparing currentSearch to the value
		int result = strcmp(currentSearch, value);
		//if they match, then i (the index of the starting character) is the location of our string within our ST
		if(result == 0){
			match = i + strin;
			break;
		}
		//otherwise iterate i up the length of the string + 1 to pass the space and point at the next string
		else{
			i+=((end-start) + strin + 1);
		}
	}
	return match;
}


/* expand()
 * This method takes the string table and copies it to a new character array that is twice the size and then frees the old array.
 * It is to be used if the string table cannot fit the next value to be added.
 *
 * paramaters: 	point	 	- the string table that is to be doubled in size
 *
 * return:		char*		- a pointer to the new string table
*/
char* expand( char* point ) {
	char * c = calloc((sizeST*2), sizeof(char));
	int i;
	if(sizeST != 25){
		for(i = 0;i < sizeST; i++){
			*(c + i) = *(point + i);
		}
		free(point);
	}
	sizeST = sizeST * 2;
	return c;
}


/* STadd()
 * This method takes a string and adds it to the next available location in the string table.
 *
 * paramaters: 	string 		- the string that is to be added to the string table
 *				length		- the length of the string
 *
 * return:		int			- the string table index of the first character of the added string
*/
int STadd(char* string, int length){
	int k;
	//Implementation of case insensitivity
	for(k = 0; string[k]; k++){
		string[k] = tolower(string[k]);
	}
	//If the string table is not big enough to add the next string, double it
	if(((sizeST - indexST) < (length+1)) || (sizeST == 25)){
		p = expand(p);
	}
	int i;
	//Adding the new string to its own index
	for(i = 0;i < length; i++){
		*(p + indexST + i) = *(string + i);
	}
	*(p+indexST+i) = ' ';
	int result = indexST;
	indexST += length + 1;
	return result;
}


/* getStringTable()
 * This method simply returns the string table character array
 *
 * return:		char*		- the pointer to the string table
*/
char* getStringTable(){
	return p;
}
int yywrap(void)
{
  return 1;
}
