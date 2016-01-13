#include <stdio.h>
#include <inttypes.h>

typedef struct{
  int8_t x;
  int8_t y;
} Point;

int main(){
  Point p1; // memory not initialized
  Point p2 = { 3, 4 }; // initialized
  Point points[] = {[4] = {1, 2}, {3, 4}, {.y=5, .x=6}, [15] = {7, 9}}; // index 0 to 15

  printf("p1 -> loc: %p; size: %d, int: %d\n", (void*)&p1, (int)sizeof(Point), (int)sizeof(int));
  printf("p2 -> loc: %p\n", (void*)&p2);
  printf("points -> loc: %p; size: %d\n", (void*)&points, (int)sizeof(points));
}
