#include <stdio.h>
#include <stdlib.h>

// fopen("filename", "mode")
// Opens a file stream in a specific mode (r: read, w: write/truncate, a: write/append)
// Returns pointer of type FILE on success, NULL on error
// Always use if (pointer == NULL) after that to exit on error

// The FILE is the librarian key, it serves as a gate to the file
// With that key you are allowd to do manipulations on a file

// fclose(FILE *)
// Closes the file stream
// Returns 0 on success and EOF on error

int main(void) {
    // Create new pointer variable of datatype FILE and initilialize to NULL
    FILE * filePtr = NULL;

    const char filename[] = "text.md";

    // Use fopen("filename", "mode") to open a file in read mode, store return value in pointer
    filePtr = fopen(filename, "r");

    // Check if opening was succssfull
    if (filePtr == NULL) {
        perror("Failed to open the file.");
        return EXIT_FAILURE;
    }

    printf("File opened successfully.\n");

    // Call close function inside if statement with safety check
    if (fclose(filePtr) == 0) {
        printf("File closed successfully.\n");
    } else {
        perror("Failed to close the file.");
        return EXIT_FAILURE;
    }

    // Set pointer to NULL for safety again
    filePtr = NULL;

    return 0;
}
