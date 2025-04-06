/*
~~FUNCTION CALL
  Invoke by using the function name followed by ().
*/
#include <stdio.h>

void countTo100(); // FUNCTION PROTOTYPE

int main()
{
  countTo100(); // FUNCTION CALL

  return 0;
}
void countTo100()
{ // FUNCTION DEFINITION
  for (int i = 1; i <= 100; i++)
  {
    printf("%d", i);
  }
}