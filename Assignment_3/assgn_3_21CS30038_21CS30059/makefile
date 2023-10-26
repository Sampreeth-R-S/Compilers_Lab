run: lexer.out
	./lexer.out<assgn3_21CS30038_21CS30059_test.c
lexer.out: lex.yy.c assgn3_21CS30038_21CS30059.c
	gcc -Wall -o lexer.out lex.yy.c assgn3_21CS30038_21CS30059.c
	rm lex.yy.c
lex.yy.c:
	flex assgn3_21CS30038_21CS30059.l
clean:
	rm lex.yy.c lexer.out
