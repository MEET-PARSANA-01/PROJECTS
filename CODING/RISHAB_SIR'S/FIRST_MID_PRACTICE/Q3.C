// Write a C program to check is a string is palindrome or not without using any external function.
//  #include <stdio.h>

// int main()
// {
//   char KING[100];
//   int i, LENGTH = 0, RESULT = 1;

//   // Input the string using fgets
//   printf("ENTER A STRING: ");
//   fgets(KING, sizeof(KING), stdin);

//   // Manually find the length of the string (excluding the newline character)
//   while (KING[LENGTH] != '\0')//'\n', '\0'
//   {
//     if (KING[LENGTH] == '\n')
//     {
//       KING[LENGTH] = '\0'; // Remove the newline character
//       break;
//     }
//     LENGTH++;
//   }

//   // Check for palindrome
//   for (i = 0; i < LENGTH / 2; i++)// length/2 bcoz we have to check only half of the string
//   {
//     if (KING[i] != KING[LENGTH - i - 1])
//     {
//       RESULT = 0;
//       break;
//     }
//   }

//   // Output result
//   if (RESULT)
//   {
//     printf("The string is a palindrome.\n");
//   }
//   else
//   {
//     printf("The string is not a palindrome.\n");
//   }

//   return 0;
// }
#include <stdio.h>
int main()
{
  char king[25] = "meet parsana";
  int i = 0, length = 0, Result = 1;

  while (king[length] != '\0')
  {
    if (king[length] == '\n')
    {
      king[length] = '\0';
      break;
    }
    length++;
  }

  for(int i = 0;i < length / 2;i++){
    
  }

  return 0;
}
