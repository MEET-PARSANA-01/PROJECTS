#include<stdio.h>
#include<limits.h>


int main()
{
  unsigned int positive = UINT_MAX;
  int normal = INT_MAX;

  printf("\nMAX VALUE OF UNSIGNEED INT IS: %u",positive);
  printf("\nMAX VALUE OF NORMAL INT IS: %d",normal);

  positive++;
  normal++;

  printf("\n\nMAX VALUE OF UNSIGNEED INT IS: %u",positive);
  printf("\nMAX VALUE OF NORMAL INT IS: %d",normal);



  return 0;
}