#include <stdio.h>
int main()
{
  int number;
  printf("ENTER A NUMBER: ");
  scanf("%d", &number);

  if (number % 2 == 0)
  {
    printf("THE ENTERED NUMBER IS A EVEN NUMBER.\n");
  }
  else
  {
    printf("THE ENTERED NUMBER IS A ODD NUMBER.\n");
  }
  return 0;
}