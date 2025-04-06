// HERE ARE THE DIFFERENT WAYS TO DECLARE AND INITIALIZE STRUCTUTER.
#include <stdio.h>
#include<string.h>

struct Employee
{
  char Name[30];
  int EmployeeId;
  float Salary;
} E1; // FIRST WAY

int main()
{
  E1 = {"ANURAG VADOLIYA", 001, 1250000.00}; // SECOND WAY
  struct Employee E2 = {"MEET PARSANA", 002, 1200000.00};//THIRD WAY 
  // struct Employee E3;
  // E3.Name = "MEET";
  // strcpy(E3.Name);

  printf("\n\nDETAILS OF EMPLOYEE 1:\n\n");
  printf("Name of Employee: %s\nEmployeeId: %d\nSalary: %.2f", E1.Name, E1.EmployeeId, E1.Salary);

  printf("\n\n\nDETAILS OF EMPLOYEE 2:\n\n");
  printf("Name of Employee: %s\nEmployeeId: %d\nSalary: %.2f", E2.Name, E2.EmployeeId, E2.Salary);
  return 0;
}