// Create a program that reads integers from a file and calculates their sum.
#include <stdio.h>
int main()
{
  const char filename[] = "NUMBERS.TXT";
  FILE *file = fopen(filename, "r");
  if (file == NULL)
  {
    printf("THE REQUESTED FILE COULD NOT BE OPENED!");
    return 1;
  }
  int temp;
  int sum = 0;

  while (fscanf(file, "%d", &temp) == 1)//DOUBT FSCANF
  {
    sum += temp;
  }
  printf("\nTHE SUM OF ALL NUMBERS IS : %d", sum);
  fclose(file);
  file = NULL;

  return 0;
}