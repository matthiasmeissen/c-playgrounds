#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// When you want to use a function you have to also decalare it on to of your program
// This tells the compiler that this functions exists somewhere and can be used

void checkNumber(int num);

int main(void) {
    int num = 24;
    checkNumber(num);

    // Extension 1
    srand(time(NULL));
    int randomNumber = rand() - 200000;
    checkNumber(randomNumber);

    // Extension 2

    int userNumber;
    printf("Enter a number: ");
    scanf("%d", &userNumber);
    checkNumber(userNumber);

    return 0;
}

void checkNumber(int num) {
    if (num > 0) {
        printf("The number %d is greater than zero.\n", num);
    } else if (num < 0) {
        printf("The number %d is less than zero.\n", num);
    } else {
        printf("The number %d is zero.\n", num);
    }
}
