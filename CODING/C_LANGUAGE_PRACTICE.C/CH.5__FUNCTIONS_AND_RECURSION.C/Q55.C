// Demonstrate with a function increment that the original integer passed to it does not change after incrementing it inside the function.
#include <stdio.h>
int result;

void increment(int);

int main()
{
  int n;
  printf("ENTER THE VALUE OF n: ");
  scanf("%d", &n);
  printf("\nTHE VALUE OF N IS %d\n", n);
  increment(n);
  printf("\nTHE ORIGINAL VALUE OF N IS %d\n", n);

  return 0;
}
void increment(int n)
{
  printf("\nTHE NEW VALUE OF N IS %d\n", n);
  result = n++;
  printf("\nTHE NEW VALUE OF N IS %d\n", n);
}