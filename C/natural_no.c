#include <stdio.h>

// Function to find the sum of natural numbers in the given interval
int sum_of_natural_numbers(int start, int end) {
    int total_sum = 0;
    for (int i = start; i <= end; i++) {
        total_sum += i;
    }
    return total_sum;
}

int main() {
    int start, end;

    // Input: Define the interval
    printf("Enter the start of the interval: ");
    scanf("%d", &start);
    printf("Enter the end of the interval: ");
    scanf("%d", &end);

    // Compute and print the sum
    printf("The sum of natural numbers from %d to %d is %d\n", start, end, sum_of_natural_numbers(start, end));

    return 0;
}
