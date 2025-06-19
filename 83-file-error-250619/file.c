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

    // Declare character array of fixed size to create a buffer for incoming characters in on line
    char lineBuffer[100] = {0};

    // One way to read a single line from a file
    char * c = NULL;
    // Store return value of fgets in pointer 
    // This is a pointer to lineBuffer when successfull, and NULL when failed
    // c = fgets(lineBuffer, sizeof(lineBuffer), filePtr);
    // printf("%s", lineBuffer);

    // The ideomatic way to read a file line by line
    while (fgets(lineBuffer, sizeof(lineBuffer), filePtr) != NULL) {
        printf("%s", lineBuffer);
    }

    printf("\n --- Check file --- \n");

    printf("feof() returns non-zero when FILE was correctly ended with EOF:     %d\n", feof(filePtr));
    printf("ferror() returns 0, when there was no error:                        %d\n", ferror(filePtr));

    // ferror() returns non-zero when true 
    // feof() returns non-zero when true (Reached EOF)
    if (ferror(filePtr)) {
        fprintf(stderr, "Something went wrong while reading the file.\n");
    } else if (feof(filePtr)) {
        printf("Correctly reached the file with EOF.\n");
    } else {
        printf("Something else was with the file.\n");
    }

    // Close filestream in if statement, check if not 0 for failure
    if (fclose(filePtr) != 0) {
        perror("Error closing the file.");
        return EXIT_FAILURE;
    } else {
        printf("File closed successfully.\n");
    }

    return 0;
}
