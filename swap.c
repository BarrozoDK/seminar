#include <stdio.h>

int main(void)
{
  int x = 28;
  int y = 50;

  printf("x is %i\n", x);
  printf("y is %i\n", y);

  // swapping...
  int temp = x;
  x = y;
  y = temp;
// im stupid

  printf("x is %i\n", x);
  printf("y is %i\n", y);
}
