#include <iostream>

unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int num;

    // Input: Enter a number
    std::cout << "Enter a number: ";
    std::cin >> num;

    // Compute and print the factorial
    std::cout << "The factorial of " << num << " is " << factorial(num) << std::endl;

    return 0;
}
