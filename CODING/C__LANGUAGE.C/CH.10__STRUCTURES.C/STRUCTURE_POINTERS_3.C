/*
H.STRUCTURE POINTER
  1. Definition: Structure pointers are pointers that point to structure variables.
  2. Pointer Arithmetic: For structure arrays same pointer arithmetic applies.
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

  struct Student S1 = {"MEET", 1, 99.99};
  struct Student *S1_ptr = &S1;

  printf("\nSTUDENT NAME: %s,ROLL NO.: %d,MARKS: %.2f\n", S1.name, S1.roll_no, S1.marks);
  printf("\nSTUDENT NAME : % s, ROLL NO. : % d, MARKS : % .2f\n", S1_ptr->name, S1_ptr->roll_no, S1_ptr->marks);

  return 0;
}