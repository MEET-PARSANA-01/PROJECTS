// Create a program to find number of occurrences of an element in an array.
#include <stdio.h>
int main()
{
  int counter, target = 0;
  int occ[10] = {1, 1, 1, 2, 2, 3, 3, 4, 4, 5};

  printf("ENTER THE ELEMENT TO FIND OCCURRENCES OF: ");
  scanf("%d", &target);

  for (int i = 0; i < 10; i++)
  {
    if (occ[i] == target)
    {
      counter++;
    }
  }
  printf("THE ELEMENT %d OCCURS %d TIMES IN THE ARRAY.\n", target, counter);

  return 0;
}
