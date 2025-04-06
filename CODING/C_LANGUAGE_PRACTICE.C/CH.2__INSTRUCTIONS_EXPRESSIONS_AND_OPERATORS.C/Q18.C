// Create a program to convert Fahrenheit to Celsius °C = (°F - 32) × 5 / 9
#include <stdio.h>
int main()
{
  float Celsius, Fahrenheit;
  printf("\nWELCOME TO TEMPERATURE CONVERTER FROM FAHRENHEIT TO CELSIUS!\n");
  printf("ENTER THE TEMPERATURE IN FAHRENHEIT: ");
  scanf("%f", &Fahrenheit);

  Celsius = (Fahrenheit - 32) * 5 / 9;

  printf("THE TEMPERATURE IN DEGREE CELSIUS IS %.2f", Celsius);

  return 0;
}