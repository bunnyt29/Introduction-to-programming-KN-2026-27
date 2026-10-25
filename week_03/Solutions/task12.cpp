#include <iostream>
#include <cmath>

int main() {
    int n, m;

    do {
        std::cout << "Enter a positive number n: ";
        std::cin >> n;
    } while (n < 1);

    do {
        std::cout << "Enter a positive number m: ";
        std::cin >> m;
    } while (m < 1);

    if (n > m) {
        int temporary = n;
        n = m;
        m = temporary;
    }

    bool found = false;

    for (int i = n; i <= m; ++i) {
        int curr = i;
        int sum = 0;
        int numberOfDigits = 0;

        while (curr > 0) {
            curr /= 10;
            ++numberOfDigits;
        }

        curr = i;

        while (curr > 0) {
            sum += std::pow(curr % 10, numberOfDigits);
            curr /= 10;
        }

        if (sum == i) {
            if (found) {
                std::cout << " ";
            }

            std::cout << i;
            found = true;
        }
    }

    if (!found) {
        std::cout << "No narcissistic numbers";
    }

    return 0;
}