// Arithmatical operatiomn
#include <stdio.h>

int main() {
    int a, b;
    char op;

    // Input: Enter two numbers
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Input: Enter the operation
    printf("Enter the operation (+, /): ");
    scanf(" %c", &op);  // Note: space before %c to consume any leftover newline character

    // Perform the operation based on user input
    if (op == '+') {
        int sum = a + b;  // Performing addition
        printf("Sum: %d\n", sum);
    } else if (op == '/') {
        if (a < b) {
            float div1 = (float)b / a;  // Performing division
            printf("Division result: %.2f\n", div1);
        } else if (a > b) {
            float div2 = (float)a / b;  // Performing division
            printf("Division result: %.2f\n", div2);
        } else {
            printf("Division not performed as both numbers are equal.\n");
        }
    } else {
        printf("Invalid operation.\n");
    }

    return 0;
}
