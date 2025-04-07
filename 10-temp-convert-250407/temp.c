#include <stdio.h>

// In addition to the %d and %f format specifiers
// There is %e which formats a float or double in scientific notation

// 12345.6789 becomes 1.234568e+04 
// Will shift the . four places to the right
// 0.000098765 becomes 9.876500e-05 
// Will shift the . five places to the left and add 0 there

int main(void) {
    int tempF;
    printf("Enter a temperatur in fahrenheit: ");
    scanf("%d", &tempF);

    float tempC = (tempF - 32) * 5.0 / 9.0;
    printf("%d degrees fahrenheit are %.1f degrees celsius.\n", tempF, tempC);
    printf("The value represented in scientific notation is: %e\n", tempC);

    double num1 = 12345.6789;
    double num2 = 0.000098765;
    printf("The number %f written in scientific notation is: %e\n", num1, num1);
    printf("The number %f written in scientific notation is: %e\n", num2, num2);

    return 0;
}
