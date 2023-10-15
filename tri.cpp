#include <iostream>

int main() {
    int n;

    std::cout << "Enter the number of rows: ";
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        // Print spaces before numbers
        for (int space = 1; space <= n - i; space++) {
            std::cout << "  ";
        }

        // Print numbers in increasing order
        for (int j = 1; j <= i; j++) {
            std::cout << j << " ";
        }

        // Print numbers in decreasing order
        for (int k = i - 1; k >= 1; k--) {
            std::cout << k << " ";
        }

        std::cout << std::endl;
    }

    return 0;
}
