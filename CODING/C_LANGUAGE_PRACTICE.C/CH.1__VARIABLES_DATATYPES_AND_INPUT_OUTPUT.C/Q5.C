/*
Create a program that declares one variable of each of the
fundamental data types (int, float, double, char) and prints their
size using sizeof() operator.
*/
#include <stdio.h>
int main()
{
  /*
  ~~IMPROVEMENTS THAT CAN BE DONE
     Use %zu (format specifier for size_t) instead of %d when printing the result of sizeof(). The sizeof operator returns a value of type size_t, which is more compatible with %zu.
  */
  int i;
  char c;
  float f;
  double d;
  printf("THE SIZE OF INT VARIABLE i IS %d\n", sizeof(i));
  printf("THE SIZE OF CHAR VARIABLE c IS %d\n", sizeof(c));
  printf("THE SIZE OF FLOAT VARIABLE f IS %d\n", sizeof(f));
  printf("THE SIZE OF DOUBLE VARIABLE d IS %d\n", sizeof(d));

  return 0;
}
