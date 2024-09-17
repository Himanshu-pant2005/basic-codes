#include <iostream>

// Function to find the sum of natural numbers in the given interval
int sum_of_natural_numbers(int start, int end) {
    int total_sum = 0;
    for (int i = start; i <= end; i++) {
        total_sum += i;
    }
    return total_sum;
}

int main() {
    int start, end;

    // Input: Define the interval
    std::cout << "Enter the start of the interval: ";
    std::cin >> start;
    std::cout << "Enter the end of the interval: ";
    std::cin >> end;

    // Compute and print the sum
    std::cout << "The sum of natural numbers from " << start << " to " << end << " is " << sum_of_natural_numbers(start, end) << std::endl;

    return 0;
}
