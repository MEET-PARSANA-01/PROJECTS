// CREATE A SIMPLE C PROGRAM TO CHECK THAT A GIVEN ARRAY IS SORTED OR NOT
#include <stdio.h>

int main()
{
  int arr[] = {1, 2, 0, 4, 5}; // Example array
  int n = sizeof(arr) / sizeof(arr[0]);
  int sorted = 1; // Assume the array is sorted(TRUE(1))

  for (int i = 0; i < n - 1; i++)
  {
    if (arr[i] > arr[i + 1])
    {
      sorted = 0; // Array is not sorted(FALSE(0))
      break;
    }
  }

  if (sorted) // DOUBT
  {
    printf("THE ARRAY IS SORTED\n");
  }
  else
  {
    printf("THE ARRAY IS NOT SORTED\n");
  }

  return 0;
}
// #include <stdio.h>
// int main()
// {
//   int lion[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
//   int size = sizeof(lion) / sizeof(lion[0]);
//   int sorted = 1;

//   for (int i = 0; i < size - 1; i++)
//   {
//     if (lion[i + 1] > lion[0])
//     {
//       sorted = 0;
//       break;
//     }
//   }
//   if (sorted)
//   {
//     printf("THE ARRAY IS SORTED\n");
//   }
//   else
//   {
//     printf("THE ARRAY IS NOT SORTED\n");
//   }

//   return 0;
// }