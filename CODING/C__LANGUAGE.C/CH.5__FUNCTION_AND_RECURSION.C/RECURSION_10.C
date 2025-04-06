/*
~~RECURSION
  1. Self-Calling: A function that calls itself to solve sub problems.
  2. Base Case: Essential to stop recursion and prevent infinite loops.
  3. Recursive Case: The condition under which the function keeps calling itself.
  4. Stack Usage: Consumes stack space with each call, risk of overflow.
  5. Applications: Ideal for divisible tasks, tree/graph traversals, sorting algorithms.
  6. Memory Intensive: More overhead than iterative solutions.
  7. Clarity: Often simplifies complex problems.
*/

// RECURSION : A FUNCTION THAT CALLS ITSELF TO SOLVE SUB-PROBLEMS
#include <stdio.h>

int factorial_using_loop(int);
int factorial_using_recursion(int);

int main()
{
  int res = factorial_using_loop(4);
  printf("\n\nFACTORIAL USING LOOP: %d", res);

  int res2 = factorial_using_recursion(6);
  printf("\n\nFACTORIAL USING LOOP: %d", res2);
  return 0;
}

int factorial_using_recursion(int num)
{
  printf(",");

  if (num == 0)
  {
    return 1; // BASE CASE : ESSENTIAL TO STOP RECURSION AND PREVENT INFINITE LOOPS.
    // RECURSIVE CASE : THE CONDITION UNDER WHICH THE FUNCTION KEEPS CALLING ITSELF.
  }
  return num * factorial_using_recursion(num - 1);
}

int factorial_using_loop(int num)
{
  printf(".");

  int result = 1;
  for (int i = 2; i <= num; i++)
  {
    result *= i;
  }
  return result;
}