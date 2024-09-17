#include <iostream>
#include <cmath>

bool is_prime(int number) {
    if (number <= 1) return false;
    if (number == 2) return false; // Exclude 2 as we need odd primes
    if (number % 2 == 0) return false;
    for (int i = 3; i <= std::sqrt(number); i += 2) {
        if (number % i == 0) return false;
    }
    return true;
}

int main() {
    int start, end;

    // Input: Define the interval
    std::cout << "Enter the start of the interval: ";
    std::cin >> start;
    std::cout << "Enter the end of the interval: ";
    std::cin >> end;

    // Print odd prime numbers in the given interval
    for (int num = start; num <= end; num++) {
        if (num > 2 && is_prime(num)) {  // Check if it's greater than 2 and prime
            std::cout << num << std::endl;
        }
    }

    return 0;
}
