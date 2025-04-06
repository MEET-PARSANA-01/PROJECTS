// Q3.Write a C program to implement matrix multiplication.
#include <stdio.h>
int main()
{
  int king[3][3] = {{3, 3, 3}, {4, 4, 4}, {5, 5, 5}};
  int queen[3][3] = {{6, 6, 6}, {7, 7, 7}, {8, 8, 8}};
  int KingQueen[3][3];

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      KingQueen[i][j] = king[i][j] * queen[i][j];
    }
  }
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf(" %d ", KingQueen[i][j]);
    }
    printf("\n");
  }

  return 0;
}