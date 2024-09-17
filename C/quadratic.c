#include <stdio.h>
#include <math.h>

// Function to solve a quadratic equation
void solve_quadratic(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;
    double sqrt_discriminant = sqrt(fabs(discriminant));
    
    if (discriminant > 0) {
        // Two real roots
        printf("The solutions are %.2f and %.2f\n", (-b + sqrt_discriminant) / (2 * a), (-b - sqrt_discriminant) / (2 * a));
    } else if (discriminant == 0) {
        // One real root
        printf("The solution is %.2f\n", -b / (2 * a));
    } else {
        // Two complex roots
        printf("The solutions are %.2f + %.2fi and %.2f - %.2fi\n",
               -b / (2 * a), sqrt_discriminant / (2 * a),
               -b / (2 * a), -sqrt_discriminant / (2 * a));
    }
}

int main() {
    double a, b, c;

    // Input: Enter coefficients a, b, and c
    printf("Enter coefficient a: ");
    scanf("%lf", &a);
    printf("Enter coefficient b: ");
    scanf("%lf", &b);
    printf("Enter coefficient c: ");
    scanf("%lf", &c);

    // Solve the quadratic equation
    solve_quadratic(a, b, c);

    return 0;
}
