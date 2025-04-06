// CREATE A PROGRAM TO FIND GREATEST OF TWO NUMBERS ENTERED BY THE USER.
#include <stdio.h>
int main()
{
  int n, m;
  printf("ENTER FIRST NUMBER: ");
  scanf("%d", &n);
  printf("ENTER FIRST NUMBER: ");
  scanf("%d", &m);

  if (n > m)
  {
    printf("%d IS THE GREATEST NUMBER OF TWO!", n);
  }
  else
  {
    printf("-->%d IS THE GREATEST NUMBER OF TWO!", m);
  }

  return 0;
}