// Create a program using break to read inputs from the user in a loop and break the loop if a specific keyword(like "exit") is entered.
#include <stdio.h>
#include <string.h>
int main()
{
  char CHECKMATE[30];

  for (int i = 1; true; i++)
  {
    printf("\n\nENTER THE CORRECT KEYWORD TO EXIT FROM THE LOOP: ");
    scanf("%s", CHECKMATE);
    if (strcmp("EXIT", CHECKMATE) == 0)
    {
      break;
    }
  }
  printf("\n\nYOU ARE SUCCESSFULLY EXITED FROM THE LOOP!\n\n");

  return 0;
}
