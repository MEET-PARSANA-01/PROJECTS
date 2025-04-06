// WRITE A PROGRAM TO FIND OUT THE SUM OF ALL ELEMENTS OF AN 2D ARRAY OF SIZE.
#include <stdio.h>
int main()
{
  int ROWS;
  printf("ENTER THE NUMBER OF ROWS IN THE 2D ARRAY: ");
  scanf("%d", &ROWS);

  int COLUMN;
  printf("ENTER THE NUMBER OF COLUMNS IN THE 2D ARRAY: ");
  scanf("%d", &COLUMN);

  int VILLAIN[ROWS][COLUMN];

  for (int i = 0; i < ROWS; i++)
  {
    for (int j = 0; j < COLUMN; j++)
    {
      printf("ENTER THE ELEMENT OF THE 2D ARRAY AT POSITION %d %d: ", i, j);
      scanf("%d", &VILLAIN[i][j]);
    }
  }
  int sum = 0;

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      sum = sum + VILLAIN[i][j];
    }
  }

  printf("\n\nTHE SUM OF ALL ELEMENTS OF THE 2D ARRAY IS %d\n", sum);

  return 0;
}

// #include <stdio.h>
// int main()
// {
//   int LABEL;
//   printf("ENTER THE NUMBER OF LABELS: ");
//   scanf("%d", &LABEL);

//   int ROWS;
//   printf("ENTER THE NUMBER OF ROWS IN THE 3D ARRAY: ");
//   scanf("%d", &ROWS);

//   int COLUMN;
//   printf("ENTER THE NUMBER OF COLUMNS IN THE 3D ARRAY: ");
//   scanf("%d", &COLUMN);

//   int VILLAIN[LABEL][ROWS][COLUMN];

//   for (int i = 0; i < LABEL; i++)
//   {
//     for (int j = 0; j < ROWS; j++)
//     {
//       for (int k = 0; k < COLUMN; k++)
//       {
//         printf("ENTER THE ELEMENT AT POSITION %d %d %d: ", i, j, k);
//         scanf("%d", &VILLAIN[i][j][k]);
//       }
//       printf("\n");
//     }
//     printf("\n");
//   }
//   int SUM = 0;

//   for (int i = 0; i < LABEL; i++)
//   {
//     for (int j = 0; j < ROWS; j++)
//     {
//       for (int k = 0; k < COLUMN; k++)
//       {
//         SUM = SUM + VILLAIN[i][j][k];
//       }
//     }
//   }

//   printf("THE SUM OF ALL THE ELEMENTS IN A 3D ARRAY IS %d", SUM);

//   return 0;
// }

// #include <stdio.h>
// int main()
// {
//   int LABEL;
//   printf("ENTER THE NUMBER OF LABELS: ");
//   scanf("%d", &LABEL);

//   int ROWS;
//   printf("ENTER THE NUMBER OF ROWS IN THE 3D ARRAY: ");
//   scanf("%d", &ROWS);

//   int COLUMN;
//   printf("ENTER THE NUMBER OF COLUMNS IN THE 3D ARRAY: ");
//   scanf("%d", &COLUMN);

//   int VILLAIN[LABEL][ROWS][COLUMN];

//   for (int i = 0; i < LABEL; i++)
//   {
//     for (int j = 0; j < ROWS; j++)
//     {
//       for (int k = 0; k < COLUMN; k++)
//       {
//         printf("ENTER THE ELEMENT AT POSITION %d %d %d: ", i, j, k);
//         scanf("%d", &VILLAIN[i][j][k]);
//       }
//       printf("\n");
//     }
//     printf("\n");
//   }
//   // int SUM = 0;

//   for (int i = 0; i < LABEL; i++)
//   {
//     for (int j = 0; j < ROWS; j++)
//     {
//       for (int k = 0; k < COLUMN; k++)
//       {
//         printf(" %d", VILLAIN[i][j][k]);
//       }
//       printf("\n");
//     }
//     printf("\n");
//   }
//   return 0;
// }