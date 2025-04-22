#include <stdio.h>
#include "utils.h"

// When you want to use a function in a file before it is defined
// You would write the function declaration on top of your file
// This tells the compiler that there will be some function of that type

// When you want to use functions defined in external files you do this by adding a header file (file.h)
// The #include preprocessor directive tells the compiler to copys all code from the .h file to the target
// This means, that the header file only includes function declarations (and some guardrails for not importing it too often)

// Related functions can be written in a seperate source files (like helper.c)
// To access the file for compliation you need to tell the compiler all files you are using
// By writing clang main.c helper.c -o fileName
// You will combine the two files and create a new one called fileName

float multiply(const float a, const float b);

int main(void) {
    float num;
    num = multiply(4.2, 8.4);
    printf("%f \n", num);

    multiplyAndPrint(3.2, 4.6);

    return 0;
}

/**
 * @brief Multiply two floats
 * @param a One float
 * @param b The other float
 * @return The multiplication of a and b
 */
float multiply(const float a, const float b) {
    return a * b;
}
