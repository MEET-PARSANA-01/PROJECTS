#include <stdio.h>
int main()
{
  char KING[100];
  printf("ENTER THE STRING:  ");
  fgets(KING, 100, stdin);

  int i = 0;

  while (KING[i] != '\0')
  {
    printf(" %c", KING[i]);
    i++;
  }
  
  return 0;
}