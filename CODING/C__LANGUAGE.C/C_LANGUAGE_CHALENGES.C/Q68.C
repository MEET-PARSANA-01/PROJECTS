#include <stdio.h>
int main()
{
  int max_min[5];
  printf("\nWELCOME TO MAX AND MIN FINDER IN A ARRAY!");
  for (int i = 0; i < 5; i++)
  {
    printf("\nENTER THE %d NUMBER: ", (i + 1));
    scanf(" %d", &max_min[i]);
  }

  int max = max_min[0];
  int min = max_min[0];

  for (int i = 1; i < 5; i++)
  {
    if (max < max_min[i])
    {
      max = max_min[i];
    }
    if (min > max_min[i])
    {
      min = max_min[i];
    }
  }
  printf("\nTHE VALUE OF MAX IS %d AND MIN IS %d RESPECTIVELY", max, min);

  return 0;
}