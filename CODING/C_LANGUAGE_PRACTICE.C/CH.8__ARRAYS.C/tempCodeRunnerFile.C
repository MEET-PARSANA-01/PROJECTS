#include <stdio.h>

int main()
{
  int original_array[] = {1, 2, 3, 4, 2, 5};
  int size = sizeof(original_array) / sizeof(original_array[0]);
  int target_element = 2;
  int new_array[size];
  int new_size = 0;

  for (int i = 0; i < size; i++)
  {
    if (original_array[i] != target_element)
    {
      new_array[new_size++] = original_array[i];
    }
  }

  printf("Original Array: ");
  for (int i = 0; i < size; i++)
  {
    printf("%d ", original_array[i]);
  }
  printf("\n");

  printf("New Array: ");
  for (int i = 0; i < new_size; i++)
  {
    printf("%d ", new_array[i]);
  }
  printf("\n");

  return 0;
}