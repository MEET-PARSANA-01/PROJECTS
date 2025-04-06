/*
 do{
  //body of the loop
  //UPDATION
 }
while(condition);
*/

/*1.GUARANTEED TO RUN ATLEAST ONE ITERATION.
  2.EXECUTES BLOCK FIRST,THEN CHECKS CONDITION.IF THE CONDITION BECOMES TRUE
    THEN LOOP WILL AGAIN EXECUTE THE BODY.
  3.UNLIKE WHILE,FIRST CONDITION IS UNCONDITIONAL.
  4.DON'T FORGET TO UPDATE CONDITION TO AVOID INFINITE LOOPS.
*/

#include <stdio.h>
int main()
{
  int num = 10;
  do
  {
    printf("%d\n", num);
    num -= 1;
  } while (num >= 1);

  return 0;
}

// NEED OF DO-WHILE LOOP↡↡↡

// #include<stdio.h>
// int main()
// {
// int num;
// do{
//   printf("PLEASE ENTER THE NUMBER: ");
//     scanf("%d",&num);
// }while( num != 10);

// printf("CONGRATES YOU HAVE GUESSED THE CORRECT NUMBER");
//   return 0;
// }