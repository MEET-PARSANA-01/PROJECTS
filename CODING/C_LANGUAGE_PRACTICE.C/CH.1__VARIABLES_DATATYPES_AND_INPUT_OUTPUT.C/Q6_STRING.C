// Define variables for storing a user's first name, last name, and age using appropriate naming conventions and then display them.
#include <stdio.h>
int main()
{
  char First_name, Last_name;
  float Age;
  printf("WELCOME TO DEFINING VARIOUS VARIABLES!\n");
  printf("ENTER THE FIRST NAME OF THE USER: ");
  scanf("%s", &First_name);
  printf("NOW,ENTER THE LAST NAME OF THE USER: ");
  scanf("%s", &Last_name);
  printf("FINALLY,ENTER THE AGE OF THE USER: ");
  scanf("%f", &Age);

  printf("THE FIRST NAME OF THE USER IS \"%s\",LAST NAME IS \"%s\" AND HIS/HER AGE IS %.1f", First_name, Last_name, Age);

  return 0;
}