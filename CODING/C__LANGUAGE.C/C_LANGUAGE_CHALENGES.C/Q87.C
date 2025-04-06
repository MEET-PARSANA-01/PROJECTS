#include <stdio.H>
#include <string.h>

int main()
{
  const char EXIT[] = "MEET";
  char command[20];
  printf("WELCOME TO OUR SYSTEM\n\n");
  while (1)
  {
    printf("ENTER YOUR COMMAND: ");
    scanf("%s", command);
    if (!strcmp(command, EXIT))
    {
      break;
    }
  }

  printf("\n\nEXITED SUCCESSFULLY!");
  return 0;
}
