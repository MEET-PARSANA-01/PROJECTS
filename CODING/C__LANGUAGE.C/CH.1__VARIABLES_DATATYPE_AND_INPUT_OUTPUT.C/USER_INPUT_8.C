/*
~~USER INPUT USING SCANF
   1. scanf is used for reading formatted input.
   2. Syntax: scanf("format specifier", &variable);
   3. Use format specifiers (e.g., %d for integers) to define the input type.
   4. Address Operator: Prefix variables with &, except for arrays and strings.
*/

#include <stdio.h>
int main()
{
  float pi;
  printf("ENTER THE VALUE OF PI: "); // KYA ENTER KARNA HAI
  scanf("%f", &pi);                  // ENTER KARNE KE LIYE

  printf("THE VALUE OF pi IS: %f", pi); // DATA PI ME AAYA YA NAHI YE CHECK KARNE KE LIYE
  return 0;
}