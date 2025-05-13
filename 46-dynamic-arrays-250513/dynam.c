#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // Set variable count for size of array
    int count = 5;

    // Declare pointer and initialize with NULL
    double * arr = NULL;

    // Allocate count times size of data type in bytes of memory on the heap
    arr = malloc(count * sizeof(double));

    // Check if allocation successfull, when not exit the program
    if (arr == NULL) {
        exit(EXIT_FAILURE);
    }

    // Print the number of doubles stored and the address of teh first element
    printf("The memory for %d continuous elements is at address %p\n", count, arr);
    
    // ENTER EXPLORATION

    // arr          pointer     Address of first item in array
    // *arr         value       Value of the first stored at address by dereferencing
    // &arr         pointer     Address of pointer itself

    *arr = 10;
    printf("Address of first item is:   %p\n", arr);
    printf("First item in array is:     %f\n", *arr);
    printf("Address of pointer itself:  %p\n", &arr);

    // arr[i]       value       Value of i element in array

    arr[1] = 20;
    printf("Second item in array is:     %f\n", arr[1]);

    // *(arr + i)   value       Value of i element in array, where i is adding sizeof(type) to get location in memory
    
    *(arr + 2) = 30;
    printf("Third item in array is:     %f\n", *(arr + 2));

    // EXIT EXPLORATION

    // Important: Deallocate space in memory after use
    free(arr);

    // Important: Set pointer to NULL to aoid dangling pointers and undefined behavior
    arr = NULL;

    return 0;
}
