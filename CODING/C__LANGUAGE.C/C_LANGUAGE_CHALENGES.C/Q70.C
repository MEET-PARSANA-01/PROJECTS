#include <stdio.h>

void Delete(int arr[], int size, int new_arr[], int *new_size, int element);
void print_arr(int arr[], int size);

int main()
{
  printf("WELCOME TO DELETING ELEMENTS!\n");
  int arr[8] = {2, 5, 7, 7, 9, 10, 1, 0};
  int new_arr[8];
  int new_size;

  Delete(arr, 8, new_arr, &new_size, 5);
  printf("\n\nTHE ARRAY AFTER DELETING 5 IS: ");
  print_arr(new_arr, new_size);

  Delete(arr, 8, new_arr, &new_size, 7);
  printf("\n\nTHE ARRAY AFTER DELETING 7 IS: ");
  print_arr(new_arr, new_size);

  Delete(arr, 8, new_arr, &new_size, 8);
  printf("\n\nTHE ARRAY AFTER DELETING 8 IS: ");
  print_arr(new_arr, new_size);
  return 0;
}

void print_arr(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    printf(" %d", arr[i]);
  }
}
void Delete(int arr[], int size, int new_arr[], int *new_size, int element)
{

  int j = 0;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] != element)
    {
      new_arr[j] = arr[i];
      j++;
    }
  }
  *new_size = j;
}