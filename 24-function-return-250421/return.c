#include <stdio.h>

// When not modifying variables it is best practice to declare them as const
// This also should be done when using function parameters that will not be changed in the function

int multiplyInt(int a, int b);
void printMultiplyInt(int a, int b);
int getIntInput(void);
void clearInputBuffer(void);

int main(void) {
    int var;
    var = multiplyInt(4, 8);
    printf("%d \n", var);

    printMultiplyInt(4, 20);

    const int a = getIntInput();
    const int b = getIntInput();
    printMultiplyInt(a, b);

    return 0;
}

/**
 * @brief Multiplies two integers
 * @param a First number of type int
 * @param b Second number of type int
 * @return Integer multiplication of a and b
 */
int multiplyInt(const int a, const int b) {
    return a * b;
}

void printMultiplyInt(const int a, const int b) {
    int mul;
    mul = multiplyInt(a, b);
    printf("%d times %d equals %d\n", a, b, mul);
}

/**
 * @brief Asks the user to input an integer until it gets a valid input
 * @return Input Integer
 */
int getIntInput(void) {
    int num;
    int valid;

    do {
        printf("Enter an integer value: ");
        valid = scanf("%d", &num);
        if (!valid) {
            printf("This is not an integer. \n");
            clearInputBuffer();
        }
    } while (!valid);

    return num;
}

/**
 * @brief Clears all input characters from the buffer
 */
void clearInputBuffer(void) {
    int c;
    while( (c = getchar()) != '\n' && c != EOF );
}
