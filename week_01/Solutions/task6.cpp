#include <iostream>

int main() {
    int a, b, c;

    std::cout << "Enter three positive numbers: ";
    std::cin >> a >> b >> c;

    std::cout << "Do these numbers form a triangle? "
              << std::boolalpha
              << ((a + b > c) &&
                  (a + c > b) &&
                  (b + c > a))
              << '\n';

    return 0;
}