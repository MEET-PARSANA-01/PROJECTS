// 4.WITHOUT RETURN TYPE AND WITH ARGUMENTS

#include <stdio.h>

void Sum(int a, int b)
{
  int Result = a + b;
  printf("\n\n--> THE SUM OF %d AND %d IS %d\n\n", a, b, Result);
}

int main()
{
  int m, n;

  printf("\n\n--> ENTER THE FIRST NUMBER: ");
  scanf("%d", &m);

  printf("\n\n--> ENTER THE SECOND NUMBER: ");
  scanf("%d", &n);

  Sum(m, n);

  return 0;
}