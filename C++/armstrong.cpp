#include <iostream>
#include <cmath>

// Function to check if a number is an Armstrong number
bool is_armstrong_number(int num) {
    int original_num = num;
    int remainder, result = 0, num_digits = 0;

    // Calculate the number of digits
    while (original_num != 0) {
        original_num /= 10;
        num_digits++;
    }

    original_num = num;

    // Calculate the sum of each digit raised to the power of num_digits
    while (original_num != 0) {
        remainder = original_num % 10;
        result += std::pow(remainder, num_digits);
        original_num /= 10;
    }

    // Check if the result is equal to the original number
    return (result == num);
}

// Function to find all Armstrong numbers in the given interval
void find_armstrong_numbers(int start, int end) {
    std::cout << "Armstrong numbers in the interval [" << start << ", " << end << "] are:" << std::endl;
    for (int i = start; i <= end; ++i) {
        if (is_armstrong_number(i)) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    int start_interval, end_interval;

    // Get the interval from the user
    std::cout << "Enter the start of the interval: ";
    std::cin >> start_interval;
    std::cout << "Enter the end of the interval: ";
    std::cin >> end_interval;

    // Find Armstrong numbers in the specified interval
    find_armstrong_numbers(start_interval, end_interval);

    return 0;
}
