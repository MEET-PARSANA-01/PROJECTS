/*
J.STRUCTURE AS FUNCTION ARGUMENTS
   1. Memory: Direct passing copies the whole structure; passing by address is more efficient.
   2. Modification: Changes in the function affect the original only when passed by address.
   3. Performance: Passing by address is faster, especially for large structures.
   4. Simplicity: Direct passing is simpler but less flexible; passing by address allows modifications
*/

#include <stdio.h>

struct Student
{
  char name[10];
  int roll_no;
  float marks;
};
// CALL BY VALUE
void print_student(struct Student stu);

// CALL BY REFERENCE
// void print_student_from_pointer(struct Student *stu);

int main()
{
  int m = 3;
  // int *ptr = &m;

  struct Student students = {"MEET", 1, 99.99};
  // struct Student *stu_ptr = &students;

  print_student(students); // CALL BY VALUE
  printf("\nSTUDENT NAME: %s,ROLL NO.: %d,MARKS: %.2f\n", students.name, students.roll_no, students.marks);

  // print_student_from_pointer(stu_ptr); // CALL BY REFERENCE
  // printf("\nSTUDENT NAME: %s,ROLL NO.: %d,MARKS: %.2f\n", students.name, students.roll_no, students.marks);

  return 0;
}

void print_student(struct Student stu)
{
  stu.roll_no = 5;
  printf("\nSTUDENT NAME: %s,ROLL NO.: %d,MARKS: %.2f\n", stu.name, stu.roll_no, stu.marks);
}

// void print_student_from_pointer(struct Student *ptr)
// {
//   ptr->roll_no = 6;
//   printf("\nSTUDENT NAME: %s,ROLL NO.: %d,MARKS: %.2f\n", ptr->name, ptr->roll_no, ptr->marks);
// }
