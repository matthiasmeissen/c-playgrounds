#include <stdio.h>
#include "utils.h"

int main(int argc, char * argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <string>", argv[0]);
    }

    int numCharacters = get_characters(argv[1], 100);
    printf("The string %s has %d characters.\n", argv[1], numCharacters);

    return 0;
}
