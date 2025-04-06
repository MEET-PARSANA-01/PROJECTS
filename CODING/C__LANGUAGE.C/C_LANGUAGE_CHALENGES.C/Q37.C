#include <stdio.h>
int main()
{
  int number;
  printf("WELCOME TO PRIME NUMBER FINDER\n");
  printf("ENTER THE NUMBER: ");
  scanf("%d", &number);

  int i = 2;
  while (i < number)
  {
    if (number % i == 0)
    {
      printf("%d IS  A PRIME NUMBER", number);

      return 0;
    }
    i++;
  }
  printf("%d IS NOT A PRIME NUMBER", number);
  return 0;
}