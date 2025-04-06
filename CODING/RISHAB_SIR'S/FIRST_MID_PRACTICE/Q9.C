// WRITE A PROGRAM TO FIND ALL INDICE AT WHICH A PARTICULAR CHARACTER IS PRESENT IN THE GIVEN STRING.
#include <stdio.h>
#include <string.h>

int main()
{
  char KING[25] = "MEET PARSANA";
  char *QUEEN = KING; // Start searching from the beginning
  char TARGET = 'E';

  printf("\n\ncharcter %c found at indices: ", TARGET);

  while ((QUEEN = strchr(QUEEN, TARGET)) != NULL) // Find next occurrence
  {
    printf("%ld ", QUEEN - KING);
    QUEEN++; // Move pointer ahead to continue searching
  }
  printf("\n\n");

  return 0;
}

