/*
F.CLOSE A FILE
   1. fclose() Function: Used to close an open file pointed to by a FILE *pointer.
   2. Release Resources: Frees up the system resources associated with the file.
   3. Flush Buffer: Writes any remaining data in the file buffer to the file.
   4. Nullify Pointer: Good practice to set the file pointer to NULL after closing.
   5. Error Handling: Check the return value for successful closure (0 is successful, EOF is an error).
*/
#include <stdio.h>
int main()
{
  FILE *file_pointer; // DECLARING A FILE POINTER

  // OPENING FILE WITH FILE NAME AND MODE
  file_pointer = fopen("MEET.TXT", "r");
  if (file_pointer == NULL)
  {
    printf("REQUESTED FILE COULD NOT BE OPENED!");
    return 1;
  }
  // IMPORTANT! MUST CLOSE FILE POINTER
  int result = fclose(file_pointer);
  if (result == 0)
  {
    file_pointer = NULL;
  }
  else
  {
    printf("\nFILE WAS NOT CLOSED PROPERLY!");
    return 1;
  }
  return 0;
}