
OPTIMIZE = -O0
CC = gcc

CFLAGS = $(OPTIMIZE) -g3 -Wall -Wextra \
	-march=native -mtune=native -mrdrnd

default: linkedList
	
linkedList: node.o
	$(CC) $(CFLAGS) node.o -o linkedList

node.o: node.h node.c
	$(CC) $(CFLAGS) -c node.c	

clean:
	rm -f *.o linkedList