/*
I.WRITING DATA TO A FILE
  1. Functions: Use fputc, fputs, fwrite, or fprintf for writing data.
  2. Open Modes: Open file in write ("w"), append ("a"), or update ("w+","a+") mode.
  3. Buffer Flushing: fflush() forces write buffer to flush, ensuring data is saved.
  4. Text vs. Binary: Choose write function and mode based on file type (text or binary).
*/
#include <stdio.h>
int main()
{
  FILE *file_pointer; // DECLARING A FILE POINTER

  // OPENING FILE WITH FILE NAME AND MODE
  file_pointer = fopen("THAR.TXT", "w");
  if (file_pointer == NULL)
  {
    printf("REQUESTED FILE COULD NOT BE OPENED!");
    return 1;
  }

  // WRITE FORMATTED TEXT TO THE FILE
  fprintf(file_pointer, "THIS IS MY FIRST WRITE OPERATION\n");
  fprintf(file_pointer, "SQUARE OF %d IS %d", 3, 9);

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