// Create a program that takes two numbers and shows result of all arithmetic operators(+, -, *, /, %).

#include <stdio.h>
int main()
{
  int f, s;
  printf("WELCOME TO SHOWING RESULT OF ALL ARITHMETIC OPERATORS!\n");
  printf("ENTER THE FIRST NUMBER: ");
  scanf("%d", &f);
  printf("NOW,ENTER THE SECOND NUMBER: ");
  scanf("%d", &s);

  printf("\nADDITION: %d + %d = %d\n\n", f, s, f + s);
  printf("SUBTRACTION: %d - %d = %d\n\n", f, s, f - s);
  printf("MULTIPLICATION: %d * %d = %d\n\n", f, s, f * s);

  /// Handle division and modulus carefully to avoid division by zero
  if (s != 0)
  {
    printf("DIVISION: %d / %d = %d\n\n", f, s, f / s);
    printf("MODULUS: %d %% %d = %d\n\n", f, s, f % s); // Use %% to escape the % symbol.(you can also use "modulo" word).
  }
  else
  {
    printf("DIVISION: Division by zero is undefined.\n\n");
    printf("MODULUS: Modulus by zero is undefined.\n");
  }

  return 0;
}
/*
~~LEARNING
  Your program has the structure set up correctly, but there is an issue: the variable result is not being updated for each arithmetic operation. Additionally, the modulus operator % is only valid when both numbers are integers and the divisor (second number) is non-zero.


~~KEY FIXES
  1.Arithmetic Calculations: Removed the unused result variable and directly placed the arithmetic operations in the printf statements.
  2.Division by Zero Check: Added a condition to ensure the second number (s) is not zero before performing division or modulus operations.
  3.Proper Escape for % in printf: Used %% to correctly print the modulus operator in the output.
*/