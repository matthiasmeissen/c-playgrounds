#include <stdio.h>

// When the two ints are dividied by each other an printed as an int the value is truncated
// An int can be casted to a float by writing (float) value
// Multiplication of int with float becomes a float
// Writing f after the number of a float makes it explicit
// This is considered good practice but will also work without using it

int main(void) {
    float wf = 4.32f;
    float hf = 8.46f;

    printf("Rectangle Area of %f x %f is: %f\n", wf, hf, wf * hf);

    int wi = 40;
    int hi = 24;

    printf("The integer dividion of %d / %d results in Integer: %d\n", wi, hi, wi / hi);
    printf("The integer dividion of %d / %d results in Float: %f\n", wi, hi, (float) wi / hi);

    printf("Combining int with float of values %d and %f will lead to %.2f\n", wi, hf, wi * hf);
}
