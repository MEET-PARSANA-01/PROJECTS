#include <stdio.h>
#include <string.h>

int main()
{
  const char STORED_PASSWORD[] = "MEET03";
  char password[20];
  printf("WELCOME TO SECURE SYSTEM\n\n");
  do
  {
    printf("ENTER THE CORRECT PASSWORD: ");
    scanf("%s", password);
  } while (strcmp(password, STORED_PASSWORD) != 0);

  printf("\n\nACCESS GRANTED!");
  return 0;
}