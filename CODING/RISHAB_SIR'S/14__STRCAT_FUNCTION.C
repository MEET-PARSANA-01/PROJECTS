// WRITE A PROGRAM TO INPUT FIRST NAME AND LAST NAME OF THE USER SAPERATELY AND THEN CONCATINATE BOTH WITH THE HELP OF strcat FUNCTION AND THEN PRINT WHOLE NAME.
#include <stdio.h>
#include <string.h>
int main()
{
  char FirstName[25];
  printf("\n -->ENTER YOUR FIRSTNAME: ");
  scanf("%s", FirstName);

  char LastName[25];
  printf("\n -->ENTER YOUR LASTNAME: ");
  scanf("%s", LastName);

  printf("\n");

  strcat(FirstName, LastName);

  printf(" -->YOUR FULLNAME IS %s\n", FirstName);
  printf("\n");

  return 0;
}