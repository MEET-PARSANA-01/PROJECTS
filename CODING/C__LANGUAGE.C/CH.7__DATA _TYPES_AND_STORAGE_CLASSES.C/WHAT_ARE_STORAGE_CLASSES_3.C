// WHAT ARE STORAGE CLASSSES ?
// ANS.In C language, storage classes define how and where variables are stored, their lifetime, scope, and default initial values. Think of them as rules that tell the compiler about the behavior of variables.

/*There are four main storage classes in C:AUTOMATIC(auto), STATIC(static), REGISTER(register), EXTERNAL(extern).

Why Use Storage Classes?

~To control variable lifetime and scope.
~To optimize memory and speed.
~To manage global data across files.

1.LIFETIME MGT: Storage classes determine the lifetime(scope & duration) of variables.
2.SCOPE CONTROL: Dictate where a variable can be accessed, either within a function/block or throughout the program.
3.MEMORY LOCATION: Influence where the variable is stored,such as in the stack,heap, or data segment.
4.INITIALIZATION: Define default values,like zero for static variables.*/

// 1.AUTOMATIC STORAGE CLASS(auto):

/*
  ~ Default for local variables (inside functions).
  ~The variable exists only while the function runs.
  ~It is stored in stack memory.
  ~Not explicitly initialized: Value is garbage until set.

  EXAMPLE:
  void example() {
    auto int x = 10;  // Same as "int x = 10;"
    printf("%d", x);  // Prints 10
  }
 */

// 2.REGISTER STORAGE CLASS(register):

/*
  ~Suggests that the variable should be stored in a CPU register for faster access (instead of RAM).
  ~Cannot get the address of a register variable using &.
  ~Suitable for loop counters or frequently used variables.

  EXAMPLE:
  void example() {
    register int i;  // Suggest storing i in a register
    for (i = 0; i < 10; i++) {
        printf("%d\n", i);
    }
  }
*/

// 3.STATIC STORAGE CLASS(static):

/*
  ~Retains its value even after the function ends.
  ~Exists for the entire program's duration (stored in the data segment).
  ~Useful for maintaining a counter or state between function calls.
  ~Default initial value: 0.

  EXAMPLE:
  void example() {
    static int count = 0;  // Initialized only once
    count++;
    printf("%d\n", count);  // Prints 1, 2, 3... on each call
 }
*/

// 4.EXTERNAL(extern):

/*
  ~Used to declare global variables in multiple files.
  ~Tells the compiler, “This variable is defined elsewhere.”
  ~Default initial value: 0.

  EXAMPLE:
   (two files): File1.c:
    int globalVar = 100;  // Define the variable

    File2.c:
    extern int globalVar;  // Use the variable defined in File1.c
     printf("%d", globalVar);  // Prints 100


*/
