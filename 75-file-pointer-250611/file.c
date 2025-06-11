#include <stdio.h>

// The FILE type is a struct holding file stream infos
// We can use the struct, but we can not see what is inside (this is called opaque) 
// This is, because each system handles the FILE struct differently

int main(void) {
    // This is an empty (NULL) pointer that is intended to hold the memory address of a FILE struct
    // It will store the library card that the fopen() function will give to us
    // A library card is a tool that manages as Stream, which enables us to interact with files in a system
    FILE * output_file = NULL;

    printf("A pointer to file: %p\n", (void*)output_file);
    printf("The size of a file data type is: %zu\n", sizeof(FILE));

    return 0;
}
