// Given an integer value, convert it to a floating - point value and print both.

#include <stdio.h>
int main()
{
  int n;
  printf("WELCOME TO INTEGER TO FLOAT CONVERTER!\n");
  printf("ENTER AN INTEGER NUMBER: ");
  scanf("%d", &n);
  printf("THE INTEGER NUMBER YOU ENTERED IS %d\n\n", n);
  // EXPLICIT CONVERSION
  printf("THE INTEGER NUMBER AFTER CONVERTING IT TO A FLOAT NUMBER IS %f\n\n", (float)n);

  // IMPLICIT CONVERSION
  // float f = n;
  // printf("ORIGINAL NUMBER: %.2d\n", n);
  // printf("FLOAT NUMBER: %.2f", f);
  return 0;
}
