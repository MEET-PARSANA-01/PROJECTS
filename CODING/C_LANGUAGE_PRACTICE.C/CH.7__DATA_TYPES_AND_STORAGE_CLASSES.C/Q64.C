// Write a program to demonstrate the difference in range between long and long long by calculating the factorial of 20.
#include <stdio.h>
int main()
{
  long long factorial = 20922789888000 * 17 * 18 * 19 * 20;
  printf("THE FACTORIAL OF 20 IS %lld", factorial);

  return 0; // 2432902008176640000
}