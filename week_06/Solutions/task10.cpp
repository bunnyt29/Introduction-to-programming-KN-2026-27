#include <iostream>

const unsigned MAX_SIZE = 128;

void inputMatrix(int matrix[][MAX_SIZE], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> matrix[i][j];
        }
    }
}

int rowSum(int matrix[][MAX_SIZE], int row, int n) {
    int sum = 0;
    for (int j = 0; j < n; ++j) {
        sum += matrix[row][j];
    }
    return sum;
}

int colSum(int matrix[][MAX_SIZE], int col, int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += matrix[i][col];
    }
    return sum;
}

int mainDiagSum(int matrix[][MAX_SIZE], int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += matrix[i][i];
    }
    return sum;
}

int secondaryDiagSum(int matrix[][MAX_SIZE], int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += matrix[i][n - 1 - i];
    }
    return sum;
}

bool isMagicSquare(int matrix[][MAX_SIZE], int n, int& magicSum) {
    magicSum = mainDiagSum(matrix, n);

    if (secondaryDiagSum(matrix, n) != magicSum) {
        return false;
    }

    for (int i = 0; i < n; ++i) {
        if (rowSum(matrix, i, n) != magicSum) {
            return false;
        }
    }

    for (int j = 0; j < n; ++j) {
        if (colSum(matrix, j, n) != magicSum) {
            return false;
        }
    }

    return true;
}

int main() {
    int n;
    std::cin >> n;

    int matrix[MAX_SIZE][MAX_SIZE];
    inputMatrix(matrix, n);

    int sum = 0;
    if (isMagicSquare(matrix, n, sum)) {
        std::cout << "Матрицата е магически квадрат! (Магическа сума: " << sum << ")\n";
    } else {
        std::cout << "Матрицата НЕ е магически квадрат.\n";
    }

    return 0;
}
