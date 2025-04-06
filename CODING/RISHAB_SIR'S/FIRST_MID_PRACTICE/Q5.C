// CREATE A PROGRAM TO CALCULATE SUM OF ALL ELEMENTS OF A 2-D ARRAY
#include <stdio.h>
int main()
{
  int SOLDIER[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  int SUM = 0;

  for (int i = 0; i < 10; i++)
  {
    SUM = SUM + SOLDIER[i];
  }

  printf("THE SUM OF ALL ELEMENTS OF THE ARRAY IS %d", SUM);

  return 0;
}