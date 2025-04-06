// Write a function that takes a string and reverses it in place.
#include <stdio.h>

void reverse_s();

int main()
{
  reverse_s();
  return 0;
}
void reverse_s()
{

  char FirstName[5];
  printf("\n\nENTER YOUR FIRSTNAME: "); // DYNAMIC
  fgets(FirstName, 5, stdin);
  printf("\n");
  printf("YOUR STRING IN REVERSE ORDER IS: ");
  for (int i = 5; i >= 0; i--)
  {
    printf("%c", FirstName[i]);
  }
}
