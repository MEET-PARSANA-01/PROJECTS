// Write a function that uses pointer arithmetic to copy an array of char into another.
#include <stdio.h>
#include <string.h>

char GUCCI[] = {'K', 'I', 'N', 'G', '\0'}; // ARRAY OF CHARACTERS MUST BE NULL TERMINATED;

void copyArray(char *QUEEN, char *KING)
{
  while (*QUEEN != '\0')
  {
    *KING = *QUEEN;
    QUEEN++;
    KING++;
  }
  *KING = '\0';
}

int main()
{
  char CHANNEL[sizeof(GUCCI)]; // ENSURE THE DESTINATION ARRAY IS LARGE ENOUGH

  copyArray(GUCCI, CHANNEL);

  printf("\nTHE COPIED STRING IS \"%s\"\n\n", CHANNEL);

  return 0;
}