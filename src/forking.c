#include <sys/types.h>
#include <sys/wait.h>
#include <inttypes.h>
#include <stdbool.h>
#include <stdio.h>
#include <unistd.h>

// > echo "hello world" | ./dst/stdin-stdout

int main(){
  printf("%s\n", "FORKING");

  pid_t pid = fork();
  printf("PID Size: %zd, PID Value: %d\n", sizeof(pid_t), pid);

  if(!pid){
    return 1;
  }

  int32_t status;
  pid_t cid = wait(&status);
  printf("cid: %d, status: %d\n", cid, status);
  return 0;
}
