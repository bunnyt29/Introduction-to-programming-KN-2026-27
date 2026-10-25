#include <iostream>

int main() {
    int n;

    do {
        std::cout << "Enter a positive number: ";
        std::cin >> n;
    } while (n <= 0);

    bool found = false;

    for (int a = 1; a <= n; ++a) {
        for (int b = a + 1; b <= n; ++b) {
            for (int c = b + 1; c <= n; ++c) {
                if (a * a + b * b == c * c) {
                    std::cout << a << " " << b << " " << c << '\n';
                    found = true;
                }
            }
        }
    }

    if (!found) {
        std::cout << "No triples";
    }

    return 0;
}