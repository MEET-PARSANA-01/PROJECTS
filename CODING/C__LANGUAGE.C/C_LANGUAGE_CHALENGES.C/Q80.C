#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
  char text[100];
  printf("WELCOME TO CONVERTING STRING TO UPPERCASE!\n\n");
  printf("ENTER YOUR TEXT: ");
  fgets(text, sizeof(text), stdin);

  // for (int i = 0; text[i] != '\0'; i++)
  for (int i = 0; i < strlen(text); i++)
  {
    text[i] = toupper(text[i]);
  }

  printf("HERE IS YOUR FINAL OUTPUT\n%s", text);
  return 0;
}