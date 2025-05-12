#include <stdio.h>
#include <stdlib.h>

void allocate_and_free(void);
void allocate_only(void);

int main(void) {
    allocate_and_free();

    // The following is only for demonstration and will create memory leaks which should be avoided
    // A leak occurs, when a pointer to some memory on the heap is created
    // But its address is lost (ptr only exists in the local scope of the allocate_only function) and the memory no longer reachable

    int nums = 100;
    for (int i = 0; i < nums; i ++) {
        allocate_only();
        printf("Allocated new memory number %d\n", i);
    }

    return 0;
}

void allocate_and_free(void) {
    int * ptr = NULL;               // Declare ptr and initialize with NULL
    ptr = malloc(sizeof(int));      // Allocate heap memory of size int in bytes and store address in ptr

    if (ptr == NULL) {
        exit(EXIT_FAILURE);         // When malloc fails and returns NULL exit the program
    }
    * ptr = 20;                     // Store integer value at address ptr is pointing to
    printf("The value stored in heap is: %d\n", * ptr);

    free(ptr);                      // Free memory allocated on the heap
    ptr = NULL;                     // Set ptr to null again to avoid dangling pointer or undefined bahvior
}

/**
 * @brief This is just for testing. Do not use.
 */
void allocate_only(void) {
    int * ptr = NULL;
    ptr = malloc(sizeof(int)); 

    if (ptr == NULL) {
        exit(EXIT_FAILURE);         // When malloc fails and returns NULL exit the program
    }
}
