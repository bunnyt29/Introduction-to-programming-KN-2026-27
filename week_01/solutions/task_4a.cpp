#include <iostream>

int main() {
    double a, b, temp;

    std::cout << "Enter two real numbers: ";
    std::cin >> a >> b;

    temp = a;
    a = b;
    b = temp;

    std::cout << "After swapping: a = " << a << ", b = " << b << '\n';

    return 0;
}