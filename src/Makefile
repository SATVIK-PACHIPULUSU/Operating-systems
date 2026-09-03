CC = gcc
CFLAGS = -Wall -Wextra -g

all: prog1 prog3 prog4 zombie_process

prog1: prog1.c
	$(CC) $(CFLAGS) prog1.c -o prog1

prog3: prog3.c parser.c parser.h
	$(CC) $(CFLAGS) prog3.c parser.c -o prog3

prog4: prog4.c
	$(CC) $(CFLAGS) prog4.c -o prog4

zombie_process: zombie_process.c
	$(CC) $(CFLAGS) zombie_process.c -o zombie_process

clean:
	rm -f prog1 prog3
