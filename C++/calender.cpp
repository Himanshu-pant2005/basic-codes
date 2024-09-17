#include <iostream>
#include <iomanip> // For std::setw

// Function to get the number of days in a month
int days_in_month(int month, int year) {
    int days;
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                days = 29; // Leap year
            } else {
                days = 28; // Non-leap year
            }
            break;
        default:
            days = 0;
    }
    return days;
}

// Function to get the day of the week for the 1st day of the month
int day_of_week(int day, int month, int year) {
    if (month < 3) {
        month += 12;
        year--;
    }
    return (day + 2*month + 3*(month+1)/5 + year + year/4 - year/100 + year/400) % 7;
}

int main() {
    int year, month, days, start_day;

    // Input: Enter year and month
    std::cout << "Enter year (e.g., 2024): ";
    std::cin >> year;

    std::cout << "Enter month (1-12): ";
    std::cin >> month;

    // Get the number of days in the month
    days = days_in_month(month, year);

    // Get the day of the week for the 1st of the month
    start_day = day_of_week(1, month, year);

    // Display the calendar header
    std::cout << "Su Mo Tu We Th Fr Sa\n";

    // Print leading spaces for the first week
    for (int i = 0; i < start_day; i++) {
        std::cout << "   ";
    }

    // Print the days of the month
    for (int day = 1; day <= days; day++) {
        std::cout << std::setw(2) << day << " ";
        if ((start_day + day) % 7 == 0) {
            std::cout << "\n";
        }
    }
    std::cout << "\n";

    return 0;
}
