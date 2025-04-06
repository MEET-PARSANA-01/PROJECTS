// HERE ARE THE DIFFERENT WAYS TO DECLARE AND INITIALIZE STRUCTER.
#include <stdio.h>
#include <string.h>

struct Employee
{
  char Name[30];
  int EmployeeId;
  float Salary;
} E1; // FIRST WAY

int main()
{
  E1 = {"BHAYLU", 1001, 1000000.00};

  struct Employee E2 = {"MEETUDO", 1002, 1300000.00}; // SECOND WAY

  struct Employee E3; // THIRD WAY
  strcpy(E3.Name, "KUSH");
  E3.EmployeeId = 1003;
  E3.Salary = 1500000.00;

  printf("\n\nHERE ARE THE EMPLOYEE DETAILS:\n\n");

  printf("--> Name: %s\n--> EmployeeID: %d\n--> Salary: %.2f\n\n", E1.Name, E1.EmployeeId, E1.Salary);
  printf("--> Name: %s\n--> EmployeeID: %d\n--> Salary: %.2f\n\n", E2.Name, E2.EmployeeId, E2.Salary);
  printf("--> Name: %s\n--> EmployeeID: %d\n--> Salary: %.2f\n\n", E3.Name, E3.EmployeeId, E3.Salary);

  return 0;
}


//ANOTHER WAY TO STORE NAME IN THE VARIABLE(POINTER TO STRUCTURE)
// #include <stdio.h>
// #include <string.h>

// struct Employee
// {
//   char Name[30];
//   char *king;
//   int EmployeeId;
//   float Salary;
// };

// int main()
// {
//   struct Employee E1;
//   E1.king = E1.Name;
//   strcpy(E1.king, "BHAYLU");

//   printf("%s", E1.king);

//   return 0;
// }
