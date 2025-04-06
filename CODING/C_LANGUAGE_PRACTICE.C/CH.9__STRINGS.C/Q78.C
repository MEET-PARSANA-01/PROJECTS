// Read a line of text from the user using fgets and then print it using puts.
#include <stdio.h>
int main()
{
  printf("WELCOME TO USING FGETS AND PUTS FUNCTIONS!\n");
  char dost[100];
  printf("ENTER THE TEXT YOU WANT TO PRINT: ");
  fgets(dost, 100, stdin);
  printf("YOUR ENTERED TEXT IS: ");
  puts(dost);

  return 0;
}