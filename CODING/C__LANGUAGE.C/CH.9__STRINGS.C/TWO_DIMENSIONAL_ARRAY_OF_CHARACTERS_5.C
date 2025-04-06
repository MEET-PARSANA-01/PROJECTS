/*
~2-D ARRAY OF CHARACTERS(IT MEANS,1-D ARRAY OF STRINGS KE LIYE AAPKO 2-D ARRAY OF CHARACTERS BANANA PADEGA):

 1. Matrix of Characters: In a 2D array of characters each row represents a string.
 2. String Array: Often used to store multiple strings of the same maximum length.
 3. Null Termination: Each string in the array must end with a null character '\0’.
 4. Fixed Width: All strings have a fixed maximum width, defined by the column size of the 2D array.
 5. Row Access: Access a specific string (row) with single indexing,e.g., charArray[0] accesses the first string.
 6. Character Access: Access individual characters with double indexing,e.g., charArray[1][2] accesses the 3rd character of the 2nd string.
 7. Initialization: Can be initialized row by row using string literals,e.g., char charArray[3][4] = {"abc", "def", "ghi"};.
*/

#include <stdio.h>
#include <string.h>
int main()
{
  char names[5][20] = {"YUG", "MIHIR", "ANURAG", "HEPPIN", "MEET"};
  for (int i = 0; i < 5; i++)
  {
    puts(names[i]);
    printf("\n");
  }

  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < strlen(names[i]); j++)
    {
      printf("%c", names[i][j]);
    }
    printf("\n");
  }

  return 0;
}