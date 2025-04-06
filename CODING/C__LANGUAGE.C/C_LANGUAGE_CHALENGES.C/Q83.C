#include <stdio.h>
#include <string.h>

void reverse_string(char str[]);

int main()
{
  char text[100];
  printf("WELCOME TO REVERSING A STRING!\n");
  printf("ENTER THE TEXT YOU WANT TO REVERSE: ");
  fgets(text, sizeof(text), stdin);

  puts("ORIGINAL STRING IS: ");
  puts(text);
  reverse_string(text);
  puts("TEXT AFTER REVERSAL IS: ");
  puts(text);

  return 0;
}

void reverse_string(char str[])
{
  int length = strlen(str);
  for (int i = 0; i < length / 2; i++)
  {
    char temp = str[i];
    str[i] = str[length - 1 - i];
    str[length - 1 - i] = temp;
  }
}
