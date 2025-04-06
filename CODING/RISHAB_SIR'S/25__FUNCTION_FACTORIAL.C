#include <stdio.h>

void FACTORIAL(int m)
{
  int w = 1;
  for (int i = 1; i <= m; i++)
  {
    w = w * i;
  }
  printf("\n\n--> THE FACTORIAL OF %d IS %d\n\n", m, w);
}

int main()
{

  int n;
  printf("\n\n--> ENTER THE NUMBER: ");
  scanf("%d", &n);

  FACTORIAL(n);

  return 0;
}