#include <iostream>

constexpr int MAX_SIZE = 32;

void inputMatrix(int matrix[][MAX_SIZE], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> matrix[i][j];
        }
    }
}

bool containsDigitOne(int number) {
    // Превръщаме в long long преди смяна на знака, за да избегнем overflow при INT_MIN
    long long num = number;
    if (num < 0) {
        num = -num;
    }

    while (num > 0) {
        if (num % 10 == 1) {
            return true;
        }
        num /= 10;
    }

    return false;
}

long long productBelowSecondaryDiagonal(const int matrix[][MAX_SIZE], int n) {
    long long product = 1;

    for (int i = 1; i < n; ++i) {
        for (int j = 1; j < n; ++j) {
            if((i > n - 1 - j) && containsDigitOne(matrix[i][j])) {
                product *= matrix[i][j];
            }
        }
    }

    return product;
}

int main() {
    int n;
    std::cin >> n;

    int matrix[MAX_SIZE][MAX_SIZE];
    inputMatrix(matrix, n);

    std::cout << productBelowSecondaryDiagonal(matrix, n) << std::endl;

    return 0;
}