// Create a program that converts a large number of kilometers to miles,using long or long long to store the distance.
#include <stdio.h>
int main()
{
  const float MILE_PER_KM = 0.621371;
  long kms;
  printf("ENTER THE DISTANCE IN KILOMETERS: ");
  scanf("%ld", &kms);

  long miles = kms * MILE_PER_KM;

  printf("THE NUMBER OF MILES ARE %ld", miles);

  return 0;
}