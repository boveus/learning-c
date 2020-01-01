CFLAGS=-Wall -g
all: ex1/ex1 ex3/ex3 ex7/ex7
clean:
		rm -f ex3/ex3
		rm -rf ex3/ex3.dSYM
		rm -f ex1/ex1
		rm -rf ex1/ex1.dSYM
		rm -f ex7/ex7
		rm -rf ex7/ex7.dSYM
