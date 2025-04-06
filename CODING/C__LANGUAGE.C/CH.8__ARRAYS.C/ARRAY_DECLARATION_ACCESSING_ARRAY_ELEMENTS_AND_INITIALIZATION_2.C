/*
ARRAY:

  1.SYNTAX: DECLARED BY SPECIFYING THE TYPE,NAME, AND SIZE IN BRACKETS,e.g.,int arr[10];
  2.FIXED SIZE: SIZE MUST BE KNOWN AT COMPILE TIME OR BE A CONSTANT EXPRESSION.
  3.ZERO-BASED INDEXING: ARRAYS ARE INDEXED STARTING FROM 0.
  4.STORAGE: CONTIGUOS BLOCK OF MEMORY.
  5.TYPE UNIFORMITY: ALL ELEMENTS MUST BE OF THE SAME TYPE.

ACCESSING ARRAY ELEMENTS:

  1.USE INDEXES: ACCESS WITH arr[index].
  2.STARTS AT 0: FIRST ELEMENT IS arr[0].
  3.FOR LOOPS: ITERATE WITH LOOPS.
  4.NO BOUNDS CHECK: ACCESSING OUTSIDE THE ARRAY SIZE IS UNSAFE.

ARRAY INITIALIZATION:

  1.DIRECT ASSIGNMENT: INITIALIZE WITH VALUES,e.g.,int nums[] = {1,2,3};.
  2.AUTO ZERO-FILL: UNSPECIFIED ELEMENTS DEFAULT TO ZERO,e.g.,int arr[5] = {1};.
  3.ZERO ARRAY: INITIALIZE ALL TO ZERO WITH int arr[5] = {0}; OR EMPTY BRACES.
  4.DESIGANATED: SET SPECIFIC ELEMENTS,e.g.,int arr[5] = {[2] = 5}.
*/

#include <stdio.h>

int main()
{
  int marks[] = {90, 94, 91, 96, 100};

  // printf("Please enter marks for Student 1:");
  // scanf(" %d", &marks[0]);
  // printf("Please enter marks for Student 2:");
  // scanf(" %d", &marks[1]);
  // printf("Please enter marks for Student 3:");
  // scanf(" %d", &marks[2]);
  // printf("Please enter marks for Student 4:");
  // scanf(" %d", &marks[3]);
  // printf("Please enter marks for Student 5:");
  // scanf(" %d", &marks[4]);

  printf("\nMarks of student 1 are: %d", marks[0]);
  printf("\nMarks of student 2 are: %d", marks[1]);
  printf("\nMarks of student 3 are: %d", marks[2]);
  printf("\nMarks of student 4 are: %d", marks[3]);
  printf("\nMarks of student 5 are: %d", marks[4]);

  return 0;
}