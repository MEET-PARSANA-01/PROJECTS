#include <stdio.h>

struct Book
{
  char title[100];
  char author[100];
  float price;
};

typedef struct Book BOOK;

typedef struct
{
  char id[10];
  char name[50];
  char year[10];
  char grade;
  int no_of_books;
  BOOK borrowed_books[3];
} Student;

void print_students(Student *);
void print_book(BOOK *);

int main()
{
  Student stu1 = {.id = "CS001",
                  .name = "MEET",
                  .year = "FIRST",
                  .grade = 'B',
                  .no_of_books = 2,
                  .borrowed_books = {
                      {.title = "THE SELFISH GENE", .author = "RICHARD DAWKINS", .price = 499.99},
                      {.title = "WHY WE SLEEP", .author = "MATHEW WALKER", .price = 399.99}}};

  printf("WELCOME TO OUR COLLEGE!\n\n");
  printf("HERE ARE THE STUDENT DETAILS: \n");
  print_students(&stu1);

  return 0;
}

void print_students(Student *stu)
{
  printf("\n\nTHE STUDENT WITH %s NAME HAS ID %s AND STUDIES IN %s YEAR HAS ACHIEVED %c GRADE", stu->name, stu->id, stu->year, stu->grade);

  printf("\nHERE ARE THE BOOKS BORROWED: ");
  for (int i = 0; i < stu->no_of_books; i++)
  {
    print_book(&(stu->borrowed_books[i]));
  }
}
void print_book(BOOK *book)
{
  printf("\n%s IS WRITTEN BY %s,AND IS SOLD FOR RS.%.2f", book->title, book->author, book->price);
}