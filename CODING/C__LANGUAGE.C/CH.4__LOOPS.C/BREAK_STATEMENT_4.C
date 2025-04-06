/*
~~BREAK STATEMENT
   1. Break lets you stop a loop early, or break out of a loop
   2. Exits Loops: Ends for, while, do-while loops early.
   3. Ends Switch Cases: Prevents fall-through in switch cases.
   4. Immediate Effect: Immediately leaves the loop/switch.
   5. Controls Flow: Alters program flow for efficiency.
   6. Use Wisely: Important for readability.
*/

#include <stdio.h>
int main()
{
  int number;
  printf("WELCOME TO PRINTING TABLES:\n");
  printf("ENTER THE NUMBER: ");
  scanf("%d", &number);

  for (int i = 100; i >= 1; i -= 1)
  {
    printf("%d x %d = %d\n", number, i, number * i);
    if (i == 95)
    {
      break;
    }
  }
  return 0;
}