#include <stdio.h>
int main()
{
  int num;
  printf("ENTER THE NUMBER: ");
  scanf("%d", &num);
  int sum = 0;
  for (int i = 1; i <= num; i += 2)
  {
    sum += i;
  }
  printf("THE SUM OF ALL ODD NUMBERS FROM 1 TO %d IS %d", num, sum);
  return 0;
}