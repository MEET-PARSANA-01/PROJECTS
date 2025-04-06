#include <stdio.h>
int main()
{
  int year;
  printf("ENTER A YEAR: ");
  scanf("%d", &year);

  if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
  {
    printf("%d IS A LEAP YEAR", year);
  }
  else
  {
    printf("%d IS NOT A LEAP YEAR", year);
  }

  // if (year % 400 == 0)
  // {
  //   printf("%d IS A LEAP YEAR", year);
  // }
  // else if (year % 4 == 0)
  // {
  //   printf("%d IS A LEAP YEAR", year);
  // }
  // else if (year % 100 == 0)
  // {
  //   printf("%d IS NOT A LEAP YEAR", year);
  // }
  // else
  // {
  //   printf("%d IS NOT A LEAP YEAR", year);
  // }

  return 0;
}