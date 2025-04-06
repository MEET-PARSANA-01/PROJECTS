#include <stdio.h>
int main()
// SUM OF TWO NUMBERS USING SCANF
{
  int num1, num2, sum;
  printf("WELCOME TO SUM CALCULTOR\n");
  printf("ENTER THE FIRST NUMBER: ");
  scanf("%d", &num1);

  printf("NOW,ENTER THE SECOND NUMBER: ");
  scanf("%d", &num2);
  sum = num1 + num2;
  printf("THE SUM OF NUM1 AND NUM2 IS:%d", sum);
  return 0;
}