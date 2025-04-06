#include <stdio.h>
int main()
{
  FILE *file_pointer; // DECLARING A FILE POINTER

  // OPENING FILE WITH FILE NAME AND MODE
  file_pointer = fopen("THAR.TXT", "a");//THE ONLY CHANGE HERE IS TO WRITE a INSTEAD OF w
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