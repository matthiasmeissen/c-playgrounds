#include <stdio.h>

int main(void) {
    int count = 0;
    char input;

    while (1) {
        count++;

        printf("Your count is %d, enter a number: ", count);
        scanf(" %c", input);
        
        if (input == 'q') {
            printf("You have managed to escape.\n");
            break;
        }
    }

    return 0;
}
