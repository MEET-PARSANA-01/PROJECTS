// CREATE A STRUCTURE NAMED "BOOK" TO STORE INFO ABOUT BOOKS INCLUDING THEIR TITLE, AUTHOR, AND PRICE. WRITE A FUNCTION TO DISPLAY THE DETAILS OF THE THE BOOK.
#include <stdio.h>

int N;

struct BOOK
{
  char Title[30];
  char Author_name[30];
  float Price;
};

void DisplayBookDetails(struct BOOK b[]) // DOUBT : WITHOUT BRACKET , SHOWING ERROR INSIDE FUNCTION
{
  printf("\n\nHERE ARE THE BOOK DETAILS:-\n\n");

  for (int j = 0; j < N; j++)
  {
    printf("Details of Book %d:-\n\n", (j + 1));
    printf("--> Name of the Book: %s\n--> Name of the Author: %s\n--> Price: %.2f\n\n", b[j].Title, b[j].Author_name, b[j].Price);
  }
}

int main()
{
  printf("\n\nENTER THE NUMBER OF BOOKS: ");
  scanf("%d", &N);

  struct BOOK B[N];

  for (int i = 0; i < N; i++)
  {
    printf("\n\nENTER THE DETAILS OF BOOK %d\n\n", (i + 1));

    printf("TITLE OF THE BOOK: ");
    scanf(" %[^\n]s", B[i].Title);

    printf("NAME OF THE AUTHOR: ");
    scanf(" %[^\n]s", B[i].Author_name);

    printf("PRICE OF THE BOOK: ");
    scanf("%f", &B[i].Price);
  }

  DisplayBookDetails(B);

  return 0;
}