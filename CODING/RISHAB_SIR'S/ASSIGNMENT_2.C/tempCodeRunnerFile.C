// Q4.Design a function to calculate the area of a circle with a given radius.
#include <stdio.h>

void area(int);

const float pi = 3.14;
int radius;

int main()
{
  printf("\nENTER THE RADIUS OF THE CIRCLE: ");
  scanf("%d", &radius);

  area(radius);

  return 0;
}

void area(int radius)
{
  float area = pi * radius * radius;
  printf("\nTHE AREA OF THE CIRCLE WITH RADIUS %d IS %.2fsq.units\n", radius, area);
}