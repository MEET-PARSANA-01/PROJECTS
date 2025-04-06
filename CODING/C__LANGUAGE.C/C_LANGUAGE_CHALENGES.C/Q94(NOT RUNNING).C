#include <stdio.h>
#include <stdlib.h>

struct CAR
{
  char make[30];
  char model[30];
  int year;
  char color[15];
};
typedef struct CAR car;

void print_car(CAR *car);
int main()
{
  printf("WELCOME TO OUR DYNAMIC ISLAND!\n");
  CAR *my_car = (CAR *)malloc(sizeof(CAR)); // MEMORY ALLOCATION

  printf("ENTER YOUR CAR MODEL: ");
  scanf("%s", my_car->model);
  printf("ENTER YOUR CAR MAKE: ");
  scanf("%d", &my_car->make);
  printf("ENTER YOUR CAR COLOR: ");
  scanf("%s", my_car->color);
  printf("ENTER YOUR CAR YEAR: ");
  scanf("%s", my_car->year);

  printf("\n\nHERE ARE YOUR CAR DETAILS: ");
  print_car(my_car);
  free(my_car); // FREE
  my_car = NULL;
  return 0;
}
void print_car(CAR *car)
{
  printf("THIS %s MODEL OF CAR ,WHICH IS OF %s COLOR, WAS PURCHASED IN %d YEAR,AND WAS MADE BY %s COMPANY", car->model, car->color, car->year, car->make);
}