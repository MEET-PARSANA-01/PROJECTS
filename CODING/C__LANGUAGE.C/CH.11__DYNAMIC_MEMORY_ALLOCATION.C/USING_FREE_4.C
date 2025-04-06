/*
D.USING FREE
   1. Memory Release: free deallocates previously allocated memory, making it available for future allocations.
   2. Prevent Leaks: Essential for preventing memory leaks in programs that allocate dynamic memory.
   3. Pointer Argument: Takes a pointer to the allocated memory block as its argument.
   4. Null Safe: Calling free with a NULL pointer is safe and results in no operation.
   5. Use Once: After calling free, the pointer should not be used until it points to another allocated memory block or is set to NULL.
*/
#include <stdio.h>
#include <stdlib.h>

int main()

{
  int size;
  printf("ENTER THE NUMBER OF ELEMENTS: ");
  scanf(" %d", &size);

  // DYNAMICALLY ALLOCATE MEMORY USING MALLOC
  int *arr = (int *)calloc(size, sizeof(int));

  // CHECK IF THE MEMORY HAS BEEN SUCCESSFULLY ALLOCATED
  if (arr == NULL)
  {
    printf("NOT ENOUGH MEMORY!");
    return 1;
  }
  for (int i = 0; i < size; i++)
  {
    printf(" %d", arr[i]); // TO CHECK IF ALL ELEMENTS ARE ZERO
  }
  for (int i = 0; i < size; i++)
  {
    // INPUT ELEMENTS INTO THE ARRAY
    printf("ENTER ELEMENT NUMBER %d:", i + 1);
    scanf("%d", &arr[i]);
  }

  long sum = 0; // VARIABLE TO STORE THE SUM
  for (int i = 0; i < size; i++)
  {
    sum += arr[i]; // ADDS ELEMENT TO SUM
  }

  // WILL FREE THE MEMORY
  free(arr);
  arr = NULL;

  printf("THE SUM OF ALL ELEMENT IS %ld", sum);
  return 0;
}