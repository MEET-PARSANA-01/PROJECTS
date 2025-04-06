// WRITE A PROGRAM TO INPUT FULL NAME OF THE USER AND THEN PRINT IT IN REVERSE ORDER(STRINGS).
#include <stdio.h>
int main()
{

  char FirstName[25];
  printf("\nENTER YOUR FIRSTNAME: ");
  fgets(FirstName, 25, stdin);

  for (int i = 25; i >= 0; i--)
  {
    printf("%c", FirstName[i]);
  }

  return 0;
}
