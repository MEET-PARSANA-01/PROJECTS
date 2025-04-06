// Create a program to create a simple calculator that uses a switch statement to perform basic arithmetic operations like addition,subtraction, multiplication, and division.
#include <stdio.h> //PENDING ,ASK RISHAB SIR
int main()
{
  int f, s;
  char opr;
  printf("ENTER THE FIRST NUMBER: ");
  scanf("%d", &f);
  printf("FINALLY,ENTER THE SECOND NUMBER: ");
  scanf("%d", &s);
  printf("ENTER THE OPERATOR(+,-,*,/): ");
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
  default:
    invalid = 1;
  }
  if (invalid == 0)
  {
    printf("THE RESULT IS %d", result);
  }
  else
  {
    printf("INVALID OPERATOR");
  }

  return 0;
}
