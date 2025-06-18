#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // Declare pointer variable of type FILE
    FILE * filePtr;
    // Declare character array constant for file name
    const char filename[] = "text.md";
    // OPen filestream in write mode, store pointer (access key) in FILE pointer
    filePtr = fopen(filename, "w");
    // Check for success, fopen() returns NULL, when fail
    if (filePtr == NULL) {
        perror("Error opening the file.");
        return EXIT_FAILURE;
    }
    printf("Successfully opened the file.\n");

    // Close filestream inside if statement, returns 0 on success
    if (fclose(filePtr) != 0) {
        perror("Error closing the file.");
        return EXIT_FAILURE;
    } else {
        printf("Successfully closed the file.\n");
    }

    return 0;
}
