#include <stdio.h>

float calculate_average(const int arr[], int length);
float calculate_average_pointer(const int arr[]);

int main(void) {
    // Declare int array and initialize with values
    int grades[] = {2, 4, 5, 2, 1};
    
    // You can calculate the length of an array by getting the size in bytes of the whole array
    // And then dividing it by the size of the first item in the array
    // Note that this only works in the scope where the array is defined
    int arrayLength = sizeof(grades) / sizeof(grades[0]);

    // Declare sum variable and calulate its value by adding each item of the array with a for loop
    int sum = 0;
    for (int i = 0; i < arrayLength; i ++) {
        sum += grades[i];
    }

    // Declare avarage variable and calculate value with sum and arrayLength
    // With integer division it is important to store the result as a float
    // To do that you need to convert at least one input the a float (this can be done by casting)
    float average = (float)sum / arrayLength;

    // Print the result
    printf("The average grade is: %.2f\n", average);

    // Same thing using a function
    float average2 = calculate_average(grades, arrayLength);
    printf("The average value calculated by function is: %.2f\n", average2);

    return 0;
}

/**
 * @brief Calculates average value of values in int array
 * @param arr[] Integer array
 * @param length Number of items in array
 * @result Average of all item
 */
float calculate_average(const int arr[], int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += arr[i];
    }
    return (float)sum / length;
}

float calculate_average_pointer(const int arr[]) {
    // This size calucaltion will not work, since arr is not the array but a pointer to it
    // All arrays that are passed into a function will not be copied like and int or so
    // But rather a pointer to the first item in the array will be given (this is called array decay)
    // This means that when working with arrays in functions you need to pass the size as well
    int length = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += arr[i];
    }
    return (float)sum / length;
}
