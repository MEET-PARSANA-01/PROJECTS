// FOR SIZE 3

// #include <stdio.h>

// const int SIZE = 3;
// void print_diagonal_sum(int arr[][SIZE]);

// int main()
// {
//   printf("WELCOME TO SUM OF DIAGONALS IN 2D ARRAY!\n");
//   int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//   int arr2[4][4] = {{8, 7, 6, 5}, {1, 2, 3, 4}, {5, 8, 3, 5}, {0, 1, 8, -2}};

//   print_diagonal_sum(arr1);
//   return 0;
// }

// void print_diagonal_sum(int arr[][SIZE])
// {
//   int sum_left_diagonal = 0;
//   int sum_right_diagonal = 0;
//   for (int i = 0; i < SIZE; i++)
//   {
//     sum_left_diagonal += arr[i][i];
//     sum_right_diagonal += arr[i][SIZE - 1 - i];
//   }

//   printf("\nTHE SUM OF LEFT DIAGONAL IS %d", sum_left_diagonal);
//   printf("\nTHE SUM OF RIGHT DIAGONAL IS %d", sum_right_diagonal);

//   int total_diagonal_sum = sum_left_diagonal + sum_right_diagonal;
//   if (SIZE % 2 == 1)
//   {
//     int index = SIZE / 2;
//     total_diagonal_sum -= arr[index][index];
//   }
//   printf("\nTHE SUM OF TOTAL DIAGONAL IS %d", total_diagonal_sum);
// }

// FOR SIZE 4
#include <stdio.h>

const int SIZE = 4;
void print_diagonal_sum(int arr[][SIZE]);

int main()
{
  printf("WELCOME TO SUM OF DIAGONALS IN 2D ARRAY!\n");
  int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int arr2[4][4] = {{8, 7, 6, 5}, {1, 2, 3, 4}, {5, 8, 3, 5}, {0, 1, 8, -2}};

  print_diagonal_sum(arr2);
  return 0;
}

void print_diagonal_sum(int arr[][SIZE])
{
  int sum_left_diagonal = 0;
  int sum_right_diagonal = 0;
  for (int i = 0; i < SIZE; i++)
  {
    sum_left_diagonal += arr[i][i];
    sum_right_diagonal += arr[i][SIZE - 1 - i];
  }

  printf("\nTHE SUM OF LEFT DIAGONAL IS %d", sum_left_diagonal);
  printf("\nTHE SUM OF RIGHT DIAGONAL IS %d", sum_right_diagonal);

  int total_diagonal_sum = sum_left_diagonal + sum_right_diagonal;
  if (SIZE % 2 == 1)
  {
    int index = SIZE / 2;
    total_diagonal_sum -= arr[index][index];
  }
  printf("\nTHE SUM OF TOTAL DIAGONAL IS %d", total_diagonal_sum);
}