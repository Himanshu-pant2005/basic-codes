#include <iostream>
#include <cmath> // For sqrt function

bool is_prime(int number) {
    if (number <= 1) return false;
    if (number == 2) return true; // 2 is the only even prime number
    if (number % 2 == 0) return false;
    for (int i = 3; i <= std::sqrt(number); i += 2) {
        if (number % i == 0) return false;
    }
    return true;
}

int main() {
    int num;

    // Input: Enter a number
    std::cout << "Enter a number: ";
    std::cin >> num;

    // Check if the number is prime
    if (is_prime(num)) {
        std::cout << num << " is a prime number." << std::endl;
    } else {
        std::cout << num << " is not a prime number." << std::endl;
    }

    return 0;
}
