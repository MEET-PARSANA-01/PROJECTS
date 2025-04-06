/*
~~LOGICAL OPERATOR
   1. Types: && (AND), || (OR), ! (NOT)
   2. AND (&&): All conditions must be true for the result to be true.
   3. OR (||): Only one condition must be true for the result to be true.
   4. NOT (!): Inverts the value of a condition.
   5. Lower Priority than Arithmetic and Comparison operators.
*/

#include <stdio.h>
int main()
{
  char is_indian;
  int age;

  printf("ARE YOU AN INDIAN CITIZEN(Y/N): ");
  scanf(" %c", &is_indian); // LEAVED SPACE BEFORE %C TO AVOID ANY PREVIOUS CHARACTER LIKE TAB
  printf("ENTER YOUR AGE: ");
  scanf("%d", &age);

  if (is_indian == 'Y' && age >= 18 && age < 70)
  {
    printf("YOU ARE ELIGIBLE FOR GETTING YOUR LICENSE.\n");
  }
  else
  {
    printf("YOU ARE NOT ELIGIBLE FOR GETTING A LICENSE.\n");
  }
  printf("YOUR AGE IS %d", age);
  return 0;
}