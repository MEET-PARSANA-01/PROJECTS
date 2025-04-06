#include <stdio.h>

struct Student
{
  char Name[35];
  long long int Enrollment_number;
  int Age;
  float Marks;
  long long int Phone_number; // DOUBT Phone_number[10] , garbage value
};

int main()
{
  printf("\n-->THE SIZE OF THE WHOLE STUDENT STRUCTURE IS %lu BYTES\n\n", sizeof(Student));

  long long int King = 1;

  printf("-->THE SIZE OF LONG LONG INT IS %lu BYTES", sizeof(King));
  printf("\n\n");

  return 0;
}