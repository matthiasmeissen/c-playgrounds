#include <stdio.h>

// When you print %f it defaults to show 6 digits
// You can adjust that with %.2f to show only two for example
// You can declare a variable without initializing it
// This may lead to having some unexpected values in it so it is better to declare them first

int age;
float height = 4.28;

int main(void) {
    printf("My age is %d\n", age);
    age = 34;
    printf("My age is %d\n", age);

    printf("And my height is %f meters.\n", height);
    printf("And my height with less precision is %.2f meters.\n", height);
}
