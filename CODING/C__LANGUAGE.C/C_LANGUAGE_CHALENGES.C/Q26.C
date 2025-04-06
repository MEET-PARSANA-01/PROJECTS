#include <stdio.h>
int main()
{
  int number;
  printf("ENTER A NUMBER: ");
  scanf("%d", &number);

  int answer = number % 2 == 0 ? printf("THE NUMBER IS EVEN\n")
                               : printf("THE NUMBER IS ODD");
  return 0;
}