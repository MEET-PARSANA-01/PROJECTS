// Q2.Write a function to calculate the factorial of a given number.
#include <stdio.h>

long long factorial(int);

int n;
long long f = 1;

int main()
{
  printf("\nENTER THE NUMBER OF WHICH YOU WANT TO FIND FACTORIAL: ");
  scanf("%d", &n);

  if (n < 0)
  {
    printf("\nFACTORIAL OF NEGATIVE NUMBERS IS NOT DEFINED\n");
  }
  else
  {
    long long result = factorial(n);
    printf("THE FACTORIAL OF %d IS %d", n, result);
  }
  return 0;
}

long long factorial(int n)
{
  for (int i = 1; i <= n; i++)
  {

    f = f * i;
  }
  return f;
}