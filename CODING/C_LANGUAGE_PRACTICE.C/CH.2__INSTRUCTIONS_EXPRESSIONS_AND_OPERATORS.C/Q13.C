// Create a program to calculate product of two floating points numbers.
#include <stdio.h>
int main()
{
  float n, m, p;
  printf("WELCOME TO PRODUCT CALCULATOR OF TWO FLOATING POINT NUMBERS!\n");
  printf("ENTER THE VALUE OF FIRST NUMBER: ");
  scanf("%f", &n);
  printf("NOW,ENTER THE VALUE OF SECOND NUMBER: ");
  scanf("%f", &m);

  p = n * m;
  printf("THE PRODUCT OF ENTERED TWO FLOATING POINT NUMBERS ARE %.3f", p);

  return 0;
}