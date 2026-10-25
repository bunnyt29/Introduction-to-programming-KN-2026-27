#include <iostream>

int main() {
    int number;
    int attempts = 0;

    do {
        std::cin >> number;
        ++attempts;
    } while (number < 1 || number > 100);

    std::cout << "Number: " << number << '\n';
    std::cout << "Attempts: " << attempts;

    return 0;
}