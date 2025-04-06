/*
~~TYPE DECLARATION INSTRUCTIONS
  1. Define variable and function data types, guiding memory allocation.
  2. Syntax: data_type variable_name; e.g., int age;.
  3. Common Types: Include int, float, char, double.
  4. Allows immediate value assignment, e.g., int count = 10;.
  5. Scope: Dictates variable visibility, with local scope inside functions and global scope outside.
*/
#include <stdio.h>
int main()
{
  // VALID INSTRUCTIONS
  int age;
  int i = 10, j = 25;
  float temperature = 98.6;
  float a = 1.5, b = 1.99 + 2.4 * 1.44;
  float p = 5, q = p * 6;
  char name[50];
  int x, y, z = 5;

  return 0;
}