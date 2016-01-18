#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>

int reverse(int x);

int main(){
  printf("123: %d\n", reverse(123));
}

int reverse(int x){
  bool is_neg = false;
  int numbers[10];

  if(x < 0){
    is_neg = true;
    x *= -1;
  }

  for(int divisor = 1000000000, index = 0; divisor > 0; divisor /= 10, index++){
    numbers[index] = x / divisor;
    x %= divisor;
  }

  for(int i = 9; i > -1; i--){
    printf("index: %d, value: %d\n", i, numbers[i]);
  }


  return x - 100 - is_neg;
}
