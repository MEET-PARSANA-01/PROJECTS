/*
B.USING MALLOC
   1. Include Header: Use #include <stdlib.h> to access malloc.
   2. Size Argument: Pass the size in bytes of the memory you need to allocate.
   3. Pointer Typecasting: Cast the returned void* pointer to the appropriate type.
   4. Check for NULL: Always check if malloc returns NULL, indicating allocation failure.
   5. Memory Initialization: malloc does not initialize memory; it's raw and may contain garbage values.
*/
#include <stdio.h>
#include <stdlib.h>

int main()

{
  int size;
  printf("ENTER THE NUMBER OF ELEMENTS: ");
  scanf(" %d", &size);

  // DYNAMICALLY ALLOCATE MEMORY USING MALLOC
  int *arr = (int *)malloc(sizeof(int) * size);

  // CHECK IF THE MEMORY HAS BEEN SUCCESSFULLY ALLOCATED
  if (arr == NULL)
  {
    printf("NOT ENOUGH MEMORY!");
    return 1;
  }
  for (int i = 0; i < size; i++)
  {
    printf(" %d", arr[i]);
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
