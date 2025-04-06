#include <stdio.h>
int main()
{
  int number;
  printf("WELCOME TO ARMSTRONG NUMBER CHECKER:\n");
  printf("ENTER THE NUMBER: ");
  scanf("%d", &number);

  int sum = 0;
  int copy = number;
  while (copy > 0)
  {
    int digit = copy % 10;
    sum += digit * digit * digit;
    copy /= 10;
  }
  if (sum == number)
  {
    printf("THE NUMBER %d IS A ARMSTRONG NUMBER.", number);
  }
  else
  {
    printf("THE NUMBER %d IS NOT A ARMSTRONG NUMBER.", number);
  }

  return 0;
}