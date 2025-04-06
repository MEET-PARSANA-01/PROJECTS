// Implement a trim function that removes leading and trailing spaces from a string.
// #include <stdio.h>
// #include <string.h>

// void Trim(char KING[])
// {
//   for (int j = 0; KING[j] != '\0'; j++)
//   {
//     if (KING[j] == ' ')
//     {
//       KING[j] = '-';
//     }
//   }
//   printf("THE STRING AFTER REMOVING LEADING & TRAILING SPACES IS %s", KING);
// }

// int main()
// {

//   char KING[] = "  ME ET  ";

//   printf("\nTHE ORIGINAL STRING IS %s\n", KING);
//   Trim(KING);

//   return 0;
// }
// #include <stdio.h>
// #include <string.h>

// void Trim(char KING[])
// {
//   for (int j = 0; j < '\0'; j++)
//   {
//     if (KING[j] == ' ')
//     {
//       KING[j] = '_';
//     }
//   }
//   printf("THE STRING AFTER REMOVING LEADING & TRAILING SPACES IS %s", KING);
// }

// int main()
// {

//   char KING[] = "ME ET";

//   printf("\nTHE ORIGINAL STRING IS %s\n", KING);
//   Trim(KING);

//   return 0;
// }
#include <stdio.h>

void Trim(char KING[])
{
  int start = 0, end, i, j;

  // Find first non-space character
  while (KING[start] == ' ')
  {
    start++;
  }

  // Find last non-space character
  end = start;
  while (KING[end] != '\0')
  {
    if (KING[end] != ' ')
    {
      j = end; // Update j to track the last non-space character
    }
    end++;
  }

  // Shift characters left
  for (i = 0; i <= j - start; i++)
  {
    KING[i] = KING[start + i];
  }

  // Add null terminator at the new end
  KING[i] = '\0';
}

int main()
{
  char KING[] = "   ME ET   "; // Example with leading and trailing spaces

  printf("THE ORIGINAL STRING IS: \"%s\"\n", KING);
  Trim(KING);
  printf("THE STRING AFTER TRIMMING IS: \"%s\"\n", KING);

  return 0;
}
