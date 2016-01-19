#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>

int reverse(int x);

int main(){
  printf("x: %d, r: %d\n", 1534236469, reverse(1534236469));
  printf("x: %d, r: %d\n", 1, reverse(1));
  printf("x: %d, r: %d\n", 0, reverse(0));
  printf("x: %d, r: %d\n", -1, reverse(-1));
  printf("x: %d, r: %d\n", -1900800700, reverse(-1900800700));
}

int reverse(int x){
  int sign = 1, r = 0;

  if(x < 0){
    sign = -1;
    x *= sign;
  }

  while(x){
    if(r != (r*10)/10)
      return 0;
    r = (r * 10) + (x % 10);
    x /= 10;
  }

  r *= sign;
  return r;
}
