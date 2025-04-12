#include <stdio.h>
#include <stdbool.h>

// When using scanf("%c", &var) it will read the first character in the line
// This also can be a whitespace which somtimes can lead to confusion
// To avoid this you can use scanf(" %c", &var) which ignores all whitespaces for the input

void printLoginCheck(bool login);

int main(void) {
    char userInput;
    
    printf("Are you logged in? (y/n) ");
    scanf(" %c", &userInput);

    if (userInput == 'y' || userInput == 'Y') {
        printLoginCheck(true);
    } else if (userInput == 'n' || userInput == 'N') {
        printLoginCheck(false);
    } else {
        printf("This is not valid.\n");
    }

    return 0;
}

void printLoginCheck(bool login) {
    !login ? printf("Access Denied.\n") : printf("Access Granted.\n");
}
