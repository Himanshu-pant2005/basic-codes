// Check if the number is +ve, -ve, 0
#include <stdio.h>

int main() {
    double number;

    // Input: Enter a number
    printf("Enter a number: ");
    scanf("%lf", &number);

    // Check if the number is positive, negative, or zero
    if (number > 0) {
        printf("The number is positive.\n");
    } else if (number < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}
