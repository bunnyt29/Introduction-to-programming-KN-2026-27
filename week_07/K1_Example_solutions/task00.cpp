#include <iostream>

constexpr unsigned MAX_SIZE = 100;

int main() {
    int a[] = {68, 10, 15, 3, 4, 3, 10};
    int b[] = {15, 17, 4, 8, 1, 8, 17};

    for (int i=0; i < 6; ++i) {
        for (int j = i + 1; j < 7; ++j) {
            if((a[i]==a[j]) != (b[i]==b[j])) {
                std::cout << "Not the same templates!";
                return 0;
            }
        }
    }

    std::cout << "The same templates";
    return 1;
}