// Create a program to merge two sorted arrays.
#include <stdio.h>
int main()
{
  int KING[] = {1, 2, 3, 4, 5, 6};
  int QUEEN[] = {6, 5, 4, 3, 2, 1};

  int KINGQUEEN[20];

  for (int i = 0; i < 6; i++)
  {
    KINGQUEEN[i] = KING[i];
    // for (int j = 6; j < 12; j++)
    // {
    //   KINGQUEEN[j] = QUEEN[j - 6]; WHY OUTPUT IS COMING SAME 
    // }
  }
  for (int j = 6; j < 12; j++)
  {
    KINGQUEEN[j] = QUEEN[j - 6];
  }

  printf("\n\n");
  for (int k = 0; k < 12; k++)
  {
    printf(" %d ", KINGQUEEN[k]);
  }
  printf("\n\n");

  return 0;
}