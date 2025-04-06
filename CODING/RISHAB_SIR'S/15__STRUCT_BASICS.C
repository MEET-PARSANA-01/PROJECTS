// write a program to store the information of 7 students using structure. The information should be name, enrollment number, age, marks, phone number. Print the information of all the students.

// #include <stdio.h>

// struct Student
// {
//   char Name[35];
//   long long int Enrollment_Number;
//   int Age;
//   float Marks;
//   long long int Phone_Number;
// };

// int main()
// {
//   struct Student Student[1];

//   for (int i = 0; i < 1; i++)
//   {
//     printf("\nENTER THE DETAILS OF STUDENT %d\n\n", i + 1);
//     printf("ENTER THE NAME OF THE STUDENT:  ");
//     scanf(" %34[^\n]", Student[i].Name);
//     printf("ENTER THE ENROLLMENT NUMBER OF THE STUDENT: ");
//     scanf("%lld", &Student[i].Enrollment_Number);
//     printf("ENTER THE AGE OF THE STUDENT: ");
//     scanf("%d", &Student[i].Age);
//     printf("ENTER THE MARKS OF THE STUDENT: ");
//     scanf("%f", &Student[i].Marks);
//     printf("ENTER THE PHONE NUMBER OF THE STUDENT: ");
//     scanf("%lld", &Student[i].Phone_Number);
//   }

//   printf("\n\n-->HERE ARE THE DETAILS OF THE STUDENTS!\n");

//   for (int i = 0; i < 1; i++)
//   {
//     printf("\nSTUDENT %d\nNAME: %s\nENROLLMENT NUMBER: %lld\nAGE: %d\nMARKS: %.2f\nPHONE NUMBER: %lld\n", i + 1, Student[i].Name, Student[i].Enrollment_Number, Student[i].Age, Student[i].Marks, Student[i].Phone_Number);
//     printf("\n");
//   }
//   return 0;
// }

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

  struct Student S1[1];

  for (int i = 0; i < 1; i++)
  {
    printf("\nENTER THE DETAILS OF STUDENT %d\n", (i + 1));
    printf("ENTER THE NAME OF THE STUDENT: ");
    scanf("%34[^\n]", S1[i].Name);
    printf("ENTER THE ENROLLMENT NUMBER OF THE STUDENT: ");
    scanf("%lld", &S1[i].Enrollment_number);
    printf("ENTER THE AGE OF THE STUDENT: ");
    scanf("%d", &S1[i].Age);
    printf("ENTER THE MARKS OF THE STUDENT: ");
    scanf(" %f", &S1[i].Marks);
    printf("ENTER THE PHONE NUMBER OF THE STUDENT: ");
    scanf("%lld", &S1[i].Phone_number);
  }

  printf("\n\nHERE ARE THE STUDENT DETAILS!\n");

  for (int j = 0; j < 1; j++)
  {
    printf("STUDENT NAME: %s\nENROLLMENT NUMBER: %lld\nAGE: %d\nMARKS: %.2f\nPHONE NUMBER: %lld", S1[j].Name, S1[j].Enrollment_number, S1[j].Age, S1[j].Marks, S1[j].Phone_number);
  }

  return 0;
}