#include <iostream>

int main() {
    double a, b;

    std::cout << "Enter two real numbers: ";
    std::cin >> a >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    std::cout << "After swapping: a = " << a << ", b = " << b << '\n';

    return 0;
}