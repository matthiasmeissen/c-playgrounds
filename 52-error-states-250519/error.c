#include <stdio.h>
#include <stdlib.h>

// Streams
// A c program uses streams to interact with different parts of a system
// Usually there are three standard streams
// stdin:   Captures input from outside (like keyboard)
// stdout:  Main output of the program to the outside (like terminal)
// stderr:  Special output for errros to the outside (like terminal)

// Communiate to the outside
// When you want to write something to the outside you use fprintf(type, message)
// The type specifies if you want a stdout, stderr or something like write to a file
// printf(message) is just a shorthand for writing to the standart output

// Status Codes
// When a program is successfull it returns 0
// For errors it uses a value of 1, or other numbers to be specific about an error
// There are macros that resolve to values like EXIT_FAILURE is resolving to 1

// You can access an error code by writing echo $? when a program is done
// This will return the status code in the terminal of that

int main(void) {
    // Declare pointer and initialize to NULL
    double * arr = NULL;

    // Allocate 5 times size of data type arr is pointing to at index 0 and store address in pointer
    const int ARR_SIZE = 5;
    arr = malloc(ARR_SIZE * sizeof(*arr));

    // Check if arr is NULL
    if (arr == NULL) {
        // Print message to standard error stream
        fprintf(stderr, "Pointer is NULL.\n");
        // Exit the program with 1
        exit(EXIT_FAILURE);
    }

    // Populate each item in the array
    for (int i = 0; i < ARR_SIZE; i ++) {
        // Using to ways to access item at index
        // arr[i] is equivalent to *(arr + i)
        arr[i] = (double)i;
        printf("The value of array at location %d is: %.2f\n", i, *(arr + i));
    }

    // Deallocate Memeory and set pointer to NULL
    free(arr);
    arr = NULL;

    return 0;
}
