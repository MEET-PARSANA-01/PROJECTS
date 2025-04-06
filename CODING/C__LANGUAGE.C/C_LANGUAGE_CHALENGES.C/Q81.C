#include <stdio.h>
#include <string.h>

int main()
{
  const char STORED_PASSWORD[] = "MEET03";
  char password[50];
  printf("WELCOME TO SECURE SYSTEM.\n\n");
  printf("ENTER YOUR PASSWORD: ");
  scanf("%s", password);

  if (strcmp(password, STORED_PASSWORD) == 0)
  {
    puts("ACCESS GRANTED TO THE SYSTEMS.");
  }
  else
  {
    puts("ACCESS DENIED TO THE SYSTEMS.");
  }

  return 0;
}