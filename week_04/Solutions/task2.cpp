#include <iostream>

int main() {
    int number = 50;
    int* num_ptr = &number;

    *num_ptr = 99;

    std::cout << "Крайна стойност на number: " << number << '\n';

    return 0;
}
