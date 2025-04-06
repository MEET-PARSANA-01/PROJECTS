// Write a program that declares an integer variable and a pointer to it.Assign a value and print it using the pointer.
#include <stdio.h>
int main()
{
  int m;
  int *n;
  n = &m;
  printf("ENTER THE VALUE OF m: ");
  scanf("%d", &m);

  printf("THE VALUE OF M IS %d", *n);//%p IS USED TO PRINT POINTER ADDRESSES

  return 0;
}