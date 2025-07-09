#include <stdio.h>
#include <stdlib.h>

void printStrength(void);
void printWeakness(void);

int main(int argc, char * argv[]) {
    if (argc != 2) {
        fprintf(stdout, "Usage: %s <[strength | weakness | both]>", argv[0]);
    }
    
    if (argv[1] == "strength") {
        printStrength();
    } else if (argv[1] == "weakness") {
        printWeakness();
    }

    return 0;
}

void printStrength(void) {
    char strength[] = "Very precise, high performance, somehow simple, anything is possible, once understood very clear.";
    printf("%s\n", strength);
}

void printWeakness(void) {
    char weakness[] = "Hard to learn, lot of details to pay attention, a lot of code for basic things, memory management, potential for dangerous mistakes.";
    printf("%s\n", weakness);
}
