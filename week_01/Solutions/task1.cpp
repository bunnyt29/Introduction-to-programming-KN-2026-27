
#include <iostream>

int main() {
    int a, b;

    std::cout << "Enter two integers: ";
    std::cin >> a >> b;

    std::cout << "Sum: " << a + b << std::endl;
    std::cout << "Difference: " << a - b << std::endl;
    std::cout << "Product: " << a * b << std::endl;
    std::cout << "Quotient: " << a / b << '\n';
    std::cout << "Remainder: " << a % b << std::endl;

    return 0;
}
