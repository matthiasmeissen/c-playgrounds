#include <stdio.h>

float add(const float a, const float b);
float sub(const float a, const float b);
float mul(const float a, const float b);
float div(const float a, const float b);

int main(void) {
    float num = add(1, 2);
    printf("%f", num);
    return 0;
}

float add(const float a, const float b) {
    return a + b;
}

float sub(const float a, const float b) {
    return a - b;
}

float mul(const float a, const float b) {
    return a * b;
}

float div(const float a, const float b) {
    return a / b;
}
