#include <iostream>

int main() {
    int n;

    do {
        std::cout << "Enter positive number: ";
        std::cin >> n;
    } while (n < 0);

    for (int digit = 0; digit <= 9; ++digit) {
        int current = n;
        int count = 0;

        do {
            if (current % 10 == digit) {
                ++count;
            }

            current /= 10;
        } while (current > 0);

        std::cout << digit << ": " << count << '\n';
    }

    return 0;
}