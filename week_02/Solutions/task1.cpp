#include <iostream>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    if (a >= b && a >= c) {
        std::cout << a << std::endl;
    } else if (b >= a && b >= c) {
        std::cout << b << std::endl;
    } else {
        std::cout << c << std::endl;
    }
}