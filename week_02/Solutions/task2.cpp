#include <iostream>

int main() {
    int n;
    std::cin >> n;

    if (n >= 1000 && n <= 9999) {
        int a = n / 1000;
        int b = (n/100) % 10;
        int c = (n/10) % 10;
        int d = n % 10;

        if (a == d && b == c) {
            std::cout << "true";
        } else {
            std::cout << "false";
        } 
    } else {
        std::cout << "Invalid number!" << std::endl;
    }

    return 0;
}