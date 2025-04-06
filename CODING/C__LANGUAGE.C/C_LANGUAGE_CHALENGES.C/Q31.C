#include <stdio.h>
int main()
{
  int num;
  printf("ENTER THE NUMBER: ");
  scanf("%d", &num);

  int i = 1;
  while (num <= 10)
  {
    printf("%d x %d = %d", num, i, num * i);
    i += 1;
  }
  return 0;
}