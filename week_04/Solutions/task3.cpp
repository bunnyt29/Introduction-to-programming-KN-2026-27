#include <iostream>

int main() {
    int x = 42;
    int* p1 = &x;
    int** p2 = &p1;

    std::cout << "Стойност през двоен указател: " << **p2 << '\n';

    return 0;
}
