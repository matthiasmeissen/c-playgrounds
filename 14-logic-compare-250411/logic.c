#include <stdio.h>
#include <stdbool.h>

// In classic C there is no bool data type 
// You would use and int with 0 for false and 1 for true
// To add the bool data type you can include the stdbool.h library
// While the classic way works fine 
// with a bool data type you make the intent clear on what you want to do

// An expression like (var > 4) or (var >= 10 && var <=80) 
// always evaluates to either true or false
// This means when you have a function that just checks one thing
// you can put the expression directly after the return statement

bool checkAge(int age);

int main(void) {
    int age;

    printf("Please enter your age: ");
    scanf("%d", &age);

    bool isAllowed = checkAge(age);

    if (isAllowed) {
        printf("You are allowed to enter.\n");
    } else {
        printf("You are not allowed to enter. \n");
    }

    return 0;
}

bool checkAge(int age) {
    return (age >= 18 && age <= 65);
}
