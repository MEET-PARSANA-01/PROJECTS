/*
~~SWITCH CASE STATEMENT
   1. Multi-way Branching: switch provides a cleaner method for multi-way branching than multiple if-else statements when testing the same expression.
   2. Integer or Character Expressions: The switch expression must result in an integer or character value,used to match case labels.
   3. Case Labels: Represents individual branches. Execution jumps to the matching case label.
   4. Break Statement: Typically used to exit the switch block after a case is executed to prevent "fall through" to subsequent cases.
   5. Default Case: Optional. Executes if no case matches.Placed at the end of the switch block.
   6. Enhances Readability: For certain types of conditional logic, switch can make the code more readable compared to nested if-else statements.
*/

#include <stdio.h>
int main()
{
  // THE SWITCH EXPRESSION MUST RESULT IN AN INTEGER OR CHARACTER VALUE
  int DAY;
  printf("ENTER THE DAY NUMBER(1-7): ");
  scanf("%d", &DAY);

  switch (DAY)
  {
  case 1: // 1 REPRESENTS CONDITION
    printf("TODAY IS MONDAY.\n");
    break; // TYPICALLY USED TO EXIT THE SWITCH BLOCK
  case 2:
    printf("TODAY IS TUESDAY.\n");
    break;
  case 3:
    printf("TODAY IS WEDNESDAY.\n");
    break;
  case 4:
    printf("TODAY IS THURSDAY.\n");
    break;
  case 5:
    printf("TODAY IS FRIDAY.\n");
    break;
  case 6:
    printf("TODAY IS SATURDAY.\n");
    break;
  case 7:
    printf("TODAY IS SUNDAY.\n");
    break;
  default: // ELSE
    printf("DAY ENTERED IS INCORRECT.\n");
    break;
  }
  printf("DAY CALCULATION IS COMPLETED.");
  return 0;
}