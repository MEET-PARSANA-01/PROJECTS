// Q1.Implement a function to calculate the sum of all elements in a one-dimensional array.
#include <stdio.h>
void SUM();

int main()
{

  SUM();

  return 0;
}

void SUM()
{
  int size;
  printf("\nENTER THE SIZE OF THE ARRAY: ");
  scanf("%d", &size);

  int SUM[size];

  for (int i = 0; i < size; i++)
  {
    printf("\nENTER THE %d ELEMENT OF ARRAY: ", (i + 1));
    scanf("%d", &SUM[i]); // doubt about ampersand
  }

  int Summation = 0;
  for (int j = 0; j < size; j++)
  {
    Summation = Summation + SUM[j];
  }
  printf("\nTHE SUM OF ALL ELEMENTS OF THE ARRAY IS %d", Summation);
}

// #include <stdio.h>

// void sum();

// int main()
// {
//   sum();
//   return 0;
// }

// void sum()
// {
//   int SUM[3] = {10, 10, 10};
//   int summation = 0;
//   for (int i = 0; i < 3; i++)
//   {
//     summation = summation + SUM[i];
//   }
//   printf("THE SUM OF ALL ELEMENTS OF THE ARRAY IS %d", summation);
// }