#include <stdio.h>
int main()
{
  int number;
  int sum = 0;
  do
  {
    printf("ENTER THE NUMBER: ");
    scanf("%d", &number);
    sum += number;

  } while (number != 0);

  printf("THE SUM OF ALL ENTERED NUMBERS IS %d", sum);
  return 0;
}