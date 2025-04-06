/*
Q.Define a structure Student with fields name, rollNo, and marks. Write a function displayStudent() that takes a Student structure as an argument and prints the details.
*/
#include <stdio.h>

int N;

struct STUDENT
{
  char Name[30];
  int Enrollment_Number;
  float Marks_FPL_1;
  float Marks_FUID_2;
};

void displayStudentdetails(struct STUDENT s[])
{
  for (int j = 0; j < N; j++)
  {
    if (N > 1)
    {
      printf("\n\n\nHERE ARE THE DETAILS OF THE STUDENT %d:-\n\n", (j + 1));
    }
    else
    {
      printf("\n\n\nHERE ARE THE DETAILS OF THE STUDENT:-\n\n");
    }

    printf(" --> Name of the Student: %s\n --> Enrollment Number: %d\n --> Marks in subject \"FPL 1\": %.2f\n --> Marks in subject \"FUID 2\": %.2f\n", s[j].Name, s[j].Enrollment_Number, s[j].Marks_FPL_1, s[j].Marks_FUID_2);
  }
}

int main()
{
  printf("\n\nENTER THE NUMBER OF STUDENT: ");
  scanf("%d", &N);

  struct STUDENT S[N];

  for (int i = 0; i < N; i++)
  {
    if (N > 1)
    {
      printf("\n\nENTER THE DETAILS OF THE STUDENT %d: \n\n", (i + 1));
    }
    else
    {
      printf("\n\nENTER THE DETAILS OF THE STUDENT: \n\n");
    }

    printf("ENTER THE NAME OF THE STUDENT: ");
    scanf(" %29[^\n]s", S[i].Name);

    printf("ENROLLMENT NUMBER: ");
    scanf("%d", &S[i].Enrollment_Number);

    printf("MARKS IN SUBJECT FPL 1 OUT OF 100: ");
    scanf("%f", &S[i].Marks_FPL_1);

    printf("MARKS IN SUBJECT FUID 2 OUT OF 100: ");
    scanf("%f", &S[i].Marks_FUID_2);
  }

  displayStudentdetails(S);
  printf("\n\n");

  return 0;
}