// WRITE A PROGRAM TO FIND THE SMALLEST & LARGEST ELEMENT IN AN ARRAY.
#include <stdio.h>
int main()
{
  int MINISTER[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  int Max = MINISTER[0];
  int Min = MINISTER[0];

  for (int i = 0; i < 10; i++)
  {
    if (Max < MINISTER[i])
    {
      Max = MINISTER[i];
    }
  }

  for (int i = 0; i < 10; i++)
  {
    if (Min > MINISTER[i])
    {
      Min = MINISTER[i];
    }
  }

  printf("MAX ELEMENT IN THE ARRAY IS %d\n\n", Max);
  printf("MIN ELEMENT IN THE ARRAY IS %d\n\n", Min);

  return 0;
}