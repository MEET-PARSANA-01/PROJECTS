/*
~~IF STATEMENT
  1. Syntax: Uses if () {} to check a condition.
  2. What is if: Executes block if condition is true, skips if false.
  3. Curly Braces can be omitted for single statements, but not recommended.
  4. Use Variables: Can store conditions in variables for use in if statements.
*/
#include <stdio.h>
int main()
{
  int age;
  printf("ENTER YOUR AGE: ");
  scanf("%d", &age);

  if (age >= 18)
  {
    printf("YOU ARE ELIGIBLE FOR GETTING YOUR LICENSE\n"); // THIS STATEMENT WILL PRINT ONLY IF THE CONDITION WILL BECOME TRUE.
  }
  printf("YOUR AGE IS :%d", age); // THIS STATEMENT WILL ALWAYS PRINT.
  return 0;
}