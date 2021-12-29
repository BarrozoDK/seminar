#include <stdio.h>

int main(void)
{
  int x = 24;
  int y = 50;

  printf("x is %i\n", x);
  printf("y is %i\n", y);

  // swapping...
  int temp = y;
  x = y;
  y = temp;
// im stupid

  printf("x is %i\n", x);
  printf("y is %i\n", y);
}
