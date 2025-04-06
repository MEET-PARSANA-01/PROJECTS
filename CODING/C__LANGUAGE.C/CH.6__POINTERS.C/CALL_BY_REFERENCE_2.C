/*
~~CALL BY REFERENCE
  1. Direct Access: Call by reference passes the address of variables, allowing functions to modify the actual values.
  2. Pointers in C: Implemented using pointers that point to the original data.
  3. Efficiency: Avoids copying large data structures, saving memory and time.
  4. Multiple Returns: Can return multiple values from a function via out-parameters.
  5. Risk: Increases the potential for unintended side effects if not used carefully.
*/
#include <stdio.h>

void trySwap(int *a, int *b)
{
  int temp = *a;//10
  *a/*10*/ = *b;//20
  *b/*20*/ = temp;//10
  printf("INSIDE trySwap - a: %d, b: %d\n", *a, *b);
}

int main()
{
  int x = 10, y = 20;
  printf("BEFORE trySwap - x: %d,y: %d\n", x, y);
  // PASS THE ADDRESSES OF X AND Y TO THE trySwap FUNCTION
  trySwap(&x, &y); // NOW THE VALUES OF X AND Y WILL BE SWAPPED
  printf("AFTER trySwap - x: %d,y: %d\n", x, y);

  return 0;
}