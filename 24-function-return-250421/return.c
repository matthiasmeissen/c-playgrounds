#include <stdio.h>

int multiply(int a, int b);

int main(void) {
    int var;
    var = multiply(4, 8);
    printf("%d", var);

    return 0;
}

int multiply(int a, int b) {
    return a * b;
}
