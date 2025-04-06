// Create a program to verify if a number is a palindrome.
#include <stdio.h>
int main()
{
  int n, Reverse;
  printf("\n\nENTER THE NUMBER: ");
  scanf("%d", &n);

  int m = n;

  for (Reverse = 0; n > 0; n /= 10)
  {
    int Digit = n % 10;
    Reverse = Reverse * 10 + Digit;
  }

  if (Reverse == m) // IF YOU COMPARE THE n HERE , THEN  you're modifying n inside the for loop while simultaneously trying to compare it with Reverse later. However, after the loop, n will always be 0, making the comparison if (Reverse == n) incorrect. Instead, you should store the original value of n in a separate variable and compare it with Reverse.
  {
    printf("\n\n%d IS A PALINDROME\n\n", m);
  }
  else
  {
    printf("\n\n%d IS NOT A PALINDROME\n\n", m);
  }
  return 0;
}
