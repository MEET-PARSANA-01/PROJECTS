/*
E.OPEN A FILE
  1. fopen() Function: Opens a file and returns a FILE * pointer for access.
  2. Modes: Specify mode (r, w, a, etc.) to open for reading, writing, appending, etc.
  3. Null on Failure: Returns NULL if the file cannot be opened.
  4. Error Checking: Always check for NULL to confirm file was opened successfully.
  5. Path: Can open files using relative or absolute paths.
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

  return 0;
}