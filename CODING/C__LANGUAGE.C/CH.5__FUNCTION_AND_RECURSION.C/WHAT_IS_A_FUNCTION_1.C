/*
~~WHAT IS A FUNCTION ?
  1. Definition: Blocks of reusable code.
  2. DRY Principle: "Don't Repeat Yourself" it encourages code reusability.
  3. Usage: Organizes code and performs specific tasks.
  4. Naming Rules: Same as variable names: snake_case
  5. Example: ”Beta Gas band kar de"
*/

#include <stdio.h>

void count_to_100(); // FUNCTION PROTOTYPES ↲↲↲
int sum(int, int);
// IF YOU WANT TO AVOID PROTOTYPING THEN YOU HAVE TO GIVE DEFINITION OF FUNCTIONS FIRST THEN YOU CAN CALL IT ,IT MEANS YOU HAVE TO WRITE IT FIRST THEN ALL OTHER STUFFS
// FUNCTION CAN ONLY RETURN SINGLE VALUE , IT CANNOT RETURN MORE THAN 1 VALUE

int main()
{ // WE ARE WRITING FUNCTION CALL INSIDE MAIN FUNCTION , IT MEANS THAT WE ARE CALLING OUR FUNCTION THROUGH MAIN FUNCTION .

  count_to_100(); // FUNCION CALL( function call main mei bhi ho sakta hai aur kahi aur bhi and call infinite barr ho sakta hai)
  // FUNCTION JITNI BARR CALL KAROGE UTNI BAR EXECUTE HOGA,MATLAB YAHA PE FUNCTION EK BAR CALL KIYA HAI TO EK BAR 1 TO 100 PRINT HOGA 💪💪💪
  int add = sum(100, 200); // THIS IS CALLED PASSING VALUES↤↤↤
  printf("THE SUM IS : %d", add);
  return 0;
}

void count_to_100()
{
  for (int i = 1; i <= 100; i++) // FUNCTION SYNTAX / BODY /DEFINITION
  {
    printf("  %d", i);
  }
}
int sum(int X, int Y)
{
  int addition = X + Y;
  return addition; // GLOBAL VARIABLE CAN BE USED IN PLACE OF RETURN STATEMENT,if you want to use it then you have to declare it before all functions.
}