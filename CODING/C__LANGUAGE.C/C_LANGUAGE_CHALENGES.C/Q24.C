#include <stdio.h>
int main()
{
  int age;
  printf("WELCOME TO AGE GROUP CALCULATOR\n");
  printf("ENTER YOUR AGE(0-100): ");
  scanf("%d", &age);

  if (age < 13)
  {
    printf("YOU ARE A CHILD");
  }
  else if (age > 13 && (age < 20))
  {
    printf("YOU ARE A TEENAGER");
  }
  else if (age > 20 && (age < 60))
  {
    printf("YOU ARE AN ADULT");
  }
  else
  {
    printf("YOU ARE A SENIOR CITIZEN");
  }

  return 0;
}