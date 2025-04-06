// Create a program to Based on a student's score, categorize as "High", "Moderate", or "Low" using the ternary operator (e.g., High for scores > 80, Moderate for 50-80, Low for < 50).
#include <stdio.h>
int main()
{
  float marks;
  char grade;
  printf("ENTER THE MARKS OF THE STUDENT: ");
  scanf("%f", &marks);

  printf("\nYOUR MARKS ARE IN THIS CATEGORY: ");

  marks = marks > 80 ? printf("HIGH") : (marks > 50 && marks < 80 ? printf("MODERATE") : printf("LOW"));

  return 0;
}