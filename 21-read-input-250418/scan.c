#include <stdio.h>

// The scanf() funcion returns the number of valid input items
// It can also have more than one input

void getAgeFeedback(void);
void getLetterFeedback(void);
void getAgeAndLetterFeedback(void);

int main(void) {
    //getAgeFeedback();
    //getLetterFeedback();

    getAgeAndLetterFeedback();

    return 0;
}

void getAgeFeedback(void) {
    int age;
    int items_read;

    printf("What is your age? ");
    items_read = scanf("%d", &age);
    printf("scanf returned: %d\n", items_read);

    if (items_read == 1) {
        printf("Success. You entered the age: %d\n", age);
    } else {
        printf("Error. Input was not a valid integer.\n");
    }
}

void getLetterFeedback(void) {
    char letter;
    int items_read;

    printf("What is your favorite letter? ");
    items_read = scanf(" %c", &letter);
    printf("scanf returned: %d\n", items_read);

    if (items_read == 1) {
        printf("Success. You entered the letter: %c\n", letter);
    } else {
        printf("Error. Input was not a valid character.\n");
    }
}

void getAgeAndLetterFeedback(void) {
    int age;
    char letter;
    int items_read;

    printf("What is your age and letter? ");
    items_read = scanf("%d %c", &age, &letter);
    printf("scanf returned: %d\n", items_read);

    if (items_read == 2) {
        printf("Success. You entered two things: %d and %c\n", age, letter);
    } else {
        printf("Error. Input was not a valid.\n");
    }
}
