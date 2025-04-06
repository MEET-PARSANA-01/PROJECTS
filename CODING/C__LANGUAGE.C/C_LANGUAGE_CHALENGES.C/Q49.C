#include <stdio.h>
int main()
{
  int number;
  while (1 /*TRUTHY VALUE ,IT MEANS THIS LOOP WILL BE AN INFINTE LOOP*/)
  {
    printf("\nENTER THE NUMBER: ");
    scanf("%d", &number);
    if (number == -1)
      break;
    printf("THE SQUARE OF %d IS :%d", number, number * number);
  }
  return 0;
}