a.out: translator.cpp assgn_5_21CS30059_21CS30038.tab.c lex.yy.c translator2.cpp
	g++ translator.cpp translator2.cpp assgn_5_21CS30059_21CS30038.tab.c lex.yy.c -lfl

assgn_5_21CS30059_21CS30038.tab.c: assgn_5_21CS30059_21CS30038.y
	bison -dtv assgn_5_21CS30059_21CS30038.y

lex.yy.c: assgn_5_21CS30059_21CS30038.l assgn_5_21CS30059_21CS30038.tab.h
	flex assgn_5_21CS30059_21CS30038.l

assgn_5_21CS30059_21CS30038.tab.h: assgn_5_21CS30059_21CS30038.y
	bison -dtv assgn_5_21CS30059_21CS30038.y

clean: 
	rm a.out assgn_5_21CS30059_21CS30038.tab.c lex.yy.c assgn_5_21CS30059_21CS30038.tab.h assgn_5_21CS30059_21CS30038.output
	rm ./output/*.out
	rmdir output

test: a.out
	mkdir -p output
	./a.out ./input/test >./output/test1.out
	./a.out ./input/test2 >./output/test2.out
	./a.out ./input/test3 >./output/test3.out
	./a.out ./input/test4 >./output/test4.out
	./a.out ./input/test5 >./output/test5.out

