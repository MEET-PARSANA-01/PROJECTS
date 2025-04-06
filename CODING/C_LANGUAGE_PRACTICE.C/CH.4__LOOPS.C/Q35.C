// Create a program to find the Least Common Multiple (LCM) of two numbers.
#include <stdio.h> //CHALLENGING
int main()
{
  int f, s, max, LCM;
  printf("WELCOME TO LEAST COMMON MULTIPLE FINDER OF TWO NUMBERS!\n");
  printf("ENTER THE VALUE OF FIRST NUMBER: ");
  scanf("%d", &f);
  printf("FINALLY,ENTER THE VALUE OF SECOND NUMBER: ");
  scanf("%d", &s);

  max = f > s ? f : s;

  for (int i = 0; (max % f == 0 && max % s == 0); max++)
  {
    LCM = max;
    break;
  }
  printf("THE LCM OF %d AND %d IS %d", f, s, LCM);

  return 0;
}
/*
~~EXPLANATION:
  1.Initialization: Start with the larger of the two numbers(max),as the LCM cannot be smaller than the largest number.

  2.Loop: Increment max until it is divisible by both f and s.When the condition is satisfied,assign max to LCM and exit the loop.

  3.Output: Print the LCM.
*/