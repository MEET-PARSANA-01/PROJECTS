// WRITE A PROGRAM WHICH TAKES STRING AS AN INPUT FROM THE USER AND COUNT THE NUMBER OF ELEMENTS AS PRESENT IN THE STRING WITHOUT USING ANY EXTERNAL FUNCTION.
#include <stdio.h>
int main()
{
  int size;
  printf("ENTER THE SIZE OF THE ARRAY: ");
  scanf("%d", &size);

  int BUSINESS[size];

  for (int i = 0; i < size; i++)
  {
    printf("ENTER THE %d ELEMENT: ",(i + 1));
    scanf("%d", &BUSINESS[i]);
  }

  int Count = 0;

  for (int i = 0; i < size; i++)
  {
    Count++;
  }

  printf("THE NUMBER OF ELEMENTS PRESENT IN THE ARRAY IS %d", Count);

  return 0;
}