// // WRITE A C PROGRAM TO FIND THE LARGEST ELEMENT IN AN ARRAY
// #include <stdio.h>
// int main()
// {
//   int m[5];
//   for (int i = 0; i < 5; i++)
//   {
//     printf("\nENTER THE %d NUMBER: ", (i + 1));
//     scanf(" %d", &m[i]);
//   }

//   if (m[0] > m[1] && m[0] > m[2] && m[0] > m[3] && m[0] > m[4])
//   {
//     printf("THE LARGEST ELEMENT IN ARRAY IS %d", m[0]);
//   }

//   else if (m[1] > m[0] && m[1] > m[2] && m[1] > m[3] && m[1] > m[4])
//   {
//     printf("THE LARGEST ELEMENT IN ARRAY IS %d", m[1]);
//   }

//   else if (m[2] > m[0] && m[2] > m[1] && m[2] > m[3] && m[2] > m[4])
//   {
//     printf("THE LARGEST ELEMENT IN ARRAY IS %d", m[2]);
//   }

//   else if (m[3] > m[0] && m[3] > m[2] && m[3] > m[1] && m[3] > m[4])
//   {
//     printf("THE LARGEST ELEMENT IN ARRAY IS %d", m[3]);
//   }

//   else if (m[4] > m[0] && m[4] > m[1] && m[4] > m[2] && m[4] > m[3])
//   {
//     printf("THE LARGEST ELEMENT IN ARRAY IS %d", m[4]);
//   }

//   return 0;
// }
#include <stdio.h>
int main()
{
  int size;
  printf("ENTER THE SIZE OF THE ARRAY: ");
  scanf("%d", &size);

  int max[size];
  printf("THE SIZE OF THE ARRAY IS %d", size);
  for (int i = 0; i < size; i++)
  {
    printf("\nENTER THE %d NUMBER: ", (i + 1));
    scanf(" %d", &max[i]);
  }
  int MAX = max[0];
  for (int i = 1; i < 5; i++)
  {
    if (MAX < max[i])
    {
      MAX = max[i];
    }
  }
  printf("THE LARGEST ELEMENT IN THE ARRAY IS %d", MAX);
  return 0;
}
