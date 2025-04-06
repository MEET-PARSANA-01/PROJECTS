// Create a program where you need to store and process data for a Book with attributes like title author, and price,demonstrating why a structure is more suitable than separate variables.
#include <stdio.h>

struct BOOK
{
  char title[25];
  char author_name[25];
  float price;
};

int main()
{
  struct BOOK b1;

  // char title[25];
  // char author_name[25];
  // float price;
  printf("\n\nWELCOME TO DEMONSTRATING WHY A STRUCTURE IS MORE SUITABLE!\n\n");
  printf("ENTER THE TITLE OF THE BOOK: ");
  fgets(b1.title, 25, stdin);
  printf("NOW,ENTER THE NAME OF THE AUTHOR OF THE BOOK: ");
  fgets(b1.author_name, 25, stdin);
  printf("FINALLY,ENTER THE PRICE OF THE BOOK: ");
  scanf("%f", &b1.price);

  printf("\nBOOK NAME: %s\nAUTHOR'S NAME: %s\nPRICE: %.2f", b1.title, b1.author_name, b1.price);

  return 0;
}