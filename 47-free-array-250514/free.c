#include <stdio.h>
#include <stdlib.h>

// Question: 
// Is it possible to get the array size from the pointer to not enter array_size variable in it

// Answer: 
// It is not possible to get the length of the array. You can only get the address and the size of the data type stored in it.
// While character arrays (strings) have a special null character (\0) to mark the end of it, this does not work for array of numbers or other.
// This means that it is very important to not only store the pointer address, but also the size of the array used there.

int main(void) {
    // Declare pointer called arr and initialize to NULL, will be used later to remeber array location
    double * arr = NULL;

    // Declare variable to store array size and initialize with value
    int array_size = 5;

    // Allocate memory on heap with size of double (in bytes) times the desired array length
    // Then assing the location redturen by malloc to the pointer arr
    arr = malloc(array_size * sizeof(double));

    // Check if allocation failed (arr is still NULL) and exit the program when so
    if (arr == NULL) {
        exit(EXIT_FAILURE);
    }

    // Loop through array_length to populate array slots with values
    for (int i = 0; i < array_size; i++) {
        double num = 1.1;
        arr[i] = num * i;
    }

    // Loop through array and print values at index
    for (int i = 0; i < array_size; i++) {
        printf("Number at location %i is: %.1f\n", i, *(arr + i));
    }

    // When arr is not used anymore deallocate memory it is pointing to
    free(arr);

    // Set arr to NULL to avoid dangling pointers (Pointing to nowhere) to avoid undefined bahvior
    arr = NULL;

    return 0;
}

