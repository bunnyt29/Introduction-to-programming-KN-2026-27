#include <iostream>

int main() {
    int a, b;

    do {
        std::cout << "Enter positive number a: ";
        std::cin >> a;
    } while (a <= 0);

    do {
        std::cout << "Enter positive number b: ";
        std::cin >> b;
    } while (b <= 0);

    if (a > b) {
        int temporary = a;
        a = b;
        b = temporary;
    }

    bool found = false;

    for (int number = a; number <= b; ++number) {
        int original = number;
        int current = number;
        int reversed = 0;

        while (current > 0) {
            int digit = current % 10;
            reversed = reversed * 10 + digit;
            current /= 10;
        }

        if (original == reversed) {
            if (found) {
                std::cout << " ";
            }

            std::cout << number;
            found = true;
        }
    }

    if (!found) {
        std::cout << "No palindromes";
    }

    return 0;
}