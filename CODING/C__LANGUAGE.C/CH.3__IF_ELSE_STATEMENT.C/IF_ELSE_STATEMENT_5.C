#include <stdio.h>
int main()
{
  int age;
  printf("ENTER YOUR AGE: ");
  scanf("%d", &age);

  if (age >= 18)
  {
    printf("YOU ARE ELIGIBLE FOR GETTING YOUR LICENSE.\n");
  }
  else // THE STATEMENT IN THE ELSE WILL PRINT ONLY WHEN IF STATEMENT WILL BECOME FALSE
  {
    printf("YOU ARE NOT ELIGIBLE FOR GETTING YOUR LICENSE.\n");
  }
  printf("YOUR AGE IS: %d", age);
  return 0;
}