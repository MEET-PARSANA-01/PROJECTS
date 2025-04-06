// Declare a pointer to a char and use it to read and print a character entered by the user.
#include <stdio.h>
int main()
{
  char KING;
  char *VILLAIN = &KING;

  printf("\nENTER A CHARACTER WHICH YOU WANT TO STORE IN \"KING\": ");
  scanf("%c", VILLAIN);
  printf("\n");

  printf("THE VALUE STORED INSIDE \'KING\' VARIABLE IS %c", *VILLAIN);
  printf("\n\n");

  return 0;
}