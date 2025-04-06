/*
~~SIGNED AND UNSIGNED NUMBERS
  1.SIGNED INT: can represent both positive and negative numbers,including zero.
  2.UNSIGNED INT: can only represent non-negative numbers,doubling the maximum positive value compared to signed.
  3.RANGE: signed int range is roughly from -2^31 to 2^31-1,while unsigned is from 0 to 2^31-1 on a 32-bit system.
  4.OVERFLOW: unsigned ints wrap around on overflow.
  5.USAGE: choose unsigned for countable quantities where negative values don't make sense.
  6.TO PRINT UNSIGNED: USE %u.
  7.TO PRINT SIGNED: USE %d.
*/

#include <stdio.h>
int main()
{
  unsigned int length = 10; // length of the rectangle(can't be negative)
  unsigned int width = 5;   // width of the rectangle(can't be negative)
  unsigned int area;        // area of the rectangle

  int temperature = -15; // temperature( can be negative )

  // Calculate the area of the rectangle
  area = length * width;

  printf("THE AREA OF THE RECTANGLE IS: %u SQUARE UNITS\n", area);
  printf("THE CURRENT TEMPERATURE IS: %d DEGREE CELSIUS\n", temperature);

  return 0;
}