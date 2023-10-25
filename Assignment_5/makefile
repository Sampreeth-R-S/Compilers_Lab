a.out: translator.cpp assgn_5_21CS30059_21CS30038.tab.c lex.yy.c
	g++ translator.cpp assgn_5_21CS30059_21CS30038.tab.c lex.yy.c -lfl

assgn_5_21CS30059_21CS30038.tab.c: assgn_5_21CS30059_21CS30038.y
	bison -dtv assgn_5_21CS30059_21CS30038.y

lex.yy.c: assgn_5_21CS30059_21CS30038.l assgn_5_21CS30059_21CS30038.tab.h
	flex assgn_5_21CS30059_21CS30038.l

assgn_5_21CS30059_21CS30038.tab.h: assgn_5_21CS30059_21CS30038.y
	bison -dtv assgn_5_21CS30059_21CS30038.y

clean: 
	rm a.out assgn_5_21CS30059_21CS30038.tab.c lex.yy.c assgn_5_21CS30059_21CS30038.tab.h assgn_5_21CS30059_21CS30038.output

test: a.out
	./a.out<test.c