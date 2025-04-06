// Create a program to sum all odd numbers from 1 to a specified number N.

#include <stdio.h>
int main()
{
  int n;
  printf("\nWELCOME TO ODD NUMBER SUM PRINTER!!\n\n");
  printf("ENTER THE NUMBER UPTO WHICH YOU WANT TO PRINT SUM: ");
  scanf("%d", &n);

  int sum = 0;
  for (int i = 1; i <= n; i += 2)
  {
    sum = sum + i;
  }
  printf("THE SUM OF ALL ODD NUMBERS FROM 1 TO  %d IS %d", n, sum);

  return 0;
}
/*
~~LEARNINGS
  1.Uninitialized variable sum: The variable sum is used without being initialized, which leads to undefined behavior.
  2.Infinite loop: In the for loop, i + 2 is evaluated but doesn't increment i. You need to use i += 2
  3.Logic clarity: Adding the first odd number (1) and incrementing correctly can make the program behave as expected.


~~EXPLANATION OF CHANGES
  1.Initialize sum: Setting sum = 0 ensures you have a proper starting value.
  2.Fix the for loop increment: Replaced i + 2 with i += 2 to correctly increment i in steps of 2.
  3.Improved readability: Ensured consistent formatting and a newline at the end for better output appearance.
*/