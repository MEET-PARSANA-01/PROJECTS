#include <stdio.h>
int main()
{
  int n;
  int *m;
  m = &n;
  printf("WELCOME TO SHOWCASING INTEGER POINTERS\n");
  printf("ENTER THE NUMBER: ");
  scanf("%d", m);

  printf("THE VALUE OF N IS %d\n", *m);
  printf("THE VALUE OF N IS %d", n);

  return 0;
}