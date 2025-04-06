#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  printf("WELCOME TO THE WORLD OF DYNAMIC RANDOMS!\n");
  int *arr = (int *)calloc(10, sizeof(int));
  if (arr == NULL)
  {
    printf("MEMORY ISSUES!!!");
    return 1;
  }

  srand(time(NULL)); // SEEDING RANDOM GENERATION WITH TIME
  for (int i = 0; i < 10; i++)
  {
    arr[i] = rand() % 100; // RANDOM NUMBER WITH RANGE 0-99
  }

  printf("\nHERE ARE YOUR RANDOM NUMBERS: ");
  for (int i = 0; i < 10; i++)
  {
    printf(" %d", arr[i]);
  }

  int *shrinked = (int *)realloc(arr, 5 * sizeof(int));
  if (shrinked == NULL)
  {
    printf("MEMORY ISSUES!!!");
    free(arr);
    arr = NULL;
    return 1;
  }
  arr = shrinked;

  printf("\nHERE ARE YOUR RANDOM NUMBERS: ");
  for (int i = 0; i < 5; i++)
  {
    printf(" %d", arr[i]);
  }
  free(arr);
  arr = NULL;
  return 0;
}
