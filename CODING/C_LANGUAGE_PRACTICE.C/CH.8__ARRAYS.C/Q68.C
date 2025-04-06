// Create a program to find the maximum and minimum element in an array.
#include <stdio.h>
int main()
{
  int king[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  int max = king[0];
  int min = king[0];

  for (int i = 0; i < 10; i++)
  {
    if (max < king[i])
    {
      max = king[i];
    }
  }
  for (int j = 0; j < 10; j++)
  {
    if (min > king[j])
    {
      min = king[j];
    }
  }
  printf("\nMINIMUM ELEMENT: %d\n\nMAXIMUM ELEMENT: %d\n", min, max);
  return 0;
}