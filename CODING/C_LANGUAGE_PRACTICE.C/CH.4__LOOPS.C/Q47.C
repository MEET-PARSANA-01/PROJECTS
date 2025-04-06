//. Create a program using continue to sum all positive numbers entered by the user;skip any negative numbers.
#include <stdio.h>
int main()
{
  int n;
  printf("OF HOW MANY NUMBERS YOU WANT TO FIND SUM: ");
  scanf("%d", &n);

  int digit[n];

  for (int i = 0; i < n; i++)
  {
    printf("ENTER NUMBER %d: ", (i + 1));
    scanf("%d", &digit[i]);
  }
  int SUM = 0;

  for (int j = 0; j < n; j++)
  {
    if (digit[j] < 0)
    {
      continue;
    }
    else
    {
      SUM = SUM + digit[j];
    }
  }

  printf("THE SUM OF ALL POSITIVE NUMBERS ENTERED BY THE USER IS %d", SUM);

  return 0;
}
