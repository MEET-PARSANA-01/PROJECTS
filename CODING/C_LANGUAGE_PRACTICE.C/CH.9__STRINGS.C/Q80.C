// Write a program to convert a input string to uppercase.
#include <stdio.h>
#include <ctype.h>
#include <string.h> //ASK RISHAB SIR

int main()
{
  char First_name[25];
  printf("ENTER YOUR FIRSTNAME IN LOWERCASE: ");
  fgets(First_name, 25, stdin);

  First_name[25] = toupper(First_name[25]);
  printf("YOUR ENTERED LOWERCASE STRING IN UPPERCASE IS %s", First_name);

  return 0;
}