#include <iostream>

int main() {
    double number;

    // Input: Enter a number
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Check if the number is positive, negative, or zero
    if (number > 0) {
        std::cout << "The number is positive." << std::endl;
    } else if (number < 0) {
        std::cout << "The number is negative." << std::endl;
    } else {
        std::cout << "The number is zero." << std::endl;
    }

    return 0;
}
