// Create a program to print the area of a circle by inputting its radius.
#include <stdio.h>
int main()
{
  const float PI = 3.14;
  int Radius;
  float Area;
  printf("WELCOME TO AREA OF CIRCLE CALCULATION!\n");
  printf("ENTER THE RADIUS OF THE CIRCLE: ");
  scanf("%d", &Radius);

  Area = PI * Radius * Radius;

  printf("THE AREA OF THE CIRCLE WITH RADIUS %d IS %.2f", Radius, Area);

  return 0;
}