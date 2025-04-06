// PATTERNS USING LOOPS(OF * AND ALPHABETS).
#include <stdio.h>
int main()
{
  int r;
  char C = 'A';
  printf("ENTER THE NUMBER OF ROWS: ");
  scanf("%d", &r);

  for (int i = 1; i <= r; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("M");
    }
    printf("\n");
  }
  printf("\n\n");

  for (int i = 1; i <= r; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("%c", C);
      C++;
    }
    printf("\n");
  }

  return 0;
}