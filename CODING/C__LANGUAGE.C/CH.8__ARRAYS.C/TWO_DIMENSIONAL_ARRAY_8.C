/*
~~TWO DIMENSIONAL ARRAY
   1.STRUCTURE: THINK OF AS AN ARRAY OF ARRAYS,OFTEN USED TO REPRESENT MATRICES OR GRIDS.
   2.DECLARATION: int arr[3][4]; FOR 3 ROWS AND 4 COLUMNS.
   3.INITIALIZATION: int arr[2][2] = {{1,2},{3,4}};.
   4.ACCESSING ELEMENTS: USE ROW AND COLUMN INDICES,e.g.,arr[0][1] FOR THE FIRST ROW'S SECOND ELEMENT.
*/

#include <stdio.h>
int main()
{
  int marks[2][3];

  for (int row = 0; row < 2; row++)
  {
    for (int col = 0; col < 3; col++)
    {
      printf("ENTER THE MARKS FOR STUDENT %d:, SUBJECT %d IS: ", row + 1, col + 1);
      scanf(" %d", &marks[row][col]);
    }
  }

  for (int row = 0; row < 2; row++)
  {
    for (int col = 0; col < 3; col++)
    {
      printf("\nTHE MARKS FOR STUDENT %d, SUBJECT %d IS: %d", row + 1, col + 1, marks[row][col]);
    }
  }

  return 0;
}