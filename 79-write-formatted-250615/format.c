#include <stdio.h>
#include <stdlib.h>

// Use typedef to create alias for Book type (allows creation without struct keyword)
typedef struct {
    char title[100];
    char author[50];
    int year;
} Book;

int main(void) {
    // Create new variable of type book and use designation initializers for member values
    // Safe way for potential newly added members of struct
    Book myBook = {
        .title = "Title 1",
        .author = "Author 1",
        .year = 2025,
    };

    // Create pointer variable of File type
    FILE * filePtr;

    // Create character array variable to hold filename
    const char fileName = "text.md";

    // Create filestream (or open file) to filename in write mode
    // Store key in filePtr
    filePtr = fopen(fileName, "w");

    // Check for success
    if (filePtr == NULL) {
        perror("Error while opnening the file.");
        return EXIT_FAILURE;
    }

    fprintf(stdout, "Successfully opened %s\n", fileName);

    // Close the filestream and check for success
    if (fclose(filePtr) != 0) {
        perror("Error while closing the file.");
        return EXIT_FAILURE;
    } else {
        printf("Successfully closed %s\n", fileName);
    }

    return 0;
}
