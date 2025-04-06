/*
~~IF ELSE IF LADDER
  1. Sequential Checking: The if-else ladder checks multiple conditions one after the other, from top to bottom.
  2. First True Condition: Executes the block of code associated with the first true condition it encounters.
  3. Exits After Execution: Once a true condition's code block is executed, it exits the ladder and skips the remaining conditions.
  4. Fallback with Else: If none of the conditions are true, the final else block (if present) executes as a default case.
*/

#include <stdio.h>
int main()
{
  int age;
  printf("ENTER YOUR AGE: ");
  scanf("%d", &age);
  // THIS IS MEANT FOR SEQUENTIAL CHECKING
  // WHEREVER ONE STATEMENT BECOME TRUE,ALL OTHER STATEMENTS WILL BE AVOIDED
  if (age <= 18)
  {
    printf("YOU ARE NOT ELIGIBLE FOR GETTING YOUR LICENSE.\n");
    // THIS ↙ STATEMENT WILL BE CHECK ONLY IN CASE WHEN FIRST BECOMES FALLS
    // YOU CAN WRITE ELSE IF STATEMENT AS MUCH AS YOU CAN
    // IN THE LAST, else STATEMENT IS NOT MANDATORY,IF YOU WANT TO WRITE THEN YOU CAN
    // IN CASE WHEN ALL OTHER CONDITIONS BECOME FALSE,THE else STATEMENT WILL EXECUTE
  }
  else if (age > 70)
  {
    printf("YOU ARE A SENIOR,YOU CANNOT APPLY ANYMORE.\n");
  }
  else
  {
    printf("YOU ARE ELIGIBLE FOR GETTING YOUR LICENSE.\n");
  }
  printf("YOUR AGE IS %d", age);

  return 0;
}