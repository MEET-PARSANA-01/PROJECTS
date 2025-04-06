#include <stdio.h>
int main()
{
  int num1, num2;
  printf("ENTER THE FIRST NUMBER: ");
  scanf("%d", &num1);
  printf("NOW,ENTER THE SECOND NUMBER: ");
  scanf("%d", &num2);

  printf("THE FOLLOWING ARE THE RESULTS OF VARIOUS OPERATIONS");
  printf("\n%d + %d = %d", num1, num2, (num1 + num2));
  printf("\n%d - %d = %d", num1, num2, (num1 - num2));
  printf("\n%d * %d = %d", num1, num2, (num1 * num2));
  printf("\n%d / %d = %d", num1, num2, (num1 / num2));
  printf("\n%d modulo %d = %d", num1, num2, (num1 % num2));


  return 0;
}