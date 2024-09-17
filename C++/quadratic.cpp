#include <iostream>
#include <cmath> // For sqrt

// Function to solve a quadratic equation
void solve_quadratic(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;
    double sqrt_discriminant = sqrt(fabs(discriminant));

    if (discriminant > 0) {
        // Two real roots
        std::cout << "The solutions are " << (-b + sqrt_discriminant) / (2 * a) << " and " << (-b - sqrt_discriminant) / (2 * a) << std::endl;
    } else if (discriminant == 0) {
        // One real root
        std::cout << "The solution is " << -b / (2 * a) << std::endl;
    } else {
        // Two complex roots
        std::cout << "The solutions are " << -b / (2 * a) << " + " << sqrt_discriminant / (2 * a) << "i and " << -b / (2 * a) << " - " << sqrt_discriminant / (2 * a) << "i" << std::endl;
    }
}

int main() {
    double a, b, c;

    // Input: Enter coefficients a, b, and c
    std::cout << "Enter coefficient a: ";
    std::cin >> a;
    std::cout << "Enter coefficient b: ";
    std::cin >> b;
    std::cout << "Enter coefficient c: ";
    std::cin >> c;

    // Solve the quadratic equation
    solve_quadratic(a, b, c);

    return 0;
}
