/*
~~NESTED IF STATEMENT
  1. Condition Hierarchy: Enables hierarchical condition checks.
  2. Complexity: Allows for detailed decision-making paths.
  3. Syntax: An if inside another if or else.
  4. Readability: Deep nesting can reduce code clarity.
*/

#include <stdio.h>
int main()
// ARITHMETIC OPERATORS ↠ RELATIONAL OPERATORS ↠ LOGICAL OPERATORS (PRECEDENCE OF OPERATORS)
//  THIS IS MEANT FOR HIERARCHIAL CONDITION CHECKS↡↡↡↡↡
{
  char is_indian;
  int age;

  printf("ARE YOU AN INDIAN CITIZEN(Y/N): ");
  scanf(" %c", &is_indian); // LEAVED SPACE BEFORE %C TO AVOID ANY PREVIOUS CHARACTER LIKE TAB
  printf("ENTER YOUR AGE: ");
  scanf("%d", &age);

  if (is_indian == 'Y')
  {
    // INSIDE THIS NESTED IF,ALL TYPE OF IF STATEMENT CAN BE WRITTEN
    // ALSO,YOU CAN MAKE INFINITE CHAINS OF IF ELSE STATEMENT 😮😮😮
    if (age <= 18) // THIS ↓↓ INNER WHOLE BLOCK WILL EXECUTE ONLY WHEN FIRST IF STATEMENT ↰↰↰ WILL BECOME TRUE
    {
      printf("YOU ARE NOT ELIGIBLE FOR GETTING YOUR LICENSE.\n");
    }
    else if (age > 70)
    {
      printf("YOU ARE A SENIOR,YOU CANNOT APPLY ANYMORE.\n");
    }
    else
    {
      printf("YOU ARE ELIGIBLE FOR GETTING YOUR LICENSE.\n");
    }
  }
  else
  {
    printf("YOU ARE NOT AN INDIAN CITIZEN ,HENCE YOU CANNOT APPLY FOR THE LICENSE./n");
  }

  return 0;
}