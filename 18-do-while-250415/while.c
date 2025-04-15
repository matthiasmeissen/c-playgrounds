#include <stdio.h>
#include <ctype.h>

// The do while loop runs at least once
// Then it checks if the condition is true
// When it is, it stops, otherwise it runs again

// In the ctype.h library there is the tolower() function
// It transforms a character to lowercase, which is usefull for checking input

int checkLetter(char letter);

int main(void) {
    char letter;

    do {
        printf("Enter a command (q to close): ");
        scanf(" %c", &letter);
    } while (tolower(letter) != 'q');


    do {
        printf("Do you want to proceed? (y/n): ");
        scanf(" %c", &letter);
    } while (tolower(letter) != 'y' && tolower(letter) != 'n');


    do {
        printf("Do you really want to proceed? (y/n): ");
        scanf(" %c", &letter);
    } while (checkLetter(letter));

    return 0;
}

int checkLetter(char input) {
    char letter = tolower(input);
    if (letter == 'y') {
        return 0;
    } else if (letter == 'n') {
        return 0;
    } else {
        return 1;
    }
}
