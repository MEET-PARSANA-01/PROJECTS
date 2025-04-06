#include<stdio.h>
int main()
{
     int max;
     printf("ENTER THE MAX NUMBER: ");
     scanf("%d",&max);
     
     for(int i = 1;i <= max; i++){
      if(i % 2 != 0)
      continue;
      printf("%d ",i);

     }
  return 0;
}