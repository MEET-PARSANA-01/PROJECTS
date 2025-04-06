#include<stdio.h>
int main()
{
  const float MILE_PER_KM = 0.621371;
  long kms;
  printf("WELCOME TO DISTANCE CONVERTER.\n");
  printf("ENTER THE KILOMETER: ");
  scanf("%ld",&kms);

  long miles = kms * MILE_PER_KM;

  printf("THE NUMBER OF MILES ARE %ld",miles);

  return 0;
}