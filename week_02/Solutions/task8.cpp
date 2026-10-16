#include <iostream>

int main() {
    double E;
    std::cin >> E;

    double tax = 0.00;
    double constPayment = 5.00;

    if (E <= 100) {
        tax = E * 0.10;
    } else if (E <= 250) {
        tax = 100 * 0.10 + (E - 100) * 0.20;
    } else {
        tax = 100 * 0.10 + 150 * 0.20 + (E - 250) * 0.35;
    } 

    std::cout << tax + constPayment << " lv.";
}