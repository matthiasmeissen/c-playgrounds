#include <stdio.h>

void printNum(void);

int main(void) {
    int num = 20;
    printf("The global variable num is: %d\n", num);

    printNum();

    return 0;
}

void printNum(void) {
    int num = 20;
    printf("The variable num inside the function is: %d\n", num);
}
