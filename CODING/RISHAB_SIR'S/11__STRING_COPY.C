// WRITE A PROGRAM WHICH TAKES STRING AS AN INPUT FROM THE USER AND THEN CREATE A COPY OF THAT STRING.
#include <stdio.h>
int main()
{
  int Size;
  printf("ENTER THE SIZE OF THE STRING: ");
  scanf("%d", &Size);

  char KING[Size];

  for (int i = 0; i < Size; i++)
  {
    printf("ENTER THE %d ELEMENT OF THE STRING: ", (i + 1));
    scanf(" %c", &KING[i]);
  }

  printf("\n");

  printf("WHOLE STRING IS: %s", KING);

  printf("\n");
  printf("\n");

  char QUEEN[Size];

  for (int j = 0; j < Size; j++)
  {
    QUEEN[j] = KING[j];
  }

  printf("COPY OF STRING KING IS: %s", QUEEN);

  return 0;
}