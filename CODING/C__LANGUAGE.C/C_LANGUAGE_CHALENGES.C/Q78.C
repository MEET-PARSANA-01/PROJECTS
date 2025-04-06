#include <stdio.h>
int main()
{
  char NAME[50];
  printf("WELCOME TO SHOWING USE OF fgets AND puts!\n");
  printf("ENTER YOUR NAME: ");
  fgets(NAME, sizeof(NAME), stdin);


  printf("THE NAME YOU ENTERED IS ");
  puts(NAME);

  return 0;
}