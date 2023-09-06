run: a.out
	./a.out<test.c
a.out: lex.yy.c y.tab.c
	gcc lex.yy.c y.tab.c
lex.yy.c: y.tab.h assgn_4_21CS30059_21CS30038.l
	flex assgn_4_21CS30059_21CS30038.l
y.tab.c: assgn_4_21CS30059_21CS30038.y
	yacc -d assgn_4_21CS30059_21CS30038.y
y.tab.h: assgn_4_21CS30059_21CS30038.y
	yacc -d assgn_4_21CS30059_21CS30038.y
clean:
	rm a.out y.tab.c y.tab.h lex.yy.c
