#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

// When malloc fails it does two things
// It shows you that it failed by returning NULL
// It shows you why it failed by writing to errno

// Errno is an integer variable that is set by sytem calls and functions
// The perror("string") function uses the current value of errno
// It prints "string" : <errno> to stderr (converting errno into a human readable string)
// When errno is 0 it prints "string" : Undefined error: 0

// Perror is just a more convenient way to write
// Assumes you use #include <errno.h> and <string.h>
// fprintf("string : %s\n", strerror(errno))

int main(void) {
    // Declare pointer and initialize to NULL
    int * p = NULL;
    // Allocate memory of size int and store address in pointer
    p = malloc(sizeof(* p));
    // Question: How to simulate failure of malloc, or is it returning NULL whenever it fails, so NULL check would be enough
    // Check if allocation failed
    if (p == NULL) {
        // Question: What is perror doing, what is the difference to fprintf(stderr, s)
        perror("Allocation failed");
        // The fprintf function does exactly the same as perror does, perror is just more convenient to use
        fprintf(stderr, "Allocation failed: %s\n", strerror(errno));
        // Exit the program and return 1
        exit(EXIT_FAILURE);
    }
    printf("Allocated some pointer at location: %p\n", (void *)p);
    // Dereference p and assing 20
    *p = 20;
    // Use fprintf with stdout as an alternative to printf direcly
    fprintf(stdout, "The value p is pointing to is: %d\n", *p);
    // Deallocate memory
    free(p);
    // Set pointer explictly to NULL
    p = NULL;
    return 0;
}
