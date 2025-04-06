#include <stdio.h>
int fibb(int n)
{
  
  if (n == 0)
    return 0;
  if (n == 1)
    return 1;

  return fibb(n - 1) + fibb(n - 2);
}

int main()
{
  int n,i;
  printf("enter the terms:");
  scanf("%d", &n);

  for(i=0;i<n;i++){
printf("%d",fibb(i));
  }
}