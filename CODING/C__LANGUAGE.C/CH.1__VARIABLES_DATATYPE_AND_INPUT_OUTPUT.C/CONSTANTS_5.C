/*
~~CONSTANTS
  1. Fixed values in C code that do not change during execution.
  2. Constants are defined using #define or const(e.g., #define PI 3.1425).
  3. Enhances code readability and eases modifications.
  4. Constants are immutable.
*/

#include <stdio.h>
int main()
{
  const float pi = 3.14;
  printf("%f", pi);
  // pi=3.19 = not valid
  return 0;
}