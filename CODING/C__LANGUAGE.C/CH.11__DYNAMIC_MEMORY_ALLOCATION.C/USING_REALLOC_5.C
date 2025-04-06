/*
E.USING REALLOC
   1. Resize Memory: realloc is used to resize previously allocated memory without losing the data.
   2. New Allocation: If passed a NULL pointer, it behaves like malloc.
   3. Freeing: If the new size is 0, it behaves like free, deallocating the memory.
   4. Data Preservation: Attempts to preserve the original data, even when moving to a new location.
   5. Return Value: Returns a pointer to the newly allocated memory, which may differ from the original pointer.
   6. Error Handling: Returns NULL on failure without freeing the original block, so always check the return value before using it.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *arr = (int *)calloc(2, sizeof(int));
  if (arr == NULL)
  {
    printf("NOT ENOUGH MEMORY!");
    return 1;
  }
  printf("\nADDRESS OF ARR: %p", arr);
  arr[0] = 45;
  arr[1] = 74;

  arr = (int *)realloc(arr, 3 * sizeof(int));
  if (arr == NULL)
  {
    printf("NOT ENOUGH MEMORY!");
    return 1;
  }
  printf("\nNEW ADDRESS OF ARR: %p", arr);
  printf("\nORIGINAL ELEMENTS ARE: %d %d", arr[0], arr[1]);
  arr[2] = 98;

  return 0;
}