// WHAT ARE THE DIFFERENT WAYS TO PASS A STRING TO A FUNCTION ? EXPLAIN WITH EXAMPLES.

//-->THERE ARE TWO WAYS TO PASS A STRING TO A FUNCTION:

// 1. PASSING STRING AS A POINTER[CHARACTER ARRAY]:

#include <stdio.h>

void PrintString(char *VILLAIN)
{
  printf("%s", VILLAIN);
}

int main()
{
  char KING[] = "--> MEET, THE KING";
  printf("\n");
  PrintString(KING);
  printf("\n\n");

  return 0;
}

// 2. PASSING A STRING USING AN ARRAY(FIXED SIZE):

#include <stdio.h>

void PrintString(char VILLAIN[25])
{
  printf("%s", VILLAIN);
}

int main()
{
  char VILLAIN[25] = "--> MEET, THE VILLAIN";
  printf("\n");
  PrintString(VILLAIN);
  printf("\n\n");

  return 0;
}
