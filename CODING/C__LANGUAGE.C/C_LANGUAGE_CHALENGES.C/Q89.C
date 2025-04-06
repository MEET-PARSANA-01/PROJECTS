#include <stdio.h>
#include <string.h>

struct BOOK
{
  char title[100];
  char author[100];
  float price;
};

typedef struct BOOK BOOK;

void print_book(BOOK *book)
{
  printf("BOOK NAME:%s\nAUTHOR:%s\nPRICE:%.2f\n", book->title, book->author, book->price);
}

int main()
{
  printf("WELCOME TO THE BOOK STORE!\n");
  BOOK books[3] = {
      {.title = "THE SELFISH GENE", .author = "RICHARD HAWKINS", .price = 499.99},
      {.title = "WHY WE SLEEP", .author = "MATHEW WALKER", .price = 399.99},
      {.title = "DOGLAPAN", .author = "ASHNEER GROVER", .price = 299.99}

  };

  printf("\n\nHERE ARE THE DETAILS OF ALL THE BOOKS!\n");
  for (int i = 0; i < 3; i++)
  {
    printf("\n", i);
    print_book(&books[i]);
  }

  return 0;
}