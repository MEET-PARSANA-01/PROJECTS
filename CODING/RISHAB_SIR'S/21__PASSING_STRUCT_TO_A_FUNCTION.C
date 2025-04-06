//DIFFERENT WAYS TO PASS A STRUCTURE TO A FUNCTION 

//1.FIRST WAY(CALL BY VALUE)
#include <stdio.h>

struct MULTIPLY
{
  int KING;
  int QUEEN;
} R;

void RESULT(struct MULTIPLY P)
{
  printf("\n\n--> THE SUM OF KING & QUEEN IS %d\n\n", P.KING + P.QUEEN);
}

int main()
{
  R.KING = 30;
  R.QUEEN = 70;

  RESULT(R);

  return 0;
}

//2.SECOND WAY (CALL BY REFERENCE)
// #include <stdio.h>

// struct MULTIPLY
// {
//   int KING;
//   int QUEEN;
// } R;

// void RESULT(struct MULTIPLY *P)
// {
//   printf("\n\n--> THE SUM OF KING & QUEEN IS %d\n\n", P->KING + P->QUEEN);
// }

// int main()
// {
//   R.KING = 30;
//   R.QUEEN = 70;

//   RESULT(&R);

//   return 0;
// }
