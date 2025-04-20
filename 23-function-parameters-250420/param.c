#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// When using srand() to seed the random values it is considered best practice 
// to call it only once at the beginning of your main function

// When using scanf() and getting an invalid input, this input is still left in the buffer 
// and will be read at the next try resulting in an infinite loop no matter wht the user enters after it

// Example scanf("%d", &num) reads from the input and stops as soon as it encounters a non valid input leaving that input in the buffer as well
// When you enter 123\n it looks for valid integers and stops when it finds the newline character (\n) returning 1 and assigning 123 to num
// When you enter abc\n it looks for valid integers, since a is not valid it return 0 and leaves all chracters abc\n in the buffer

// To solve this you need to clear the invalid input from the buffer
// int c; (c = getchar()) != '\n' && c != EOF
// The function getchar() reads the next single input character from the buffer
// The first part c = getchar() reads the value and assings it to c when not "\n" or "EOF" (end of file)
// The body of the while loop is empty, when reading the value from the buffer it also removes it
// This means we have cleared the value from the buffer


void print_square(int num);
int get_number_input(void);
int get_number_input_or_random(void);
int get_random_number(void);

int main(void) {
    srand(time(NULL));
    int num = 4;

    printf("The variable num is: %d\n", num);
    print_square(num);
    printf("The variable num is still: %d\n", num);

    printf("--------\n");

    int inputNumber = get_number_input_or_random();
    print_square(inputNumber);

    printf("--------\n");
    int inputNumber2 = get_number_input();
    print_square(inputNumber2);

    return 0;
}

/**
 * @brief Print the square of an input integer
 * @param num Input integer that will be multiplied by itself
 */
void print_square(int num) {
    printf("The square of %d is %d\n", num, num * num);
}

/**
 * @brief Ask user to input number and return random when not valid
 * @return The user input or a random integer
 */
int get_number_input_or_random(void) {
    int num;
    printf("Input a number: ");
    int valid = scanf("%d", &num);
    if (valid) {
        return num;
    } else {
        int randomNumber = get_random_number();
        printf("This is not a number, I will assign %d to you.\n", randomNumber);
        return randomNumber;
    }
}

/**
 * @brief Asks for number input until successfull
 * @return A valid integer
 */
int get_number_input(void) {
    int num;
    int valid;
    do {
        printf("Enter a number: ");
        valid = scanf("%d", &num);
        if (!valid) {
            printf("The input is not valid, make sure to enter a number.\n");
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
        }
    } while (!valid);
    return num;
}

/**
 * @brief Get a random number
 * @return A random integer value
 */
int get_random_number(void) {
    return rand();
}
