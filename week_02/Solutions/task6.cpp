#include <cmath>
#include <iostream>

int main() {
    double x, y;
    std::cin >> x >> y;

    double distanceSquared = x * x + y * y;
    
    std::cout << "Points: ";
    if (distanceSquared <= pow(1, 2)) {
        std::cout << 10;
    } else if (distanceSquared <= pow(3, 2)) {
        std::cout << 5;
    } else if (distanceSquared <= pow(5, 2)) {
        std::cout << 1;
    } else {
        std::cout << 0;
    }

}