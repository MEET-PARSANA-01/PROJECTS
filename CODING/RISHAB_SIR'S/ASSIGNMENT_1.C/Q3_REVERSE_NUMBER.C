#include <stdio.h>
int main()
{
  int n, reversed_n, original_n;
  printf("\nENTER THE NUMBER YOU WANT TO REVERSE: ");
  scanf("%d", &n);

  original_n = n;

  for (reversed_n = 0; n > 0; n /= 10)
  {
    int digit = n % 10;
    reversed_n = reversed_n * 10 + digit;
  }
  printf("\nTHE ORIGINAL NUMBER IS : %d\n", original_n);
  printf("THE REVERSED NUMBER IS : %d", reversed_n);

  return 0;
}