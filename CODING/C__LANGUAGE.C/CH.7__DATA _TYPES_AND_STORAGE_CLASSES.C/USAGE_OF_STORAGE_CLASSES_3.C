/*
~~USAGE OF STORAGE CLASSES
  1. auto
   • Default for local variables within functions.
   • Use when you need a variable that is only accessible within its block scope and its lifetime is limited to that block.
  2. register
   • For variables that are heavily used, such as loop counters, where you want to hint the compiler to optimize for speed.
   • Keep in mind the compiler might ignore the hint.
  3. static
   • For local variables within functions that you want to retain their value between calls to that function.
   • At file scope, to limit the visibility of a global variable to the file it's declared in, enhancing encapsulation.
  4. extern
   • When you need to access a variable defined in another file or to declare a global variable across multiple files.
   • Use for shared data while keeping the definition in one place to avoid multiple definition errors.
*/