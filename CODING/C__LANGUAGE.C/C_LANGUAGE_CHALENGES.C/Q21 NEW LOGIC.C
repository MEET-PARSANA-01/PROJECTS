#include <stdio.h>
int main()
{
  int first, second, third;
  printf("ENTER THE FIRST NUMBER: ");
  scanf("%d", &first);
  printf("ENTER THE SEC0ND NUMBER: ");
  scanf("%d", &second);
  printf("FINALLY,ENTER THE THIRD NUMBER: ");
  scanf("%d", &third);

  if (first > second && first > third)
  {
    printf("THE FIRST NUMBER IS THE GREATEST\n");
  }
  else if (second > third)
  {
    printf("THE SECOND NUMBER IS THE GREATEST\n");
  }
  else
  {
    printf("THE THIRD NUMBER IS THE GREATEST\n");
  }

  return 0;
}