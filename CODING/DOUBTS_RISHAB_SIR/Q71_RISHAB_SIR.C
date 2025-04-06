// Create a program to reverse an array.
#include <stdio.h>

int main()
{
  int size;
  printf("\nENTER THE SIZE OF THE ARRAY: ");
  scanf("%d", &size);

  int King[size];

  for (int i = 0; i < size; i++)
  {
    printf("\nENTER THE %d ELEMENT OF THE ARRAY: ", (i + 1));
    scanf("%d", &King[i]);
  }

  printf("\nORIGINAL ARRAY: ");

  for (int j = 0; j < size; j++)
  {
    printf(" %d", King[j]);
  }
  printf("\n");
  printf("\nREVERSED ARRAY: ");

  for (int k = size - 1; k >= 0; k--)//DOUBT : K = SIZE ,PROBLEM = GARBAGE VALUE
  {
    printf(" %d", King[k]);
  }
  return 0;
}