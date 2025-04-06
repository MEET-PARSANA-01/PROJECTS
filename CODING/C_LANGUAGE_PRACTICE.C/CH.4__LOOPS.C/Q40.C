// Create a program to check if a number is an Armstrong number(153 = CUBE OF 1 + CUBE OF 5 + CUDE OF 3).
#include <stdio.h>
int main()
{
  int n;
  printf("\nENTER THE NUMBER THAT YOU WANT TO CHECK: ");
  scanf("%d", &n);

  int sum = 0;
  int copy = n;
  for (int i = 0; copy > 0; copy /= 10 /*DECREASE THE NUMBER*/)
  {
    int digit = copy % 10 /*EXTRACT THE DIGITS AND THEN*/;
    sum = sum + digit * digit * digit;
  }
  if (sum == n)
  {
    printf("\n%d IS AN ARMSTRONG NUMBER", n);
  }
  else
  {
    printf("\n%d IS NOT AN ARMSTRONG NUMBER", n);
  }

  return 0;
}