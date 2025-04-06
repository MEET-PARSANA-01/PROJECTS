#include <stdio.h>

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
  car ford = {.make = "FORD",
              .model = "ASPIRE",
              .year = 2016,
              .color = "RED"};

  printf("WELCOME TO OUR CAR WORLD!\n");
  print_car(&ford);
}
void print_car(CAR *car)
{
  printf("THIS %s MODEL OF CAR ,WHICH IS OF %s COLOR, WAS PURCHASED IN %d YEAR,AND WAS MADE BY %s COMPANY", car->model, car->color, car->year, car->make);
}