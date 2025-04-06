#include <stdio.h>

float get_average(int, int, int, int, int);
int main()
{
  int A, B, C, D, E;
  printf("WELCOME TO AVERAGE FINDER\n");
  printf("ENTER THE FIRST NUMBER: ");
  scanf("%d", &A);
  printf("ENTER THE SECOND NUMBER: ");
  scanf("%d", &B);
  printf("ENTER THE THIRD NUMBER: ");
  scanf("%d", &C);
  printf("ENTER THE FOURTH NUMBER: ");
  scanf("%d", &D);
  printf("ENTER THE FIFTH NUMBER: ");
  scanf("%d", &E);

  printf("THE AVERAGE OF THE ENTERED NUMBERS IS %.2f", get_average(A, B, C, D, E));
  return 0;
}
float get_average(int a, int b, int c, int d, int e)
{

  float average = a + b + c + d + e;
  return average / 5;
}