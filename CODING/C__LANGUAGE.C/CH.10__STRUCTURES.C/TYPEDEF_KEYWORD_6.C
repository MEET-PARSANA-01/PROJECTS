/*
K.TYPEDEF KEYWORD
   1. Alias Creation: typedef creates aliases for existing types, making them easier to work with.
   2. Structure Simplification: Often used to simplify the syntax for structures.
   3. Readability: Enhances code readability and maintainability by using more meaningful names.
   4. Portability: Facilitates portability across different systems by abstracting type specifics.
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
  typedef struct Student S;

  

  struct Student S [5] ={"YUG",1,45.5};

  // for (int i = 0; i < 5; i++)
  // {
  //   printf("\nSTUDENT NAME: %s,ROLL NO.: %d,MARKS: %.2f", students[i].name, students[i].roll_no, students[i].marks);
  // }

  return 0;
}