#include <stdio.h>

// Function to compute factorial
unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int num;

    // Input: Enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Compute and print the factorial
    printf("The factorial of %d is %llu\n", num, factorial(num));

    return 0;
}
