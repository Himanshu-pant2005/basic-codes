#include <iostream>

// Recursive function to compute Fibonacci number
int fibonacci_recursive(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

// Function to print Fibonacci series up to n terms
void fibonacci_series_recursive(int n) {
    std::cout << "Fibonacci series (recursive): ";
    for (int i = 0; i < n; i++) {
        std::cout << fibonacci_recursive(i) << " ";
    }
    std::cout << std::endl;
}

int main() {
    int n;
    std::cout << "Enter the number of terms: ";
    std::cin >> n;

    // Print Fibonacci series
    fibonacci_series_recursive(n);

    return 0;
}
