// WHAT WILL BE THE OUTPUT OF THE FOLLOWING CODE
#include <stdio.h>

struct Test
{
  int x;
  char y;
} t1 = {10, 'a'};

int main()
{

  struct Test t2 = t1;
  t2.x = 20;
  printf("\n\n%d  %c\n\n", t1.x, t1.y);
  return 0;
}