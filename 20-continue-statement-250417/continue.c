#include <stdio.h>

// Keeping the primary function of a loop at the first indentation level is good practice
// This means that you should not nest it into a loop when not necessary

// The comment that describes the function below is written in the Doxygen format
// This is machine readable and can create automatic documenation for things

void countMultiples(int min, int max, int skip);
void nestedLoop1(void);
void nestedLoop2(void);

int main (void) {

    // Print from 1-10 and ignore all multiples of 3
    for (int i = 1; i <= 10; i++){
        if (i % 3 == 0) {
            continue;
        }

        printf("%d \n", i);
    }

    printf("---\n");
    // Print from 1-10 and ignore all multiples of 2 and 3

    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0 || i % 3 == 0) {
            continue;
        }

        printf("%d \n", i);
    }

    printf("---\n");

    // Use a function to have dynamic input
    countMultiples(1, 20, 4);

    printf("---\n");

    // Use nested loop with continue statements
    nestedLoop1();

    printf("---\n");

    // Use nested loops to print patterns
    nestedLoop2();

    return 0;
}

/**
* @brief Prints numbers within a range and skips multiples of a specific number
* @param min The starting number of the range (inclusive)
* @param max The last number of the range (inclusive)
* @param skip The multiples that will be skipped and not be printed
*/
void countMultiples(int min, int max, int skip) {
    for (int i = min; i <= max; i++){
        if (i % skip == 0) {
            continue;
        }

        printf("%d \n", i);
    }
}

void nestedLoop1(void) {
    for (int i = 0; i <= 3; i++) {
        for (int j = 0; j <= 3; j++) {
            if (i == j) {
                continue;
            }
            printf("(%d, %d)\n", i, j);
        }
    }
}

void nestedLoop2(void) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (j % 3 == 0) {
                printf("/");
            } else {
                printf("#");
            }
        }
        printf("\n");
    }
}
