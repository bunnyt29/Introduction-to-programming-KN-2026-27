#include <iostream>

int main () {
    char symbol;
    std::cout << "Enter a symbol: ";
    std::cin >> symbol;

    std::cout << "ASCII code: " << (int)symbol;

    return 0;
}