Ryan Yoder's Lexical Analysis Program Instructions:
Run using the makefile:
	make
	./driver <input_filename.txt>

Run without the makefile:
	lex lexer.l
	gcc driver.c -o driver -ll
	./driver <input_filename.txt>