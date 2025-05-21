#include <stdio.h>

int multiply(int a, int b);

int main(void) {
    int baseNum = 24;
    int newNum = multiply(baseNum, 20);
    fprintf(stdout, "%d times 20 equals: %d\n", baseNum, newNum);
    return 0;
}

/**
 * @brief Multiply and int by another
 * @param a Number 1 
 * @param b Number 2
 * @return a times b
 */
int multiply(int a, int b) {
    return a * b;
}
