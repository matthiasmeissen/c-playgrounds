#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // Declare pointer variable of type FILE
    FILE * filePtr;
    // Declare variable of type character array and initialize with file name
    const char fileName[] = "text.md";
    // Use fopen to open filestream in read mode, store pointer (access key) in filePtr
    filePtr = fopen(fileName, "r");
    // Check if opening was successfull (fopen returns not NULL)
    if (filePtr == NULL) {
        perror("Error opening the file.");
        return EXIT_FAILURE;
    }
    printf("File opened successfull.\n");

    // Use fclose to close the file, check return value, when not null it failed
    if (fclose(filePtr) != 0) {
        perror("Error closing the file.");
        return EXIT_FAILURE;
    } else {
        printf("File closed successfull.\n");
    }
    
    return 0;
}
