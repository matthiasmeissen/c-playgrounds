#include <stdio.h>
#include <string.h>

// Create new struct Book type with three members
// Use typedef to create alias, allos declaration without struct (struct Book myBook -> Book mybook)
typedef struct {
    char title[100];
    char author[50];
    int year;
} Book;

int main(void) {
    // Declare new Book variable and use designation initializers to specify members
    Book myBook = {
        .title = "Title 1",
        .author = "Author 1",
        .year = 2025,
    };

    // Print members of myBook variable
    fprintf(stdout, "myBook:    %s      %s      %d\n", myBook.title, myBook.author, myBook.year);

    // Recall how to create pointers to built in data types
    printf("\n--- Int Pointer ---\n");
    // Create integer variable
    int myInt = 20;
    // Print the address in memory of myInt
    printf("Address of myInt is:    %p\n", &myInt);
    // Create integer pointer and assign address of myInt
    int * intPtr = &myInt;
    // Print the memory address stored in intPtr (explicitly cast intPtr to void * for %p format specifier)
    printf("Address stored in intPtr is:   %p\n", (void *)intPtr);
    // Print value stored at pointer
    printf("Value stored at intPtr is: %d\n", *intPtr);


    // Apply same approach to custom type struct Book
    printf("\n--- Struct Book Pointer ---\n");
    // Print the address of myBook variable
    printf("Address of myBook is:   %p\n", &myBook);
    // Create Book pointer and assign address of myBook
    Book * bookPtr = &myBook;
    // Print the address stored in bookPtr pointer
    printf("Address stored in bookPtr is:  %p\n", (void *)bookPtr);

    // Accessing values of member stored at pointer by (*ptr).member
    printf("The title of myBook from bookPtr is %s\n", (*bookPtr).title);

    // This can create confusion in the dereferencing process when written wrong
    // Since .member has a higher precedence as *ptr writing it without (*ptr)
    // It will try to dereference a member of a pointer (which is not possible)
    // So the correct way (*ptr).member tells the compiler to first (because () is used)
    // Derefernce the value stored at pointer and the .member access the member of that value

    // To make this safer it can also be done by using ptr->member
    printf("The author of myBook from bookPtr is %s\n", bookPtr->author);

    // Investigate memory addresses
    printf("\n--- Address of myBook ---\n");
    // The address of the struct and its first item are the same
    // This is similar to how character arrays are stored
    printf("The address of myBook variable is:      %p\n", &myBook);
    printf("Address of first member of myBook is:   %p\n", &myBook.title);

    return 0;
}
