#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // Create pointer variable for FILE data type
    FILE * filePtr;
    // Define filename string
    const char filename[] = "text.md";
    // Open stream to filename in read mode
    filePtr = fopen(filename, "r");
    // Check if stream was opened successfully
    if (filePtr == NULL) {
        perror("Error reading the file.\n");
        return EXIT_FAILURE;
    }

    // Print success
    printf("File successfully closed.\n");

    // Close file inside if statement, exit on error
    if (fclose(filePtr) != 0) {
        perror("Error closing the file.\n");
        return EXIT_FAILURE;
    } else {
        printf("File successfully closed.\n");
    }

    return 0;
}
