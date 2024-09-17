#include <stdio.h>

// Function to swap two numbers
void swap(double* a, double* b) {
    double temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    double a, b;

    // Input: Enter two numbers
    printf("Enter the first number: ");
    scanf("%lf", &a);

    printf("Enter the second number: ");
    scanf("%lf", &b);

    // Swap the numbers
    swap(&a, &b);

    // Output: Print the swapped numbers
    printf("After swapping: first number = %.2lf, second number = %.2lf\n", a, b);

    return 0;
}
