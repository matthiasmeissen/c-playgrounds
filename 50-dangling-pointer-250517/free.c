#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // Declare pointer, initialize with NULL
    // Allocate heap memory in size of element ptr is pointing to
    // Check if allocation was successfull, when not exit program
    int * p = NULL;
    p = malloc(sizeof(*p));
    if (p == NULL) { 
        perror("Memory Allocation Failed");
        exit(EXIT_FAILURE); 
    }

    // Set some integer value at location p is pointing to
    *p = 4;

    printf("Before free:        Address p is pointing to:                   %p\n", (void *)p);
    printf("Before free:        Value stored at address p is pointing to:   %d\n", *p);

    // Deallocate memory from the heap
    // It tells the system that this block of memory is allowed to be used for something else
    // We now have something called a dangling pointer
    free(p);

    // Address still exists 
    // When we try to read the value from the memory at that address we get undefined behavior
    // Since we can not know what the system does with that block of memeory (in this case we get 0 value)
    printf("After free:         Address p is pointing to:                   %p\n", (void *)p);
    printf("After free:         Value stored at address p is pointing to:   %d\n", *p);

    // Setting a pointer to NULL after freeing it is the only way to get predictable beavior when using it again
    p = NULL;

    // Address is set to NULL, trying to access a value trough NULL pointer crashes program with segmentation fault message
    printf("After NULL:         Address p is pointing to:                   %p\n", (void *)p);
    printf("After NULL:         Value stored at address p is pointing to:   %d\n", *p);

    return 0;
}
