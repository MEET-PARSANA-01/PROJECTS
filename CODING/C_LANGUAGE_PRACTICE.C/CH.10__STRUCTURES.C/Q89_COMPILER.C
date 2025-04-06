// Initialize an array of Book structures with different data for each book using designated initializers.
#include <stdio.h>

struct BOOK
{
  char title[25];
  char author_name[25];
  float price;
};

int main()
{
  struct BOOK b1 = {.title = "RICH DAD POOR DAD", .author_name = "ROBERT KIOSAKI", .price = 299.99};

  return 0;
}