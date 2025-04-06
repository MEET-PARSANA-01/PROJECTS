// Create a program to find if the given number is even or odd using ternary operator.
#include <stdio.h>
int main()
{
  int n, ans;
  printf("\nWELCOME TO EVEN NUMBER CHECKER!\n");
  printf("ENTER THE NUMBER: ");
  scanf("%d", &n);

  ans = n % 2 == 0 ? printf("THE ENTERED NUMBER IS AN EVEN NUMBER") : printf("THE ENTERED NUMBER IS NOT AN EVEN NUMBER");

  return 0;
}