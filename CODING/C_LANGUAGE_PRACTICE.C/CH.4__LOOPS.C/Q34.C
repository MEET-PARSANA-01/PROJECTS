// Create a program that computes the sum of the digits of an integer.(HELP)(CHALLENGING)
#include <stdio.h>
int main()
{
  int n;
  printf("WELCOME TO SUM CALCULATOR OF AN INTEGER NUMBER'S DIGITS!\n");
  printf("ENTER AN INTEGER NUMBER: ");
  scanf("%d", &n);

  int sum = 0;
  for (int i = 0; n > 0; n = n / 10)
  {
    sum = sum + (n % 10);
  }
  printf("THE SUM OF THE DIGITS OF THE INTEGER YOU ENTERED IS %d", sum);

  return 0;
}
/*
~~VERY VERY IMP
  General Rule for Modulus:
   If the first number (dividend) is smaller than the second number (divisor), the result of the modulus operation is the dividend itself.
   For example:
    3 % 5 = 3
    7 % 10 = 7
*/
