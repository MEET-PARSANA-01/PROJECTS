// Develop a program that calculates the sum of all numbers entered by a user until the user enters 0. The total sum should then be displayed.
#include <stdio.h>
int main()
{
  int n[] = {};
  for (int i = 0;1;i++)
  {
    printf("ENTER THE NUMBER: ");
    scanf("%d", &n[i]);
    if (n[i] == 0)
    {
      break;
    }
  }
  int SUM = 0;
  for (int j = 0; j < sizeof(n); j++)
  {
    SUM = SUM + n[j];
  }
  printf("THE SUM OF ALL THE NUMBERS ENTERED BY THE USER IS %d", SUM);

  return 0;
}