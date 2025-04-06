/*
~~FOR LOOP
   1. Standard loop for running code multiple times.
   2. Generally preferred for counting iterations.
*/

/*SYNTAX:
   FOR(I;C;U){
    BODY
   }
   */
// #include <stdio.h>
// int main()
// {
//   for (int num = 10; num >= 1; num -= 1)
//   {
//     printf("%d\n", num);
//   }
//   return 0;
// }
#include<stdio.h>
int main()
{
int number;
printf("WELCOME TO PRINTING TABLES:\n");
printf("ENTER THE NUMBER: ");
scanf("%d",&number);

for(int i = 10; i>= 1;i -= 1){
 printf("%d x %d = %d\n",number, i,number * i);
}
  return 0;
}