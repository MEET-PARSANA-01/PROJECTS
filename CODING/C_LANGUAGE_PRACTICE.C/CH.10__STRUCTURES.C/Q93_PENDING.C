// Write a function where the Student structure also has books they have borrowed inside, showing nested structure usage.
#include <stdio.h>

struct BOOK
{
  char Title[50];
  char Author[50];
};

struct STUDENT
{
  char Name[25];
  int Enrollment_number;
  char Year[10];
  struct BOOK borrowedBooks[3];
  int BookCount;
};
void print_student_details(struct STUDENT MEET);

int main()
{
  struct STUDENT MEET = {"MEET PARSANA", 1, "FIRST", {{"RICH DAD POOR DAD", "ROBERT KIOSAKI"}, {"THINK AND GROW RICH", "MEET PARSANA"}}, 2};
  print_student_details(MEET);

  return 0;
}

void print_student_details(struct STUDENT MEET)
{
  printf("STUDENT NAME: %s\nENROLLMENT NUMBER: %d\nYEAR: %s\nBORROWED BOOKS (%d): \n", MEET.Name, MEET.Enrollment_number, MEET.Year, MEET.BookCount);

  for (int i = 0; i < 2; i++)
  {
    printf(" %d.%s BY %s\n", i + 1, MEET.borrowedBooks[i].Title, MEET.borrowedBooks[i].Author);
  }
}
// #include <stdio.h>

// // Define a Book structure
// struct Book
// {
//   char title[50];
//   char author[50];
// };

// // Define a Student structure with nested Book array
// struct Student
// {
//   char name[50];
//   int id;
//   struct Book borrowedBooks[3]; // Student can borrow up to 3 books
//   int bookCount;                // Number of books borrowed
// };

// // Function to display student details
// void displayStudent(struct Student student)
// {
//   printf("Student Name: %s\n", student.name);
//   printf("Student ID: %d\n", student.id);
//   printf("Borrowed Books (%d):\n", student.bookCount);

//   for (int i = 0; i < student.bookCount; i++)
//   {
//     printf("  %d. %s by %s\n", i + 1, student.borrowedBooks[i].title, student.borrowedBooks[i].author);
//   }
// }

// int main()
// {
//   // Create a student
//   struct Student student1 = {
//       "Alice Johnson",
//       101,
//       {{"The C Programming Language", "Kernighan & Ritchie"},
//        {"Clean Code", "Robert C. Martin"},
//        {"The Pragmatic Programmer", "Andrew Hunt & David Thomas"}},
//       3 // Number of books borrowed
//   };

//   // Display student details
//   displayStudent(student1);

//   return 0;
// }
