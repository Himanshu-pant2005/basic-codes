#include <iostream>
#include <iomanip> // For std::setprecision

// Function to convert Celsius to Fahrenheit
double celsius_to_fahrenheit(double celsius) {
    return (celsius * 9/5) + 32;
}

int main() {
    double celsius, fahrenheit;

    // Input: Enter temperature in Celsius
    std::cout << "Enter temperature in Celsius: ";
    std::cin >> celsius;

    // Convert to Fahrenheit
    fahrenheit = celsius_to_fahrenheit(celsius);

    // Output: Print the temperature in Fahrenheit
    std::cout << std::fixed << std::setprecision(2);
    std::cout << celsius << " Celsius is equal to " << fahrenheit << " Fahrenheit" << std::endl;

    return 0;
}
