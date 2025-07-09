#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printStrength(void);
void printWeakness(void);

int main(int argc, char * argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <[strength | weakness | both]>", argv[0]);
        return EXIT_FAILURE;
    }

    const char * input = argv[1];
    
    if (strcmp(input, "strength") == 0) {
        printStrength();
    } else if (strcmp(input, "weakness") == 0) {
        printWeakness();
    } else if (strcmp(input, "both") == 0) {
        printStrength();
        printWeakness();
    } else {
        fprintf(stderr, "Usage: %s <[strength | weakness | both]>", argv[0]);
    }

    return 0;
}

void printStrength(void) {
    char strength[] = "Strength: \nVery precise, high performance, somehow simple, anything is possible, once understood very clear.";
    printf("%s\n", strength);
}

void printWeakness(void) {
    char weakness[] = "Weakness: \nHard to learn, lot of details to pay attention, memory management, potential for dangerous mistakes, a lot of code for basic things.";
    printf("%s\n", weakness);
}
