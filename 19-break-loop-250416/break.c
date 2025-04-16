#include <stdio.h>
#include <stdbool.h>

void guessLetter(void);
bool getUserConfirmation(void);

int main(void) {
    bool wantsToPlay = true;
    
    while (wantsToPlay) {
        guessLetter();
        wantsToPlay = getUserConfirmation();
    }

    printf("See you next time. \n");

    return 0;
}

void guessLetter(void) {
    int tries = 0;
    char letterGuess;

    while (1) {
        tries++;

        printf("Your count is %d, guess the correct letter: ", tries);
        scanf(" %c", &letterGuess);
        
        if (letterGuess == 'q') {
            printf("You have managed to escape with %d tries.\n", tries);
            break;
        }
    }
}

bool getUserConfirmation(void) {
    char input;
    bool confirm;
    int validInput = 0;

    do {
        printf("Do you want to play again? (y/n) ");
        scanf(" %c", &input);

        switch (input) {
            case 'y':
                confirm = true;
                validInput = 1;
                break;
            case 'n':
                confirm = false;
                validInput = 1;
                break;
            default:
                validInput = 0;
                break;
        }
    } while (!validInput);

    return confirm;
}
