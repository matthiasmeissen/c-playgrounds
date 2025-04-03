# C Playgrounds

A place to learn the C programming language.


## Introduction

**Goal:** Gain a solid understanding of C basics, memory management, pointers, and how to build simple, functional Command Line Interface (CLI) tools. This curriculum aims to provide the necessary foundation to make an informed decision between pursuing C++ or Rust next.

**Philosophy:** Learn by doing. Consistency over intensity. Compile often, experiment, debug, and understand *why* things work. Even 20-30 minutes of focused daily practice is highly effective.

**Prerequisites:** Familiarity with basic programming concepts (variables, loops, conditionals – e.g., from JavaScript). A text editor (like VS Code, Sublime Text, Vim, Emacs) and access to a terminal/command line.

**Python Parallel:** You can learn Python alongside this. Look for opportunities to use Python to aid your C learning (e.g., generating test data) or to compare/contrast language features.

**Your Source of Truth:** Use this document as your guide. Track your progress, revisit concepts, and make notes.


## Curriculum Phases Overview

- **Phase 0: Setup (Day 1)** - Getting your tools ready and running the first program.
- **Phase 1: The Absolute Basics (Days 2-10)** - Variables, data types, operators, basic output (`printf`).
- **Phase 2: Control Flow & Basic Input (Days 11-21)** - Conditionals (`if`/`else`), loops (`for`/`while`), logical operators, basic input (`scanf`).
- **Phase 3: Functions & Scope (Days 22-30)** - Creating reusable code blocks, understanding variable visibility, pass-by-value.
- **Phase 4: Pointers and Memory (Days 31-55)** - The core of C: memory addresses, pointers, dynamic allocation (`malloc`/`free`), common pitfalls.
- **Phase 5: Arrays and Strings (Days 56-69)** - Working with collections of data, C-style strings, safe string handling.
- **Phase 6: Structs and Basic File I/O (Days 70-83)** - Creating custom data types, reading from and writing to files.
- **Phase 7: Building CLI Tools & Intermediate Topics (Days 84-99)** - Command-line arguments, multi-file projects, Makefiles, consolidating knowledge.


## Detailed Steps

---

### Phase 0: Setup (Day 1)

- ✅ **Day 1: Setup & First Program**
    - **Topic:** Install C Compiler (GCC/Clang), verify installation (`gcc --version`). Write `hello.c`. Compile (`gcc hello.c -o hello`) and run (`./hello`). Understand `#include <stdio.h>`, `main` function, `printf`, `return 0`.
    - **Exercise:** Modify `hello.c` to print "Hello, [Your Name]!". Recompile and run.
    - **Tip:** Compile frequently! Catch errors early.

---

### Phase 1: The Absolute Basics (Days 2-10)

- ✅ **Day 2: `printf` and Basic Output**
    - **Topic:** `printf` function, format specifiers (`%d` for int, `%s` for string), newline character (`\n`).
    - **Exercise:** Write a program that prints your name and age on separate lines using `printf`.
- ✅ **Day 3: Variables & Basic Types (`int`, `float`)**
    - **Topic:** Declaring variables (`int age;`), initializing (`float height = 1.8;`), integer (`int`) and floating-point (`float`) types.
    - **Exercise:** Declare an integer variable for age and a float variable for height (in meters). Initialize and print them with descriptive text.
- ✅ **Day 4: Basic Arithmetic Operators**
    - **Topic:** Addition (`+`), Subtraction (`-`), Multiplication (`*`), Division (`/`). Basic operator precedence.
    - **Exercise:** Write a program that calculates the area of a rectangle (width * height). Use `float` variables. Print the result.
    - **Tip:** Integer division truncates (e.g., `5 / 2` is `2`). Use floats (`5.0 / 2.0`) for floating-point results.
- ✅ **Day 5: Modulo Operator & `char` Type**
    - **Topic:** Modulo (`%`) for remainder, character type (`char`). Single quotes for char literals (`'A'`).
    - **Exercise:** Write a program that checks if a number (e.g., 10) is even or odd using the modulo operator. Declare a `char` variable, assign it a letter, and print it using `%c`.
- ✅ **Day 6: `sizeof` Operator**
    - **Topic:** Using `sizeof` to determine the memory size (in bytes) of data types or variables. Understand that sizes can vary by system.
    - **Exercise:** Print the size of `int`, `float`, `double`, and `char`.
*   **Day 7: `const` Keyword**
    *   **Topic:** Defining constants using `const` for read-only variables. Improves readability and prevents accidental modification.
    *   **Exercise:** Define a `const` integer for `SECONDS_PER_MINUTE`. Try to modify it (observe the compiler error). Use it in a `printf`.
*   **Day 8: More `printf` Formatting**
    *   **Topic:** Format specifiers `%f` (float/double), `%.2f` (float/double with 2 decimal places), `%c` (char).
    *   **Exercise:** Declare a `double` for a price. Print it with default precision and then formatted to 2 decimal places.
*   **Day 9: Comments & Basic Type Casting**
    *   **Topic:** Single-line (`//`) and multi-line (`/* */`) comments. Explicit type conversion (casting), e.g., `(int)float_value;`.
    *   **Exercise:** Add comments to a previous exercise explaining the code. Declare a `float` (e.g., 9.9), explicitly cast it to an `int`, and print both values to see the truncation.
*   **Day 10: Problem: Fahrenheit to Celsius**
    *   **Topic:** Apply variables, arithmetic, `printf`. Formula: C = (F - 32) * 5.0/9.0. Importance of floating-point division.
    *   **Exercise:** Write a program that converts a hardcoded Fahrenheit value (e.g., 77) to Celsius and prints the result formatted to one decimal place.

---

### Phase 2: Control Flow & Basic Input (Days 11-21)

*   **Day 11: `if` Statement & Comparison (`==`, `!=`)**
    *   **Topic:** Conditional execution with `if`. Equality (`==`) and inequality (`!=`) operators. Code blocks `{}`.
    *   **Exercise:** Write a program that checks if a variable `score` is equal to 100 and prints "Perfect score!" if it is.
*   **Day 12: `else` and `else if`**
    *   **Topic:** Handling alternative conditions. Chaining conditions.
    *   **Exercise:** Write a program that checks if a number is positive, negative, or zero and prints the corresponding message.
*   **Day 13: More Comparison Operators (`<`, `>`, `<=`, `>=`)**
    *   **Topic:** Less than, greater than, less/greater than or equal to.
    *   **Exercise:** Write a program that checks if a temperature variable is below freezing (0 C).
*   **Day 14: Logical Operators (`&&`, `||`)**
    *   **Topic:** Combining conditions with AND (`&&` - both true) and OR (`||` - at least one true). Short-circuiting behavior.
    *   **Exercise:** Check if an `age` variable is within the range 18 to 65 (inclusive) using `&&`.
*   **Day 15: Logical NOT (`!`)**
    *   **Topic:** Negating a condition (`!`). Useful for boolean-like flags.
    *   **Exercise:** Use `!` to check if a boolean-like integer flag (`is_logged_in`) is *not* true (i.e., is 0).
*   **Day 16: `while` Loop**
    *   **Topic:** Looping while a condition remains true. Pre-test loop. Need to manage loop variable inside the loop.
    *   **Exercise:** Print numbers from 10 down to 1 using a `while` loop.
*   **Day 17: `for` Loop**
    *   **Topic:** Concise loop structure (initialization; condition; post-iteration step). Ideal for counter-controlled loops.
    *   **Exercise:** Print the first 10 even numbers (0, 2, ..., 18) using a `for` loop.
*   **Day 18: `do...while` Loop**
    *   **Topic:** Loop that executes the body at least once, then checks the condition. Post-test loop.
    *   **Exercise:** Create a simple menu prompt that asks the user for input and repeats *until* they enter 'q', using `do...while`. (Input handling will be basic for now).
*   **Day 19: `break` Statement**
    *   **Topic:** Exiting a loop (`for`, `while`, `do...while`) or `switch` statement prematurely.
    *   **Exercise:** Loop indefinitely (`while(1)`), prompt the user for a number, and `break` the loop if they enter 0.
*   **Day 20: `continue` Statement**
    *   **Topic:** Skipping the rest of the current loop iteration and proceeding to the next condition check/iteration step.
    *   **Exercise:** Loop from 1 to 10, but use `continue` to skip printing any multiples of 3.
*   **Day 21: Basic Input with `scanf`**
    *   **Topic:** Reading formatted input (`%d`, `%f`, `%c`). Pass address using `&`. **CRITICAL:** `scanf` is unsafe and prone to buffer overflows (especially with strings) and input errors.
    *   **Exercise:** Ask the user to enter their age (`int`) and favorite letter (`char`). Read them using `scanf`. Print them back.
    *   **Tip:** **Always check `scanf`'s return value!** It returns the number of items successfully assigned. If it's not what you expect, the input failed. This is crucial error handling. We'll learn safer input methods later (`fgets`).

---

### Phase 3: Functions & Scope (Days 22-30)

*   **Day 22: Defining Simple Functions (`void`, no parameters)**
    *   **Topic:** Creating reusable blocks of code. Function definition syntax. Function calls. `void` indicates no return value.
    *   **Exercise:** Create a function `display_banner()` that prints a decorative text banner (e.g., `********`). Call it from `main`.
*   **Day 23: Functions with Parameters (Pass by Value)**
    *   **Topic:** Passing data *into* functions. Function parameters act as local copies of the arguments passed in. Changes inside the function don't affect original arguments.
    *   **Exercise:** Create a function `print_square(int num)` that takes an integer and prints its square. Call it from `main` with a value.
*   **Day 24: Functions with Return Values**
    *   **Topic:** Functions that compute and return a result (`return` keyword). The return type must match the function definition.
    *   **Exercise:** Create a function `int multiply(int a, int b)` that returns the product of two integers. Call it from `main`, store the result in a variable, and print it.
*   **Day 25: Function Prototypes (Declarations)**
    *   **Topic:** Declaring a function's signature (return type, name, parameter types) before its definition. Allows defining functions after `main` or in different files.
    *   **Exercise:** Declare the `multiply` function prototype above `main`, define `multiply` *below* `main`, and call it from `main`.
*   **Day 26: Variable Scope (Local vs. Global)**
    *   **Topic:** Where variables are accessible. Local variables exist only within their block (`{}`). Global variables exist everywhere (generally avoid these!). Shadowing (local hides global).
    *   **Exercise:** Declare a variable inside `main`. Declare another variable with the same name inside an `if` block within `main`. Observe their independence. Avoid globals unless absolutely necessary.
*   **Day 27: `void` Return Type & `const` Parameters**
    *   **Topic:** Recap `void` functions. Using `const` for input parameters that the function promises not to modify. Improves safety and documents intent.
    *   **Exercise:** Create a function `void print_details(const int id, const float balance)` that prints the values. Using `const` shows these are inputs only.
*   **Day 28: Refactoring: Fahrenheit Converter Function**
    *   **Topic:** Applying functions to improve existing code's structure and reusability.
    *   **Exercise:** Take the Fahrenheit-to-Celsius code from Day 10 and put the conversion logic into a function `float fahrenheit_to_celsius(float fahr)`. `main` should now call this function.
*   **Day 29: Refactoring: Simple Calculator Functions**
    *   **Topic:** Breaking down a problem (like a calculator) into smaller, manageable function units.
    *   **Exercise:** Create functions for add, subtract, multiply, divide. `main` should call these based on some logic (e.g., hardcoded operation).
*   **Day 30: Introduction to `printf`-Debugging**
    *   **Topic:** Using strategically placed `printf` statements to trace execution flow and inspect variable values at different points in the code. A simple but effective debugging technique.
    *   **Exercise:** Add `printf` statements inside your calculator functions (e.g., `printf("Entering add: a=%d, b=%d\n", a, b);`) to observe the flow and parameters when called from `main`.

---

### Phase 4: Pointers and Memory (Days 31-55) - **Take Your Time Here!**

*   **Day 31: Memory Addresses & Address-of Operator (`&`)**
    *   **Topic:** Conceptual understanding of memory as a sequence of bytes, each with an address. Using `&` to get the memory address of a variable. Format specifier `%p` for printing addresses (pointers).
    *   **Exercise:** Declare an `int` variable, print its value and its memory address using `&` and `%p`.
*   **Day 32: Pointer Variables (`*`) - Declaration & NULL**
    *   **Topic:** Declaring pointer variables (e.g., `int *ptr;` - `ptr` holds an address of an `int`). Initializing pointers to `NULL` (a special value indicating "points to nothing"). Include `<stddef.h>` for `NULL` or just use `0`.
    *   **Exercise:** Declare an integer pointer `ptr`, initialize it to `NULL`, and print its value (`%p`).
    *   **Tip:** Always initialize pointers (to `NULL` or a valid address) to avoid using uninitialized pointers.
*   **Day 33: Assigning Addresses to Pointers**
    *   **Topic:** Making a pointer variable store the address of another variable (`ptr = &var;`). The pointer `ptr` now "points to" `var`.
    *   **Exercise:** Declare `int x = 10;` and `int *ptr = &x;`. Print the address stored *in* `ptr` (`%p`, value is `ptr`) and the value *of* `x` (`%d`, value is `x`).
*   **Day 34: Dereferencing Operator (`*`)**
    *   **Topic:** Accessing the value *at* the address stored in a pointer (`value = *ptr;`). Reading or writing *through* the pointer.
    *   **Exercise:** Using `ptr` from Day 33, print the value `*ptr` (`%d`). Modify `x` directly (`x = 20;`) and print `*ptr` again. Then, modify `x` *via* the pointer (`*ptr = 30;`) and print the value of `x`.
*   **Day 35: Pointers and Functions (Pass-by-Reference Simulation)**
    *   **Topic:** Passing pointers (addresses) to functions allows the function to modify the original variables in the caller's scope.
    *   **Exercise:** Write a function `void add_one(int *num_ptr)` that increments the integer pointed to by `num_ptr`. Call it from `main` passing the address of an integer variable (`&my_var`). Print `my_var` before and after the call.
*   **Day 36: `const` Correctness with Pointers**
    *   **Topic:** `const int *p` (pointer to constant int - cannot change value via `p`), `int * const p` (constant pointer to int - cannot change address `p` holds), `const int * const p` (constant pointer to constant int).
    *   **Exercise:** Declare `int y = 5;`. Declare `const int *p1 = &y;` - try `*p1 = 6;` (error). Declare `int * const p2 = &y;` - try `p2 = NULL;` (error).
*   **Day 37: Pointers and Arrays (Decay)**
    *   **Topic:** An array name used in an expression usually "decays" into a pointer to its first element. `arr` is often equivalent to `&arr[0]`.
    *   **Exercise:** Declare `int nums[3] = {10, 20, 30};`. Print the values of `nums`, `&nums[0]`. Assign `int *p = nums;`. Print `p`. Observe they represent the same address.
*   **Day 38: Array Access via Pointers (Bracket Notation)**
    *   **Topic:** Because of decay, `p[i]` works even if `p` is a pointer assigned from an array. `p[i]` is equivalent to `*(p + i)`.
    *   **Exercise:** Using the pointer `p` from Day 37 (`p = nums`), access and print `p[1]`.
*   **Day 39: Pointer Arithmetic (Increment/Decrement)**
    *   **Topic:** `p++` increments the pointer to point to the *next element* in memory (adjusts address by `sizeof(*p)` bytes). `p--` decrements.
    *   **Exercise:** Use a pointer `p` initialized to `nums`. Use a `for` loop (3 iterations) to print `*p` and then execute `p++` inside the loop. Observe it prints 10, 20, 30.
*   **Day 40: Array Access via Pointers (Pointer Arithmetic Notation)**
    *   **Topic:** Explicitly using pointer arithmetic for access: `*(p + i)` retrieves the value at the i-th element relative to `p`.
    *   **Exercise:** Loop through the `nums` array using an index `i`. Inside the loop, print the element using the `*(nums + i)` notation.
*   **Day 41: Pointer Arithmetic Size Dependency**
    *   **Topic:** How `p + 1` calculates the next address depends *critically* on the type `p` points to (`sizeof(*p)`).
    *   **Exercise:** Declare `int i_arr[2]; char c_arr[2];`. Print `(void*)i_arr`, `(void*)(i_arr + 1)`. Print `(void*)c_arr`, `(void*)(c_arr + 1)`. Observe the difference in address values (likely 4 bytes for int, 1 byte for char). Use `(void*)` cast for `%p`.
*   **Day 42: Heap vs. Stack Memory (Conceptual)**
    *   **Topic:** Understand the two main memory regions: Stack (automatic, function-local variables, fast allocation/deallocation, limited size) and Heap (manual, dynamic allocation, larger size, slower allocation/deallocation, requires explicit management).
    *   **Exercise:** Draw diagrams illustrating how local variables are added/removed from the stack during function calls and how `malloc` allocates on the heap. No code.
*   **Day 43: Dynamic Memory Allocation: `malloc`**
    *   **Topic:** Allocating memory on the heap using `malloc(size_t size)`. Requires `<stdlib.h>`. Returns a `void*` pointer to the allocated block, or `NULL` on failure. Size is in bytes.
    *   **Exercise:** Allocate memory for a single `int` using `int *ptr = malloc(sizeof(int));`.
    *   **Tip:** **CRITICAL: Always check if `malloc` returned `NULL`!** If it's `NULL`, allocation failed, and dereferencing it crashes the program.
*   **Day 44: Using Allocated Memory & `free`**
    *   **Topic:** Accessing memory allocated with `malloc` using the pointer (after casting if needed, though `malloc` result often assigned to typed pointer). **CRITICAL:** Releasing heap memory with `free(ptr)` when done to prevent memory leaks.
    *   **Exercise:** Continue Day 43: Check if `ptr` is not `NULL`. If successful, assign a value (`*ptr = 50;`), print the value (`printf("%d\n", *ptr);`). Then call `free(ptr);`.
*   **Day 45: Memory Leaks**
    *   **Topic:** What happens when heap memory is allocated (`malloc`) but never released (`free`). The program loses the pointer and can no longer manage that memory, wasting resources.
    *   **Exercise:** (Conceptual or careful execution) Write a loop that calls `malloc` inside but *never* calls `free`. Run it briefly and observe memory usage climbing (using system monitor). Understand why this is bad. Stop the program quickly!
*   **Day 46: Dynamic Array Allocation**
    *   **Topic:** Using `malloc` to allocate space for multiple contiguous elements (an array). Formula: `malloc(count * sizeof(element_type))`.
    *   **Exercise:** Allocate memory for an array of 5 doubles: `double *arr = malloc(5 * sizeof(double));`. Check for `NULL`.
*   **Day 47: Using Dynamic Arrays & `free`**
    *   **Topic:** Accessing elements of a dynamically allocated array using pointer arithmetic or bracket notation (`arr[i]`). Freeing the entire block with a single `free(arr)` call (using the original pointer returned by `malloc`).
    *   **Exercise:** Continue Day 46: If allocation succeeded, use a loop to fill the array with values (e.g., 0.0, 1.1, 2.2, ...). Print the values using another loop. Then `free(arr)`.
*   **Day 48: `calloc` Function**
    *   **Topic:** `calloc(count, size_t size)` allocates memory for `count` elements of `size` bytes each *and* initializes the allocated memory to all bits zero. Returns `void*` or `NULL`.
    *   **Exercise:** Allocate an array of 5 integers using `int *arr = calloc(5, sizeof(int));`. Check for `NULL`. Print the elements (they should all be 0). `free(arr)`.
*   **Day 49: `realloc` Function**
    *   **Topic:** Resizing a previously allocated memory block `realloc(ptr, new_size)`. Can grow or shrink. May move the block (returns new address). Returns `NULL` on failure (original block is *still valid* and needs freeing). If `ptr` is `NULL`, behaves like `malloc`. If `new_size` is 0, may free the block (implementation-defined, better use `free`).
    *   **Exercise:** `malloc` an array for 3 ints. `realloc` it to hold 5 ints (`int *new_arr = realloc(arr, 5 * sizeof(int));`). **CRITICAL:** Check if `new_arr` is `NULL`. If not, update your pointer (`arr = new_arr;`) and use the larger array. `free` the final pointer (`arr`).
    *   **Tip:** Handle `realloc` failure carefully: don't lose the original pointer if `realloc` returns `NULL`.
*   **Day 50: Dangling Pointers**
    *   **Topic:** A pointer that points to memory that has been freed or is otherwise invalid (e.g., points to a local variable after its function returns). Using a dangling pointer leads to undefined behavior (crashes, corrupted data).
    *   **Exercise:** Allocate memory, store the pointer (`p`). `free(p)`. Then *try* to access `*p` (likely crash or garbage output - **undefined behavior**).
    *   **Tip:** Set pointers to `NULL` immediately after `free`ing them (`free(p); p = NULL;`) to prevent accidentally using them later.
*   **Day 51: NULL Pointer Dereference**
    *   **Topic:** Attempting to access memory via a pointer that is explicitly `NULL`. This reliably crashes on most modern systems (segmentation fault).
    *   **Exercise:** Declare `int *p = NULL;`. Try to print or assign to `*p` (program should crash).
    *   **Tip:** Always check pointers before dereferencing if they *might* be NULL (e.g., after `malloc`, or if it's a function parameter that could be optional).
*   **Day 52: Basic Error Handling: `stderr` & `exit`**
    *   **Topic:** Printing error messages to the standard error stream (`stderr`) instead of `stdout`. `fprintf(stderr, "Error: Something bad happened!\n");`. Exiting the program immediately with a non-zero status code to indicate failure (`exit(EXIT_FAILURE)` or `exit(1)`). Requires `<stdlib.h>`.
    *   **Exercise:** Modify the `malloc` check from Day 43: if `malloc` returns `NULL`, print an error message to `stderr` using `fprintf` and then call `exit(EXIT_FAILURE);`.
*   **Day 53: Using `perror`**
    *   **Topic:** `perror(const char *s)` prints the user-provided string `s`, followed by a colon, a space, and a system-specific error message corresponding to the global `errno` variable (which system calls like `malloc` or `fopen` set on failure). Requires `<stdio.h>` and `<errno.h>`.
    *   **Exercise:** After a potentially failed library call (like `malloc` or `fopen` later), if it fails (returns `NULL`), call `perror("Allocation failed")` or `perror("File open failed")` instead of just a generic `fprintf`. This gives more specific error info.
*   **Day 54: Introduction to Debugger (`gdb` / IDE) - Breakpoints & Stepping**
    *   **Topic:** Using a debugger is *essential*. Learn to: compile with debug symbols (`gcc -g ...`), start the debugger (`gdb ./program`), set breakpoints (`break function_name` or `break line_number`), run (`run`), step over (`next`), step into (`step`), print variable values (`print var_name`), continue (`continue`).
    *   **Exercise:** Compile a program with a simple function (e.g., Day 24's `multiply`) using `-g`. Start `gdb`. Set a breakpoint at `multiply`. Run the program. When it stops, use `next` to step line-by-line. Use `print` to inspect the parameters `a` and `b`. Use `continue` to finish.
*   **Day 55: Review Phase 4**
    *   **Topic:** Consolidate pointer and memory management concepts. This is the hardest part of C. Review `malloc`/`free`, pointer arithmetic, common errors.
    *   **Exercise:** Write a function `int* create_range(int start, int end)` that creates a dynamically allocated array containing integers from `start` up to (but not including) `end`. Return the pointer (or `NULL` on failure). Write `main` code to call it, print the array, and `free` the memory.

---

### Phase 5: Arrays and Strings (Days 56-69)

*   **Day 56: Static Arrays Recap & Initialization**
    *   **Topic:** Declaring fixed-size arrays (`type name[size];`), initializing with `{...}`. Accessing elements `arr[index]`. Array bounds are 0 to `size-1`.
    *   **Exercise:** Create an array of 5 `float`s representing grades. Initialize them directly. Print the third grade (`grades[2]`). Try accessing `grades[5]` (undefined behavior - potential crash).
    *   **Tip:** C does *not* automatically check array bounds. Accessing outside the bounds corrupts memory or crashes.
*   **Day 57: Looping Through Arrays**
    *   **Topic:** Using `for` loops with an index (0 to `size-1`) to iterate over array elements.
    *   **Exercise:** Calculate the sum and average of the grades in the array from Day 56 using a `for` loop.
*   **Day 58: Multi-dimensional Arrays (2D)**
    *   **Topic:** Declaring `type name[rows][cols]`. Stored in row-major order. Accessing `matrix[row][col]`.
    *   **Exercise:** Create a 2x3 integer matrix representing a small tic-tac-toe board. Initialize it (e.g., with 0s). Print the element at row 1, column 2. Use nested loops to print the whole matrix.
*   **Day 59: C Strings: Null-Terminated Character Arrays**
    *   **Topic:** How strings are represented: arrays of `char` ending with a special null character (`\0`). String literals (`"Hello"`) automatically include the `\0`.
    *   **Exercise:** Declare `char message[] = "Hello C!";`. Print it using `printf("%s", message)`. Use `sizeof(message)` to see the storage size (includes `\0`).
*   **Day 60: `strlen` Function**
    *   **Topic:** Get string length (number of characters *before* the `\0`). Requires `<string.h>`. `size_t strlen(const char *s);`.
    *   **Exercise:** Use `strlen(message)` on the string from Day 59 and print the result (should be 8). Compare with `sizeof`.
*   **Day 61: Implement `my_strlen`**
    *   **Topic:** Understand how `strlen` works internally by iterating until `\0` is found. Reinforces pointer/array traversal and null termination concept.
    *   **Exercise:** Write your own function `size_t my_strlen(const char *s)` that loops through the string using a pointer or index until `s[i] == '\0'` or `*p == '\0'` and returns the count. Test it.
*   **Day 62: `strcpy` (Unsafe!)**
    *   **Topic:** Copying one string into another. `char* strcpy(char *dest, const char *src);`. **DANGER:** Assumes `dest` is large enough. No bounds checking. Major source of buffer overflows if `src` is longer than `dest` buffer!
    *   **Exercise:** Declare `char src[] = "Copy me";` and `char dest[50];`. Use `strcpy(dest, src);`. Print `dest`. Now try with `char dest_small[5];` and `strcpy(dest_small, src);` (Likely crash or memory corruption!). **Avoid `strcpy` in real code.**
*   **Day 63: `strncpy` (Safer!)**
    *   **Topic:** Copying up to `n` characters: `char* strncpy(char *dest, const char *src, size_t n);`. Copies at most `n` bytes. **CRITICAL CAVEAT:** If `src` length is `>= n`, `dest` will *not* be null-terminated!
    *   **Exercise:** Use `strncpy` to copy `src` to `dest` (size 10). Use `strncpy(dest, src, 9); dest[9] = '\0';`. Print `dest`. This is the safe pattern: copy `size-1` bytes and manually null-terminate.
    *   **Tip:** Always prefer `strncpy` (with manual null termination) over `strcpy`.
*   **Day 64: `strcat` (Unsafe!)**
    *   **Topic:** Concatenating (appending) `src` string onto the end of `dest`. `char* strcat(char *dest, const char *src);`. **DANGER:** Assumes `dest` has enough space for its current content PLUS `src` content PLUS the new `\0`. No bounds checking. Another major source of buffer overflows.
    *   **Exercise:** Declare `char dest[50] = "Hello ";` and `char src[] = "World!";`. Use `strcat(dest, src);`. Print `dest`. Try appending a very long string to a small `dest` (Crash!). **Avoid `strcat` in real code.**
*   **Day 65: `strncat` (Safer!)**
    *   **Topic:** Appending up to `n` characters from `src` to `dest`. `char* strncat(char *dest, const char *src, size_t n);`. Safer because it considers `n`, *and* it always null-terminates (if `n > 0`).
    *   **Exercise:** Use `strncat` to append `src` to `dest`. Calculate remaining space in `dest` first: `size_t remaining = sizeof(dest) - strlen(dest) - 1;`. Use `strncat(dest, src, remaining);`. Print `dest`.
    *   **Tip:** Always prefer `strncat` over `strcat`. Calculate the max characters to append (`n`) carefully based on remaining buffer space.
*   **Day 66: `strcmp` Function**
    *   **Topic:** Comparing two strings lexicographically (like dictionary order). `int strcmp(const char *s1, const char *s2);`. Returns: `< 0` if `s1 < s2`, `0` if `s1 == s2`, `> 0` if `s1 > s2`.
    *   **Exercise:** Compare `"apple"` vs `"banana"`, `"apple"` vs `"apple"`, `"banana"` vs `"apple"` using `strcmp`. Print the integer results and interpret them.
*   **Day 67: Safer Input: `fgets`**
    *   **Topic:** Reading a line of text (including spaces) safely from an input stream (like `stdin`). `char* fgets(char *buffer, int size, FILE *stream);`. Reads up to `size-1` chars, stores `\n` if read before hitting size limit, and always null-terminates the buffer. Returns `buffer` on success, `NULL` on EOF or error.
    *   **Exercise:** Declare `char line[100];`. Ask user for their full name. Read it using `fgets(line, sizeof(line), stdin)`. Print the line.
    *   **Tip:** **`fgets` is the standard, safe way to read string input in C.** Strongly prefer it over `scanf` for strings.
*   **Day 68: Processing `fgets` Input (Removing Trailing Newline)**
    *   **Topic:** `fgets` usually includes the `\n` if it fits. Often, you want to remove it. Common technique: `line[strcspn(line, "\n")] = 0;` finds the first newline and replaces it with `\0`. (Requires `<string.h>`).
    *   **Exercise:** After reading with `fgets` (Day 67), add the `strcspn` line to remove the trailing newline (if present). Print the string again to verify.
*   **Day 69: Review Phase 5**
    *   **Topic:** Consolidate arrays, C strings, null termination, pointer/array relationship, and SAFE string handling (`strncpy`, `strncat`, `fgets`). Dangers of unsafe functions (`strcpy`, `strcat`, `scanf %s`).
    *   **Exercise:** Write a program that reads a line of text using `fgets`, then reverses the string in-place (you might need pointers or indices moving from both ends). Print the reversed string.

---

### Phase 6: Structs and Basic File I/O (Days 70-83)

*   **Day 70: Defining `struct`s**
    *   **Topic:** Grouping related data variables of different types under a single type name. `struct Point { int x; int y; };`. Defines a new type `struct Point`.
    *   **Exercise:** Define a `struct Book` with fields like `char title[100];`, `char author[50];`, `int year;`.
*   **Day 71: Creating `struct` Instances & Accessing Members (`.`)**
    *   **Topic:** Declaring variables of `struct` type (`struct Book my_book;`). Accessing members using the dot operator (`.`).
    *   **Exercise:** Create an instance of `struct Book`. Initialize its fields (use `strncpy` for title/author!). Print the `title` and `year` using the dot operator.
*   **Day 72: Pointers to `struct`s (`->`)**
    *   **Topic:** Declaring pointers to structs (`struct Book *book_ptr = &my_book;`). Accessing members via a pointer using the arrow operator (`->`). (`ptr->member` is syntactic sugar for `(*ptr).member`).
    *   **Exercise:** Create a pointer to your `Book` instance. Access and print the `author` using the `->` operator.
*   **Day 73: Structs as Function Parameters (By Value)**
    *   **Topic:** Passing entire structs to functions. This makes a complete copy of the struct. Can be inefficient for large structs.
    *   **Exercise:** Write a function `void print_book(struct Book b)` that prints all fields of a book struct passed by value. Call it with your instance.
*   **Day 74: Structs as Function Parameters (By Pointer)**
    *   **Topic:** Passing pointers to structs (`struct Book *b_ptr`). More efficient (only address is copied). Allows the function to modify the original struct. Use `const struct Book *b_ptr` if the function shouldn't modify it.
    *   **Exercise:** Write a function `void update_year(struct Book *b_ptr, int new_year)` that modifies the year field via the pointer. Call it and verify the change in the original `my_book` instance in `main`.
*   **Day 75: File Pointers (`FILE *`)**
    *   **Topic:** Introduction to file handling. The `FILE` type (defined in `<stdio.h>`) is an opaque struct holding file stream info. Use `FILE *fptr;` to declare a file pointer.
    *   **Exercise:** Declare a `FILE *output_file;`. Understand it will hold the information returned by `fopen` to interact with a file.
*   **Day 76: Opening Files (`fopen`) & Closing (`fclose`)**
    *   **Topic:** `fopen("filename", "mode")`. Modes: `"r"` (read), `"w"` (write - creates/truncates), `"a"` (append - creates/adds to end). Returns `FILE*` on success, `NULL` on error. `int fclose(FILE *stream)` closes the file, flushing buffers. Returns 0 on success, `EOF` on error.
    *   **Exercise:** Try to open a file named `output.txt` in write mode (`"w"`). **CRITICAL:** Check if the returned pointer is `NULL`. If not `NULL`, print "File opened successfully" and immediately call `fclose` on the pointer. If `NULL`, use `perror("fopen failed")` to print an error.
    *   **Tip:** Always pair `fopen` with `fclose`. Always check `fopen`'s return value.
*   **Day 77: Writing Characters (`fputc`)**
    *   **Topic:** Writing a single character `int fputc(int c, FILE *stream);`. Returns the character written or `EOF` on error.
    *   **Exercise:** Open `data.txt` in `"w"` mode (check for NULL!). Write the characters 'H', 'e', 'l', 'l', 'o', '\n' using a loop or individual `fputc` calls. `fclose` the file. Use a text editor or `cat` command to check the file contents.
*   **Day 78: Reading Characters (`fgetc`) & `EOF`**
    *   **Topic:** Reading a single character `int fgetc(FILE *stream);`. Returns the character read (as an `int`) or `EOF` (a special negative integer) on end-of-file or error.
    *   **Exercise:** Open `data.txt` (created Day 77) in `"r"` mode (check!). Use a `while` loop: `int c; while ((c = fgetc(fptr)) != EOF) { putchar(c); }`. `putchar(c)` prints the character to the console. `fclose`.
    *   **Tip:** The loop condition `(c = fgetc(fptr)) != EOF` is a standard C idiom for reading until end-of-file. Store the result in an `int` to correctly distinguish `EOF` from valid character values like `\xFF`.
*   **Day 79: Formatted File Writing (`fprintf`)**
    *   **Topic:** Writing formatted output to a file, similar to `printf`. `int fprintf(FILE *stream, const char *format, ...);`.
    *   **Exercise:** Open `log.txt` in `"w"` mode (check!). Use `fprintf` to write details of a `Book` struct instance (from Day 71) to the file, e.g., `fprintf(fptr, "Title: %s, Author: %s, Year: %d\n", my_book.title, my_book.author, my_book.year);`. `fclose`. Check file.
*   **Day 80: Formatted File Reading (`fscanf`)**
    *   **Topic:** Reading formatted input from a file, similar to `scanf`. `int fscanf(FILE *stream, const char *format, ...);`. Returns number of items successfully assigned. **CAUTION:** Same pitfalls as `scanf` (whitespace handling, buffer overflows for `%s`). Often better to read lines with `fgets` and parse them.
    *   **Exercise:** Open `log.txt` in `"r"` mode (check!). Read the book data back using `fscanf(fptr, "Title: %99s Author: %49s Year: %d\n", title_buffer, author_buffer, &year);` (Use width limits `%99s` for safety! Ensure buffers are large enough). Check `fscanf`'s return value (should be 3). Print the read data. `fclose`.
    *   **Tip:** Be extremely careful with `fscanf` and `%s`. Use width limits or preferably use `fgets` + `sscanf`/`strtok`/`strtol`.
*   **Day 81: Reading Lines from Files (`fgets`)**
    *   **Topic:** Safer way to read lines from files. `fgets(buffer, size, fptr)`. Reads up to `size-1` chars, includes `\n` if read, null-terminates. Returns `NULL` on EOF or error.
    *   **Exercise:** Open a text file (e.g., your `hello.c` or `data.txt`) in `"r"` mode (check!). Read it line by line using `fgets` in a `while (fgets(line_buffer, sizeof(line_buffer), fptr) != NULL)` loop. Print each line. `fclose`.
*   **Day 82: Writing Strings to Files (`fputs`)**
    *   **Topic:** Writing a null-terminated string to a file. `int fputs(const char *s, FILE *stream);`. Returns non-negative on success, `EOF` on error. **Does not** add a newline automatically.
    *   **Exercise:** Open `output_fputs.txt` in `"w"` mode (check!). Write several strings using `fputs`. Add `\n` explicitly where needed, e.g., `fputs("First line.\n", fptr);`. `fclose`. Check file.
*   **Day 83: Checking File Errors (`feof`, `ferror`)**
    *   **Topic:** After a read loop finishes (e.g., `fgetc` returns `EOF` or `fgets` returns `NULL`), distinguish between a clean end-of-file (`feof(fptr)` returns non-zero) and an actual read/write error (`ferror(fptr)` returns non-zero).
    *   **Exercise:** Modify the `fgets` loop from Day 81. After the loop finishes, check `if (ferror(fptr))` and print an error message to `stderr` if true. Otherwise, if `feof(fptr)` is true, you know it reached the end normally. `clearerr(fptr)` can reset error/EOF indicators if needed.

---

### Phase 7: Building CLI Tools & Intermediate Topics (Days 84-99)

*   **Day 84: `main` Arguments (`argc`, `argv`)**
    *   **Topic:** Receiving command-line arguments passed when running the program. `int main(int argc, char *argv[])`. `argc` (argument count) is number of strings in `argv`. `argv` (argument vector) is an array of strings (`char*`). `argv[0]` is always the program name. `argv[argc]` is guaranteed to be `NULL`.
    *   **Exercise:** Write a program that prints the value of `argc`. Then loop from `i = 0` to `argc - 1` and print `argv[i]` on each line, labeled with its index. Run like: `./myprog first "second arg" third`.
*   **Day 85: Parsing `argv`: Checking Argument Count**
    *   **Topic:** Basic input validation: check if the user provided the expected number of arguments using `argc` before trying to access `argv[1]`, `argv[2]`, etc.
    *   **Exercise:** Write a program that expects exactly one argument after the program name (i.e., `argc == 2`). If `argc` is not 2, print a usage message to `stderr` (e.g., `fprintf(stderr, "Usage: %s <input_file>\n", argv[0]);`) and `exit(EXIT_FAILURE)`. If correct, print "Input file specified: [argument]".
*   **Day 86: String to Number Conversion (`atoi`, `atof`)**
    *   **Topic:** Converting argument strings (which are `char*`) to numbers. Simple functions from `<stdlib.h>`: `int atoi(const char *str);`, `double atof(const char *str);`. **Warning:** Very limited error checking (e.g., `atoi("abc")` returns 0, indistinguishable from `atoi("0")`).
    *   **Exercise:** Write a program that takes one command-line argument (`argv[1]`), converts it to an integer using `atoi`, adds 10 to it, and prints the result. Run with valid numbers and invalid input like "hello" to see `atoi`'s behavior.
*   **Day 87: Safer Conversion (`strtol`, `strtod`)**
    *   **Topic:** More robust conversion functions from `<stdlib.h>`: `long strtol(const char *str, char **endptr, int base);`, `double strtod(const char *str, char **endptr);`. They allow checking if the *entire* string was consumed (`*endptr == '\0'` after call) and provide better error detection via `errno`.
    *   **Exercise:** Re-do Day 86 using `strtol`. Declare `char *endptr; long num = strtol(argv[1], &endptr, 10);`. After the call, check if `*endptr != '\0'` (means invalid characters found). If valid, print `num + 10`. If invalid, print an error message. (Full `errno` checking is more complex, focus on `endptr` check first).
    *   **Tip:** Prefer `strtol`/`strtod` over `atoi`/`atof` for any serious argument parsing.
*   **Day 88: Project: `echo` Clone (Basic)**
    *   **Topic:** Applying `argc`/`argv` parsing. Mimic the standard `echo` command.
    *   **Exercise:** Implement `myecho`: loop through `argv` starting from index 1 (`i=1` to `argc-1`). Print each argument (`argv[i]`). Print a space *between* arguments (but not after the last one). Print a single newline at the very end.
*   **Day 89: Project: `echo` Clone (`-n` flag)**
    *   **Topic:** Simple command-line option parsing. Checking `argv[1]` for a specific flag.
    *   **Exercise:** Modify `myecho`: If the first argument (`argc > 1 && strcmp(argv[1], "-n") == 0`), then print arguments `argv[2]` onwards *without* the final newline. Otherwise, behave as before (print args `argv[1]` onwards *with* the final newline).
*   **Day 90: Project: `cat` Clone (Single File)**
    *   **Topic:** Combining file I/O (`fopen`, `fgets`/`fgetc`, `fclose`, `perror`) with `argc`/`argv`. Mimic basic `cat filename`.
    *   **Exercise:** Write `mycat` that takes exactly one filename as an argument (`argv[1]`). Check `argc` (should be 2). Open the specified file in read mode (`"r"`). Check if `fopen` succeeded (`perror` on failure). Read the file line by line (using `fgets`) or character by character (using `fgetc`) and print the contents to `stdout`. `fclose` the file.
*   **Day 91: Project: `cat` Clone (Multiple Files / `stdin`)**
    *   **Topic:** Looping through `argv` for filenames. Handling the case of no arguments (read from standard input, `stdin`).
    *   **Exercise:** Enhance `mycat`:
        *   If `argc == 1`, read from `stdin` line by line using `fgets(buffer, size, stdin)` until `NULL`, printing each line.
        *   If `argc > 1`, loop through `argv` from index 1 to `argc-1`. For each `argv[i]`: open the file, check for error, read/print its content, close it. Handle errors for individual files gracefully (print error to `stderr`, continue to next file).
*   **Day 92: Splitting Code: `.c` and `.h` Files (Modularity)**
    *   **Topic:** Organizing larger projects. Header files (`.h`) contain declarations (function prototypes, struct definitions, extern variable declarations, macros). Source files (`.c`) contain definitions (function bodies, global variable definitions). Use `#include "myheader.h"` (with quotes for local headers).
    *   **Exercise:** Take a utility function you wrote earlier (e.g., `fahrenheit_to_celsius` or `my_strlen`).
        1.  Put its *declaration* (prototype) in a new file `utils.h`.
        2.  Put its *definition* (the function body) in a new file `utils.c`. Make sure `utils.c` includes `utils.h` if needed (e.g., for struct definitions used in the function).
        3.  In your `main.c` file, `#include "utils.h"` and call the function.
*   **Day 93: Header Guards**
    *   **Topic:** Preventing errors if a header file is included multiple times (directly or indirectly). Standard C practice. Two methods:
        1.  `#ifndef MYHEADER_H_ / #define MYHEADER_H_ / ... contents ... / #endif` (Traditional)
        2.  `#pragma once` (Simpler, widely supported, but not standard C)
    *   **Exercise:** Add header guards (using the `#ifndef` method) to the `utils.h` file created on Day 92.
*   **Day 94: Compiling Multiple Files**
    *   **Topic:** Telling the compiler to combine multiple source files into a single executable. Basic command: `gcc main.c utils.c -o myprogram`. Understand the two stages involved (compilation: `.c` -> `.o` object files; linking: `.o` files + libraries -> executable).
    *   **Exercise:** Compile the program from Day 92/93 using the command `gcc main.c utils.c -o myprogram`. Run `./myprogram`.
*   **Day 95: Intermediate Compilation & Linking**
    *   **Topic:** Performing compilation and linking separately. `gcc -c main.c` (creates `main.o`), `gcc -c utils.c` (creates `utils.o`), `gcc main.o utils.o -o myprogram` (links). Useful for larger projects where only changed files need recompiling.
    *   **Exercise:** Compile the program from Day 94 using the separate compilation steps. Check that `.o` files are created. Link them. Run `make clean` (if you have it from Day 99) or `rm *.o myprogram` to clean up.
*   **Day 96: Introduction to `Makefile` (Basic)**
    *   **Topic:** Automating the build process. A `Makefile` defines rules (targets, dependencies, commands) for building the program. `make` command reads the `Makefile`.
    *   **Exercise:** Create a simple `Makefile` for the program from Day 95:
        ```makefile
        # Compiler
        CC=gcc
        # Compiler flags (e.g., warnings, debug symbols)
        CFLAGS=-Wall -g

        # Executable name
        TARGET=myprogram

        # Object files needed
        OBJS=main.o utils.o

        # Default rule (first rule is default)
        $(TARGET): $(OBJS)
        	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

        # Rule to compile main.c into main.o
        main.o: main.c utils.h
        	$(CC) $(CFLAGS) -c main.c

        # Rule to compile utils.c into utils.o
        utils.o: utils.c utils.h
        	$(CC) $(CFLAGS) -c utils.c

        # Rule to clean up generated files
        clean:
        	rm -f $(TARGET) $(OBJS)
        ```
        Save this as `Makefile` (case sensitive!). Run `make` in the terminal. Run `make clean`.
*   **Day 97: Bitwise Operators**
    *   **Topic:** Operators that work on the individual bits of integer types: `&` (AND), `|` (OR), `^` (XOR), `~` (NOT), `<<` (Left Shift), `>>` (Right Shift). Useful for low-level programming, flags, masks, performance optimization.
    *   **Exercise:** Declare `unsigned char flags = 0;` Set the 3rd bit (value 4) using `flags = flags | 4;` (or `flags |= (1 << 2);`). Check if the 3rd bit is set using `if (flags & (1 << 2))`. Print `flags` before and after. Use left shift (`<< 1`) to multiply a number by 2.
*   **Day 98: Project Work & Consolidation**
    *   **Topic:** Apply learned concepts to slightly larger problems. Solidify understanding.
    *   **Exercise:** Choose one:
        1.  **`wc` clone (simplified):** Takes a filename, counts lines, words, and characters. (`fgets` for lines, track newline count. Use `isspace` from `<ctype.h>` to help count words).
        2.  **`grep` clone (simplified):** Takes a search string and a filename. Prints all lines in the file containing the search string (`fgets` to read lines, `strstr` from `<string.h>` to find substring).
        3.  **Improve `cat`:** Add line numbering (`-n` option).
*   **Day 99: Final Review & C++/Rust Prep Reflection**
    *   **Topic:** Review challenging areas (pointers!, memory management, file I/O, Makefiles). Reflect on the C learning experience. What did you like? What was difficult? How does manual memory management feel?
    *   **Exercise:** Revisit exercises from Phase 4 (Pointers/Memory) or Phase 7 (CLI tools). Ensure you understand `malloc`/`free`, pointer arithmetic, and multi-file compilation. Write down key takeaways about C's strengths (control, performance potential, simplicity) and weaknesses (manual memory management risks, potential for errors, verbosity). This reflection will directly inform your choice between C++ (builds on C with abstractions/safety features) and Rust (different approach focused heavily on compile-time safety).

---

## General Tips for Success

- **Compile Constantly:** Don't write huge amounts of code before compiling. Catch syntax errors early.
- **Heed Compiler Warnings:** Enable warnings (`gcc -Wall ...`) and treat them as errors. They often indicate potential problems.
- **Use a Debugger:** `printf` is okay initially, but learning `gdb` or your IDE's debugger is crucial for complex problems.
- **Experiment:** Don't just type the exercises. Change values, break things (intentionally!), see what happens, and figure out why.
- **Type, Don't Copy-Paste:** Typing the code reinforces muscle memory and forces you to engage with the syntax.
- **Seek Understanding:** Don't just get the code working. Understand *why* it works. Read about the functions you use.
- **Consistency is Key:** Short, regular sessions are more effective than infrequent marathon sessions.
- **Review:** Periodically revisit concepts from previous days, especially pointers and memory management.
