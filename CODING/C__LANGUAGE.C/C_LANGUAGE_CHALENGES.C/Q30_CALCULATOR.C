#include <stdio.h>
int main()
{
  int first, second;
  char opr;
  printf("WELCOME TO CALCULATOR\n");
  printf("ENTER THE FIRST NUMBER: ");
  scanf("%d", &first);
  printf("ENTER THE SECOND NUMBER: ");
  scanf("%d", &second);
  printf("ENTER THE OPERATOR( + , -, *, /): ");
  scanf(" %c", &opr);

  int result;
  int invalid = 0;

  switch (opr)
  {
  case '+':
    result = first + second;
    break;
  case '-':
    result = first - second;
    break;
  case '*':
    result = first * second;
    break;
  case '/':
    result = first / second;
    break;
  default:
    invalid = 1;

    break;
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