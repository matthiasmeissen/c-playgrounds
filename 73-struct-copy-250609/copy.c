#include <stdio.h>
#include <string.h>

// Use typedef to create alias for struct Book type
typedef struct {
    char title[100];
    char author[50];
    int year;
} Book;

void printBookDetails(const Book book);

int main(void) {
    // Create new variable of type Book and use designation initializers 
    // This makes it robust to handle potentiall additions to the struct
    Book myBook = {
        .title = "Title 1",
        .author = "Author 1",
        .year = 2025
    };

    // Use a function to pass the struct by value and print its members
    // This creates a safe copy of the variable
    // But it also copys the whole struct, which can lead to performance issues
    printBookDetails(myBook);

    return 0;
}

/**
 * @brief Print the content of a Book variable
 * @param book The book variable to be copied into the function
 */
void printBookDetails(const Book book) {
    printf("Title:      %s\n", book.title);
    printf("Author:     %s\n", book.author);
    printf("Year:       %d\n", book.year);
}
