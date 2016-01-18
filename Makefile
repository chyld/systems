.DEFAULT_GOAL := all

# -g debug; -O0 no optimization; -v verbose
CFLAGS=-g -O0 -std=c11 -Wall -Wextra -Wpedantic -Werror -Wshadow

clean:
	rm -rf dst/*
	mkdir -p dst/puzzle

all: clean
	gcc $(CFLAGS) src/hello.c -o dst/hello
	gcc $(CFLAGS) src/structs.c -o dst/structs
	gcc $(CFLAGS) src/fizz-buzz.c -o dst/fizz-buzz
	gcc $(CFLAGS) src/pointers.c -o dst/pointers
	gcc $(CFLAGS) src/file-io.c -o dst/file-io
	gcc $(CFLAGS) src/stdin-stdout.c -o dst/stdin-stdout
	gcc $(CFLAGS) src/forking.c -o dst/forking
	gcc $(CFLAGS) src/puzzle/reverse-integer.c -o dst/puzzle/reverse-integer
