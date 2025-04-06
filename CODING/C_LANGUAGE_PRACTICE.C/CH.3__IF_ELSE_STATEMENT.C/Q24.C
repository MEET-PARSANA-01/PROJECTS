/*
Create a program that categorize a person into different age groups
 Child -> below 13
 Teen -> below 20
 Adult -> below 60
 Senior-> above 60
*/
#include <stdio.h>
int main()
{
  int age;
  printf("\nWELCOME TO CATEGORIZATION OF A PERSON!\n");
  printf("ENTER THE AGE OF THE PERSON: ");
  scanf("%d", &age);

  if (age > 60)
  {
    printf("THE PERSON IS A \"SENIOR\"");
  }
  else if (age > 20 && age < 60)
  {
    printf("THE PERSON IS AN \"ADULT\"");
  }
  else if (age > 13 && age < 20)
  {
    printf("THE PERSON IS A \"TEENAGER\"");
  }
  else if (age < 13)
  {
    printf("THE PERSON IS A \"CHILD\"");
  }
  else
  {
    printf("INVALID INPUT!\nPLEASE ENTER THE CORRECT INPUT");
  }

  return 0;
}