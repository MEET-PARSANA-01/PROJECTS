#include <stdio.h>
#include <string.h>

struct BOOK
{
  char title[100];
  char author[100];
  float price;
};

typedef struct BOOK BOOK;

void input_books(BOOK *Book)
{
  printf("ENTER THE TITLE OF THE BOOK: ");
  fgets(Book->title, 100, stdin);
  printf("NOW, ENTER THE NAME OF THE AUTHOR OF THE BOOK: ");
  fgets(Book->author, 100, stdin);
  printf("FINALLY, ENTER THE PRICE OF THE BOOK IN RUPEES: ");
  scanf("%f", &(Book->price));
  while (getchar() != '\n')
    ;
}

void print_book(BOOK *Book)
{
  printf("BOOK NAME:%s\nAUTHOR:%s\nPRICE:%.2f\n", Book->title, Book->author, &Book->price);
}

int main()
{
  printf("WELCOME TO THE BOOK STORE!\n");
  BOOK books[3];

  for (int i = 0; i < 3; i++)
  {
    input_books(&books[i]);
  }

  printf("\n\nHERE ARE THE DETAILS OF ALL THE BOOKS!");
  for (int i = 0; i < 3; i++)
  {
    print_book(&books[i]);
  }

  return 0;
}

// #include <stdio.h>

// void input_books(char title[], char author[], float *price)
// {
//   printf("ENTER THE TITLE OF THE BOOK: ");
//   fgets(title, 100, stdin);
//   printf("NOW, ENTER THE NAME OF THE AUTHOR OF THE BOOK: ");
//   fgets(author, 100, stdin);
//   printf("FINALLY, ENTER THE PRICE OF THE BOOK IN RUPEES: ");
//   scanf("%f", price);
//   while(getchar() != '\n');
// }

// void print_book_details(char title[], char author[], float price)
// {
//   printf("BOOK NAME:%s\nAUTHOR:%s\nPRICE:%.2f\n", title, author, price);
// }

// int main()
// {
//   printf("WELCOME TO THE BOOK STORE!\n");

//   char titles[3][100];
//   char authors[3][100];
//   float prices[3];

//   for (int i = 0; i < 3; i++)
//   {
//     input_books(titles[i], authors[i], &prices[i]);
//   }

//   printf("\nHERE ARE THE DETAILS OF ALL THE BOOKS!\n");
//   for (int i = 0; i < 3; i++)
//   {
//     print_book_details(titles[i], authors[i], prices[i]);
//   }

//   return 0;
// }