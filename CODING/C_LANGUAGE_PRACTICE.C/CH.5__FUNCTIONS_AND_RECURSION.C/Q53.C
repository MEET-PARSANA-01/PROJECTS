// Call a function print_date that prints the current date. Define the function without any parameters.
#include <stdio.h>
#include <time.h>

void print_date();

int main()
{
  print_date();

  return 0;
}
void print_date()
{
  time_t/*VARIABLE UNDER TIME.H HEADER FILE*/ current_time;
  time(&current_time);

  char *date_string = asctime(localtime(&current_time));
  printf("CURENT DATE IS : %s", date_string);
}