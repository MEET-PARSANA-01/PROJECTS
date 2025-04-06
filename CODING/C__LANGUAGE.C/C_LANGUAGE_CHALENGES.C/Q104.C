#include <stdio.h>

int main()
{
  printf("WELCOME TO THE BIZZARE WORLD OF READING AND WRITING!\n");
  FILE *file = fopen("data.txt", "r+");
  if (!file)
  {
    printf("ERROR OPENING FILE!");
    return 1;
  }

  char buffer[100];
  fgets(buffer, 100, file);
  printf("READING FROM FILE I FOUND: %s", buffer);

  fseek(file, 0, SEEK_END);
  fputs("\nTHE MESSAGE WAS WRITTEN BY PROGRAMER\n", file);

  fclose(file);
  file = NULL;

  return 0;
}