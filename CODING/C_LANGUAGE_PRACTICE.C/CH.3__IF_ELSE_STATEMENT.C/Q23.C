/*
Create a program that calculates grades based on marks
    A->above 90 %
    B->above 75 %
    C->above 60 %
    D->above 30 %
    F->below 30 %
*/
#include <stdio.h>
int main()
{
  int marks;
  printf("\nWELCOME TO GRADE CALCULATOR BASED ON MARKS!\n");
  printf("ENTER THE MARKS THAT STUDENT GOT IN FINAL EXAM: ");
  scanf("%d", &marks);

  if (marks > 90)
  {
    printf("THE STUDENT HAS SECURED A GRADE!");
  }
  else if (marks > 75)
  {
    printf("THE STUDENT HAS SECURED B GRADE!");
  }
  else if (marks > 60)
  {
    printf("THE STUDENT HAS SECURED C GRADE!");
  }
  else if (marks > 30)
  {
    printf("THE STUDENT HAS SECURED D GRADE!");
  }
  else if (marks < 30)
  {
    printf("THE STUDENT HAS FAILED IN THE EXAMINATION!");
  }
  else
  {
    printf("INVALID INPUT!\nPLEASE ENTER CORRECT INPUT");
  }

  return 0;
}