#include <iostream>

int main() {
    int n;

    do {
        std::cout << "Enter a positive number: ";
        std::cin >> n;
    } while (n <= 0);

    unsigned long long current = n;
    unsigned long long maximum = n;
    int steps = 0;

    while (true) {
        std::cout << current;

        if (current == 1) {
            break;
        }

        std::cout << " ";

        if (current % 2 == 0) {
            current /= 2;
        } else {
            current = 3 * current + 1;
        }

        ++steps;

        if (current > maximum) {
            maximum = current;
        }
    }

    std::cout << '\n';
    std::cout << "Steps: " << steps << '\n';
    std::cout << "Maximum: " << maximum;

    return 0;
}