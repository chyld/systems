#include <inttypes.h>
#include <stdbool.h>
#include <stdio.h>
#include <unistd.h>

// > echo "hello world" | ./dst/stdin-stdout

int main(){
  char buffer[10000];
  printf("%s\n", "Reading from stdin...");
  // reading 10 byes from stdin
  ssize_t amt = read(0, buffer, 10);
  // writing out amt bytes to stdout
  write(1, buffer, amt);
  printf("Bytes read: %zd, String: %s\n", amt, buffer);
}
