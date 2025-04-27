#include <stdio.h>
#include <math.h>
#include "utils.h"

/**
 * @brief Add two numbers
 * @param a Float: Number 1
 * @param b Float: Number 2
 * @return Float: The sum of a and b
 */
float add(const float a, const float b) {
    return a + b;
}

/**
 * @brief Subtract two numbers
 * @param a Float: Number 1
 * @param b Float: Number 2
 * @return Float: The subtraction of a minus b
 */
float sub(const float a, const float b) {
    return a - b;
}

/**
 * @brief Multiply two numbers
 * @param a Float: Number 1
 * @param b Float: Number 2
 * @return Float: The multiplication of a and b
 */
float mul(const float a, const float b) {
    return a * b;
}

/**
 * @brief Divide two numbers
 * @param a Float: Number 1
 * @param b Float: Number 2
 * @return Float: The division of a and b
 */
float div(const float a, const float b) {
    return a / b;
}

/**
 * @brief Clears the input buffer
 */
void clear_buffer(void) {
    int c;
    while( (c = getchar()) != '\n' && c != EOF );
}

/**
 * @brief Asks the user to input a float until successful
 * @return Float: The valid float input
 */
float get_float_input(void) {
    float num;
    int valid;
    do {
        printf("Enter a number: ");
        valid = scanf("%f", &num);
        if (!valid) {
            printf("This number is not valid.\n");
            clear_buffer();
        }
    } while (!valid);
    return num;
}

/**
 * @brief Asks the user to input y or n until successfull
 * @return Int: 0 or 1
 */
int get_user_confirm(void) {
    char input;
    int confirm;
    int validInput = 0;

    do {
        printf("Do you want to use again? (y/n) ");
        scanf(" %c", &input);

        switch (input) {
            case 'y':
                confirm = 1;
                validInput = 1;
                break;
            case 'n':
                confirm = 0;
                validInput = 1;
                break;
            default:
                validInput = 0;
                clear_buffer();
                break;
        }
    } while (!validInput);

    return confirm;
}

/**
 * @brief Asks the user to input a char a, s, m, d until successful. 
 * Is used in context of the calculator and determines mathematical type.
 * @return Char: a, s, m or d
 */
char get_calc_type(void) {
    char input;
    int validInput = 0;

    do {
        printf("What calculation do you want to perform? (a, s, m, d) ");
        scanf(" %c", &input);

        switch (input) {
            case 'a':
            case 's':
            case 'm':
            case 'd':
                validInput = 1;
                break;
            default:
                validInput = 0;
                clear_buffer();
                printf("Please use a, s, m, d to determine calcuation type.\n");
                break;
        }
    } while (!validInput);

    return input;
}

/**
 * @brief Performs mathematical calculation based on input
 * @param type: Char: Defines mathematical operation (add, sub, mul, div)
 * @param a Float: Number 1
 * @param b Float: Number 2
 * @return Float: The result
 */
float calculate(const char type, const float a, const float b) {
    float result;
    switch (type) {
        case 'a':
            result = add(a, b);
            break;
        case 's':
            result = sub(a, b);
            break;
        case 'm':
            result = mul(a, b);
            break;
        case 'd':
            if (b == 0) {
                printf("Dividing by 0 is not allowed.\n");
                result = NAN;
                break;
            }
            result = div(a, b);
            break;
        default:
            result = NAN;
            break;
    }
    return result;
}