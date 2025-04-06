#include <stdio.h>
int main()
{
  int p, t;
  float r, SI;
  printf("WELCOME TO SIMPLE INTEREST CALCULATOR\n");

  printf("ENTER THE VALUE OF PRINCIPLE AMOUNT: ");
  scanf("%d", &p);
  printf("ENTER THE VALUE OF TIME: ");
  scanf("%d", &t);
  printf("ENTER THE VALUE OF RATE: ");
  scanf("%f", &r);

  SI = (p * t * r) / 100;
  printf("THE VALUE OF SIMPLE INTEREST IS %f", SI);
  return 0;
}