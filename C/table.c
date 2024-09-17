#include <stdio.h>

// Function to print multiplication table for a specific number up to a given range
void print_table(int number, int range) {
    for (int i = 1; i <= range; i++) {
        printf("%d * %d = %d\n", number, i, number * i);
    }
}

int main() {
    int number;
    int range;

    // Input: Enter the number for which you want the multiplication table
    printf("Enter the number to print its multiplication table: ");
    scanf("%d", &number);

    // Input: Enter the range for the multiplication table
    printf("Enter the range for the multiplication table: ");
    scanf("%d", &range);

    // Call the function to print the table
    print_table(number, range);

    return 0;
}
