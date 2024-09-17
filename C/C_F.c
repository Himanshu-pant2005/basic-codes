#include <stdio.h>

// Function to convert Celsius to Fahrenheit
double celsius_to_fahrenheit(double celsius) {
    return (celsius * 9/5) + 32;
}

int main() {
    double celsius, fahrenheit;

    // Input: Enter temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%lf", &celsius);

    // Convert to Fahrenheit
    fahrenheit = celsius_to_fahrenheit(celsius);

    // Output: Print the temperature in Fahrenheit
    printf("%.2f Celsius is equal to %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}
