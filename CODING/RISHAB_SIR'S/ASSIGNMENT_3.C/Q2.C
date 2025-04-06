// Q2.Write a program in C to find the transpose of a given 2D matrix.
#include <stdio.h>
int main()
{
  int king[3][3] = {{1, 1, 1}, {2, 2, 2}, {3, 3, 3}};
  int queen[3][3];

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      queen[i][j] = king[j][i];
    }
  }

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf(" %d ", queen[i][j]);
    }
    printf("\n");
  }

  return 0;
}
