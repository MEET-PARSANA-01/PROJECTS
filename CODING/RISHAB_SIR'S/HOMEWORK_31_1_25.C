// Q1.WRITE A PROGRAM TO FIND THE AVERAGE OF ELEMENTS OF THE ARRAY.
// #include <stdio.h>
// int main()
// {
//   int a;
//   printf("ENTER THE SIZE OF THE ARRAY: ");
//   scanf("%d", &a);

//   int meet[a];
//   printf("THE SIZE OF THE ARRAY IS %d\n", a);

//   for (int i = 0; i < a; i++)
//   {
//     printf("ENTER THE %d ELEMENT OF ARRAY: ", (i + 1));
//     scanf("%d", &meet[i]);
//   }
//   float average;
//   for (int i = 0; i < a; i++)
//   {
//     average += meet[i];
//   }
//   average = average / (float)a;

//   printf("THE AVERAGE OF THE ELEMENTS OF THE ARRAY IS %.2f", average);

//   return 0;
// }
// Q2.WRITE A PROGRAM TO CALCULATE SUM,SUBTRACTION,MULTIPLICATION AND TRANSPOSE OF TWO 2D ARRAY
// #include <stdio.h>
// int main()
// {
//   int meet[3][3] = {{1, 1, 1}, {2, 2, 2}, {3, 3, 3}};
//   int anurag[3][3] = {{4, 4, 4}, {5, 5, 5}, {6, 6, 6}};
//   int kushal[3][3];

//   printf("\nSUM OF TWO 2D ARRAY\n");
//   for (int i = 0; i < 3; i++)
//   {
//     for (int j = 0; j < 3; j++)
//     {
//       kushal[i][j] = meet[i][j] + anurag[i][j];
//     }
//   }
//   for (int k = 0; k < 3; k++)
//   {
//     for (int l = 0; l < 3; l++)
//     {
//       printf(" %d", kushal[k][l]);
//     }
//     printf("\n");
//   }
//   printf("\n\n");
//   printf("\nSUBTRACTION OF TWO 2D ARRAY\n");
//   for (int i = 0; i < 3; i++)
//   {
//     for (int j = 0; j < 3; j++)
//     {
//       kushal[i][j] = meet[i][j] - anurag[i][j];
//     }
//   }
//   for (int k = 0; k < 3; k++)
//   {
//     for (int l = 0; l < 3; l++)
//     {
//       printf(" %d", kushal[k][l]);
//     }
//     printf("\n");
//   }
//   printf("\n\n");
//   printf("\nMULTIPLICATION OF TWO 2D ARRAY\n");
//   for (int i = 0; i < 3; i++)
//   {
//     for (int j = 0; j < 3; j++)
//     {
//       kushal[i][j] = meet[i][j] * anurag[i][j];
//     }
//   }
//   for (int k = 0; k < 3; k++)
//   {
//     for (int l = 0; l < 3; l++)
//     {
//       printf(" %d", kushal[k][l]);
//     }
//     printf("\n");
//   }
//   printf("\n\n");
//   printf("\nTRANSPOSE OF TWO 2D ARRAY\n");
//   for (int i = 0; i < 3; i++)
//   {
//     for (int j = 0; j < 3; j++)
//     {
//       printf(" %d", meet[j][i]);
//     }
//     printf("\n");
//   }

//   return 0;
// }
// Q3.WRITE A PROGRAM TO CALCULATE SUM AND SUBTRACTION OF TWO 3D ARRAY
#include <stdio.h>
int main()
{
  int meet[2][2][2] = {
      {{1, 2}, {3, 4}},
      {{5, 6}, {7, 8}}
    };
  int anurag[2][2][2] = {{{3, 6}, {6, 7}}, {{5, 4}, {1, 9}}};
  int kushal[2][2][2];

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      for (int k = 0; k < 2; k++)
      {
        kushal[i][j][k] = meet[i][j][k] + anurag[i][j][k];
      }
    }
  }
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      for (int k = 0; k < 2; k++)
      {
        printf(" %d", kushal[i][j][k]);
      }
      printf("\n");
    }
    printf("\n");
  }

  return 0;
}
