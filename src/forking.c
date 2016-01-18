#include <sys/types.h>
#include <sys/wait.h>
#include <inttypes.h>
#include <stdbool.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

// > echo "hello world" | ./dst/stdin-stdout

int main(){
  printf("%s\n", "FORK & PIPE");

  int32_t fds[2];
  int32_t ps = pipe(fds);
  printf("pipe status: %d, in: %d, out: %d\n", ps, fds[0], fds[1]);

  pid_t pid = fork();
  printf("PID Size: %zd, PID Value: %d\n", sizeof(pid_t), pid);

  if(!pid){
    printf("%s\n", "Sending data from child...");
    write(fds[1], "hello world", 12);
    exit(1);
  }

  char buffer[1000];
  read(fds[0], buffer, 12);
  printf("Receiving data from child: %s\n", buffer);

  int32_t status;
  pid_t cid = wait(&status);
  printf("cid: %d, status: %d\n", cid, status);
  exit(0);
}
