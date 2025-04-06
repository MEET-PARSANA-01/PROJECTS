#include <stdio.h>
#include <stdlib.h>
int main()
{
  int size;
  printf("WELCOME TO OUR WORLD OF DYNAMIC ARRAY\n");
  printf("ENTER THE NUMBER OF ELEMENTS: ");
  scanf("%d", &size);

  float *arr = (float *)malloc(size * sizeof(float));
  if (arr == NULL)
  {
    printf("SHORT OF MEMORY!!!!!");
    return 1;
  }

  for (int i = 0; i < size; i++)
  {
    printf("NOW ENTER ELEMENT NO. %d :", (i + 1));
    scanf("%f", &arr[i]);
  }

  printf("\n HERE ARE YOUR ELEMENTS: ");
  for (int i = 0; i < size; i++)
  {
    printf(" %.2f", arr[i]);
  }

  free(arr); // FREE
  arr = NULL;

  return 0;
}
