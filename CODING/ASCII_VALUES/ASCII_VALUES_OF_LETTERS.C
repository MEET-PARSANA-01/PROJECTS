#include <stdio.h>
int main()
{
  char c = 'a';
  int value = 97;
  int count = 1;

  printf("\nASCII VALUE OF SMALL a TO z:\n\n");
  for (int i = 1; i <= 26; i++)
  {
    printf("%d. %c = %d\n\n", count, c, value);
    count++;
    c++;
    value++;
  }

  printf("\n\n");

  char C = 'A';
  int Value = 65;
  int Count = 1;

  printf("\nASCII VALUE OF CAPITAL A TO Z:\n\n");
  for (int i = 1; i <= 26; i++)
  {
    printf("%d. %c = %d\n\n", Count, C, Value);
    Count++;
    C++;
    Value++;
  }

  return 0;
}