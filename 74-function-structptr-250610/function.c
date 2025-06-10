#include <stdio.h>
#include <string.h>

// Use typedef to create alias for Book type (allows usage without struct keyword)
typedef struct {
    char title[100];
    char author[50];
    int year;
} Book;

/**
 * @brief Print members of Book type with pass by reference (Copies only the pointer)
 * @param *bookPtr The pointer to the variable of type Book
 */
void printBookDetails(const Book * bookPtr);

void updateYear(Book * bookPtr, const int newYear);

int main(void) {
    // Create variable of type book and use designation initializers
    Book myBook = {
        .title = "Title 1",
        .author = "Author 1",
        .year = 2025
    };

    // myBook  -> The variable of type Book, holding all the data
    // &myBook -> Address of myBook Variable

    // &myBook gives the address of the myBook variable in memory
    // This will be used by the pointer variable in the function
    printBookDetails(&myBook);
    updateYear(&myBook, 2024);
    printBookDetails(&myBook);

    // Creates Pointer to an int and initializes it to NULL
    int * ptr = NULL;
    // Creates integer variable and initializes it
    int num = 20;
    printf("Address ptr:    %p\n", ptr);
    // &variable gives the address of it in memory
    printf("Address num:    %p\n", &num);
    ptr = &num;
    printf("Value ptr:      %d\n", *ptr);

    return 0;
}

void updateYear(Book * bookPtr, const int newYear) {
    bookPtr->year = newYear;
}

void printBookDetails(const Book * bookPtr) {
    // Pointer to the variable of type book is passed to function
    // using struct->member to access member values 
    // Is a faster and less risky way than writing (*ptr).member 
    // Which can be confused with *ptr.member, which wont work since . has higher precedene 
    // And will ask to print member of pointer, which is not possible
    printf("Title: %s,      Author: %s,         Year: %d\n", bookPtr->title, bookPtr->author, bookPtr->year);
}
