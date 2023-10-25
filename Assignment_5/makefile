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
	mkdir -p output
	./a.out<./input/test.c>./output/test1.out
	./a.out<./input/test2.c>./output/test2.out
	./a.out<./input/test3.c>./output/test3.out
	./a.out<./input/test4.c>./output/test4.out
	./a.out<./input/test5.c>./output/test5.out
