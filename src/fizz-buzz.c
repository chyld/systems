#include <stdio.h>
#include <inttypes.h>

int main(){
  for(int8_t i = 1; i < 25; i++){
    if(i % 15 == 0) printf("FizzBuzz: %d\n", i);
    else if(i % 5 == 0) printf("Fizz: %d\n", i);
    else if(i % 3 == 0) printf("Buzz: %d\n", i);
  }
}
