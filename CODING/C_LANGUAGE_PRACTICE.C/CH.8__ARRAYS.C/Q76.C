// Create a program to do sum and average of all elements in a 2-array.
#include <stdio.h>
int main()
{
  int ATTITUDE[][2] = {{1, 2}, {3, 4}};

  int SUM = 0;
  float Average = 0.0;
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      SUM = SUM + ATTITUDE[i][j];
    }
  }
  Average = (float)SUM / 4;
  printf("\n\nTHE SUM OF ALL ELEMENTS OF THE ARRAY IS %d AND AVERAGE IS %.2f\n\n", SUM, Average);

  return 0;
}