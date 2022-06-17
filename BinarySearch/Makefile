
OPTIMIZE = -O0
CC = gcc

CFLAGS = $(OPTIMIZE) -g3 -Wall -Wextra \
	-march=native -mtune=native -mrdrnd

default: BinSearch
	
BinSearch: BinSearch.o
	$(CC) $(CFLAGS) BinSearch.o -o BinSearch

BinSearch.o: BinSearch.h BinSearch.c
	$(CC) $(CFLAGS) -c BinSearch.c	

clean:
	rm -f *.o BinSearch