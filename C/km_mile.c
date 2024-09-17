#include <stdio.h>

// Function to convert kilometers to miles
double km_to_miles(double km) {
    return km * 0.621371;
}

int main() {
    double km, miles;

    // Input: Enter distance in kilometers
    printf("Enter distance in kilometers: ");
    scanf("%lf", &km);

    // Convert to miles
    miles = km_to_miles(km);

    // Output: Print the distance in miles
    printf("%.2f kilometers is equal to %.2f miles\n", km, miles);

    return 0;
}
