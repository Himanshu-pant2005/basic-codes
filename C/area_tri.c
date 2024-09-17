// Area of Triangle
#include <stdio.h>

// Function to calculate the area of a triangle
double calculate_triangle_area(double base, double height) {
    return 0.5 * base * height;
}

int main() {
    double base, height, area;

    // Input: Enter the base and height of the triangle
    printf("Enter the base of the triangle: ");
    scanf("%lf", &base);

    printf("Enter the height of the triangle: ");
    scanf("%lf", &height);

    // Calculate the area
    area = calculate_triangle_area(base, height);

    // Output: Print the area of the triangle
    printf("The area of the triangle is: %.2f\n", area);

    return 0;
}
