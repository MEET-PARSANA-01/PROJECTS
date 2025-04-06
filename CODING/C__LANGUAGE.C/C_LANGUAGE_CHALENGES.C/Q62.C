#include <stdio.h>
void min_max(int *, int *, int *, int *);
int main()
{
  int first, second, min, max;
  printf("WELCOME TO FINDING MIN AND MAX\n");
  printf("ENTER THE FIRST NUMBER: ");
  scanf("%d", &first);
  printf("NOW,ENTER THE SECOND NUMBER: ");
  scanf("%d", &second);

  min_max(&first, &second, &min, &max);
  printf("BETWEEN %d AND %d,MINIMUM IS %d AND MAXIMUM IS %d", first, second, min, max);

  return 0;
}
void min_max(int *a, int *b, int *min, int *max)
{
  if (*a < *b)
  {
    *min = *a;
    *max = *b;
  }
  else
  {
    *min = *b;
    *max = *a;
  }
}