#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// Function to check if a number is prime
bool is_prime(int number) {
    if (number <= 1) return false;
    if (number == 2) return true; // 2 is the only even prime number
    if (number % 2 == 0) return false;
    for (int i = 3; i <= sqrt(number); i += 2) {
        if (number % i == 0) return false;
    }
    return true;
}

int main() {
    int num;

    // Input: Enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is prime
    if (is_prime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
