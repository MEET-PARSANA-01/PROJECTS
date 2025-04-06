// Create a program that determines the greatest of the three numbers.
#include <stdio.h>
int main()
{
  int f, s, t;
  printf("WELCOME TO FINDING GREATEST OF THE THREE NUMBERS!\n");
  printf("ENTER THE VALUE OF FIRST NUMBER(INTEGER VALUE): ");
  scanf("%d", &f);
  printf("NOW,ENTER THE VALUE OF SECOND NUMBER(INTEGER VALUE): ");
  scanf("%d", &s);
  printf("FINALLY,ENTER THE VALUE OF THIRD NUMBER(INTEGER VALUE): ");
  scanf("%d", &t);

  if (f > s && f > t)
  {
    printf("THE FIRST NUMBER IS THE GREATEST OF THE THREE!");
  }
  else if (s > f && s > t)
  {
    printf("THE SECOND NUMBER IS THE GREATEST OF THE THREE!");
  }
  else if (t > f && t > s)
  {
    printf("THE THIRD NUMBER IS THE GREATEST OF THE THREE!");
  }
 

  return 0;
}