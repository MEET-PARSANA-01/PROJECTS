//WRITE A PROGRAM TO FIND NUMBER OF INDICE AT WHICH A PARTICULAR CHARACTER IS PRESENT IN THE GIVEN STRING. 
#include <stdio.h>
#include <string.h>
int main()
{
  char KING[] = "MEET PARSANA";
  char *QUEEN = strchr(KING, 'A');//JISKE SATH COMPARE KARNA HAI VO PEHLE , JO COMPARE KARNA HAI VO BAAD ME .
  if (QUEEN)
  {
    printf("\nCHARACTER FOUND AT %ld\n", QUEEN - KING);//why queen - king
    printf("\n");
  }
  else
  {
    printf("NOT FOUND");
  }

  return 0;
}