#include <iostream>
#include <iomanip> // For std::setprecision

// Function to convert kilometers to miles
double km_to_miles(double km) {
    return km * 0.621371;
}

int main() {
    double km, miles;

    // Input: Enter distance in kilometers
    std::cout << "Enter distance in kilometers: ";
    std::cin >> km;

    // Convert to miles
    miles = km_to_miles(km);

    // Output: Print the distance in miles
    std::cout << std::fixed << std::setprecision(2);
    std::cout << km << " kilometers is equal to " << miles << " miles" << std::endl;

    return 0;
}
