#include <stdio.h>
#include <string.h>

void printBookDetails(const Book book);

// Use typedef to create alias for struct Book type
typedef struct {
    char title[100];
    char author[50];
    int year;
} Book;

int main(void) {
    // Create new variable of type Book and use designation initializers
    Book myBook = {
        .title = "Title 1",
        .author = "Author 1",
        .year = 2025
    };

    printBookDetails(myBook);

    return 0;
}

/**
 * @brief Print the content of a Book variable
 * @param book The book variable to be copied into the function
 */
void printBookDetails(const Book book) {
    printf("Title: %s      Author: %s       Year: %d\n", book.title, book.author, book.year);
};
