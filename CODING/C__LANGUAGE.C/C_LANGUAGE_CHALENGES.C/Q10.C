#include<stdio.h>
int main()
//IMP**
{
int num1,num2,temp;
printf("ENTER THE VALUE OF NUM1 : ");
scanf("%d",&num1);
printf("ENTER THE VALUE OF NUM2 : ");
scanf("%d",&num2);

//SWAPPING
temp = num1;
num1 = num2;
num2 = temp;

printf("THE VALUE OF NUM1 IS %d AND THE VALUE OF NUM2 IS %d",num1,num2);
  return 0;
}