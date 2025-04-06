#include <stdio.h>
int main()
{
  int rows;
  printf("WELCOME TO PATTERN PRINTER\n");
  printf("ENTER THE NUMBER OF ROWS: ");
  scanf("%d", &rows);

  for (int i = 1; i <= rows; i++) /*THIS FIRST LOOP WILL MONITOR THAT HOW MANY
   ROWS SHOULD BE PRINTED*/
  {
    printf("\n");
    for (int j = 0; j < i; j++) /*AND THIS SECOND LOOP WILL MONITOR THAT HOW MUCH STAR WILL BE PRINTED IN EACH ROW */
    {
      printf(" M");
    }
  }

  printf("\n\n");

  for (int i = 0; i < rows; i++)
  {
    printf("\n");
    for (int j = 0; j < rows - i; j++)
    {
      printf(" M");
    }
  }

  printf("\n\n");

  for (int i = 1; i <= rows; i++)
  {
    printf("\n");

    for (int k = 0; k < rows - i; k++)
    {
      printf("  ");
    }
    for (int j = 0; j < i; j++)
    {
      printf(" M");
    }
  }
  return 0;
}
