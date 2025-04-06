// Q1.Implement a program that reverses a given string entered by the user using the strrev function and displays the reversed string.
#include <stdio.h>
#include <string.h>

int main()
{
  char Villain[30];
  printf("\n\nENTER YOUR FULLNAME: ");
  fgets(Villain, 30, stdin);

  strrev(Villain);

  printf("%s", Villain);
  printf("\n\n");
  return 0;
}