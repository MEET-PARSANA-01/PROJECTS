// Q1.WRITE A PROGRAM TO FIND THE AVERAGE OF ELEMENTS OF THE ARRAY.
#include <stdio.h>
int main()
{
  int UNIQUE[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int sum = 0;
  float Average = 0.0;

  for (int i = 0; i < 10; i++)
  {
    sum = sum + UNIQUE[i];
  }
  Average = (float)sum / 10.0;

  printf("THE AVERAGE OF THE ELEMENTS OF THE ARRAY IS %.2f", Average);

  return 0;
}