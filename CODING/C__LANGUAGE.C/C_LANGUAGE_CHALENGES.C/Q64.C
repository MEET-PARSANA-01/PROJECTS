// #include<stdio.h>
// int factorial(int);


// int main()
// { 
//   int num;
//   printf("WELCOME TO THE FACTORIAL WORLD!\n");
//   printf("PLEASE ENTER THE NUMBER: ");
//   scanf("%d",&num);

//   int result = factorial(num);
//   printf("THE FACTORIAL OF %d IS %d",num,result);

//   return 0;
// }

// int factorial(int num){
//   if(num <= 1){
//     return 1;
//   }
//   return num * factorial(num - 1);
// }



#include<stdio.h>
long long factorial(int);


int main()
{ 
  int num;
  printf("WELCOME TO THE FACTORIAL WORLD!\n");
  printf("PLEASE ENTER THE NUMBER: ");
  scanf("%d",&num);

  long long result = factorial(num);
  printf("THE FACTORIAL OF %d IS %lld",num,result);

  return 0;
}

long long factorial(int num){
  if(num <= 1){
    return 1;
  }
  return num * factorial(num - 1);
}