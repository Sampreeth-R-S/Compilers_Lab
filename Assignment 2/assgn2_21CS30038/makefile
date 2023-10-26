run: a.out
	./a.out
a.out: libmyl.a main.c
	gcc -Wall main.c -L. -lmyl
libmyl.a: myl.o
	ar -rcs libmyl.a myl.o
myl.o: ass2_21CS30038.c
	gcc -Wall -o myl.o -c ass2_21CS30038.c
clean:
	rm a.out myl.o libmyl.a
	
