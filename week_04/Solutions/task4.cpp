#include <iostream>

int main() {
    int a = 15;
    int& ref = a;

    std::cout << "Стойност на a: " << a << ", стойност на ref: " << ref << '\n';
    std::cout << "Адрес на a: " << &a << " == Адрес на ref: " << &ref << '\n';

    ref = 30;

    std::cout << "Нова стойност на a след ref = 30: " << a << '\n';

    return 0;
}
