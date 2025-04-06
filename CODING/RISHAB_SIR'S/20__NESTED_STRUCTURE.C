/*
Q.Write a C program using structures to store and display the details of an employee. The program should include an Employee structure with fields for employee ID, name, and a nested structure Date to store the date of joining (day, month, and year).
*/
#include <stdio.h>

struct Employee
{
  char Name[30];
  int EmployeeID;
  float Salary;
  struct Date
  {
    int DD;
    char MM[10];
    int YYYY;
  } D1;
};

int main()
{
  struct Employee E1 = {"Meetudo", 1001, 1300000.00, {21, "Sept", 2006}};
  printf("\n\nHERE ARE THE EMPLOYEE DETAILS:\n\n");
  printf("--> Name: %s\n--> EmployeeID: %d\n--> Salary: %.2f\n--> Date of joining: %d,%s %d\n\n", E1.Name, E1.EmployeeID, E1.Salary, E1.D1.DD, E1.D1.MM, E1.D1.YYYY);

  return 0;
}

/*
Q.Write a program using Nested Structures,collect 'n' student details from the various departments and print the same which include required attributes for department details.
*/
// #include <stdio.h>

// struct Department
// {
//   char DepartmentName[30];
//   int DepartmentID;
// };
// struct Student
// {
//   char Name[30];
//   int EnrollmentNumber;
//   char Stream[20];
//   struct Department D1;
// };

// int main()
// {
//   int N;
//   printf("\n\nENTER THE NUMBER OF STUDENTS: ");
//   scanf("%d", &N);

//   struct Student S[N];

//   for (int i = 0; i < N; i++)
//   {
//     printf("\n\nEnter the details of student %d:\n\n", (i + 1));

//     printf("Enter the name of the student: ");
//     scanf(" %[^\n]s", S[i].Name);

//     printf("Enrollment number: ");
//     scanf("%d", &S[i].EnrollmentNumber);

//     printf("Stream: ");
//     scanf(" %[^\n]s", S[i].Stream);

//     printf("Name of department: ");
//     scanf(" %[^\n]s", S[i].D1.DepartmentName);

//     printf("Department ID: ");
//     scanf("%d", &S[i].D1.DepartmentID);
//   }
//   for (int j = 0; j < N; j++)
//   {
//     printf("\n\nDETAILS OF STUDENT %d:-\n\n", (j + 1));
//     printf(" --> Name: %s\n --> Enrollment number: %d\n --> Stream name: %s\n --> Department name: %s\n --> Department ID: %d\n\n", S[j].Name, S[j].EnrollmentNumber, S[j].Stream, S[j].D1.DepartmentName, S[j].D1.DepartmentID);
//   }

//   return 0;
// }
