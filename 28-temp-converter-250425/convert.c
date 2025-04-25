#include <stdio.h>

float fahrenheit_to_celsius(const float fahrenheit);

int main(void) {
    float fahrenheit = 20.0;
    float celsius = fahrenheit_to_celsius(fahrenheit);
    printf("%.2f degree Fahrenheit are %.2f degree Celsius.\n");

    return 0;
}

float fahrenheit_to_celsius(const float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}
