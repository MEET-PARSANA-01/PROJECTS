// Q1.Create a function to check if a given number is prime or not.
#include <stdio.h>

void is_prime();
int n;

int main()
{
  printf("\nENTER THE NUMBER YOU WANT TO CHECK: ");
  scanf("%d", &n);

  is_prime();

  return 0;
}
void is_prime()
{
  if (n % 2 == 0)
  {
    printf("\nTHE ENTERED NUMBER IS A PRIME NUMBER\n");
  }
  else
  {
    printf("\nTHE ENTERED NUMBER IS NOT A PRIME NUMBER\n");
  }
}
