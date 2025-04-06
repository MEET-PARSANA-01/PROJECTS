#include <stdio.h>
int main()
{
  int num;
  printf("ENTER THE NUMBER: ");
  scanf("%d", &num);
  int sum = 0;
  for (int i = 0; num > 0; num = num / 10)
  {
    sum = sum + (num % 10);
  }
  printf("THE SUM OF DIGITS OF THE GIVEN INTEGER IS %d", sum);
  return 0;
}