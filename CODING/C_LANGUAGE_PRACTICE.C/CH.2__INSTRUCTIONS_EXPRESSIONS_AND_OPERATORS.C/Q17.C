// Create a program to calculate Compound.Compound Interest = P(1 + R/100)t
#include <stdio.h>
#include <math.h>
int main()
{
  int Principal, Time;
  float CI, Rate;
  printf("WELCOME TO COMPOUND INTEREST CALCULATOR!\n");
  printf("ENTER THE PRINCIPAL AMOUNT: ");
  scanf("%d", &Principal);
  printf("ENTER THE TIME PERIOD: ");
  scanf("%d", &Time);
  printf("ENTER THE RATE OF INTEREST: ");
  scanf("%f", &Rate);

  CI = Principal * pow((1 + Rate / 100), Time);

  printf("THE COMPOUND INTEREST IS %.2f", CI);

  return 0;
}