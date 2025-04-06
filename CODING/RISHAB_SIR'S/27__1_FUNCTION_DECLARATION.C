// 1.WITH RETURN TYPE AND WITH ARGUMENTS.
#include <stdio.h>

int Sum(int A, int B)
{

  int Result = A + B;

  return Result;
}

int main()
{
  int M, N;
  printf("\n\n--> ENTER THE FIRST NUMBER: ");
  scanf("%d", &M);

  printf("\n\n--> ENTER THE SECOND NUMBER: ");
  scanf("%d", &N);

  int RESULT = Sum(M, N);

  printf("\n\n--> THE SUM OF %d AND %d IS %d\n\n", M, N, RESULT);

  return 0;
}
