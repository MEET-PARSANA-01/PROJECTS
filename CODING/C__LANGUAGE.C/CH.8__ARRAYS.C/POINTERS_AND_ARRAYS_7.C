#include <stdio.h>

// FUNCTION PROTOTYPE
int sumArray(int *arr, int size);// *arr AND arr[] MEANS THE SAME

int main()
{
  int myArray[] = {1, 2, 3, 4, 5};
  int size = sizeof(myArray) / sizeof(myArray[0]);
  // ARRAY DECAYS INTO A POINTER WHEN PASSED
  int total = sumArray(myArray, size);

  printf("THE SUM OF THE ARRAY ELEMENTS IS : %d\n", total);

  return 0;
}

int sumArray(int *arr, int size)
{
  int sum = 0;
  for (int i = 0; i < size; i++)
  {
    // ACCESS ELEMENTS VIA POINTER ARITHMETIC
    sum += arr[i];
  }
  return sum; // RETURN THE SUM
}