// Create a program to input name of the person and respond with ”Welcome NAME to KG Coding”
#include <stdio.h>
int main()
{
  char n;
  printf("WELCOME TO INPUTTING NAME OF A PERSON!\n");
  printf("ENTER YOUR FULL NAME: ");
  scanf(" %c", &n);

  printf("\"WELCOME %c TO KG CODING\"", n);

  return 0;
}