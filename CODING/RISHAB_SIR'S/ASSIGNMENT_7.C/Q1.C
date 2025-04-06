// DEFINE A STRUCTURE NAMED "EMPLOYEE" TO STORE INFO ABOUT EMPLOYEES INCLUDING THEIR NAMES ,EMPLOYEE ID, AND SALARY.CREATE VARIABLES FOR THREE EMPLOYEES AND DISPLAY THEIR INFO.
#include <stdio.h>

struct Employee
{
  char Name[25];
  int Employee_ID;//doubt EMPLOYEE_ID[] WHY NOT WORKING ?
  float Salary;
};

int main()
{
  struct Employee E[3];

  for (int i = 0; i < 3; i++)
  {
    printf("\nENTER THE DETAILS OF EMPLOYEE %d: ", (i + 1));
    printf("\n\n");

    printf("FirstName: ");
    scanf(" %s", E[i].Name);

    printf("Employee ID: ");
    scanf("%d", &E[i].Employee_ID);

    printf("Salary: ");
    scanf(" %f", &E[i].Salary);
    
    printf("\n");
  }
  printf("\nHERE ARE THE DETAILS OF THE EMPLOYEES:\n\n");
  for (int j = 0; j < 3; j++)
  {
    printf("EMPLOYEE %d:\n\n", (j + 1));
    printf("NAME: %s\nEMPLOYEE ID: %d\nSALARY: %.2f\n\n", E[j].Name, E[j].Employee_ID, E[j].Salary);
  }
}