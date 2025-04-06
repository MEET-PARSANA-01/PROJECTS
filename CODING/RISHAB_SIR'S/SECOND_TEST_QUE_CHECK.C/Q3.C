// WRITE A C PROGRAM TO COPY ONE STRING TO ANOTHER STRING WITHOUT USING LIBRARY FUNCTION.
#include <stdio.h>

int main()
{
  char LION[30];
  printf("\nENTER THE STRING: ");
  fgets(LION, 30, stdin);

  char LIONESS[30];

  for (int i = 0; i < 30; i++)
  {
    LIONESS[i] = LION[i];
  }

  printf("THE ENTERED STRING IS : %s", LIONESS);

  return 0;
}