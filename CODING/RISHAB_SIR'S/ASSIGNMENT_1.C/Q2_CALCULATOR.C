#include <stdio.h>
int main()
{
  int f, s;
  char opr;
  printf("\nENTER THE FIRST NUMBER: ");
  scanf("%d", &f);
  printf("\nFINALLY,ENTER THE SECOND NUMBER: ");
  scanf("%d", &s);
  printf("\nNOW,ENTER THE OPERATOR(+,-,*,/,%): ");
  scanf(" %c", &opr);

  int result;
  int invalid = 0;
  switch (opr)
  {
  case '+':
    result = f + s;
    break;
  case '-':
    result = f - s;
    break;
  case '*':
    result = f * s;
    break;
  case '/':
    result = f / s;
    break;
  case '%':
    result = f % s;
    break;
  default:
    invalid = 1;
    break;
  }
  if (invalid == 0)
  {
    printf("\nTHE RESULT IS %d\n", result);
  }
  else
  {
    printf("INVALID INPUT!\nPLEASE ENTER THE CORRECT INPUT");
  }

  return 0;
}