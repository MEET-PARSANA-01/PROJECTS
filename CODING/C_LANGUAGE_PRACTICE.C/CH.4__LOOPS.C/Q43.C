// Create a program that prompts the user to enter a positive number.Use a do-while loop to keep asking for the number until the user enters a valid positive number.
#include <stdio.h>
int main()
{
  int king;

  do
  {
    printf("\nENTER A POSITIVE NUMBER: ");
    scanf("%d", &king);
  } while (king < 0);
  printf("\nYOU ARE SUCCESSFULLY EXITED FROM THE LOOP!\n\n");

  return 0;
}