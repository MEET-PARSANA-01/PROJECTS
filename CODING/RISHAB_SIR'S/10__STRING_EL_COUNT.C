// WRITE A PROGRAM WHICH TAKES STRING AS AN INPUT FROM THE USER AND COUNT THE NUMBER OF ELEMENTS AS PRESENT IN THE STRING WITHOUT USING ANY EXTERNAL FUNCTION.
#include <stdio.h>
int main()
{
  int size;
  printf("ENTER THE SIZE OF THE STRING: ");
  scanf("%d", &size);

  char King[size];
  for (int i = 0; i < size; i++)
  {
    printf("ENTER THE %d CHARACTER OF THE STRING: ", (i + 1));
    scanf(" %c", &King[i]);
  }
  printf("\nWHOLE STRING IS: %s\n", King);

  int count = 0;

  for (int j = 0; j < size; j++)
  {
    count++;
  }
  printf("\nTHE LENGTH OF THE STRING IS %d", count);
  return 0;
}