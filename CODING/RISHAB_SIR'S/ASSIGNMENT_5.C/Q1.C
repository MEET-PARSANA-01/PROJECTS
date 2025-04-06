// Q1.Write a program that takes a string input from the user and prints its length using the strlen function.
#include <stdio.h>
#include <string.h>

int main()
{
  char FullName[35];
  printf("\nENTER YOUR FULL NAME: ");
  fgets(FullName, 35, stdin);

  int stringLength = strlen(FullName);

  printf("\nTHE SIZE OF THE ENTERED STRING IS %d\n", stringLength);
  printf("\n");

  return 0;
}