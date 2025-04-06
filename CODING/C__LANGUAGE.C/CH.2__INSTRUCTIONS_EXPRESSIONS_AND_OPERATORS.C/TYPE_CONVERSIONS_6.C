/*
~~TYPE CONVERSIONS
   1. Implicit Conversion(coercion): C automatically changes one data type to another when needed (e.g., int to float in operations).
   2. Promotion: Smaller types (like char) are automatically promoted to int in expressions.
   3. Assignment Conversion: When assigning values, the type is converted to match the variable's type.
   4. Explicit Conversion(Casting): Use (type_name) to explicitly convert a value to a different type (e.g., (float)var).

LONG DOUBLE
     ⇈
   DOUBLE
     ⇈
   FLOAT
     ⇈
UNSIGNED LONG LONG
     ⇈
 LONG LONG
     ⇈
UNSIGNED LONG
     ⇈
    LONG
     ⇈
UNSIGNED INT
     ⇈
    INT

 A.I. :   2/9  2.0/9  2/9.0  2.0/9.0  9/2  9.0/2  9/2.0  9.0/2.0
 RESULT : 0      0     0        0      4     4     4       4

 A.I. :   2/9  2.0/9  2/9.0  2.0/9.0  9/2  9.0/2  9/2.0  9.0/2.0
 RESULT : 0.0  0.22   0.22    0.22    4.0   4.5    4.5     4.5

*/
#include <stdio.h>
int main()
{
  int a, b = 2;
  float x = 9.5;
  double y = 10.5;
  long int z = 50;
  double d;
  a = z / b + b * x - y;
  printf("INTEGER: %d\n", a);

  return 0;
}
