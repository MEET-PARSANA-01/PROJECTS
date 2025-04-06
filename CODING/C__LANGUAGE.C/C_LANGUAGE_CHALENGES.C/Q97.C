#include <stdio.h>
#include <stdlib.h>

typedef struct
{
  int x;
  int y;
} Point;

void input_point(Point *);
void show_point(Point *);

int main()
{
  printf("WELCOME TO DYNAMIC POINTS!\n");
  Point *start = (Point *)malloc(sizeof(Point));
  Point *end = (Point *)malloc(sizeof(Point));
  if (start == NULL || end == NULL)
  {
    printf("MEMORY ISSUES!!!!");
    return 1;
  }

  printf("\nENTER THE DETAILS FOR STARTING POINT OF YOUR LINE: ");
  input_point(start);
  printf("\nNOW ENTER THE DETAILS FOR ENDING POINT OF YOUR LINE: ");
  input_point(end);

  printf("HERE ARE YOUR DETAILS:");
  show_point(start);
  show_point(end);

  free(start);
  free(end);
  start = end = NULL;

  return 0;
}
void input_point(Point *point)
{
  printf("\n ENTER X COORDINATE: ");
  scanf("%d", &point->x);
  printf("\n ENTER Y COORDINATE: ");
  scanf("%d", &point->y);
}
void show_point(Point *point)
{
  printf("\nCOORDINATES(%d,%d)", point->x, point->y);
}