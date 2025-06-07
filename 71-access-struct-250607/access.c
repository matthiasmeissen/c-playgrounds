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
    // This wont work since .title is a character array
    // You need to use strcpy() or strncpy() which is safer, to copy one string to a pointer
    char title1[] = "Title 1";
    strncpy(myBook.title, title1, sizeof(myBook.title) - 1);
    // For absolute saftey manually add a null terminator to the las element in the array
    // It might not be there when dest and src are of the same length
    myBook.title[sizeof(myBook.title) - 1] = '\0';
    // You can write the character array directly in the strcpy function
    // Note that this uses strcpy() which might work, but is unsafe
    // Since it will not check if there is enough space in dest to hold src 
    // Leading to potential buffer overflows, which might crash the program
    strcpy(myBook.author, "Author 1");
    myBook.year = 2025;

    // Print Details for Book 1
    printf("Book 1:     %s      %s      %d\n", myBook.title, myBook.author, myBook.year);

    // A faster approach is to declare and initialize direcly (Aggregate Initialization)
    Book myBook2 = {"Title 2", "Author 2", 2025};

    // Print Details for Book 2
    printf("Book 2:     %s      %s      %d\n", myBook2.title, myBook2.author, myBook2.year);

    // Alternatively you can write dot notation inside (Designation Initializers)
    // This allows you to assing the members in any order
    Book myBook3 = {
        .author = "Author 3",
        .title = "Title 3",
        .year = 2025,
    };

    // Print Details for Book 3
    printf("Book 3:     %s      %s      %d\n", myBook3.title, myBook3.author, myBook3.year);

    return 0;
}
