CC = gcc
DEBUG = -g
CFLAGS = -Wall -std=c99 -pedantic -c $(DEBUG)
LFLAGS = -Wall -std=c99 -pedantic $(DEBUG)

F1 : F1.o
	$(CC) $(LFLAGS) F1.o -o F1

F1.o : F1.c F1.h
	$(CC) $(CFLAGS) F1.c

clean:
	\rm *.o F1 *.lgf
