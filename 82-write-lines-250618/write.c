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

    // Declare character array holding the string (including line break) for the first line
    // Use fputs() inside if statement to check if return is negative (to check for errros)
    char firstLine[] = "Hello Humans. \n";
    if (fputs(firstLine, filePtr) < 0) {
        perror("Error writing to file.");
        return EXIT_FAILURE;
    }

    // Writing a second line using the same approach
    char secondLine[] = "This is some message from a galaxy. \n";
    if (fputs(secondLine, filePtr) < 0) {
        perror("Error writing to file.");
        return EXIT_FAILURE;
    }

    // Writing the third line without declaring the array in seperate variable, but inside the function
    if (fputs("This is the third line. \n", filePtr) < 0) {
        perror("Error writing to file.");
        return EXIT_FAILURE;
    }

    // Declare an array of character pointers
    const char * sentences[] = {
        "Test \n", 
        "More test"
    }; 

    // To calculate the number of elements
    // You get the size of the complete array in bytes
    // And divide it by the size of the first element (or any element) in the array
    // This works, since it is an array of pointers, so one element is not the string, but the pointer to the first character in it
    const int sentencesElements = sizeof(sentences) / sizeof(sentences[0]);

    // Loop through the array and write each line to the file
    for (int i = 0; i < sentencesElements; i++) {
        if (fputs(sentences[i], filePtr) < 0) {
            perror("Error writing to file.");
            return EXIT_FAILURE;
        }
    }

    // Close filestream inside if statement, returns 0 on success
    if (fclose(filePtr) != 0) {
        perror("Error closing the file.");
        return EXIT_FAILURE;
    } else {
        printf("Successfully closed the file.\n");
    }

    return 0;
}
