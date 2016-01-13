# -g debug; -O0 no optimization; -v verbose
CFLAGS=-Wall -g -O0 -std=c11

clean:
	rm -f dst/*

all: clean
	gcc $(CFLAGS) src/hello.c -o dst/hello
