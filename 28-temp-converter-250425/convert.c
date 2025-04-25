#include <stdio.h>

// In some cases a function has some magic numbers that might need explanation
// This can be made clear by using #define preprocessor directives
// Those assing the numbers they store during compile times where the names are used

#define FAHRENHEIT_FREEZING_POINT 32.0
#define FAHRENHEIT_TO_CELSIUS_SCALE_FACTOR (5.0 / 9.0)

float fahrenheit_to_celsius(const float fahrenheit);
void clear_input_buffer(void);
float get_user_input_float(void);

int main(void) {
    float fahrenheit = 20.0;
    float celsius = fahrenheit_to_celsius(fahrenheit);
    printf("%.2f degree Fahrenheit are %.2f degree Celsius.\n", fahrenheit, celsius);

    float f1 = get_user_input_float();
    float c1 = fahrenheit_to_celsius(f1);
    printf("%.2f degree Fahrenheit are %.2f degree Celsius.\n", f1, c1);

    return 0;
}

/**
 * @brief Converts a temperature from Fahrenheit to Celsius
 * @param fahrenheit Float: The temperature in Fahrenheit
 * @return Float: The temperature in Celsius
 */
float fahrenheit_to_celsius(const float fahrenheit) {
    return (fahrenheit - FAHRENHEIT_FREEZING_POINT) * FAHRENHEIT_TO_CELSIUS_SCALE_FACTOR;
}

/**
 * @brief Asks the user to input a valid float
 * @return Float: The user input
 */
float get_user_input_float(void) {
    float input;
    int valid;
    do {
        printf("Enter a float number: ");
        valid = scanf("%f", &input);
        if (!valid) {
            printf("This was not a valid input. Try again.\n");
            clear_input_buffer();
        }
    } while (!valid);
    return input;
}

/**
 * @brief Clears the input buffer
 */
void clear_input_buffer(void) {
    int c;
    while( (c = getchar()) != '\n' && c != EOF );
}
