// Develop a program that prints the multiplication table for a given number

#include <stdio.h>
int main()
{
  int n;
  printf("\nWELCOME TO MULTIPLICATION TABLE PRINTER!!\n\n");
  printf("ENTER THE NUMBER OF WHICH YOU WANT TO PRINT MULTIPLICATION TABLE: ");
  scanf("%d", &n);

  for (int i = 1; i <= 10; i++)
  {
    int answer = n * i;//LEARNING: DON'T FORGET TO WRITE CONDITION 
    printf("%d * %d = %d\n", n, i, answer);
  }

  return 0;
}