#include<stdio.h>
int main()
{
const float pi = 3.14159;
int radius;
printf("ENTER THE RADIUS OF THE CIRCLE: ");
scanf("%d",&radius);

printf("THE AREA OF THE CIRCLE IS %f", pi * radius * radius);
  return 0;
}