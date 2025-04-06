// Write a program that continuously reads integers from the user and prints their squares.Use an infinite loop and a break statement to exit when a special number(e.g., -1) is entered.
#include <stdio.h>
int main()
{
  int n;
  while (1)
  {
    printf("\n\nENTER THE NUMBER: ");
    scanf("%d", &n);
    printf("THE SQUARE OF %d IS %d", n, n * n);
    printf("\n");

    if (n == -1)
    {
      break;
    }
  }

  printf("\n\nYOU ARE SUCCESSFULLY EXITED FROM THE INFINITE LOOP\n\n");

  return 0;
}