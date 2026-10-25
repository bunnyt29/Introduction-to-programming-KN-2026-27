#include <iostream>

int main() {
    int n;

    do {
        std::cout << "Enter a positive number: ";
        std::cin >> n;
    } while (n <= 0);

    unsigned int first = 0;
    unsigned int second = 1;

    for (int i = 1; i <= n; ++i) {
        std::cout << first;

        if (i < n) {
            std::cout << " ";
        }

        unsigned int next = first + second;
        first = second;
        second = next;
    }

    return 0;
}