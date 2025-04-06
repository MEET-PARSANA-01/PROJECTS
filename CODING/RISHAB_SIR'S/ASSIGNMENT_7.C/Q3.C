// DESIGN A STRUCTURE NAMED "STUDENT" TO STORE STUDENT INFO INCLUDING NAME,ROLL NO,AND MARKS IN THREE SUBJECTS.WRITE A FUNCTION TO CALCULATE THE AVERAGE MARKS OF A STUDENT.

#include <stdio.h>

int n;

struct STUDENT
{
  char Name[30];
  int Enrollment_number;
  float Marks_FPL_1;
  float Marks_FUID_2;
  float Marks_FDM;
};

void findAverage(struct STUDENT S[])
{
  printf("\n\nAVERAGE MARKS OF STUDENTS:-\n\n");
  for (int i = 0; i < n; i++)
  {
    float Average = (S[i].Marks_FPL_1 + S[i].Marks_FUID_2 + S[i].Marks_FDM) / 3;
    printf("--> Average marks of Student \"%s\": %.2f\n\n", S[i].Name, Average);
  }
}

int main()
{
  printf("\n\nENTER THE NUMBER OF STUDENT: ");
  scanf("%d", &n);

  struct STUDENT s[n];

  for (int i = 0; i < n; i++)
  {
    printf("\n\nENTER THE DETAILS OF STUDENT %d\n\n", (i + 1));

    printf("NAME OF THE STUDENT: ");
    scanf(" %29[^\n]s", s[i].Name);

    printf("ENROLLMENT NUMBER: ");
    scanf("%d", &s[i].Enrollment_number);

    printf("MARKS IN SUBJECT \"FPL_1\" OUT OF 100: ");
    scanf("%f", &s[i].Marks_FPL_1);

    printf("MARKS IN SUBJECT \"FUID_2\" OUT OF 100: ");
    scanf("%f", &s[i].Marks_FUID_2);

    printf("MARKS IN SUBJECT \"FDM\" OUT OF 100: ");
    scanf("%f", &s[i].Marks_FDM);
  }

  printf("\n\n\nHERE ARE THE STUDENT DETAILS:-\n\n");
  for (int j = 0; j < n; j++)
  {
    printf("Details of Student %d\n\n", (j + 1));
    printf("--> Name: %s\n--> Enrollment Number: %d\n--> Marks in subject \"FPL_1\": %.2f\n--> Marks in subject \"FUID_2\": %.2f\n--> Marks in subject \"FDM\": %.2f\n\n", s[j].Name, s[j].Enrollment_number, s[j].Marks_FPL_1, s[j].Marks_FUID_2, s[j].Marks_FDM);
  }

  findAverage(s);

  return 0;
}