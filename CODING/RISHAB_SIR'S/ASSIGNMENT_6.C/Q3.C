// Q3.Implement a program that reverses a given string entered by the user without using the strrev function and displays the reversed string.
#include <stdio.h>
#include <string.h>

int main()
{
  char KING[30];
  printf("\nENTER YOUR FIRST NAME: ");
  scanf("%s", KING);

  char Villain[30];

  for (int i = strlen(KING) - 1; i >= 0; i--)
  {
    Villain[strlen(KING) - 1 - i/*THIS I IS FOR ASSIGNING KING'S LAST ELEMENT TO VILLAIN'S FIRST ELEMENT*/] = KING[i];
  }

  printf("\nYOUR NAME IN REVERSE IS %s", Villain);

  return 0;
}