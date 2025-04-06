// Create a simple text-based user login system that compares a stored password string using strcmp.
#include <stdio.h>
#include <string.h>
int main()
{
  const char STORED_PASSWORD[20] = "MKP03";
  char Password[20];
  printf("ENTER THE PASSWORD: ");
  scanf(" %s", Password);

  if (strcmp(Password, STORED_PASSWORD) == 0)
  {
    puts("ACCESS GRANTED TO THE SYSTEM!");
  }
  else
  {
    puts("ACCESS DENIED TO THE SYSTEM!");
  }

  return 0;
}