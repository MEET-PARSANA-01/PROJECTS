// Implement a void minmax(int *a, int *b, int *min, int *max) function that takes two integer pointers a and b as input and assigns the smaller value to min and the larger value to max using call by reference.Write a main function to test it with different values.
#include <stdio.h>

void Min_Max(int *KING, int *VILLAIN, int *Min, int *Max)
{
  printf("\nTHE LARGER VALUE IS %d AND THE SMALLER VALUE IS %d\n\n", *Max, *Min);
}

int main()
{

  int a, b;
  printf("\nENTER THE VALUE OF \"a\": ");
  scanf("%d", &a);
  printf("\nFINALLY,ENTER THE VALUE OF \"b\": ");
  scanf("%d", &b);

  int MAX, MIN;
  if (a > b)
  {
    MAX = a;
    MIN = b;
  }
  else
  {
    MAX = b;
    MIN = a;
  }

  Min_Max(&a, &b, &MIN, &MAX);

  return 0;
}