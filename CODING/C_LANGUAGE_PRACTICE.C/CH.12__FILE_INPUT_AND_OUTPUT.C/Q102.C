// Write a program that takes user input and writes it to a file,ensuring each entry is on a new line.
#include <stdio.h>
#include <string.h>
int main()
{
  FILE *File = fopen("SECOND_FILE.TXT", "w");
  if (File == NULL)
  {
    printf("THE REQUESTED FILE COULD NOT BE OPENED!\n");
    return 1;
  }
  char meet[100];
  while (1)
  {
    printf("\nENTER THE TEXT TO BE WRITTEN TO YOUR FILE: ");
    fgets(meet, 100, stdin);
    if (strcmp(meet, "EXIT\n") == 0)
      break;
    fputs(meet, File);
  }
  fclose(File);
  File = NULL;
  return 0;
}