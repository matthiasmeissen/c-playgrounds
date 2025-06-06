#include <stdio.h>
#include <string.h>

// Define a new type called Point with two int variables
struct Point {int x; int y;};

// Define new type called Book with two character arrays and one integer variable
struct Book {
    char title[100]; 
    char author[50]; 
    int year;
};

// Use typedef to create an alias for the struct type (Can be declared without writing struct)
typedef struct {
    int x;
    int y;
    int z;
} Points;

int main(void) {
    // Declare a new variable of type Point
    struct Point p1;

    // Set values for p1.x and p1.y
    p1.x = 20;
    p1.y = 40;

    // Print values for p1.x and p1.y
    printf("p1.x: %d\np1.y: %d\n", p1.x, p1.y);

    // Declare new Book variable
    struct Book book1;

    // Use strcpy to set Title and Auther
    strcpy(book1.title, "Title");
    strcpy(book1.author, "Author");
    book1.year = 2025;

    // Print the content of book1
    printf("Book1 has a title of %s and is written by %s in %d\n", book1.title, book1.author, book1.year);

    // Use initializer list to declare variable and intitalize in the same step
    struct Book book2 = {"Title 2", "Author 2", 2025};

    // Print the content of book2
    printf("Book2 has a title of %s and is written by %s in %d\n", book2.title, book2.author, book2.year);

    // Declare Points variable without struct keyword, since alias was created
    Points p2;
    p2.x = 10;
    p2.y = 20;
    p2.z = 40;

    // Print the content of p2
    printf("The points in p2 are: %d, %d, %d\n", p2.x, p2.y, p2.z);

    // Declare Points variable and initialize directly with designated initializers (allow any order)
    Points p3 = {
        .x = 100,
        .y = 200,
        .z = 400
    };

    // Print the content of p3
    printf("The points in p3 are: %d, %d, %d\n", p3.x, p3.y, p3.z);

    return 0;
}
