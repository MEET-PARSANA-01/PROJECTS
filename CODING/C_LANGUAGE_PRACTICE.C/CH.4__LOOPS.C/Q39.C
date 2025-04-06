// Create a program to print the Fibonacci series up to a certain number.
#include <stdio.h>
int main()
{
  int n;
  printf("\nWELCOME TO PRINTING FIBONACCI SERIES!\n");
  printf("\nENTER THE NUMBER UPTO WHICH YOU WANT TO PRINT FIBONACCI SERIES: ");
  scanf("%d", &n);
  printf("\n");

  printf(" 0");
  if (n > 0)
  {
    printf(" 1");
  }

  int previous = 0;
  int next = 1;
  while (previous + next <= n)
  {
    int temperory = previous + next;
    printf(" %d", temperory);
    previous = next;
    next = temperory;
  }

  return 0;
}
// #include <stdio.h>
// int main()
// {
//   int n;
//   printf("\nENTER THE NUMBER UPTO WHICH YOU WANT TO PRINT FIBONACCI SERIES: ");
//   scanf("%d", &n);

//   printf(" 0");
//   if (n > 0)
//   {
//     printf(" 1");
//   }
//   int previous = 0;
//   int next = 1;
//   while (previous + next <= n)
//   {
//     int temperory = previous + next;
//     printf(" %d", temperory);
//     previous = next;
//     next = temperory;
//   }

//   return 0;
// }