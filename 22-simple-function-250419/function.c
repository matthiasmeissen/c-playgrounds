#include <stdio.h>

void makeBanner(void);
void makePattern(int num, char c);
void makePatternFromInput(void);

int main(void) {
    makeBanner();

    makePattern(20, '#');

    makePatternFromInput();

    return 0;
}

void makeBanner(void) {
    printf("********\n");
}

/**
 * @brief Creates a pattern from an input character
 * @param num The number of characters in the pattern
 * @param c The character used in the pattern
 */
void makePattern(int num, char c) {
    for (int i = 0; i < num; i++) {
        printf("%c", c);
    }
    printf("\n");
}

/**
 * @brief Asks the user to input a number and a character to create a pattern
 */
void makePatternFromInput(void) {
    int num;
    printf("How long should the pattern be? ");
    scanf("%d", &num);

    char c;
    printf("What character do you want? ");
    scanf(" %c", &c);

    makePattern(num, c);
}
