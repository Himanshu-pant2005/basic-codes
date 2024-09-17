#include <iostream>

void print_table(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            std::cout << i << " * " << j << " = " << i * j << std::endl;
        }
        std::cout << std::endl; // Print a blank line between rows
    }
}

int main() {
    int table_size = 10; // Define the size of the multiplication table
    print_table(table_size);
    return 0;
}
