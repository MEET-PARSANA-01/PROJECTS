#include <stdio.h>
int square(int);
int main()
{
  int n;
  printf("WELCOME TO SQUARE FUNCTION\n");
  printf("ENTER A NUMBER: ");
  scanf("%d", &n);
  printf("THE SQUARE OF %d IS %d", n, square(n));
}
int square(int n)
{
  int ans = n * n;
  return ans;
}

