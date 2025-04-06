#include <stdio.h>

void copy_arr(char *arr, int size, char *new_arr);
void print_arr(int arr[], int size);

int main()
{
  char arr[4] = {'M', 'E', 'E', 'T'};
  char new_arr[4];

  printf("WELCOME TO COPYING ARRAY USING POINTER ARITHMETIC!\n");
  printf("\nORIGINAL CHAR ARRAY: ");
  print_arr(arr, 4);
  copy_arr(arr, 4, new_arr);
  printf("\nCOPIED CHAR ARRAY: ");
  print_arr(new_arr, 4);

  return 0;
}

void copy_arr(char *arr, int size, char *new_arr)
{
  for (int i = 0; i < size; i++)
  {
    *(new_arr + i) = *(arr + i);

    // *new_arr = *arr;
    // new_arr++;          YOU CAN ALSO USE THIS LOGIC IN PLACE OF THE ABOVE.
    // arr++;
  }
}

void print_arr(char arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("%c", arr[i]);
  }
}