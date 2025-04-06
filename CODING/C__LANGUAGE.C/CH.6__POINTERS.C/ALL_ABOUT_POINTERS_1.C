// POINTERS STORE MEMORY ADDRESSES OF OTHER VARIABLES RATHER THAN DATA ITSELF .
// POINTERS VO VARIABLES HOTE HAI JO OTHER VARIABLES KE ADDRESSES KO STORE KARTE HAI.
// AMPERSAND OPERATOR(&) GETS THE ADDRESS OF THE VARIABLE.
/* * OPERATOR IS CALLED "VALUE AT ADDRESS" OR "DEREFERENCE" OPERATOR.THIS OPERATOR IS USED TO GET THE
   VALUE FROM A PARTICULAR ADDRESS. */

// DECLARATION SYNTAX OF POINTER : int *ptr  (YE JO PTR HAI YE VARIABLE NAHI HAI ,BASICALY YE KISI INTEGER KA ADDRESS RAKHNA CHAHTA HAI APNE PASS)

/*A POINTER TO A POINTER IS A TYPE OF POINTER THAT STORES THE ADDRESS OF ANOTHER POINTER,ALLOWING INDIRECT ACCESS TO THE
  VALUE OF THE VARIABLE THE FIRST POINTER POINTS TO.
  DECLARATION :it is declared by double star(**). 
*/

#include <stdio.h>
int main()
{
  int i = 3, **k;
  // int *j = &i;
  int *j;
  j = &i;
  k = &j;

  printf("ADDRESS OF I = %p", &i); // P MEANS POINTER,IT WILL HELP TO PRINT ADDRESS
  printf("\nADDRESS OF I = %p", j);
  printf("\nADDRESS OF j = %p", &j);
  printf("\nVALUE OF j = %p", j);
  printf("\nVALUE OF I = %d", i);
  printf("\nVALUE OF I = %d", *(&i)); //*(&i) MEANS VALUE AT ADDRESS OPERATOR
  printf("\nVALUE OF I = %d", *j);

  // POINTER TO A POINTER

  printf("\n\n\n\nADDRESS OF I = %p", *k);
  printf("\nADDRESS OF j = %p", k);
  printf("\nADDRESS OF k = %p", &k);
  printf("\nVALUE OF k = %p", k);
  printf("\nVALUE OF I = %d", **k);
  /*
    1.pehle K ki value which is &j.
    2.fir J ke add ki value means *j=&i.
    3.aur fir uski bhi value means *(&i)=i. 
  */
  return 0;
}