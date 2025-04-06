/*
I.ARROW OPERATOR
   1. Purpose: Used to access members of a structure or union through a pointer.
   2. Syntax: pointer->member accesses the member of the structure that pointer points to.
   3. Alternative: Equivalent to (*pointer).member, but more concise.
   4. Use Case: Simplifies accessing structure members without dereferencing the pointer explicitly.
   5. Common in Linked Lists: Frequently used in data structures like linked lists for navigating through nodes.
*/

#include <stdio.h>

struct Student
{
  char name[10];
  int roll_no;
  float marks;
};

int main()
{
  int m = 3;
  int *ptr = &m;

  struct Student students = {"MEET", 1, 99.99};
  struct Student *stu_ptr = &students;

  printf("\nSTUDENT NAME: %s,ROLL NO.: %d,MARKS: %.2f\n", students.name, students.roll_no, students.marks);

  printf("\nSTUDENT NAME: %s,ROLL NO.: %d,MARKS: %.2f\n", (*stu_ptr).name, (*stu_ptr).roll_no, (*stu_ptr).marks); // THIS IS OLD WAY

  printf("\nSTUDENT NAME: %s,ROLL NO.: %d,MARKS: %.2f\n", stu_ptr->name, stu_ptr->roll_no, stu_ptr->marks); // THIS IS NEW WAY( (*) = -> )

  return 0;
}