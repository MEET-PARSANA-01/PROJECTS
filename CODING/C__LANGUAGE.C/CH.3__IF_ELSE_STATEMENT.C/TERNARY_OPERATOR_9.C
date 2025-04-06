/*
~~TERNARY OPERATOR
  1. Syntax: condition ? expression1 : expression2
  2. Condition: Boolean expression, evaluates to true or false.
  3. Expressions: Both expressions must return compatible types.
  4. Use Case: Suitable for simple conditional assignments.
  5. Readability: Good for simple conditions, but can reduce clarity if overused.
*/

#include <stdio.h>
int main()
{
  // SYNTAX: VARIABLE = EXPRESSION1 ? EXPRESSION2 : EXPRESSION3
  char gender;
  printf("ENTER YOUR GENDER : ");
  scanf(" %c", &gender);

  gender == 'M' ? printf("MALE") : printf("female");

  return 0;
}