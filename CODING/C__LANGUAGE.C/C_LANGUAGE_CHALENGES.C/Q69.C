#include <stdio.h>

int is_sorted(int arr[], int size);
int main()
{
  printf("\nWELCOME TO CHECKING IF ARRAY IS SORTED OR NOT!\n");
  int increase_sort[6] = {12, 34, 56, 78, 89, 90}; // increasing order sorted
  int decrease_sort[6] = {90, 89, 78, 56, 34, 12}; // decreasing order sorted
  int not_sorted[6] = {12, 34, 56, 32, 34, 12};    // not sorted

  if (is_sorted(increase_sort, 6))
  {
    printf("\nTHE FIRST ARRAY IS SORTED\n");
  }
  else
  {
    printf("\nFIRST ARRAY IS NOT SORTED\n");
  }

  if (is_sorted(decrease_sort, 6))
  {
    printf("\nTHE SECOND ARRAY IS SORTED\n");
  }
  else
  {
    printf("\nSECOND ARRAY IS NOT SORTED\n");
  }

  if (is_sorted(not_sorted, 6))
  {
    printf("\nTHE THIRD ARRAY IS SORTED\n");
  }
  else
  {
    printf("\nTHIRD ARRAY IS NOT SORTED\n");
  }

  return 0;
}

int is_sorted(int arr[], int size)
{
  int increasing = 1;
  int decreasing = 1;

  for (int i = 1; i < size; i++) // start one se hoga bcoz second element se comparison start ho raha hai
  {
    if (arr[i] > arr[i - 1])
    {
      decreasing = 0;
    }
    else if (arr[i] < arr[i - 1])
    {
      increasing = 0;
    }
  }
  return increasing || decreasing;
}
