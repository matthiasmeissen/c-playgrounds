#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // Declare pointer variable of type FILE
    FILE * filePtr;
    // Declare character array for filename
    const char fileName[] = "text.md";
    // OPen filestream in read mode, store return value (access key) in FILE pointer
    filePtr = fopen(fileName, "r");
    // Check if file opened successfully, returns NULL on failure
    if (filePtr == NULL) {
        perror("Error opening the file.");
        return EXIT_FAILURE;
    }
    printf("Successfully opened the file.\n");

    char lineBuffer[100] = {0};
    char * c = NULL;
    c = fgets(lineBuffer, sizeof(lineBuffer), filePtr);
    printf("%s\n", lineBuffer);

    // Close filestream in if statement, check if not 0 for failure
    if (fclose(filePtr) != 0) {
        perror("Error closing the file.");
        return EXIT_FAILURE;
    } else {
        printf("File closed successfully.\n");
    }

    return 0;
}
