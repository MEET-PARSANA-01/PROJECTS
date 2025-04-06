// Q3.Develop a program that prompts the user to enter a sentence and then counts the number of vowels(a, e, i, o, u) using the strchr function.
#include <stdio.h>
#include <string.h>

int main()
{
  char KING[30];
  char *QUEEN = KING;
  printf("\n\nENTER YOUR FULL NAME: ");
  fgets(KING, 30, stdin);

  char Vowel[] = "AEIOUaeiou";

  int count = 0;

  while (*QUEEN != '\0')
  {
    if (strchr(Vowel, *QUEEN))
    {
      count++;
    }
    *QUEEN++;
  }

  printf("\n\nTHE NUMBER OF VOWELS PRESENT IN THE ENTERED STRING IS %d", count);
  printf("\n\n");
  return 0;
}