/*
Q.Define a structure Car with brand, model, and price. Store details of n cars using a structure array and sort them in ascending order of price.
*/
#include <stdio.h>

struct CAR
{
  char Brand_Name[30];
  char Model[20];
  float Price;
};

// Function to sort the array of structures using Selection Sort
void selectionSort(struct CAR c[], int m)
{
  for (int i = 0; i < m - 1; i++)
  {
    int minIndex = i; // Assume the current index has the lowest price
    for (int j = i + 1; j < m; j++)
    {
      if (c[j].Price < c[minIndex].Price)
      {
        minIndex = j; // Update index of the minimum price
      }
    }
    // Swap the structures
    if (minIndex != i)
    {
      struct CAR temp = c[i];
      c[i] = c[minIndex];
      c[minIndex] = temp;
    }
  }
}

int main()
{
  int n;
  printf("\n\nENTER THE NUMBER OF CARS: ");
  scanf("%d", &n);

  struct CAR C[n];

  // printf("\n\nHERE ARE THE DETAILS OF ALL CARS:-\n\n");
  for (int i = 0; i < n; i++)
  {
    if (n > 1)
    {
      printf("\n\nENTER THE DETAILS OF CAR %d: \n\n", (i + 1));
    }
    else
    {
      printf("\n\nENTER THE DETAILS OF CAR: \n\n");
    }

    printf("Name of the Brand: ");
    scanf(" %29[^\n]s", C[i].Brand_Name);

    printf("Name of the Model: ");
    scanf(" %19[^\n]s", C[i].Model);

    printf("Price: ");
    scanf("%f", &C[i].Price);
  }

  // Sorting cars based on price in ascending order
  selectionSort(C, n);

  printf("\n\nHERE ARE THE DETAILS OF ALL THE CARS:-\n\n");
  for (int i = 0; i < n; i++)
  {
    if (n > 1)
    {
      printf("\n\nDETAILS OF CAR %d: \n\n", (i + 1));
    }
    else
    {
      printf("\n\nDETAILS OF CAR: \n\n");
    }
    printf("\n --> Brand: %s\n --> Model: %s\n --> Price: %.2f\n", C[i].Brand_Name, C[i].Model, C[i].Price);
  }
  printf("\n\n");

  return 0;
}



