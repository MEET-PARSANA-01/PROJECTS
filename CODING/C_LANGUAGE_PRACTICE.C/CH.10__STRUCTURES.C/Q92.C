// Write a function that accepts a pointer to a Student structure with fields for id, name, year, gpa and modifies its grades.
#include <stdio.h>

struct Student
{
  int id;
  char Name[25];
  char Year[25];
  float GPA;
};

void Stu_struct(struct Student *stu);

void Student(struct Student S1);

int main()
{
  struct Student S1 = {1, "MEET PARSANA", "FIRST", 7.18};

  struct Student *stu = &S1;

  printf("\nMODIFICATION WITH THE HELP OF CALL BY VALUE:-\n");

  printf("\nSTUDENT NAME: %s\nSTUDENT ID: %d\nYEAR: %s\nG.P.A: %.2f\n", S1.Name, S1.id, S1.Year, S1.GPA);

  Student(S1); // CALL BY VALUE

  printf("\nSTUDENT NAME: %s\nSTUDENT ID: %d\nYEAR: %s\nG.P.A: %.2f\n", S1.Name, S1.id, S1.Year, S1.GPA);

  printf("\nMODIFICATION WITH THE HELP OF CALL BY REFERENCE:-\n");

  Stu_struct(stu); // CALL BY REFERENCE

  printf("\nSTUDENT NAME: %s\nSTUDENT ID: %d\nYEAR: %s\nG.P.A: %.2f\n", S1.Name, S1.id, S1.Year, S1.GPA);

  return 0;
}
void Stu_struct(struct Student *stu)
{
  stu->GPA = 9.03;
  printf("\nSTUDENT NAME: %s\nSTUDENT ID: %d\nYEAR: %s\nG.P.A: %.2f\n", stu->Name, stu->id, stu->Year, stu->GPA);
}

void Student(struct Student S1)
{
  S1.GPA = 8.19;
  printf("\nSTUDENT NAME: %s\nSTUDENT ID: %d\nYEAR: %s\nG.P.A: %.2f\n", S1.Name, S1.id, S1.Year, S1.GPA);
}
