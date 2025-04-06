#include <stdio.h>

// RETURNS NUMBER OF OCCURRENCES
int search(int arr[][3], int rows, int cols, int element);

int main()
{
  printf("WELCOME TO SEARCHING IN 2D ARRAY!\n");
  int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {1,2,3,}};

  int occ = search(arr, 3, 3, 1);
  printf("\nSEARCHING FOR 1 FOUND %d occ", occ);

  occ = search(arr, 3, 3, 5);
  printf("\nSEARCHING FOR 5 FOUND %d occ", occ);

  occ = search(arr, 3, 3, 9);
  printf("\nSEARCHING FOR 9 FOUND %d occ", occ);

  return 0;
}

int search(int arr[][3], int rows, int cols, int element)
{
  int occ = 0;
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      if (arr[i][j] == element)
      {
        occ++;
      }
    }
  }
  return occ;
}