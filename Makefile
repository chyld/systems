.DEFAULT_GOAL := all

# -g debug; -O0 no optimization; -v verbose
CFLAGS=-g -O0 -std=c11 -Wall -Wextra -Wpedantic -Werror -Wshadow

clean:
	rm -f dst/*

all: clean
	gcc $(CFLAGS) src/hello.c -o dst/hello
	gcc $(CFLAGS) src/structs.c -o dst/structs
	gcc $(CFLAGS) src/fizz-buzz.c -o dst/fizz-buzz
	gcc $(CFLAGS) src/pointers.c -o dst/pointers
