#include <stdio.h>

int sum(int arr[], int size);

int main()
{
  int arr[10];
  printf("WELCOME TO SUM AND AVERAGE OF ARRAYS!\n");
  for (int i = 0; i < 10; i++)
  {
    printf("PLEASE ENTER %dTH ELEMENT:", (i + 1));
    scanf("%d", &arr[i]);
  }

  int addition = sum(arr, 10);
  float avg = addition / 10.0;
  printf("THE SUM OF THE NUMBERS IS %d AND THEIR AVERAGE IS %.2f", addition, avg);

  return 0;
}

int sum(int arr[], int size)
{
  int addition = 0;
  for (int i = 0; i < size; i++)
  {
    addition += arr[i];
  }

  return addition;
}