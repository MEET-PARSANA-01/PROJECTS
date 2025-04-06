#include <stdio.h>
int main()
{
  int num1, num2;
  printf("WELCOME TO GCD CALCULATOR\n");
  printf("ENTER THE FIRST NUMBER: ");
  scanf("%d", &num1);
  printf("NOW,ENTER THE SECOND NUMBER: ");
  scanf("%d", &num2);

  int min = num1 > num2 ? num1 : num2;
  for (int i = min; i >= 1; i--)
  {
    if (num1 % i == 0 && num2 % i == 0)
    {
      printf("THE GCD OF %d AND %d IS: %d", num1, num2, i);
      break;
    }
  }

  return 0;
}