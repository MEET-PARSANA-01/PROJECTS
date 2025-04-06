#include <stdio.h>

int main()
{
  printf("WELCOME TO FILE COPYING\n");
  FILE *source_file = fopen("MEET.TXT", "r");
  FILE *dest_file = fopen("COPY.TXT", "w");

  if (source_file == NULL || dest_file == NULL)
  {
    printf("ERROR WHILE OPENING FILE!!");
    return 1;
  }

  // INFINITE LOOP
  while (1)
  {
    char c = fgetc(source_file);
    if (c == EOF)
      break;
    fputc(c, dest_file);
    printf(".");
  }
  fclose(source_file);
  fclose(dest_file);
  dest_file = source_file = NULL;

  return 0;
}