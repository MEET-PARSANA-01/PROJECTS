/*
~~CALL BY VALUE
  1. Value Copy: Passes argument's copy, not the original.
  2. Separate Memory: Parameters use distinct memory locations.
  3. Data Safety: Original data remains unchanged by the function.
  4. Direct Modification: Cannot modify original arguments directly.
  5. Efficiency: Good for small data types, less so for large structures.
  6. Ease of Use: Straightforward and safe for functions not altering inputs.
*/

#include <stdio.h>

void swap(int, int);

int main()
{
  int x = 45;
  int y = 54;
  printf("\n\nx: %d,y: %d", x, y);
  swap(x, y);
  printf("\n\nx: %d,y: %d", x, y); // WHEN FUNCTION WILL COME AGAIN IN THE INT MAIN , IT WILL PRINT THE ORIGINAL VALUES OF X AND Y.
  return 0;
}

void swap(int a, int b)
{
  printf("\n\nfirst: %d, second: %d", a, b); // HERE THE COPIES OF VALUES OF X AND Y ARE PASSED NOT THE ORIGINAL VALUE , THIS IS CALLED "CALL BY VALUE".WHEN FUNCTION WILL COME AGAIN IN THE INT MAIN , IT WILL PRINT THE ORIGINAL VALUES OF X AND Y.ANY CHANGES DONE TO A AND B WILL NOT AFFECT THE ORIGINAL COPY.
  int temp;
  temp = a;
  a = b;
  b = temp;
  printf("\n\nfirst: %d, second: %d", a, b);
}
// NEXT TOPIC : SCOPING RULE