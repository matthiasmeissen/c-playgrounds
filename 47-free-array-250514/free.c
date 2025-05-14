#include <stdio.h>
#include <stdlib.h>

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

    printf("Location of arr is %p\n", arr);

    // When arr is not used anymore deallocate memory it is pointing to
    free(arr);

    // Set arr to NULL to avoid dangling pointers (Pointing to nowhere) to avoid undefined bahvior
    arr = NULL;

    return 0;
}

