#include <iostream>
#include <iomanip> // for std::setprecision

int main() {
    int a, b;
    char op;

    // Input: Enter two numbers
    std::cout << "Enter first number: ";
    std::cin >> a;

    std::cout << "Enter second number: ";
    std::cin >> b;

    // Input: Enter the operation
    std::cout << "Enter the operation (+, /): ";
    std::cin >> op;

    // Perform the operation based on user input
    if (op == '+') {
        int sum = a + b;  // Performing addition
        std::cout << "Sum: " << sum << std::endl;
    } else if (op == '/') {
        if (a < b) {
            double div1 = static_cast<double>(b) / a;  // Performing division
            std::cout << "Division result: " << std::fixed << std::setprecision(2) << div1 << std::endl;
        } else if (a > b) {
            double div2 = static_cast<double>(a) / b;  // Performing division
            std::cout << "Division result: " << std::fixed << std::setprecision(2) << div2 << std::endl;
        } else {
            std::cout << "Division not performed as both numbers are equal." << std::endl;
        }
    } else {
        std::cout << "Invalid operation." << std::endl;
    }

    return 0;
}
