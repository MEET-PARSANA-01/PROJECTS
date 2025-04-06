#include<stdio.h>
int main()
{
int base,height;
printf("ENTER THE VALUE OF BASE: ");
scanf("%d",&base);
printf("ENTER THE VALUE OF HEIGHT: ");
scanf("%d",&height);

float area = 0.5 * base * height;
printf("THE AREA OF THE TRIANGLE IS %f",area);
  return 0;
}