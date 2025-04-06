// Create a program that determines if a number is odd or even.

#include <stdio.h>
int main()
{
  int n;
  printf("WELCOME TO ODD AND EVEN NUMBER CHECKER!\n\n");
  printf("ENTER AN INTEGER NUMBER: ");
  scanf("%d", &n);

  if (n % 2 == 0)
  {
    printf("THE NUMBER YOU ENTERED IS AN EVEN NUMBER!");
  }
  else
  {
    printf("THE NUMBER YOU ENTERED IS AN ODD NUMBER!");
  }

  return 0;
}