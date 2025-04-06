// Create a program to check whether a given number is prime using while.
#include <stdio.h>
int main()
{
  int n;
  printf("ENTER THE NUMBER: ");
  scanf("%d", &n);

  while (n % 2 == 0)
  {
    printf("%d IS A PRIME NUMBER!", n);
    break;
  }
  if (n % 2 != 0)
  {
    printf("%d IS NOT A PRIME NUMBER!", n);
  }

  return 0;
}