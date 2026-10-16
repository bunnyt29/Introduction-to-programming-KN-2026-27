#include <iostream>

int main() {
    char symbol;
    std::cin >> symbol;

    if (symbol >= 'a' && symbol <= 'z') {
        char upper = symbol - 'a' + 'A';
        std::cout << upper << std::endl;
    } else if (symbol >= 'A' && symbol <= 'Z') {
        char lower = symbol - 'A' + 'a';
        std::cout << lower << std::endl;
    } else if (symbol >= '0' && symbol <= '9') {
        int digit = symbol - '0';
        std::cout << digit << std::endl;
    } else {
        std::cout << "Special symbol";
    }
}