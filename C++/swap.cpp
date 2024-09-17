#include <iostream>
#include <iomanip> // For std::setprecision

// Function to swap two numbers
void swap(double& a, double& b) {
    double temp = a;
    a = b;
    b = temp;
}

int main() {
    double a, b;

    // Input: Enter two numbers
    std::cout << "Enter the first number: ";
    std::cin >> a;

    std::cout << "Enter the second number: ";
    std::cin >> b;

    // Swap the numbers
    swap(a, b);

    // Output: Print the swapped numbers
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "After swapping: first number = " << a << ", second number = " << b << std::endl;

    return 0;
}
