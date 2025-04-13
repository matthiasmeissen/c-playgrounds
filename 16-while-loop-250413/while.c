#include <stdio.h>
#include <stdbool.h>

bool getInput();

int main(void) {
    int num = 10;

    while (num > 0) {
        printf("%d\n", num);
        num--;
    }

    bool input = getInput();

    return 0;
}

bool getInput() {
    bool correctInput = false;
    char input;

    while (!correctInput) {
        printf("Do you want to continue? (y/n) ");
        scanf(" %c", &input);
        if (input == 'y' || input == 'n') {
            correctInput = true;
        }
    }

    if (input == 'y') {
        printf("You are allowed. \n");
        return true;
    } else {
        printf("You are not allowed. \n");
        return false;
    }
}
