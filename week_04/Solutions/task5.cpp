#include <iostream>

int main() {
    int* safe_ptr = nullptr;

    if (safe_ptr == nullptr) {
        std::cout << "Указателят е null, не може да се дереференцира." << '\n';
    }

    int value = 77;
    safe_ptr = &value;

    if (safe_ptr != nullptr) {
        std::cout << "Указателят вече е валиден. Стойност: " << *safe_ptr << '\n';
    }

    return 0;
}
