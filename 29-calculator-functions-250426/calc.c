#include <stdio.h>
#include <math.h>

// In a switch, case condition you can combine multiple scenarios 
// by leaving the input for all but the last empty

float add(const float a, const float b);
float sub(const float a, const float b);
float mul(const float a, const float b);
float div(const float a, const float b);

void clear_buffer(void);
float get_input(void);
char get_calc_type(void);
float calculate(const char type, const float a, const float b);

int main(void) {
    // Print - Greet
    printf("Welcome to the Calulator.\n");

    // Get Input - Type of calculation
    char type = get_calc_type();

    // Get Input - Number a
    float a = get_input();

    // Get Input - Number b
    float b = get_input();

    // Get Number - Based on calculation type
    float result = calculate(type, a, b);
    
    // Print - Result
    printf("The result is: %f\n", result);

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

float get_input(void) {
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

void clear_buffer(void) {
    int c;
    while( (c = getchar()) != '\n' && c != EOF );
}

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
