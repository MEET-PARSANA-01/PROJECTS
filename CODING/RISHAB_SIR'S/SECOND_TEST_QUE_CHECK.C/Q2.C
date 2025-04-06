// WRITE A PROGRAM TO CHECK WHETHER A STRING IS PALINDROME OR NOT.
#include <stdio.h>
#include <string.h>

void reverseString(char *HERO)
{
  int length = strlen(HERO);
  int i, j;
  char temp;

  for (i = 0, j = length - 1; i < j; i++, j--)
  {
    temp = HERO[i];
    HERO[i] = HERO[j];
    HERO[j] = temp;
  }
}

int main()
{
  char KING[50];
  printf("\n-->ENTER THE STRING: ");
  fgets(KING, sizeof(KING), stdin);

  // // Remove newline character if present
  size_t len = strlen(KING);
  if (len > 0 && KING[len - 1] == '\n') // THIS CODE IS USED TO REMOVE THE NEWLINE CHARACTER FROM THE STRING
  {
    KING[len - 1] = '\0';
  }

  char VILLAIN[50];

  strcpy(VILLAIN, KING);
  reverseString(VILLAIN);
  // strrev(VILLAIN); //WHY IT RETURNS 1 IF REVERSE THE STRING ??????? TURBO C

  int Result = strcmp(KING, VILLAIN);

  if (Result == 0)
  {
    printf("\n-->THE ENTERED STRING IS A PALINDROME!");
    printf("\n\n");
  }
  else
  {
    printf("\n-->THE ENTERED STRING IS NOT A PALINDROME!");
    printf("\n\n");
  }

  return 0;
}

/*
-->LEARNINGS FROM THIS CODE :-

   1.char KING[3];
     When you enter a string, fgets() reserves one byte for \0, meaning you can only input 2 characters.If the user enters more than 2 characters, only the first 2 will be stored, and the remaining characters remain in the input buffer.

   2.ABOUT STRREV FUNCTION:
     A.strrev() is NOT a standard C function. It is available only in some compilers (like Turbo C), but it won't work in modern compilers like GCC.

     B.Even if strrev() works, it modifies VILLAIN in place and does not return 1.

     C.You might be mistaking an unintended return value as 1.

   3.ABOUT INSUFFICIENT STRING COPYING:
     A.You don’t need a manual loop to copy a string.

     B.This loop doesn’t guarantee VILLAIN will be null-terminated, which can cause undefined behavior in strcmp().

   4.ABOUT INCORRECT STRING COMPARISON IN STRCMP():
     A.If VILLAIN is not correctly reversed (due to strrev() issues), comparison will fail.

   5.


*/
