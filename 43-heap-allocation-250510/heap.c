#include <stdio.h>
#include <stdlib.h>

// Creating memory on the heap with malloc() is called dynamic memory allocation
// The malloc() function expects a size in bytes of memory to allocate
// It returns the address when successfull, otherwise NULL

// The heap memory needs to be explicitly claimed and persists as long as you give the instruction to free it again
// In contrast stack memory persists only for local variables (like in a function) and is automatically available after use

int main(void) {

    // Declare a int pointer variable called ptr 
    // and initialize it with memory alloaction on the heap with the size in bytes of an int
    int * ptr = malloc(sizeof(int));

    // Check if ptr is NULL
    if (ptr == NULL) {
        printf("Heap allocation failed.\n");
    } else {
        printf("Heap allocation successfull. Memory available at: %p\n", (void *)ptr);
    }

    // Alternative approach that tries to allocate memory and get the address stored in a pointer
    // It tries 10 times and the exits the program

    int * ptr1 = NULL;
    int counter = 0;

    do {
        ptr1 = malloc(sizeof(int));
        if (counter > 10) {
            break;
        }
        if (ptr1 != NULL) {
            printf("Heap allocation successfull. Memory available at: %p\n", (void *)ptr1);
        }
        counter ++;
    } while (ptr1 == NULL);

    return 0;
}
