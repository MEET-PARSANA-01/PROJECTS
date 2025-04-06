/*
~~ESCAPE SEQUENCES
  1.\t: Insert a tab in the text at this point.
  2.\b: Insert a backspace in the text at this point.
  3.\n: Insert a newline in the text at this point.
  4.\': Insert a single quote character in the text at this point.
  5.\": Insert a double quote character in the text at this point.
  6.\\: Insert a backslash character in the text at this point.
*/

#include <stdio.h>
int main()
{
  printf("MEET PARSANA IS A KING\n");
  printf("MEET PARSANA IS A\tKING\n");
  printf("MEET PARSANA IS A\bKING\n"); // ISKING
  printf("\"MEET PARSANA\" IS A KING\n");
  printf("\'MEET PARSANA\' IS A KING\n");
  printf("\\MEET PARSANA\\ IS A KING");
  return 0;
}