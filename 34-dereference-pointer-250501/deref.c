#include <stdio.h>
#include <stddef.h>

// A pointer stores an address in memory
// It is declared with <type> *<Name> 
// And at best initialized with 0 or NULL

// A pointer takes in an address in memory
// Which can be done with ptr = &<variable>

// The dereference operator * lets us access the value stored at the reference location on a pointer
// We can either read it with int num = *ptr
// Or we can write to it *ptr = 20 setting the original variable to a new value


int main(void) {
    // Declare variable x
    int x = 10;

    // Print value of x
    printf("The value of x is: %d\n", x);

    // Declare pointer ptr and set to NULL
    int *ptr = NULL;

    // Store memory address of x in ptr
    ptr = &x;

    // Print value of x through ptr
    printf("The value of int located in memory address of pointer ptr is: %d\n", *ptr);

    // Set x to a new value directly
    x = 20;

    // Print value of x
    printf("The new value of x is: %d\n", x);

    // Print value of x through ptr again
    printf("The value of int located in memory address of pointer ptr is: %d\n", *ptr);

    // Change value of int that is located at the memory address stored in ptr
    *ptr = 40;

    // Print value of x
    printf("The value of x is now: %d\n", x);

    return 0;
}
