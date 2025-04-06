#include <stdio.h>

int is_palindrome(int arr[], int size);

int main()
{
  int arr1[9] = {3, 6, 8, 4, 5, 4, 8, 6, 3};
  int arr2[4] = {1, 1, 1, 1};
  int arr3[5] = {1, 1, 1, 1, 2};

  printf("\nRESULT FOR FIRST ARRAY: %d", is_palindrome(arr1, 9));  // PALINDROME
  printf("\nRESULT FOR SECOND ARRAY: %d", is_palindrome(arr2, 4)); //  PALINDROME
  printf("\nRESULT FOR THIRD ARRAY: %d", is_palindrome(arr3, 5));  // NOT PALINDROME

  return 0;
}

int is_palindrome(int arr[], int size)
{
  for (int i = 0; i < size / 2; i++)
  {
    if (arr[i] != arr[size - 1 - i])
    {
      return 0;
    }
  }
  return 1;
}