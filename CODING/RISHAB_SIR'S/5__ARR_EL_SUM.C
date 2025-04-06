// CREATE A PROGRAM TO CALCULATE SUM OF ALL ELEMENTS OF A 2-D ARRAY
// NEW LEARNING : YOU CAN SKIP CURLY BRACES IN LOOPS AND IF-ELSE STATEMENT IN CASE OF SINGLE STATEMENT.
#include <stdio.h>
int main()
{
  int sum = 0;
  int arr[3][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      sum = sum + arr[i][j];
    }
  }
  printf("\n\n\nTHE SUM OF ALL ELEMENTS OF ARRAY IS %d\n", sum);
  return 0;
}