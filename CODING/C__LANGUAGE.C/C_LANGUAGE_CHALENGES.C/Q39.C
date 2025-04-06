#include <stdio.h>
int main()
{
  int number;
  printf("WELCOME TO FIBONACCI SERIES PRINTER\n");
  printf("ENTER THE NUMBER: ");
  scanf("%d", &number);

  printf(" 0");
  if (number > 0)
  {
    printf(" 1");
  }
  int prev = 0;
  int next = 1;
  while (prev + next <= number)
  {
    int temp = prev + next;
    printf(" %d", temp);
    prev = next;
    next = temp;
  }

  return 0;
}