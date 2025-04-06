// Create a program using for loop to print multiplication table for a number.
#include <stdio.h>
int main()
{
  int villain;
  printf("\nENTER THE NUMBER OF WHICH YOU WANT TO PRINT MULTIPLICATION TABLE: ");
  scanf("%d", &villain);
  printf("\n");

  for (int i = 1; i <= 10; i++)
  {
    int result = villain * i;
    printf("%d x %d = %d\n", villain, i, result);
  }
  printf("\n");

  return 0;
}
