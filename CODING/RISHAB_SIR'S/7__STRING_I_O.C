// WRITE A PROGRAM TO INPUT FULL NAME OF THE USER AND THEN PRINT IT(STRINGS).
#include <stdio.h>
int main()
{
  char FullName[30];
  printf("\nENTER YOUR FULLNAME: ");
  fgets(FullName, 30, stdin);

  printf("\nYOUR FULL NAME IS %s", FullName);

  return 0;
}