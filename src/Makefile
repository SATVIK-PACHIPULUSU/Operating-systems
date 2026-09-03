CC = gcc
CFLAGS = -Wall -Wextra -g

all: prog1 prog3

prog1: prog1.c
	$(CC) $(CFLAGS) prog1.c -o prog1

prog3: prog3.c parser.c parser.h
	$(CC) $(CFLAGS) prog3.c parser.c -o prog3

clean:
	rm -f prog1 prog3
