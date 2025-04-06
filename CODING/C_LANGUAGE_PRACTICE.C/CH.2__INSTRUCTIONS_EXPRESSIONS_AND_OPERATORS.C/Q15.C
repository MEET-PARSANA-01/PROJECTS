/*
Create a program to calculate the Area of a Triangle.Area of triangle = ½*B*H
*/
#include <stdio.h>
int main()
{
  int Base, Height;
  float Area;
  printf("WELCOME TO AREA OF THE TRIANGLE CALCULATOR!\n");
  printf("ENTER THE VALUE OF THE BASE OF THE TRIANGLE:  ");
  scanf("%d", &Base);
  printf("NOW,ENTER THE VALUE OF THE HEIGHT OF THE TRIANGLE:  ");
  scanf("%d", &Height);

  Area = 0.5 * Base * Height;
  printf("THE AREA OF THE TRIANGLE WITH BASE %d AND HEIGHT %d IS %.2f", Base, Height, Area);

  return 0;
}