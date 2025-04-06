#include <stdio.h>
#include <string.h>

struct Employees
{
  int id;
  char Name[20];
  float Salary;
};

int main()
{
  struct Employees E1 = {1, "MEET", 1200000.0000};

  printf("\n\nEMPLOYEE DETAILS: ");
  printf("id: %d,Name: %s, Salary: %f\n\n", E1.id, E1.Name, E1.Salary);

  printf("%lu\n", sizeof(Employees));

  printf("%lu\n", sizeof(E1));

  return 0;
}

// #include <stdio.h>
// #include <string.h>

// struct Employees
// {
//   int id;
//   char Name[25];
//   float Salary;
// };

// int main()
// {
//   struct Employees E1;

//   E1.id = 1;
//   // strcpy(E1.Name, "MEET");
//   E1.Name = "MEET";
//   E1.Salary = 12000.12;
//   printf("EMPLOYEE DETAILS: ");
//   printf("id: %d,Name: %s, Salary: %f", E1.id, E1.Name, E1.Salary);

//   return 0;
// }