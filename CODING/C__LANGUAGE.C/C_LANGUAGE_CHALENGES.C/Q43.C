#include <stdio.h>
int main()
{

  int number;

  do
  {
    printf("PLEASE ENTER A POSITIVE NUMBER: ");
    scanf("%d", &number);

  } while (number <= 0);

  printf("YOU HAVE SUCCESSFULLY ENTERED A POSITIVE NUMBER");
  return 0;
}