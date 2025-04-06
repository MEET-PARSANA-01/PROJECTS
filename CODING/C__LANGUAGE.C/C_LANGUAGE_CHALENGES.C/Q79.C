#include <stdio.h>
int main()
{
  char day[10];
  char month[15];
  int year;

  printf("WELCOME TO FORMATTING DATE!\n\n");
  printf("PLEASE ENTER THE CURRENT DAY: ");
  scanf("%s", day);
  printf("NOW,ENTER THE CURRENT MONTH: ");
  scanf("%s", month);
  printf("FINALLY,ENTER THE CURRENT YEAR: ");
  scanf("%d", &year);

  printf("\nTHE CURRENT DATE IS: %s/%s/%04d", day, month, year);

  return 0;
}