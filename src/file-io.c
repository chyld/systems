#include <stdio.h>
#include <inttypes.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 16384 // 2**14

int main(int32_t argc, char *argv[]){
  // list arguments
  for(int32_t i = 0; i < argc; i++)
    printf("param: %d, argv: %s\n", i, argv[i]);

  // open file
  int32_t fd = open(argv[1], O_WRONLY | O_CREAT, 0644);
  printf("opening file: %s, descriptor: %d\n", argv[1], fd);

  // read 10 characters from stdin and store in buffer
  char buffer[BUF_SIZE];
  fgets(buffer, 10, stdin);

  // write 10 characters to file
  write(fd, buffer, 10);

  // close file
  int32_t cs = close(fd);
  printf("closing file: %s, status: %d\n", argv[1], cs);
}
