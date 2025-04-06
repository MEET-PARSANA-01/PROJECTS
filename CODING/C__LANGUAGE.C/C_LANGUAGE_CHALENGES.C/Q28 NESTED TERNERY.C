#include <stdio.h>
int main()
{
  int score;
  printf("WELCOME TO CATEGORY CALCULATOR:\n");
  printf("ENTER YOUR SCORE: ");
  scanf("%d", &score);

  printf("\nYOUR MARKS ARE IN THIS CATEGORY: ");
  score > 80 ? printf("HIGH")
             : (score >= 50 ? printf("MODERATE")
                            : printf("LOW"));
  return 0;
}