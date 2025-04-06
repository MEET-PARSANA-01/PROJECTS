#include <stdio.h>
int main()
{
  int number;
  printf("WELCOME TO PALINDROME CHECKER:\n");
  printf("ENTER THE NUMBER: ");
  scanf("%d", &number);

  int reverse = 0;
  int copy = number;
  while (copy > 0)
  {
    reverse = (reverse * 10) + (copy % 10);
    copy /= 10;
  }
  if (reverse == number)
  {
    printf("THE NUMBER %d IS A PALINDROME", number);
  }
  else
  {
    printf("THE NUMBER %d IS NOT A PALINDROME", number);
  }

  return 0;
}