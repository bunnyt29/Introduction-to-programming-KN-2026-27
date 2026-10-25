#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;

    if (a > b) {
        int temporary = a;
        a = b;
        b = temporary;
    }

    bool found = false;

    for (int number = a; number <= b; ++number) {
        if (number % 3 == 0) {
            continue;
        }

        if (number % 7 == 0) {
            std::cout << number;
            found = true;
            break;
        }
    }

    if (!found) {
        std::cout << "No such number";
    }

    return 0;
}