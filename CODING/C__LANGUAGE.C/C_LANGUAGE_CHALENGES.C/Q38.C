#include <stdio.h>
int main()
{
  int number;
  printf("WELCOME TO REVERSING THE NUMBER\n");
  printf("ENTER THE NUMBER: ");
  scanf("%d", &number);

  int reverse = 0;
  int copy = number;
  while (copy > 0)
  {
    reverse = (reverse * 10) + (copy % 10);
    copy /= 10;
  }
  printf("THE REVERSE OF %d IS : %d", number, reverse);

  return 0;
}