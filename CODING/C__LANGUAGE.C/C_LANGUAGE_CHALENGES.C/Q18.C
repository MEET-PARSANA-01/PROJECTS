#include <stdio.h>
int main()
{
  float f, c;
  printf("WELCOME TO TEMPERATURE CONVERTER\n");
  printf("ENTER THE VALUE OF TEMPERATURE IN FEHRENHEIT: ");
  scanf("%f", &f);

  c = (f - 32) * 5 / 9;
  printf("THE VALUE OF TEMPERATURE IN DEGREE CELCIUS IS %.2f", c);

  return 0;
}