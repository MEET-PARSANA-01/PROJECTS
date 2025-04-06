// Create a program to calculate Perimeter of a rectangle.Perimeter of rectangle ABCD = A + B + C + D
#include <stdio.h>
int main()
{
  int a, b, c, d, p;
  printf("WELCOME TO RECTANGLE PERIMETER CALCULATOR!\n");
  printf("ENTER THE VALUE OF a: ");
  scanf("%d", &a);
  printf("ENTER THE VALUE OF b: ");
  scanf("%d", &b);
  printf("ENTER THE VALUE OF c: ");
  scanf("%d", &c);
  printf("ENTER THE VALUE OF d: ");
  scanf("%d", &d);

  p = a + b + c + d;
  printf("THE PERIMETER OF RECTANGLE IS %d", p);

  return 0;
}
