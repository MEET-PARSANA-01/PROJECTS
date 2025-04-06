#include <stdio.h>
#include <math.h>
int main()
// IMP POWER FUNCTION
{
  float r, CI;
  int p, t;
  printf("WELCOME TO COMPOUND INTEREST CALCULATOR \n");
  printf("ENTER THE VALUE OF P : ");
  scanf("%d", &p);
  printf("ENTER THE VALUE OF T : ");
  scanf("%d", &t);
  printf("ENTER THE VALUE OF R : ");
  scanf("%f", &r);

  CI = p * pow((1 + r / 100), t);
  printf("THE VALUE OF COMPOUND INTEREST IS %.2f", CI);
  return 0;
}