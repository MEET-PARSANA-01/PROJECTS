#include <stdio.h>

int occurrences(int arr[], int size, int element);

int main()
{
  int arr[] = {2, 2, 2, 2, 45, 67, 45, 78, 78, 67};
  printf("WELCOME TO FINDING ELEMENT OCCURRENCES!\n");
  int result = occurrences(arr, 10, 2);
  printf("\nTHE NUMBER OF OCCURRENCES OF 2 ARE %d.", result);
  result = occurrences(arr, 10, 67);
  printf("\nTHE NUMBER OF OCCURRENCES OF 67 ARE %d.", result);
  result = occurrences(arr, 10, 78);
  printf("\nTHE NUMBER OF OCCURRENCES OF 78 ARE %d.", result);
  result = occurrences(arr, 10, 45);
  printf("\nTHE NUMBER OF OCCURRENCES OF 45 ARE %d.", result);
  result = occurrences(arr, 10, 100);
  printf("\nTHE NUMBER OF OCCURRENCES OF 100 ARE %d.", result);

  return 0;
}

int occurrences(int arr[], int size, int element)
{
  int counter = 0;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == element)
    {
      counter++;
    }
  }
  return counter;
}