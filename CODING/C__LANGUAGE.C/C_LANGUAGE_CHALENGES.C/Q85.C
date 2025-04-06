#include <stdio.h>
#include <string.h>

int is_palindrome(char arr[]);

int main()

{
  char text[20];
  printf("WELCOME TO PALINDROME STRING CHECKER!\n");
  printf("NOW , ENTER YOUR STRING: ");
  scanf("%s", text);

  if (is_palindrome(text))
  {
    puts("YOUR INPUT IS A PALINDROME!");
  }
  else
  {
    puts("YOUR INPUT IS NOT A PALINDROME!");
  }

  return 0;
}

int is_palindrome(char arr[])
{
  int len = strlen(arr);
  for (int i = 0; i < len / 2; i++)
  {
    if (arr[i] != arr[len - 1 - i])
    {
      return 0;
    }
  }
  return 1;
}