#include <stdio.h>

int main(int argc, char * argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Correct Usage: %s <inputFile>\n", argv[0]);
    } else {
        printf("Input file is: %s\n", argv[1]);
    }
    
    return 0;
}
