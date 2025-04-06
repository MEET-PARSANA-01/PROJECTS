#include <stdio.h>
int main()
{
  int num;
  printf("ENTER THE NUMBER: ");
  scanf("%d", &num);
  
int i = 1;
int factorial = 1;
while(i <= num){
 factorial = factorial * i;
  i += 1;
}
printf("THE FACTORIAL OF %d IS %d",num,factorial);
  return 0;
}
//DOUBT↡
// int i = 1;
// int factorial;
// while(i <= num){
//  factorial = factorial * i;
//   i += 1;
// }
// printf("THE FACTORIAL OF %d IS %d",num,factorial);
//   return 0;
// }