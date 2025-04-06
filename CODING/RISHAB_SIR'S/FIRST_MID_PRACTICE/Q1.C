// WHAT ARE THE DIFFERENT WAYS TO PASS A STRING TO A FUNCTION ? EXPLAIN WITH EXAMPLES.

// THERE ARE TWO WAYS

// 1.PASSING STRING USING AN ARRAY(FIXED SIZE)
#include <stdio.h>

void PrintString(char person[30])
{
  printf("%s", person);
}

int main()
{
  char PERSON[30] = "--> THE ONE & ONLY MEEET";
  PrintString(PERSON);

  return 0;
}

// 2.PASSING STRING AS A POINTER(CHARACTER ARRAY)
#include <stdio.h>

void printString(char *PERSON)
{
  printf("%s", PERSON);
}

int main()
{
  char VILLAIN[30] = "--> MAN WILL BE THE MAN";
  printString(VILLAIN);

  return 0;
}