/*
H.END OF FILE(EOF)
  1. Indicator: EOF is a constant used to indicate the end of a file or an error.
  2. Value: Typically defined as -1 in C libraries.
  3. Stream Checking: Functions like fgetc() use EOF to signal end of input stream.
  4. Error Signaling: Can also signal an error if a file operation fails.
  5. Loop Control: Often used in loops reading from files to determine when to stop reading.
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

  // fgets(text, 100, file_pointer);
  // printf("\n %s", text);

  char c;
  do
  {
    c = fgetc(file_pointer);
    printf("%c", c);

  } while (c != EOF);

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
