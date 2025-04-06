// Create a function max that takes two float arguments and returns the larger value.
#include <stdio.h>

float max(float, float);
float result;
int main()
{
  float f, s;
  printf("ENTER THE VALUE OF FIRST NUMBER: ");
  scanf(" %f", &f);
  printf("FINALLY,ENTER THE VALUE OF SECOND NUMBER: ");
  scanf(" %f", &s);

  max(f, s);
  printf("\n\nTHE LARGEST VALUE OF THE TWO IS %.2f", result);
  return 0;
}
float max(float f, float s)
{
  result = f > s ? f : s;
  return result;
}