// Create a program to search an element in a 2-D array.
#include <stdio.h>

void ElementSearch(int LION[2][2], int Element)
{
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      if (LION[i][j] == Element)
      {
        printf("\n\nFIRST TIME ELEMENT FOUND AT ROW: %d , COLUMN: %d\n\n", i, j);
        break;
      }
    }
  }
}
int main()
{
  int LION[2][2] = {{1, 2}, {3, 4}};

  ElementSearch(LION, 1);
  /*
   1 2
   3 4
  */
  return 0;
}