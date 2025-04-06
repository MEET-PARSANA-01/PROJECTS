//CALL BY VALUE
// #include <stdio.h>

// void SUM(int m, int n)
// {
//   int Result = m + n;
//   printf("\n\n--> THE SUM OF %d AND %d IS %d\n\n", m, n, Result);
// }

// int main()
// {
//   int a, b;

//   printf("\n\n--> ENTER THE FIRST NUMBER: ");
//   scanf("%d", &a);

//   printf("\n\n--> ENTER THE SECOND NUMBER: ");
//   scanf("%d", &b);

//   SUM(a, b);

//   return 0;
// }

//CALL BY REFERENCE
#include <stdio.h>

void SUM(int *m, int *n)
{
  int Result = *m + *n;
  printf("\n\n--> THE SUM OF %d AND %d IS %d\n\n", *m, *n, Result);
}

int main()
{
  int a, b;

  printf("\n\n--> ENTER THE FIRST NUMBER: ");
  scanf("%d", &a);

  printf("\n\n--> ENTER THE SECOND NUMBER: ");
  scanf("%d", &b);

  SUM(&a, &b);

  return 0;
}