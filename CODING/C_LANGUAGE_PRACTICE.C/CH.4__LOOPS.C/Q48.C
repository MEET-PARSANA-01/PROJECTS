// Create a program using continue to print only even numbers using continue for odd numbers.
#include <stdio.h>
int main()
{
  for (int i = 0; i <= 100; i++)
  {
    if (i % 2 == 0)
    {
      printf("%d\n", i);
    }
    else
    {
      continue;
    }
  }
  return 0;
}