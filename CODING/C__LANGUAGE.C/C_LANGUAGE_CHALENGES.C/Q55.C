#include <stdio.h>
void increment(int);

int main()
{
  int num;
  printf("WELCOME TO SHOWING CALL BY VALUE");
  printf("\nENTER THE NUMBER: ");
  scanf("%d", &num);

  printf("\nBEFORE : VALUE OF NUM IS %d", num);
  increment(num);
  printf("\nAFTER : VALUE OF NUM IS %d", num);

  return 0;
}
void increment(int a) // NUM ME A KI VALUE COPY HUE THI
{
  printf("\nIN FUNCTION BEFORE : VALUE OF A IS %d", a);
  a++;
  printf("\nIN THE FUNCTION AFTER : VALUE OF A IS %d", a);
}