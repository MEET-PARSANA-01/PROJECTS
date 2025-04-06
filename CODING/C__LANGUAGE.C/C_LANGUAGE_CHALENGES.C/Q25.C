#include <stdio.h>
int main()
{
  int first, second, answer;
  printf("ENTER THE FIRST NUMBER: ");
  scanf("%d", &first);
  printf("ENTER THE SECOND NUMBER: ");
  scanf("%d", &second);

  answer = first < second ? first : second;
  printf("MINIMUM OF THE TWO IS %d", answer);

  return 0;
}