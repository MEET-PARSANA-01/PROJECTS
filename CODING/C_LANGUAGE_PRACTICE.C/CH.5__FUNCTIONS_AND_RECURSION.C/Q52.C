// Define a function square that takes an int and returns its square.
// #include <stdio.h> PENDING 

// int square(int);

// int main()
// {
//   int n;
//   printf("ENTER THE NUMBER OF WHICH YOU WANT TO FIND SQUARE: ");
//   scanf("%d", &n);
//   int square();
//   printf("THE SQUARE OF %d IS %d", n, ans);

//   return 0;
// }
// int ans;

// int square(int a)
// {
//   ans = a * a;
//   return ans;
// }
#include <stdio.h>

int square(int);

int main()
{
  int n;
  printf("ENTER THE NUMBER OF WHICH YOU WANT TO FIND SQUARE: ");
  scanf("%d", &n);
  printf("THE SQUARE OF %d IS %d", n, square(n));

  return 0;
}

int square(int a)
{
  int ans = a * a;
  return ans;
}
