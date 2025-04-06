// Create a program to return a new array deleting a specific element.
// #include <stdio.h>

// int main()
// {
//   int original_array[] = {1, 2, 3, 4, 2, 5};
//   int size = sizeof(original_array) / sizeof(original_array[0]);
//   int target_element = 2;
//   int new_array[size];
//   int new_size = 0;

//   for (int i = 0; i < size; i++)
//   {
//     if (original_array[i] != target_element)
//     {
//       new_array[new_size++] = original_array[i];
//     }
//   }

//   printf("Original Array: ");
//   for (int i = 0; i < size; i++)
//   {
//     printf("%d ", original_array[i]);
//   }
//   printf("\n");

//   printf("New Array: ");
//   for (int i = 0; i < new_size; i++)
//   {
//     printf("%d ", new_array[i]);
//   }
//   printf("\n");

//   return 0;
// }
#include <stdio.h>
int main()
{
  int King[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
  printf("%lu\n",sizeof(King));
  printf("%lu\n",sizeof(King[0]));
  int size = sizeof(King) / sizeof(King[0]);
  int target_element = 5;
  int Queen[size];//4
  int new_size = 0;

  for (int i = 0; i < size; i++)
  {
    if (King[i] != target_element)
    {
      Queen[new_size++] = King[i];//
    }
  }
  printf("\n");
  printf("ORIGINAL ARRAY: ");
  for (int j = 0; j < size; j++)
  {
    printf(" %d", King[j]);
  }
  printf("\n\n");
  printf("NEW ARRAY: ");
  ;
  for (int k = 0; k < new_size; k++)
  {
    printf(" %d", Queen[k]);
  }

  return 0;
}
