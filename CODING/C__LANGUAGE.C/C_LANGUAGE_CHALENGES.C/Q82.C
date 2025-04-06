#include <stdio.h>
int main()
{
  char board[3][3] = {{'x', '0', '0'},
                      {'0', 'x', 'x'},
                      {'x', '0', 'x'}};
  printf("WELCOME TO SHOWING TIC-TAC-TOE BOARD\n");

  for (int i = 0; i < 3; i++)
  {
    printf("\n");
    for (int j = 0; j < 3; j++)
    {
      printf("%c", board[i][j]);
      if (j < 2) printf("|");
    }
    if (i < 2)
      printf("\n-----");
  }

  // printf("\n%c|%c|%c", board[0][0], board[0][1], board[0][2]);
  // printf("\n-----");
  // printf("\n%c|%c|%c", board[1][0], board[1][1], board[1][2]);
  // printf("\n-----");
  // printf("\n%c|%c|%c", board[2][0], board[2][1], board[2][2]);

  return 0;
}