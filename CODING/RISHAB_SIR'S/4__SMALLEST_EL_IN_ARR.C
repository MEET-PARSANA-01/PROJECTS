// WRITE A PROGRAM TO FIND THE SMALLEST ELEMENT IN AN ARRAY.
#include <stdio.h>
int main()
{
  int size;
  printf("ENTER THE SIZE OF THE ARRAY: ");
  scanf("%d", &size);

  int min[size];

  printf("THE SIZE OF THE ARRAY IS %d", size);
  for (int i = 0; i < size; i++)
  {
    printf("\nENTER THE %d NUMBER: ", (i + 1));
    scanf(" %d", &min[i]);
  }
  int MIN = min[0];
  for (int i = 1; i < size; i++)
  {
    if (MIN > min[i])
    {
      MIN = min[i];
    }
  }
  printf("THE SMALLEST ELEMENT IN THE ARRAY IS %d", MIN);
}
