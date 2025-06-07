#include <stdio.h>
#include <string.h>

// Use typedef to create an alias for the struct Book datatype
// This allows declaration without struct keyword (struct Book myBook -> Book myBook)
// This makes it similar to use like built in datatypes (int myNumber)
// Define it in global scope to be used inside fucntsions as well

/**
 * @brief Details about a book
 */
typedef struct {
    char title[100];
    char author[50];
    int year;
} Book;

int main(void) {
    // Declare new variable of type Book, but do not initialize members
    Book myBook;
    // Use dot notation to access members
    // myBook.title = "Title 1" 
    // This wont work since .title is a pointer to a character array
    // You need to use strcpy() to copy one string to a pointer
    char title1[] = "Title 1";
    strcpy(myBook.title, title1);
    // You can write the character array directly in the strcpy function
    strcpy(myBook.author, "Author 1");
    myBook.year = 2025;

    printf("Book 1:     %s      %s      %d\n", myBook.title, myBook.author, myBook.year);

    // A faster approach is to declare and initialize direcly
    Book myBook2 = {"Title 2", "Author 2", 2025};

    // Alternatively you can write dot notation inside
    // This allows you to assing the members in any order
    Book myBook3 = {
        .author = "Author 3",
        .title = "Title 3",
        .year = 2025,
    };
    return 0;
}
