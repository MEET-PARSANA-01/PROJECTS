// Write a function that adds that takes 4 int parameters and returns the sum.
#include <stdio.h>

int sum(int, int, int, int);

int main()
{
  sum(2, 3, 4, 5);

  return 0;
}
int sum(int a, int b, int c, int d)
{
  int summation = a + b + c + d;
  printf("THE SUMMATION OF GIVEN INT PARAMETERS IS %d", summation);
  return summation;
}
