// Call a function get_average that takes five int numbers and returns the average.
#include <stdio.h>

float Average(int, int, int, int, int);

int main()
{
  Average(5, 5, 5, 5, 5);
  Average(1, 1, 1, 1, 1);
  Average(6, 6, 6, 6, 6);
  Average(7, 64, 4, 64, 999);
  Average(2, 2, 2, 2, 9);
  return 0;
}
float Average(int a, int b, int c, int d, int e)//doubt about making code dynamic
{
  float average = (float)(a + b + c + d + e) / 5;
  printf("\nTHE AVERAGE OF THE GIVEN FIVE NUMBERS IS %.2f\n", average);
  return average;
}