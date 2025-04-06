// Write a program to change the value of an integer variable using a pointer and the *operator.

/*
Your program has the right intent, but the logic does not involve changing the value of n using the pointer (i.e., via *m). Instead, you're directly assigning a new value to n using scanf. The goal is to modify the value of n using the pointer m and the dereference operator *
*/

// #include <stdio.h>
// int main()
// {
//   int n = 3;
//   int *m;
//   m = &n;

//   printf("WELCOME TO CHANGING THE VALUE OF AN INTEGER USING POINTER!\n");
//   printf("THE INITIAL VALUE OF n IS %d\n", n);
//   printf("ENTER THE NEW VALUE OF THE n: ");
//   scanf("%d", &n);

//   printf("THE NEW VALUE OF VARIABLE n IS %d", *(&n));

//   return 0;
// }
#include <stdio.h>
int main()
{
  int n = 3;
  int *m;
  m = &n;

  printf("WELCOME TO CHANGING THE VALUE OF AN INTEGER USING POINTER!\n");
  printf("THE INITIAL VALUE OF n IS %d\n", n);
  *m = 5;
  printf("THE NEW VALUE OF VARIABLE n IS %d", n);

  return 0;
}