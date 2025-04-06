#include <stdio.h>
int main()
{
  int number;
  int sum = 0;

  do
  {
    printf("ENTER A POSITIVE NUMBER: ");
    scanf("%d", &number);
    if (number < 0)
      continue;

    sum += number;
  } while (number != 0);

  printf("THE SUM OF ALL POSITIVE NUMBERS ENTERED BY THE USER IS :%d", sum);

  return 0;
}