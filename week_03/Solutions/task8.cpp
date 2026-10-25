#include <iostream>

int main() {
    int n;

    do {
        std::cout << "Enter a non-negative number: ";
        std::cin >> n;
    } while (n < 0);

    int current = n;
    unsigned long long reversed = 0;
    unsigned long long powerOfTen = 1;

    while (current > 0) {
        int digit = current % 10;

        reversed = reversed * 10 + digit;
        powerOfTen *= 10;

        current /= 10;
    }

    unsigned long long result = reversed * powerOfTen + n;

    std::cout << result;

    return 0;
}