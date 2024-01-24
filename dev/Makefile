CC=gcc
CFLAGS=-std=gnu99
CLIBS= -lpthread

clean:
	rm -f test out1.txt out.txt 
run: test
	./test
out: test
	./test > out.txt
mem: test
	valgrind --tool=memcheck --leak-check=yes --show-reachable=yes ./simulator
# simulator 1

test: test.c linkedlist.c
	$(CC) -o test $^ $(CFLAGS) $(CLIBS)
