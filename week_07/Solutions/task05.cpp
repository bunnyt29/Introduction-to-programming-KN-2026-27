#include <iostream>

constexpr int MAX_SIZE = 1024;

void inputMatrix(int matrix[][MAX_SIZE], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> matrix[i][j];
        }
    }
}

long long sumOfMainDiagonal(const int matrix[][MAX_SIZE], int size) {
    long long sum = 0;
    for (int i = 0; i<size; ++i) {
        sum += matrix[i][i];
    }

    return sum;
}

long long sumUnderMainDiagonal(const int matrix[][MAX_SIZE], int size) {
    long long sum = 0;

    for (int i = 0; i<size; ++i) {
        for (int j = 0; j < size; ++j) {
            if(i > j) {
                sum += matrix[i][j];
            }
        }
    }
}

int sumOverMainDiagonal(const int matrix[][MAX_SIZE], int size) {
    long long sum = 0;

    for (int i = 0; i<size; ++i) {
        for (int j = 0; j < size; ++j) {
            if(i < j) {
                sum += matrix[i][j];
            }
        }
    }
}

long long sumOfSecondaryDiagonal(const int matrix[][MAX_SIZE], int size) {
    long long sum = 0;
    for (int i = 0; i<size; ++i) {
        sum += matrix[i][size - 1 -i];
    }

    return sum;
}

bool isMatrixBalanced(const int matrix[][MAX_SIZE], int size) {
    bool areHalvesEqual = sumOverMainDiagonal(matrix, size) == sumUnderMainDiagonal(matrix, size);
    bool areDiagonalsEqual = sumOfMainDiagonal(matrix, size) == sumOfSecondaryDiagonal(matrix, size);

    return areHalvesEqual && areDiagonalsEqual;
}

int main() {
    int n;
    std::cin >> n;

    if (n < 1 || n > MAX_SIZE) {
        std::cout << -1 << std::endl;
        return 0;
    }

    static int matrix[MAX_SIZE][MAX_SIZE];
    inputMatrix(matrix, n);

    std::cout << isMatrixBalanced(matrix, n) << std::endl;

    return 0;
}