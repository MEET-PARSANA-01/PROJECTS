/*
G.ARRAY OF STRUCTURES
  THIS CODE IS THE SOLUTION OF THE PROBLEM(NEED OF STRUCTURES)THAT WAS ANALYZED AT THE THE TIME OF WRTING FIRST CODE IN DEFINATION FILE.
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
  // int ROLL_NO[5] = {1, 2, 3, 4, 5};
  // char NAMES[5][20] = {"YUG", "MIHIR", "ANURAG", "KRUPA", "AAHNA"};
  // float MARKS[5] = {45.5, 78.9, 90, 95.5, 99.9};

  struct Student students[7] =
      {
          {"YUG", 1, 100},
          {"MIHIR", 2, 100},
          {"ANURAG", 3, 100},
          {"KUSHAL", 4, 100},
          {"KRUPA", 5, 100},
          {"BHAVISHA", 6, 100},
          {"MEET", 7, 100}
      };

  for (int i = 0; i < 7; i++)
  {
    printf("\nSTUDENT NAME: %s,ROLL NO.: %d,MARKS: %.2f", students[i].name, students[i].roll_no, students[i].marks);
  }

  return 0;
}