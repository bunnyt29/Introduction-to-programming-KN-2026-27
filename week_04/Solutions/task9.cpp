#include <iostream>

bool isPrime(int x) {
    if (x <= 1) {
        return false;
    }

    for (int i = 2; i * i <= x; ++i) {
        if (x % i == 0) {
            return false;
        }
    }

    return true;
}

bool isArithmetic(int x, int y, int z) {
    return (y - x == z - y) && (x != y);
}

void checkLine(int x, int y, int z, int& totalPoints, int& winningLines) {
    if (isPrime(x) && isPrime(y) && isPrime(z)) {
        totalPoints += 10;
        ++winningLines;
    } else if (isArithmetic(x, y, z)) {
        totalPoints += 5;
        ++winningLines;
    }
}

void input(int& x) {
    do {
        std::cin >> x;
    } while (x <= 0);
}

int main() {
    int a1, a2, a3;
    int b1, b2, b3;
    int c1, c2, c3;

    input(a1); input(a2); input(a3);
    input(b1); input(b2); input(b3);
    input(c1); input(c2); input(c3);

    int totalPoints = 0;
    int winningLines = 0;

    // Редове
    checkLine(a1, a2, a3, totalPoints, winningLines);
    checkLine(b1, b2, b3, totalPoints, winningLines);
    checkLine(c1, c2, c3, totalPoints, winningLines);

    // Колони
    checkLine(a1, b1, c1, totalPoints, winningLines);
    checkLine(a2, b2, c2, totalPoints, winningLines);
    checkLine(a3, b3, c3, totalPoints, winningLines);

    // Диагонали
    checkLine(a1, b2, c3, totalPoints, winningLines);
    checkLine(c1, b2, a3, totalPoints, winningLines);

    std::cout << "Общ резултат: " << totalPoints << " точки\n";
    std::cout << "Печеливши линии: " << winningLines << '\n';

    if (winningLines >= 2) {
        std::cout << "Печелите джакпота!\n";
    } else {
        std::cout << "Не печелите джакпота.\n";
    }

    return 0;
}
