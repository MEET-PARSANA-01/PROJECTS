// Create a program that determines if a number is positive, negative, or zero.

#include <stdio.h>
int main()
{
  int n;
  printf("WELCOME TO POSITIVE,NEGATIVE AND ZERO NUMBER CHECKER!\n");
  printf("ENTER A NUMBER: ");
  scanf("%d", &n);

  if (n > 0)
  {
    printf("THE NUMBER YOU ENTERED IS A POSITIVE NUMBER!");
  }
  else if (n < 0)
  {
    printf("THR NUMBER YOU ENTERED IS A NEGATIVE NUMBER!");
  }
  else
  {
    printf("THE NUMBER YOU ENTERED IS A ZERO!");
  }

  return 0;
}