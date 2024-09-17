#include <iostream>
#include <iomanip> // For std::setprecision

// Function to calculate the area of a triangle
double calculate_triangle_area(double base, double height) {
    return 0.5 * base * height;
}

int main() {
    double base, height, area;

    // Input: Enter the base and height of the triangle
    std::cout << "Enter the base of the triangle: ";
    std::cin >> base;

    std::cout << "Enter the height of the triangle: ";
    std::cin >> height;

    // Calculate the area
    area = calculate_triangle_area(base, height);

    // Output: Print the area of the triangle
    std::cout << "The area of the triangle is: " << std::fixed << std::setprecision(2) << area << std::endl;

    return 0;
}
