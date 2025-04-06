// Write a program that copies one text file's contents to another, stopping when it reaches EOF of the source file.
#include <stdio.h>
int main()
{
  printf("WELCOME TO COPYING FILES!\n");
  FILE *First_file = fopen("FIRST_FILE.TXT", "r");
  FILE *Second_file = fopen("SECOND_FILE.TXT", "w");

  if (First_file == NULL || Second_file == NULL)
  {
    printf("REQUESTED FILE COULD NOT BE OPENED!");
    return 1;
  }

  while (1)
  {
    char c = fgetc(First_file);
    if (c != EOF)
      break;
    fputc(c, Second_file);
    printf("*");
  }
  fclose(First_file);
  fclose(Second_file);
  First_file = Second_file = NULL;
  return 0;
}