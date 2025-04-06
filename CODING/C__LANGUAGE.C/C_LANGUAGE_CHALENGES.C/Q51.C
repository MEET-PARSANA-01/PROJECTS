#include <stdio.h>

int add(int, int, int, int);
int main()
{
  printf("WELCOME TO ADD FUNCTION\n");
  printf("\n%d", add(5, 4, 3, 2));
  printf("\n%d", add(6, 4, 3, 2));
  printf("\n%d", add(8, 4, 3, 2));
  return 0;
}
int add(int a, int b, int c, int d)
{
  int sum = a + b + c + d;
  return sum;
}