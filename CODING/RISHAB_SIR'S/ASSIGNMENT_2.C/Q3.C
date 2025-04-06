// Q3.Implement a function to find the Fibonacci sequence up to a specified number of terms.
#include <stdio.h>

void factorial();

int n;
int previous = 0;
int next = 1;

int main()
{
  printf("ENTER THE NUMBER OF TERMS: ");
  scanf("%d", &n);
  printf(" 0 ");

  if (n > 0)
  {
    printf(" 1 ");
  }

  factorial();
  return 0;
}

void factorial()
{

  while (previous + next <= n)
  {
    int sum = previous + next;
    printf(" %d ", sum);
    previous = next;
    next = sum;
  }
}