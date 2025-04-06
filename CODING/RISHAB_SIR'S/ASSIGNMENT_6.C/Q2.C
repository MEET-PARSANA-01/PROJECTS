// Q2.Write a program that takes a sentence as input from the user, converts all lowercase characters to uppercase using the strupr function, and displays the modified sentence.
#include <stdio.h>
#include <string.h>

int main()
{
  char KING[30];
  printf("\nENTER YOUR FIRST NAME: ");
  scanf("%s", KING);

  printf("\n\nYOUR NAME IN UPPERCASE IS %s", strupr(KING));

  return 0;
}