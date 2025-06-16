#include <stdio.h>
#include <stdlib.h>

// Use typedef to create alias for Book type (allows usage without struct keyword)
typedef struct {
    char title[100];
    char author[50];
    int year;
} Book;

int main(void) {
    // Create new, unititialized variable of type Book
    Book myBook;
    // Create pointer variable of type FILE
    FILE * filePtr;
    // Create string variable for file name
    const char fileName[] = "text.md";

    // Open file stream to file in read mode, store retunr value in pointer
    filePtr = fopen(fileName, "r");
    // Check oif stream was successfully opened
    if (filePtr == NULL) {
        perror("Error opening the file.");
        return EXIT_FAILURE;
    }
    printf("Successfully opened the file.\n");

    // Close the stream, check for success in if statement and handle result
    if (fclose(filePtr) != 0) {
        perror("Error closing the file.");
        return EXIT_FAILURE;
    } else {
        printf("Successfully closed the file.\n");
    }

    return 0;
}
