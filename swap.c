#include <stdio.h>

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main(void)
{

  int x = 55;
  int y = 50;

  printf("x is %i\n", x);
  printf("y is %i\n", y);

  // swapping...
  swap(&x, &y);

  printf("x is %i\n", x);
  printf("y is %i\n", y);
}
