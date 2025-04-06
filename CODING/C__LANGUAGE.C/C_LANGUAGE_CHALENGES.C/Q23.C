#include <stdio.h>
int main()
{
  int marks;
  printf("WELCOME TO GRADE CALCULATOR\n");
  printf("ENTER YOUR MARKS(0-100): ");
  scanf("%d", &marks);

  if (marks > 90)
  {
    printf("YOU HAVE GOT GRADE 'A' ");
  }
  else if (marks > 75)
  {
    printf("YOU HAVE GOT GRADE 'B' ");
  }
  else if (marks > 60)
  {
    printf("YOU HAVE GOT GRADE 'C' ");
  }
  else if (marks > 30)
  {
    printf("YOU HAVE GOT GRADE 'D' ");
  }
  else
  {
    printf("YOU HAVE GOT GRADE 'F' ");
  }

return 0;
}