#include <stdio.h>
int main()
{
  int A, B, C, D, perimeter;
  printf("ENTER THE VALUE OF A: ");
  scanf("%d", &A);
  printf("ENTER THE VALUE OF B: ");
  scanf("%d", &B);
  printf("ENTER THE VALUE OF C: ");
  scanf("%d", &C);
  printf("ENTER THE VALUE OF D: ");
  scanf("%d", &D);

  perimeter = A + B + C + D;
  printf("THE PERIMETER OF THE RECTANGLE IS:%d", perimeter);
  return 0;
}