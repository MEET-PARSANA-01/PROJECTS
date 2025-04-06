/*
ARRAY TRAVERSAL:

 1.ORDERLY VISIT: GO THROUGH ELEMENTS FROM START TO END.
 2.LOOPS: USE for OR while FOR ACCESS.
 3.INDEXES: START AT 0,END AT -1.
 4.MODIFY OR READ: PERFORM OPERATIONS ON ELEMENTS.
 5.POINTER OPTION: INCREMENT POINTERS TO NAVIGATE.
 */

#include <stdio.h>

int main()
{
  int MARKS[10];
  int no_of_students = 10;

  for (int i = 0; i < no_of_students; i++)
  {
    printf("Please enter marks for Student %d:", i + 1);
    scanf(" %d", &MARKS[i]);
  }

  for (int i = 0; i < no_of_students; i++)
  {
    printf("\nMarks of student %d are: %d", (i + 1), MARKS[i]);
  }

  return 0;
}