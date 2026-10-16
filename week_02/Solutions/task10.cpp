#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    std::cin >> a >> b >> c;

    if (a == 0) {
        // Линейно уравнение: bx + c = 0
        if (b == 0) {
            if (c == 0) {
                std::cout << "Every x is a solution\n";
            } else {
                std::cout << "No solution\n";
            }
        } else {
            double x = -c / b;
            std::cout << "Linear equation: x = " << x << '\n';
        }
    } else {
        // Квадратно уравнение: ax^2 + bx + c = 0
        double D = b * b - 4 * a * c;

        if (D > 0) {
            double x1 = (-b + std::sqrt(D)) / (2 * a);
            double x2 = (-b - std::sqrt(D)) / (2 * a);
            std::cout << "x1 = " << x1 << ", x2 = " << x2 << '\n';
        } else if (D == 0) {
            double x = -b / (2 * a);
            std::cout << "x1 = x2 = " << x << '\n';
        } else {
            std::cout << "No real roots\n";
        }
    }
}