#include <stdio.h>
int main()
{
  int num1, num2;
  printf("WELCOME TO LCM CALCULATOR\n");
  printf("ENTER THE FIRST NUMBER: ");
  scanf("%d", &num1);
  printf("NOW,ENTER THE SECOND NUMBER: ");
  scanf("%d", &num2);

  int min = num1 > num2 ? num1 : num2;// LCM OF 5 AND 3 IS 15
  int max = num1 * num2;

  for (int i = min; i <= max; i++)
  {
    if (i % num1 == 0 && i % num2 == 0)
    {
      printf("THE LCM OF %d AND %d IS :  %d", num1, num2, i);
      break;
    }
  }

  return 0;
}