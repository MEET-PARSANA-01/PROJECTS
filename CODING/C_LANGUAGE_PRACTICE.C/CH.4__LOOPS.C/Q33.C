// Write a function that calculates the factorial of a given number.

#include <stdio.h>
int main()
{
  int n;
  printf("WELCOME TO FACTORIAL CALCULATOR!\n");
  printf("ENTER THE NUMBER OF WHICH YOU WANT TO FIND FACTORIAL: ");
  scanf("%d", &n);

  int f = 1; // MISTAKE : EARLIER , I WROTE F = 0.
  for (int i = 1; i <= n; i++)
  {
    f = f * i;
  }
  printf("THE FACTORIAL OF %d IS %d", n, f);

  return 0;
}