#include <iostream>

int main() {
    int n;

    do {
        std::cout << "Enter an even number greater than or equal to 4: ";
        std::cin >> n;
    } while (n < 4 || n % 2 != 0);

    bool found = false;

    for (int a = 2; a <= n / 2; ++a) {
        int b = n - a;

        bool aIsPrime = true;

        for (int divisor = 2; divisor <= a / 2; ++divisor) {
            if (a % divisor == 0) {
                aIsPrime = false;
                break;
            }
        }

        bool bIsPrime = true;

        for (int divisor = 2; divisor <= b / 2; ++divisor) {
            if (b % divisor == 0) {
                bIsPrime = false;
                break;
            }
        }

        if (aIsPrime && bIsPrime) {
            std::cout << a << " + " << b << " = " << n << '\n';
            found = true;
        }
    }

    if (!found) {
        std::cout << "No pair";
    }

    return 0;
}