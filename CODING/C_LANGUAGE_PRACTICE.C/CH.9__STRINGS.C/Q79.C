// Use printf with format specifiers to format and print a date string (day,month, year).
#include <stdio.h>
int main()
{
  char day[20];
  int month[20];
  int year;

  printf("\nWELCOME TO FORMATTING DATE\n\n");
  printf("ENTER THE DAY: ");
  scanf("%s", day);
  printf("NOW,ENTER THE MONTH: ");
  scanf("%s", month);
  printf("FINALLY,ENTER THE YEAR: ");
  scanf("%d", &year);

  printf("TODAY'S DATE IS %s/%s/%d", day, month, year);

  return 0;
}