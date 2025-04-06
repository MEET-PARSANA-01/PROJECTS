#include <stdio.h>

void Sum(int A, int B)
{
  int Result = A + B;
  printf("\n\n--> THE SUM OF %d AND %d IS %d\n\n", A, B, Result);
}

int main()
{

  int M, N;
  printf("\n\n--> ENTER THE FIRST NUMBER: ");
  scanf("%d", &M);

  printf("\n\n--> ENTER THE SECOND NUMBER: ");
  scanf("%d", &N);

  Sum(M, N);

  return 0;
}

// #include <stdio.h>

// void Sum()
// {
//   int M, N;
//   printf("\n\n--> ENTER THE FIRST NUMBER: ");
//   scanf("%d", &M);

//   printf("\n\n--> ENTER THE SECOND NUMBER: ");
//   scanf("%d", &N);

//   int Result = M + N;
//   printf("\n\n--> THE SUM OF %d AND %d IS %d\n\n", M, N, Result);
// }

// int main()
// {
//   Sum();

//   return 0;
// }