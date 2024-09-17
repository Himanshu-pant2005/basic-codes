#include <stdio.h>

int main() {
    double a, b;

    // Input: Enter two numbers
    printf("Enter the first number: ");
    scanf("%lf", &a);
    printf("Enter the second number: ");
    scanf("%lf", &b);

    // Swap the numbers without using a third variable
    a = a + b;
    b = a - b;
    a = a - b;

    // Output: Print the swapped numbers
    printf("After swapping: first number = %.2f, second number = %.2f\n", a, b);

    return 0;
}
