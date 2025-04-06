/*
Create a program to define a constant for the mathematical value pi (3.14159) and use it to calculate and print the circumference of a circle with a radius input from user.
*/
#include <stdio.h>
int main()
{
  const float pi = 3.14;
  int Radius;
  float Circumference;
  printf("WELCOME TO CIRCUMFERENCE OF THE CIRCLE CALCULATOR!\n");
  printf("ENTER THE RADIUS OF THE CIRCLE: ");
  scanf("%d", &Radius);

  Circumference = 2 * pi * Radius;
  printf("THE CIRCUMFERENCE OF THE CIRCLE WITH THE RADIUS %d IS %.2f", Radius, Circumference);

  return 0;
}