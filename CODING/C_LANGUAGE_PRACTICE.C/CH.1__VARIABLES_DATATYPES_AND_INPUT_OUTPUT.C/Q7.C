// Create a program to print the area of a square by inputting its side length.
#include <stdio.h>
int main()
{
  int Side, Area;
  printf("WELCOME TO AREA OF THE SQUARE CALCULATOR!!\n");
  printf("ENTER THE SIDE LENGTH OF THE SQUARE: ");
  scanf("%d", &Side);

  Area = Side * Side;
  printf("THE AREA OF THE SQUARE WITH LENGTH %d IS %d sq. units", Side, Area);

  return 0;
}