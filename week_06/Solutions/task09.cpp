#include <iostream>

const unsigned MAX_SIZE = 128;

void inputMatrix(int matrix[][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> matrix[i][j];
        }
    }
}

int countDivisibleInRow(int matrix[][MAX_SIZE], int row, int cols, int n) {
    int count = 0;
    for (int j = 0; j < cols; ++j) {
        if (matrix[row][j] % n == 0) {
            ++count;
        }
    }
    return count;
}

int countValidRows(int matrix[][MAX_SIZE], int rows, int cols, int k, int n) {
    int count = 0;
    for (int i = 0; i < rows; ++i) {
        if (countDivisibleInRow(matrix, i, cols, n) > k) {
            ++count;
        }
    }
    return count;
}

int main() {
    int rows, cols;
    std::cin >> rows >> cols;

    int matrix[MAX_SIZE][MAX_SIZE];
    inputMatrix(matrix, rows, cols);

    int k, n;
    std::cin >> k >> n;

    std::cout << "Брой редове: " << countValidRows(matrix, rows, cols, k, n) << '\n';

    return 0;
}
