#include <stdio.h>
#include <string.h>
int main()
{
  /*
  1.strlen(RETURNS THE LENGTH OF A STRING ,NOT INCLUDING THE TERMINATING NULL BYTE('\0')).
  */
  // char name[50];
  // printf("ENTER YOUR NAME: ");
  // fgets(name, sizeof(name), stdin);

  // int size = strlen(name);
  // printf("THE LENGTH OF YOUR NAME IS %d", size);

  /*
  2.strcpy(COPIES THE STRING POINTED TO BY THE SOURCE,INCLUDING THE TERMINATING NULL BYTE,TO THE DESTINATION.IN SIMPLE WORDS,IT COPIES ONE STRING AND PUT IT INTO ANOTHER).
  */
  // char name[50];
  // printf("ENTER YOUR NAME:");
  // fgets(name, sizeof(name), stdin);

  // char new_name[50];
  // strcpy(new_name,name);
  // printf("%s HAS BEEN COPIED TO %s",name,new_name);

  /*
  3.strcat(APPENDS THE SOURCE STRING TO THE DESTINATION STRING,OVERWRTING THE TERMINATING NULL BYTE AT THE END OF DESTINATION ,AND THEN ADDS A TERMINATING NULL BYTE.IN SIMPLE WORDS, IT JOINS TWO STRINGS).
  */
  // char first_name[50];
  // char last_name[50];
  // printf("ENTER YOUR FIRST NAME:");
  // fgets(first_name, sizeof(first_name), stdin);
  // printf("ENTER YOUR LAST NAME:");
  // fgets(last_name, sizeof(first_name), stdin);

  // strcat(first_name, last_name);
  // printf("YOUR FINAL NAME IS %s", first_name);

  /*
  4.strcmp(COMPARES TWO STRINGS LEXICOGRAPHICALLY AND RETURNS AN INTEGER BASED ON THE COMPARISON.IN SIMPLE WORDS,IT DOES COMPARISON ON THE BASIS OF DICTIONARY).
  */
  int result = strcmp("MEET", "MEET");
  printf("COMPARISON OF MEET AND MEET IS %d\n", result);

  result = strcmp("MEET", "ANURAG");
  printf("COMPARISON OF MEET AND ANURAG IS %d\n", result);

  result = strcmp("MEET", "YUG");
  printf("COMPARISON OF MEET AND YUG IS %d\n", result);

  result = strcmp("MEET", "MIHIR");
  printf("COMPARISON OF MEET AND MIHIR IS %d\n", result);

  result = strcmp("MEET", "HEPPIN");
  printf("COMPARISON OF MEET AND HEPPIN IS %d\n", result);

  return 0;
}