/*
~~CONTINUE STATEMENT
   1. Continue is used to skip one iteration or the current iteration
   2. Next Iteration: Immediately starts the next iteration of the loop.
   3. In while loop remember to do the increment manually before using continue.
   4. Used in Loops: Works within for, while, do while loops.
   5. Not for switch: Unlike break, not used in switch statements.
   6. Improves Logic: Helps in avoiding nested conditions within loops.
*/

#include <stdio.h>
int main()
{
  for (int i = 1; i <= 100; i += 1)
  {
    if (i % 2 == 0)
    {
      continue; // WHEREVER THIS CONDITIONS BECOMES TRUE,CONTINUE STATEMENT WILL AVOID THAT ITERATION(ONLY AVOIDS ONE ITERATION) AND IT WILL GO FOR UPDATION💪💪💪
      // note : IN WHILE LOOP REMEMBER TO DO THE UPDATION  MANUALLY BEFORE USING CONTINUE
    }
    printf("%d\n", i);
  }
  return 0;
}