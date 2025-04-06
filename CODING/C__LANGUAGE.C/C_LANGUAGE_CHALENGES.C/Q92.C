#include <stdio.h>

typedef struct
{
  char id[10];
  char name[50];
  char year[10];
  char grade;
} Student;

void increase_grade(Student *);
void decrease_grade(Student *);
void print_students(Student *);

int main()
{
  Student stu1 = {.id = "CS001",
                  .name = "MEET",
                  .year = "FIRST",
                  .grade = 'B'};
  Student stu2 = {.id = "CS002",
                  .name = "YUG",
                  .year = "SECOND",
                  .grade = 'A'};
  Student stu3 = {.id = "CS003",
                  .name = "MIHIR",
                  .year = "THIRS",
                  .grade = 'F'};

  printf("WELCOME TO OUR COLLEGE!\n\n");
  printf("HERE ARE THE STUDENT DETAILS: \n");
  print_students(&stu1);
  print_students(&stu2);
  print_students(&stu3);

  decrease_grade(&stu1);
  increase_grade(&stu3);

  printf("\nAFTER CHANGES: ");
  print_students(&stu1);
  print_students(&stu2);
  print_students(&stu3);
  return 0;
}

void increase_grade(Student *stu)
{
  stu->grade--;
}
void decrease_grade(Student *stu)
{
  stu->grade++;
}
void print_students(Student *stu)
{
  printf("\n\nTHE STUDENT WITH %s NAME HAS ID %s AND STUDIES IN %s YEAR HAS ACHIEVED %c GRADE", stu->name, stu->id, stu->year, stu->grade);
}