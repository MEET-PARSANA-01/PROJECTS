// Create a program using do-while to find password checker until a valid password is entered.
#include <stdio.h>
#include <string.h>

int main()
{
  const char VALID_PASSWORD[] = "KMIENEGT";

  char PASSWORD[30];
  printf("WELCOME TO SECURE SYSTEM\n\n");
  do
  {
    printf("ENTER THE CORRECT PASSWORD TO EXIT THE LOOP: ");
    // fgets(PASSWORD, 30, stdin); //WHY ?
    scanf("%s", PASSWORD);

  } while (strcmp(PASSWORD, VALID_PASSWORD) != 0);
  printf("\n\nACCESS GRANTED!");

  return 0;
}