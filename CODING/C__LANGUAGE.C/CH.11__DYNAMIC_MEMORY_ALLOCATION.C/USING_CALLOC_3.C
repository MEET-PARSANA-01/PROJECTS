/*
C.USING CALLOC
   1. Initialization: calloc initializes all allocated memory to zero.
   2. Syntax: Takes two arguments, the number of elements and the size of each element.
   3. Usage: Preferred for array allocation when zero-initialization is needed.
   4. Memory Overhead: May have slightly more overhead than malloc due to initialization.
   5. Return Type: Like malloc, returns a void* pointer that should be cast to the appropriate type.
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
    printf(" %d", arr[i]);//TO CHECK IF ALL ELEMENTS ARE ZERO
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
  printf("THE SUM OF ALL ELEMENT IS %ld", sum);
  return 0;
}