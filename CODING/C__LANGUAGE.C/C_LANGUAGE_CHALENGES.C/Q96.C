#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf("WELCOME TO OUR DYNAMIC CHARACTERS\n");
  char *sentence = (char *)calloc(100, sizeof(char));
  if (sentence == NULL)
  {
    printf("MEMORY ERROR!!!!");
    return 1;
  }

  printf("\nENSURING ALL ELEMENTS ARE INITIALIZED!\n");
  for (int i = 0; i < 100; i++)
  {
    printf(" %d", sentence[i]);
  }

  printf("\nNOW ENTER A PIECE OF TEXT: ");
  fgets(sentence, 100, stdin);

  printf("\nHERE IS YOUR TEXT: %s", sentence);

  free(sentence);
  sentence = NULL;

  return 0;
}