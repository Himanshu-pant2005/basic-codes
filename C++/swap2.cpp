#include <iostream>

int main() {
    double a, b;

    // Input: Enter two numbers
    std::cout << "Enter the first number: ";
    std::cin >> a;
    std::cout << "Enter the second number: ";
    std::cin >> b;

    // Swap the numbers without using a third variable
    a = a + b;
    b = a - b;
    a = a - b;

    // Output: Print the swapped numbers
    std::cout << "After swapping: first number = " << a << ", second number = " << b << std::endl;

    return 0;
}
