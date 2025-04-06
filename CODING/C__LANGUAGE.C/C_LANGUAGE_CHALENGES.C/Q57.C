#include <stdio.h>
int fibonnaci(int position);
int main()
{
  int terms;
  printf("WELCOME TO FIBONNACI BY RECURSION\n");
  printf("ENTER THE NUMBER OF TERMS NEEDED: ");
  scanf("%d", &terms);

  for (int i = 0; i < terms; i++)
  {
    printf(" %d", fibonnaci(i));
  }
  return 0;
}
int fibonnaci(int position)
{
  if (position <= 1)
  {
    return position; // BASE CASE
  }
  int current = fibonnaci(position - 1) + fibonnaci(position - 2);
  return current;
}