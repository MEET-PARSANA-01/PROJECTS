/*
~~ARRAY AS FUNCTION ARGUMENTS:

  1.ARRAY TO POINTERS: ARRAYS BECOME POINTERS WHEN PASSED TO FUNCTIONS.
  2.CALL BY REFERENCE: CHANGES IN FUNCTION AFFECT THE ORIGINAL ARRAY.
  3.INCLUDE SIZE: PASS ARRAY SIZE AS AN EXTRA ARGUMENT.
  4.SPECIFY TYPE: DECLARE ELEMENT TYPE AS THE FUNCTION PARAMETERS.
  5.EFFICIENT: NO FULL ARRAY COPY,JUST THE POINTER IS PASSED.

*/

#include <stdio.h>

void print_marks(int marks[], int no_of_students);

int main()
{
  int marks[5];
  int no_of_students = 5;

  for (int i = 0; i < no_of_students; i++)
  {
    printf("Please enter marks for Student %d:", i + 1);
    scanf(" %d", &marks[i]);
  }

  print_marks(marks, no_of_students);

  return 0;
}

void print_marks(int student_marks[], int student_count)
{
  for (int i = 0; i < student_count; i++)
  {
    printf("\nMarks of student %d are: %d", (i + 1), student_marks[i]);
  }
}