#include <stdio.h>
int main()
{
  float num1, num2, product;
  printf("ENTER THE FIRST NUMBER: ");
  scanf("%f", &num1);
  printf("NOW,ENTER THE SECOND NUMBER: ");
  scanf("%f", &num2);

  product = num1 * num2;
  // GETTING PROBLEM
  printf("\nTHE PRODUCT OF THE ENTERED NUMBERS IS: %f", product); // THIS WILL GIVE FULL ANSWER
  printf("\nTHE PRODUCT OF THE ENTERED NUMBERS IS: %.2f", product); // THIS WILL GIVE ROUND OF ANSWER

  return 0;
}