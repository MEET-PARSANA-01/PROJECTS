#include <stdio.h>

float max(float, float);
int main()
{
  float first;
  float second;
  printf("ENTER THE FIRST FLOATING POINT NUMBER: ");
  scanf("%f", &first);
  printf("NOW,ENTER THE SECOND FLOATING POINT NUMBER: ");
  scanf("%f", &second);

  printf("THE LARGER OF THE TWO ENTERED NUMBERS IS : %.2f", max(first, second));
  return 0;
}
float max(float a, float b)
{

  float large = a > b ? a : b;
  return large;
}