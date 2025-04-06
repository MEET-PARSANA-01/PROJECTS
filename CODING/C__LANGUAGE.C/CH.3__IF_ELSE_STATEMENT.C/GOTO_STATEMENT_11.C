/*
~~GOTO STATEMENT
   1. Unconditional Jump: goto directs the flow to a specific label.
   2. Label Usage: Defined by a name and colon (e.g., myLabel:).
   3. Limited Scope: Target label must be in the same function.
   4. Selective Use: Useful for exiting nested loops or error handling, but generally discouraged.
   5. Drawbacks: Can lead to hard-to-follow code.
*/


#include <stdio.h>
int main()
{
  int num;
input_number: // GOTO LABEL
  printf("ENTER THE NUMBER: ");
  scanf("%d", &num);

  if (num != 10)
  {
    goto input_number;
  }
  return 0;
}