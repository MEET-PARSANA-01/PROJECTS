// CREATE A PROGRAM THAT PRINTS VARIOUS PATTERNS
#include <stdio.h>
int main()
{
  int r;
  printf("ENTER THE NUMBER OF ROWS YOU WANT TO PRINT: ");
  scanf("%d", &r);

  for (int i = 1; i <= r; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      printf(" M");
    }
    printf("\n");
  }
  printf("\n\n");

  for (int i = 1; i <= r; i++)
  {
    for (int j = r; j >= i; j--)
    {
      printf(" M");
    }
    printf("\n");
  }
  printf("\n\n");
  for (int i = 1; i <= r; i++)
  {
    for (int j = r - 1; j >= i; j--)
    {
      printf(" ");
    }
    for (int j = 0; j < i; j++)
    {
      printf("*");
    }
    printf("\n");
  }
  printf("\n\n\n");
  for (int i = 1; i <= r; i++)
  {
    for (int j = r - 1; j >= i; j--)
    {
      printf(" ");
    }
    for (int j = 0; j < i; j++)
    {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}