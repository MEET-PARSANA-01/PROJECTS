#include <stdio.h>
#include <string.h>

int main()
{
  printf("WELCOME TO WRITE USER INPUT TO FILE!\n");
  FILE *file = fopen("user_input.txt", "w");
  if (!file)
  {
    printf("COULD NOT OPEN FILE!!!");
    return 1;
  }
  char input[100];
  while (1)
  {
    printf("\nENTER YOUR TEXT TO BE WRITTEN TO YOUR FILE:");
    fgets(input, 100, stdin);
    if (strcmp(input, "exit\n") == 0)
      break;
    fputs(input, file);
  }
  fclose(file);
  file = NULL;
  return 0;
}