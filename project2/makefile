driver: yacc_out lexers
	gcc y.tab.c proj2.c -o parser -lfl
lexers: 
	lex lexer.l
yacc_out: grammer.y
	yacc -d  grammer.y

