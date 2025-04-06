#include <stdio.h>
int main()
{
  char c;
  char *d = &c;

  printf("WELCOME TO SHOWCASING CHARACTER POINTERS\n");
  printf("ENTER THE NUMBER: ");
  scanf("%c", d);
  printf("THE VALUE OF C IS: %c\n", *d);
  printf("THE VALUE OF C IS: %c\n", c);

  return 0;
}