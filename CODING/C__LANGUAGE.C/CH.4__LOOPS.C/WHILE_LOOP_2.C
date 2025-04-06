/*
~~WHILE LOOPS
  1. Iterations: Number of times the loop runs.
  2. Used for non-standard conditions.
  3. Repeating a block of code while a condition is true.
  4. Remember: Always include an update to avoid infinite loops.
*/

/* SYNTAX:
WHILE(COMDITION){
  // BODY OF THE LOOP
}
*/
#include <stdio.h>
int main()
{
  int num = 10;    // INITIALIZATION
  while (num >= 1) // CONDITION
  {
    printf("%d\n", num);
    num -= 1; // UPDATION
  }
  return 0;
}