#include <stdio.h>
int main()
{
  int r;
  printf("\nENTER THE NUMBER OF ROWS: ");
  scanf("%d", &r);

  // LEFT-ALIGNED TRIANGLE PYRAMID
  for (int i = 1; i <= r; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      printf(" M");
    }
    printf("\n");
  }
  printf("\n\n");
  // INVERTED LEFT-ALIGNED TRIANGLE PYRAMID
  for (int i = 1; i <= r; i++)
  {
    for (int j = r; j >= i; j--)
    {
      printf(" M");
    }
    printf("\n");
  }

  return 0;
}