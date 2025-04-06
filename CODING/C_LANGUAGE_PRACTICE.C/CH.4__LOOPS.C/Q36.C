// Create a program to find the Greatest Common Divisor (GCD or HCF) of two integers.
#include <stdio.h>//CHALLENGING
int main()
{
  int f, s, GCD, i;
  printf("WELCOME TO GCD FINDER OF TWO NUMBERS!\n");
  printf("ENTER THE VALUE OF FIRST NUMBER: ");
  scanf("%d", &f);
  printf("FINALLY,ENTER THE VALUE OF SECOND NUMBER: ");
  scanf("%d", &s);

  // LOOP TO FIND GCD
  for (i = 1; i <= f && i <= s; i++)
  {
    if (f % i == 0 && s % i == 0)
    {
      GCD = i;
    }
  }
  printf("THE GCD OF %d AND %d IS %d", f, s, GCD);

  return 0;
}