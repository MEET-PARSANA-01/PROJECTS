#include<stdio.h>
int main()

{
  char filename[100];
  printf("WELCOME TO FILE OPENING TOOL\n");
  printf("ENTER THE FILE NAME: ");
  scanf("%99s",filename);

  FILE *file = fopen(filename,"r");
  if(file!= NULL){
    printf("\n%s WAS OPENED SUCCESSFULLY!",filename);
    fclose(file);
  }else{
    printf("\n FILE WAS NOT FOUND!");
  }

  return 0;
}