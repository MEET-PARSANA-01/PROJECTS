#include <stdio.h>
int main()
{

  int n = 5;
  int *m = &n;

  printf("THE VALUE OF N IS(BEFORE): %d\n", n);
  *m = 50;
  printf("THE VALUE OF N IS(AFTER): %d", n);
  return 0;
}