// Check and Armstrong number in an interval
#include <stdio.h>
#include <math.h>

// Function to check if a number is an Armstrong number
int is_armstrong_number(int num) {
    int original_num, remainder, result = 0, num_digits = 0;
    
    original_num = num;

    // Calculate the number of digits
    while (original_num != 0) {
        original_num /= 10;
        num_digits++;
    }

    original_num = num;

    // Calculate the sum of each digit raised to the power of num_digits
    while (original_num != 0) {
        remainder = original_num % 10;
        result += pow(remainder, num_digits);
        original_num /= 10;
    }

    // Check if the result is equal to the original number
    return (result == num);
}

// Function to find all Armstrong numbers in the given interval
void find_armstrong_numbers(int start, int end) {
    int i;

    printf("Armstrong numbers in the interval [%d, %d] are:\n", start, end);
    for (i = start; i <= end; i++) {
        if (is_armstrong_number(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int start_interval, end_interval;

    // Get the interval from the user
    printf("Enter the start of the interval: ");
    scanf("%d", &start_interval);
    printf("Enter the end of the interval: ");
    scanf("%d", &end_interval);

    // Find Armstrong numbers in the specified interval
    find_armstrong_numbers(start_interval, end_interval);

    return 0;
}
