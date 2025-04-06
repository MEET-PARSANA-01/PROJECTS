// Write a program that asks the user for a filename, attempts to open it, and reports whether the operation was successful or not.
#include <stdio.h>
int main()
{
  char file_name[20];
  printf("WELCOME TO FILE OPENING TOOL!\n");
  printf("ENTER THE FILENAME: ");
  scanf("%19s", file_name);

  FILE *file = fopen(file_name, "r");
  if (file != NULL)
  {
    printf("\n%s WAS OPENED SUCCESSFULLY!", file_name);
    fclose(file);
  }
  else
  {
    printf("\nTHE FILE WAS NOT OPENED!");
  }

  return 0;
}