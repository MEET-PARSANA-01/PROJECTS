// Q2.Create a program that concatenates two strings provided by the user using the strcat function and displays the resulting concatenated string.
#include <stdio.h>
#include <string.h>

int main()
{
  printf("\n");

  char FirstName[25];
  printf("ENTER YOUR FIRSTNAME: ");
  scanf("%s", FirstName);

  printf("\n");

  char LastName[25];
  printf("ENTER YOUR LASTNAME: ");
  scanf("%s", LastName);

  // char FullName[35] = strcat(FirstName,LastName);
  strcat(FirstName, LastName);
  printf("\n");

  printf("YOUR FULL NAME IS %s", FirstName);
  printf("\n\n");
  return 0;
}