// WRITE A PROGRAM TO FIND OUT THE SUM OF ALL ELEMENTS OF AN 2D ARRAY OF SIZE.
#include <stdio.h>
int main()
{
  int MILLION[2][2] = {{1, 2}, {3, 4}};
  int sum = 0;

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      sum = sum + MILLION[i][j];
    }
  }
  printf("SUM = %d", sum);

  return 0;
}