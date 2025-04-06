// Q4.Write a C program to subtract two 3D matrices of the same size.
#include <stdio.h>
int main()
{

  int King[3][3][3] = {

      {{10, 10, 10}, {11, 11, 11}, {12, 12, 12}},
      {{13, 13, 13}, {14, 14, 14}, {15, 15, 15}},
      {{16, 16, 16}, {17, 17, 17}, {18, 18, 18}}

  };
  int Queen[3][3][3] = {

      {{1, 1, 1}, {2, 2, 2}, {3, 3, 3}},
      {{4, 4, 4}, {5, 5, 5}, {6, 6, 6}},
      {{7, 7, 7}, {8, 8, 8}, {9, 9, 9}}

  };

  int KingQueen[3][3][3];

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      for (int k = 0; k < 3; k++)
      {
        KingQueen[i][j][k] = King[i][j][k] - Queen[i][j][k];
      }
    }
  }
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      for (int k = 0; k < 3; k++)
      {
        printf(" %d ", KingQueen[i][j][k]);
      }
      printf("\n");
    }
    printf("\n");
  }

  return 0;
}
/*

 int KingQueen[3][3][3] = {

 {{9, 9, 9}, {9, 9, 9}, {9, 9, 9}},
 {{9, 9, 9}, {9, 9, 9}, {9, 9, 9}},
 {{9, 9, 9}, {9, 9, 9}, {9, 9, 9}}

 };

*/