// WRITE A C PROGRAM TO COPY ONE STRING TO ANOTHER STRING WITHOUT USING LIBRARY FUNCTION.
#include <stdio.h>
int main()
{
  char KING[30] = "MEET, THE RULER";
  char TRUE[30];

  for (int i = 0; i < sizeof(KING); i++)
  {
    TRUE[i] = KING[i];
  }
  printf("%s", TRUE);

  return 0;
}