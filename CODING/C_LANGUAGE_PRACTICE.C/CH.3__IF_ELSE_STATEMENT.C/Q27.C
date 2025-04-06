// Create a program to calculate the absolute value of a given integer using ternary operator.
#include <stdio.h>
int main()
{
  int n;
  printf("ENTER THE VALUE OF N: ");
  scanf("%d", &n);

  printf("THE ABSOLUTE VALUE OF %d IS %d", n, (n >= 0 ? n : -n));

  return 0;
}