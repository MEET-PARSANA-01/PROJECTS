#include <stdio.h>
int main()
{
  int number;
  printf("ENTER THE NUMBER: ");
  scanf("%d", &number);

  printf("%d IS THE ABSOLUTE VALUE", (number > 0 ? number : -number));
  return 0;
}