#include <stdio.h>

// Function to print Fibonacci series up to n terms
void fibonacci_iterative(int n) {
    int a = 0, b = 1, next;
    printf("Fibonacci series (iterative): ");
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            printf("%d ", a);
            continue;
        }
        if (i == 1) {
            printf("%d ", b);
            continue;
        }
        next = a + b;
        a = b;
        b = next;
        printf("%d ", next);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Print Fibonacci series
    fibonacci_iterative(n);

    return 0;
}
