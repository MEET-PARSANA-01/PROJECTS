/*
G.READING A DATA FROM A FILE
   1. Functions: Use fgetc, fgets, fread, or fscanf to read from files.
   2. Modes: Open the file in read mode ("r") or read/update mode("r+").
   3. Buffer Management: Ensure buffers are properly sized, especially with fgets and fread.
   4. Binary vs. Text: Choose read functions based on whether the file is binary or text.
*/
#include <stdio.h>
int main()
{
  FILE *file_pointer; // DECLARING A FILE POINTER
  char text[100];

  // OPENING FILE WITH FILE NAME AND MODE
  file_pointer = fopen("MEET.TXT", "r");
  if (file_pointer == NULL)
  {
    printf("REQUESTED FILE COULD NOT BE OPENED!");
    return 1;
  }

  fgets(text, 100, file_pointer);
  printf("\n %s", text);

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
