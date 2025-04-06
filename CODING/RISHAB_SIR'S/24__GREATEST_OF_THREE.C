#include <stdio.h>

void GREATEST(int A, int B, int C)
{

  if (A > B && A > C)
  {
    printf("\n\n--> %d IS THE GREATEST OF THE THREE\n\n", A);
  }
  else if (B > C && B > A)
  {
    printf("\n\n--> %d IS THE GREATEST OF THE THREE\n\n", B);
  }
  else
  {
    printf("\n\n--> %d IS THE GREATEST OF THE THREE\n\n", C);
  }
}

int main()
{
  int m, n, o;
  printf("\n\n--> ENTER THE FIRST NUMBER: ");
  scanf("%d", &m);

  printf("\n\n--> ENTER THE FIRST NUMBER: ");
  scanf("%d", &n);

  printf("\n\n--> ENTER THE FIRST NUMBER: ");
  scanf("%d", &o);

  GREATEST(m, n, o);

  return 0;
}