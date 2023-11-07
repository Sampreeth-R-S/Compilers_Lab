a.out: translator.cpp assgn_6_21CS30059_21CS30038.tab.c lex.yy.c translator2.cpp
	g++ translator.cpp translator2.cpp assgn_6_21CS30059_21CS30038.tab.c lex.yy.c -lfl

assgn_6_21CS30059_21CS30038.tab.c: assgn_6_21CS30059_21CS30038.y
	bison -dtv assgn_6_21CS30059_21CS30038.y

lex.yy.c: assgn_6_21CS30059_21CS30038.l assgn_6_21CS30059_21CS30038.tab.h
	flex assgn_6_21CS30059_21CS30038.l

assgn_6_21CS30059_21CS30038.tab.h: assgn_6_21CS30059_21CS30038.y
	bison -dtv assgn_6_21CS30059_21CS30038.y

clean: 
	rm a.out assgn_6_21CS30059_21CS30038.tab.c lex.yy.c assgn_6_21CS30059_21CS30038.tab.h assgn_6_21CS30059_21CS30038.output
	rm ./output/*.out
	rmdir output
	rm ./input/*.s
	rm libass2.a
	rm ./binary/*
	rmdir binary

test: a.out ass2_21CS30038.c
	mkdir -p output
	./a.out ./input/test >./output/test1.out
	./a.out ./input/test2 >./output/test2.out
	./a.out ./input/test3 >./output/test3.out
	./a.out ./input/test4 >./output/test4.out
	./a.out ./input/test5 >./output/test5.out
	gcc -c ass2_21CS30038.c
	ar -rcs libass2.a ass2_21CS30038.o
	mkdir -p binary
	gcc ./input/test.s -L. -lass2 -no-pie -o ./binary/test1
	gcc ./input/test2.s -L. -lass2 -no-pie -o ./binary/test2
	gcc ./input/test3.s -L. -lass2 -no-pie -o ./binary/test3
	gcc ./input/test4.s -L. -lass2 -no-pie -o ./binary/test4
	gcc ./input/test5.s -L. -lass2 -no-pie -o ./binary/test5
	./binary/test1
	./binary/test2
	./binary/test3
	./binary/test4
	./binary/test5

