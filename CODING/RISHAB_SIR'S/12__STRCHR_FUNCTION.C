// WRITE A PROGRAM TO FIND THE NUMBER OF VOWELS PRESENT IN THE STRING ENTERED BY THE USER.
// #include <stdio.h>
// #include <string.h>

// void CountVowel(char KING[100]);

// char KING[100];
// char *QUEEN = KING;

// int main()
// {
//   printf("\n-->ENTER THE STRING TO FIND NUMBER OF VOWELS IN IT: ");
//   fgets(KING, 100, stdin);

//   CountVowel(KING);

//   return 0;
// }
// void CountVowel(char KING[100])
// {
//   char Vowel[] = "AEIOUaeiou";
//   int count = 0;
//   while (*QUEEN != '\0')
//   {
//     if (strchr(Vowel, *QUEEN))
//     {
//       count++;
//     }
//     *QUEEN++;
//   }
//   printf("\n-->THE NUMBER OF VOWELS PRESENT IN THE ENTERED STRING IS %d\n", count);
//   printf("\n");
// }


#include <stdio.h>
#include <string.h>
int main()
{
  char LION[25];
  printf("\n-->ENTER THE STRING TO FIND NUMBER OF VOWELS IN IT: ");
  fgets(LION, 25, stdin);

  char *LIONESS = LION;
  char Vowel[] = "AEIOUaeiou";

  int count = 0;
  while (*LIONESS != '\0')
  {
    if (strchr(Vowel, *LIONESS))
    {
      count++;
    }
    *LIONESS++;
  }
  printf("\n-->THE NUMBER OF VOWELS FOUND IN THE ENTERED STRING IS %d\n", count);
  printf("\n");

  return 0;
}