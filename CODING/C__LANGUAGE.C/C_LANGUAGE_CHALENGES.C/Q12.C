#include <stdio.h>
int main()
{
  int m;
  printf("ENTER THE VALUE OF M: ");
  scanf("%d", &m);

  float f = m;
  // IMPLICIT CONVERSION
  printf("\n ORIGINAL NUMBER IS:%.2d", m);
  printf("\n FLOAT NUMBER IS:%.2f\n", f);
  // EXPLICIT CONVERSION
  printf("FLOAT NUMBER IS:%.2f", (float)m);
  return 0;
}