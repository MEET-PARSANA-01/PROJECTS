// Create a program to calculate simple interest. Simple Interest = (P x T x R) / 100
#include <stdio.h>
int main()
{
  int Principal, Time;
  float SI, Rate;
  printf("WELCOME TO SIMPLE INTEREST CALCULATOR!\n");
  printf("ENTER THE PRINCIPAL AMOUNT: ");
  scanf("%d", &Principal);
  printf("ENTER THE TIME PERIOD: ");
  scanf("%d", &Time);
  printf("ENTER THE RATE OF INTEREST: ");
  scanf("%f", &Rate);

  SI = (Principal * Time * Rate) / 100;

  printf("THE SIMPLE INTEREST IS %.2f", SI);

  return 0;
}