// WRITE A PROGRAM TO PRINT FIBONACCI SERIES UPTO A NUMBER WHICH IS ENTERED BY THE USER.
#include <stdio.h>
int main()
{
  int terms;
  printf("\nENTER THE NUMBER OF TERMS UPTO WHICH YOU WANT TO PRINT FIBONACCI SERIES: ");
  scanf("%d", &terms);

  printf("\n");

  printf(" 0 ");

  if (terms > 0)
  {
    printf(" 1 ");
  }

  int previous = 0;
  int next = 1;

  while (previous + next <= terms)
  {

    int series = previous + next;
    printf(" %d ", series);
    previous = next;
    next = series;
  }

  return 0;
}