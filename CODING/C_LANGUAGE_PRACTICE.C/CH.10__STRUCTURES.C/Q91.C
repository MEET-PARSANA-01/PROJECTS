// Pass a Car structure to a function that prints out a description of the car in one complete sentence.
#include <stdio.h>

struct CAR
{
  char color[20];
  char model[20];
  char make[20];
  int year;
};

void print_car_description(struct CAR BMW);

int main()
{
  struct CAR BMW = {"NAVY BLUE", "M2", "BMW", 2022};
  print_car_description(BMW);

  return 0;
}
void print_car_description(struct CAR BMW)
{
  printf("THIS %s MODEL OF CAR ,WHICH IS OF %s COLOR, WAS PURCHASED IN %d YEAR,AND WAS MADE BY %s COMPANY", BMW.model, BMW.color, BMW.year, BMW.make);
}
