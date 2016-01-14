#include <stdio.h>
#include <inttypes.h>
#include <stdlib.h>

typedef struct {
  int16_t radius;
  int16_t x;
  int16_t y;
} Circle;

int main(){
  int8_t num = 10;
  int8_t size = sizeof(Circle);
  Circle *circles = malloc(num * size);

  for(int8_t i = 0; i < num; i++){
    *(((int16_t*)(circles + i)) + 0) = 1;
    *(((int16_t*)(circles + i)) + 1) = 2;
    *(((int16_t*)(circles + i)) + 2) = 3;
  }

  for(int8_t i = 0; i < num; i++){
    printf("location %p; radius: %d; x: %d; y: %d\n", (void*)(circles + i), (circles + i)->radius, (circles + i)->x, (circles + i)->y);
  }

  free(circles);
}
