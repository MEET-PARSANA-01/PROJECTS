// Create a program to find the minimum of two numbers using ternary operator.
#include <stdio.h>
int main()
{
  int f, s, ans;
  printf("\nWELCOME TO FINDING MINIMUM OF TWO NUMBERS!\n");
  printf("ENTER THE FIRST NUMBER: ");
  scanf("%d", &f);
  printf("FINALLY,ENTER THE SECOND NUMBER: ");
  scanf("%d", &s);

  ans = f > s ? s : f;

  printf("THE MINIMUM OF ENTERED TWO NUMBERS IS %d", ans);

  return 0;
}