/*
A.WHAT IS STRUCTURE?
   IN C,A STRUCTURE IS A WAY TO GROUP DIFFERENT VARIABLES(OF DIFFERENT DATA TYPES) TOGETHER UNDER ONE NAME.IT'S LIKE A CONTAINER THAT HOLDS RELATED INFORMATION.

B.WHY USE STRUCTURE?
   1.Grouping Data: Structures allow related data items of different types to be grouped together under a single name.
   2.Modelling Real-world Entities: Enable the representation of complex entities (e.g.,a student, a point in space) more naturally.
   3.Ease of Handling: Simplify passing multiple data items as a single argument to functions.
   4.Data Encapsulation: Encapsulate related data, enhancing code readability and maintainability.
   5.Type Definition: Allow the creation of new data types tailored to specific needs.

   #include <stdio.h>
   int main()
   {
    int ROLL_NO[5] = {1, 2, 3, 4, 5};
    char NAMES[5][20] = {"YUG", "MIHIR", "ANURAG", "KRUPA", "AAHNA"};
    float MARKS[5] = {45.5, 78.9, 90, 95.5, 99.9};

    for (int i = 0; i < 5; i++)
     {
      printf("\nSTUDENT NAME: %s,ROLL NO.: %d,MARKS: %.2f", NAMES[i], ROLL_NO[i], MARKS[i]);
     }

    return 0;
   }
*/

/*
C.STRUCTURE DECLARATION
   1. Keyword: Use the struct keyword to define a structure.
   2. Name: Optionally give a name to the structure type.
   3. Members: Enclose member declarations in braces {}.
   4. Semicolon: End the structure definition with a semicolon ;.

   #include<stdio.h>

   struct Student{
    int roll_no;
    char name[10];
    float marks;
   };

   int main()
   {
   struct Student MEET;

   return 0;
   }
*/

/*
D.ACCESSING STRUCTURE ELEMENTS
   1.Memory Dot Operator: student.rollno for direct access.
   2.Nested Access: school.class.student.rollno for nested structures.

   #include <stdio.h>

   struct Student
   {
    int roll_no;
    char name[10];
    float marks;
   };

   int main()
   {
    struct Student MEET;

    printf("ENTER THE STUDENT DETAILS!\n");
    printf("ENTER THE ROLL NO.: ");
    scanf("%d", &MEET.roll_no);
    printf("ENTER THE NAME OF THE STUDENT: ");
    scanf(" %9s", MEET.name);
    printf("NOW ,ENTER THE MARKS OF THE STUDENT: ");
    scanf(" %f", &MEET.marks);

    printf("\n\nHERE ARE THE STUDENT DETAILS!\n\n");
    printf("NAME: %s\nROLL NO.: %d\nMARKS: %f", MEET.name, MEET.roll_no, MEET.marks);

    return 0;
   }
*/

/*
E.STRUCTURE MEMORY ALLOCATION
   1. Contiguous Block: Structures occupy contiguous memory spaces.
   2. Padding: Compilers may add padding for alignment, affecting size.
   3. Size: Use sizeof to get the structure's size, padding included.
*/

/*
F.STRUCTURE INITIALIZATION
   1. Direct Initialization: Use curly braces {}directly after declaration, specifying values in order.
   2. Designated Initializers: C99 allows initializing specific fields by name,enhancing readability and flexibility.
   3. Zero Initialization: Assigning {0} initializes all members to zero or null equivalents.
   4. Copy Initialization: Initialize one structure with another of the same type.

   #include <stdio.h>

   struct Student
   {
    int rollno;
    char name[10];
    float marks;
   };

   int main()
   {
   // DIRECT INITIALIZATION
   struct Student S1 = {1, "MEET", 99.99};
   printf("\nNAME: %s\nROLL NO.: %d\nMARKS: %.2f\n", S1.name, S1.rollno, S1.marks);

   // DESIGNATED INITIALIZATION
   struct Student S2 = {.rollno = 2, .name = "YUG", .marks = 99.99};
   printf("\nNAME: %s\nROLL NO.: %d\nMARKS: %.2f\n", S2.name, S2.rollno, S2.marks);

   // ZERO INITIALIZATION
   struct Student S3 = {0};
   printf("\nNAME: %s\nROLL NO.: %d\nMARKS: %.2f\n", S3.name, S3.rollno, S3.marks);

   // COPY INITIALIZATION
   struct Student S4 = S1;
   S4.rollno = 4;
   printf("\nNAME: %s\nROLL NO.: %d\nMARKS: %.2f\n", S4.name, S4.rollno, S4.marks);

   return 0;
   }
*/
