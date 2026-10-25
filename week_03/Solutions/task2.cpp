#include <iostream>

int main() {
    int n;

    do {
        std::cin >> n;
    } while (n < 0);

    unsigned long long factorial = 1;

    for (int i = 2; i <= n; ++i) {
        factorial *= i;
    }

    std::cout << factorial;

    return 0;
}