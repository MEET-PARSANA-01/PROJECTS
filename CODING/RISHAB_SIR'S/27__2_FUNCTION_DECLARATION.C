// 2.WITH RETURN TYPE AND WITHOUT ARGUMENTS

#include <stdio.h>

int Sum()
{

  int m, n;

  printf("\n\n--> ENTER THE FIRST NUMBER: ");
  scanf("%d", &m);

  printf("\n\n--> ENTER THE SECOND NUMBER: ");
  scanf("%d", &n);

  int Result = m + n;

  printf("\n\n--> THE SUM OF %d AND %d IS %d\n\n", m, n, Result);

  return Result;
}

int main()
{

  Sum();

  return 0;
}