#include <stdio.h>

void Even_odd(int m)
{
  if (m % 2 == 0)
  {
    printf("\n\n--> %d IS AN EVEN NUMBER\n\n", m);
  }
  else
  {
    printf("\n\n--> %d IS AN ODD NUMBER\n\n", m);
  }
}

int main()
{
  int n;
  printf("\n\n--> ENTER THE NUMBER: ");
  scanf("%d", &n);

  Even_odd(n);

  return 0;
}