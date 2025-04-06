/*
~~ARGUMENT VS PARAMETER
  1. Parameters: Variables in a function definition, acting as placeholders.
  2. Arguments: Actual values passed to a function at call time.
*/
#include <stdio.h>

int sum(int, int); // FUNCTION PROTOTYPE

int main()
{
  int first = 40, second = 50;
  int addition = sum(first, second);
  int add = sum(40, 50);//ARGUMENTS

  return 0;
}

int sum(int a,int b)/*PARAMETERS*/{
  return a + b;
}