// Create a program that determines if a given year is a leap year(considering conditions like divisible by 4 but not 100, unless also divisible by 400).
#include <stdio.H>
int main()
{
  int year;
  printf("WELCOME TO LEAP YEAR FINDER!\n");
  printf("ENTER THE YEAR YOU WANT TO FIND: ");
  scanf("%d", &year);

  if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
  {
    printf("%d IS A LEAP YEAR!", year);
  }

  else
  {
    printf("%d IS NOT A LEAP YEAR!", year);
  }

  return 0;
}