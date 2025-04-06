// Create a program to swap two numbers.
#include <stdio.h>
int main()
{
  int m, n, temp;
  printf("WELCOME TO PROGRAM OF SWAPPING TWO NUMBERS!\n");
  printf("ENTER THE VALUE OF M: ");
  scanf("%d", &m);
  printf("NOW,ENTER THE VALUE OF N: ");
  scanf("%d", &n);

  temp = m;
  m = n;
  n = temp;

  printf("THE VALUE IN M AFTER SWAPPING IS %d\n", m);
  printf("THE VALUE IN N AFTER SWAPPING IS %d", n);

  return 0;
}