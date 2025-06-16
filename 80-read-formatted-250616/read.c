#include <stdio.h>
#include <stdlib.h>

// fscanf() expects pointers to elements in memory
// For basic variables you can use
// &var gives the pointer to the element

// For arrays it is different 
// myBook.title gives the pointer to the first element of the array (beeing the pointer to the array)
// myBook.title[0] gives the character of the first item in the array
// &myBook.title[0] again gives the pointer to the first item in the array

// The add safety in reading arrays you can write %49s in the format specifier
// This ensures it will read no more than 49 items
// Note that you use one less that the actual length for the null terminator to be included

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

    int expectedItems = 3;
    int actualItems = 0;

    actualItems = fscanf(filePtr, "Title: %99s Author: %49s Year: %d\n", 
        myBook.title,
        &myBook.author[0], 
        &myBook.year);

    if (actualItems == 3) {
        printf("Successfully read and assigned the items.\n");
        printf("My Book is now: %s, %s, %d\n", myBook.title, myBook.author, myBook.year);
    } else {
        perror("Something went wrong reading the items.");
        return EXIT_FAILURE;
    }


    // Close the stream, check for success in if statement and handle result
    if (fclose(filePtr) != 0) {
        perror("Error closing the file.");
        return EXIT_FAILURE;
    } else {
        printf("Successfully closed the file.\n");
    }

    return 0;
}
