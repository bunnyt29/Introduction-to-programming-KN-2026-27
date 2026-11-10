#include <iostream>

const unsigned MAX_SIZE = 128;

void inputMatrix(int matrix[][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> matrix[i][j];
        }
    }
}

void transposeMatrix(int matrix[][MAX_SIZE], int transposed[][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

void outputMatrix(int matrix[][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << '\n';
    }
}

int main() {
    int rows, cols;
    std::cin >> rows >> cols;

    int matrix[MAX_SIZE][MAX_SIZE];
    int transposed[MAX_SIZE][MAX_SIZE];
    inputMatrix(matrix, rows, cols);

    transposeMatrix(matrix, transposed, rows, cols);

    outputMatrix(transposed, cols, rows);

    return 0;
}
