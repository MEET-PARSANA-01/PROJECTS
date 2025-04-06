// Create a program to find the sum and average of all elements in an array.
#include <stdio.h>
int main()
{
  int sum;
  float average;
  int s_a[6] = {1, 2, 3, 4, 5, 6};
  for (int i = 0; i <= 6; i++)
  {
    sum += i;
  }
  printf("\nTHE SUM ALL ELEMENTS OF ARRAY IS %d\n", sum);
  // average = sum / 6; Implicit conversion
  average = (float)sum / 6; // Explicit conversion
  printf("\nTHE AVERAGE OF ALL ELEMENTS OF ARRAY IS %.2f", average);

  return 0;
}
