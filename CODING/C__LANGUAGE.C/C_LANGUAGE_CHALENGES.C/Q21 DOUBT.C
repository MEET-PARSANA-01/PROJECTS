#include <stdio.h>
int main()
{
  int first, second, third;
  printf("ENTER THE FIRST NUMBER: ");
  scanf("%d", &first);
  printf("ENTER THE second NUMBER: ");
  scanf("%d", &second);
  printf("FINALLY,ENTER THE THIRD NUMBER: ");
  scanf("%d", &third);

  if (first > second)
  {
    if (first > third)
    {
      printf("%d IS THE GREATEST NUMBER.",first);
    }
    else
    {
      printf("%d IS THE GREATEST NUMBER.",third);
    }
  }
  else if (second > third)
  {
    if (second > first)
    {
      printf("%d IS THE GREATEST NUMBER.",second);
    }
    else
    {
      printf("%d IS THE GREATEST NUMBER.",first);
    }
  }
  return 0;
}