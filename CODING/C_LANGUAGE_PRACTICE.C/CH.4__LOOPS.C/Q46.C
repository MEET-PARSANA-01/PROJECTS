// Create a program using for to display if a number is prime or not.
#include <stdio.h>
int main()
{
  int n;
  printf("\n\nENTER THE NUMBER YOU WANT TO CHECK: ");
  scanf("%d", &n);

  int Result = 1;

  for (int i = 2; i < n; i++)
  {
    if (n % i == 0)
    {
      printf("\n\n--> %d IS NOT A \"PRIME\" NUMBER!\n\n", n);
      Result = 0;
      break;
    }
  }


  if (Result == 1)
  {
    printf("\n\n--> %d IS A \"PRIME\" NUMBER!\n\n", n);
  }


  if (n == 2)
  {
    printf("\n\n--> %d IS A \"PRIME\" NUMBER!\n\n", n);
  }


  if (n == 1 || n == 0 || n < 0)
  {
    printf("\n\n--> INVALID INPUT!\n\n");
  }
  return 0;
}
