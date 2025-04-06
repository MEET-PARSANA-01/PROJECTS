#include <stdio.h>
int main()
{
  int number;
  printf("ENTER THE NUMBER: ");
  scanf("%d", &number);

  if (number > 0)
  {
    printf("THE ENTERED NUMBER IS POSITIVE.\n");
  }
  else if (number < 0)
  {
    printf("THE ENTERED NUMBER IS NEGATIVE.\n");
  }
  else
  {
    printf("THE NUMBER IS ZERO.\n");
  }
  return 0;
}