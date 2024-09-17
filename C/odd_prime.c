#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// Function to check if a number is prime
bool is_prime(int number) {
    if (number <= 1) return false;
    if (number == 2) return false; // Exclude 2 as we need odd primes
    if (number % 2 == 0) return false;
    for (int i = 3; i <= sqrt(number); i += 2) {
        if (number % i == 0) return false;
    }
    return true;
}

int main() {
    int start, end;

    // Input: Define the interval
    printf("Enter the start of the interval: ");
    scanf("%d", &start);
    printf("Enter the end of the interval: ");
    scanf("%d", &end);

    // Print odd prime numbers in the given interval
    for (int num = start; num <= end; num++) {
        if (num > 2 && is_prime(num)) {  // Check if it's greater than 2 and prime
            printf("%d\n", num);
        }
    }

    return 0;
}
