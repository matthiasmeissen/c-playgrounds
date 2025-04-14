#include <stdio.h>

// A for loop has three steps
// Initilization: int i = 0;
// Condition: i <= 20;
// Post Iteration: i++;
// All these steps usually happen inside the loop head for()
// Note that they can also be placed elsewhere
// Initilization can happen outside: int i = 0; for(; i <= 20; i++) {}
// Condition can happen inside: for(int i = 0; ; i++) {break;}
// Post Iteration can happen inside: for(int i = 0; i <= 20; ) {i++}

void printRange(int max, int step);
int getInput(void);

int main(void) {
    int max = getInput();
    int step = getInput();
    printRange(max, step);

    // Examples
    // Remove condition from for () part 
    // Place break inside the loop

    for (int i = 0; ; i += 1) {
        printf("%d ", i);
        if (i >= 20) {
            printf("\n");
            break;
        }
    }

    // Remove post iteration from for () part 
    // Place inside the loop

    for (int i = 0; i <= 20; ) {
        printf("%d ", i);
        i += 4;
    }
    printf("\n");

    return 0;
}

void printRange(int max, int step) {
    for (int i = 0; i <= max; i += step) {
        printf("%d ", i);
    }
    printf("\n");
}

int getInput(void) {
    int input;
    printf("Enter a number: ");
    scanf("%d", &input);
    return input;
}
