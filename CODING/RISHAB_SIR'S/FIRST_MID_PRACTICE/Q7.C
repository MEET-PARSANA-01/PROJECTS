// WRITE A PROGRAM TO FIND THE NUMBER OF VOWELS PRESENT IN THE STRING ENTERED BY THE USER.
#include <stdio.h>
#include <string.h>
int main()
{
  char KING[20] = "MEET PARSANA";
  char *QUEEN = KING;

  char Vowel[12] = "AEIOUaeiou";

  int Result = 0;

  while (*QUEEN != '\0')
  {
    if (strchr(Vowel, *QUEEN))
    {
      Result++;
    }
    *QUEEN++;
  }
  printf("THE NUMBER OF VOWELS PRESENT IN THE STRING IS %d", Result);

  return 0;
}