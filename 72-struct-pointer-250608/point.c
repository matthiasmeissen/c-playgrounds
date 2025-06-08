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

    return 0;
}
