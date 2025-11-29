#include <iostream>

// Multiplication Table
// Display the multiplication table of any number entered by the user (from 1 to 10).

/*
 * 1. Ask user for input
 * 2. Store input in variable
 * 3. Loop from 1 - 10 and display table
 *
 */
int main() {

    int inputNumber = 0;

    while (true) {
        std::cout << "Enter a valid number: ";
        if (!(std::cin >> inputNumber)) {
            std::cin.clear();
            std::cin.ignore();
            continue;
        }

        break;
    }

    for (int i = 1; i <= 10; i++) {
        std::cout << i << 'x' << inputNumber << '=' << inputNumber * i << std::endl;
    }

    return 0;
}