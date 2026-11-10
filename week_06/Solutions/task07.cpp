#include <iostream>

const unsigned MAX_SIZE = 128;

void inputMatrix(int matrix[][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> matrix[i][j];
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

void maxRowEl(int matrix[][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        int max = matrix[i][0];
        for (int j = 1; j < cols; ++j) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
        std::cout << max << " ";
    }
}

void maxColEl(int matrix[][MAX_SIZE], int rows, int cols) {
    for (int j = 0; j < cols; ++j) {
        int max = matrix[0][j];
        for (int i = 1; i < rows; ++i) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
        std::cout << max << " ";
    }
}

int main() {
    int rows, cols;
    std::cin >> rows >> cols;

    int matrix[MAX_SIZE][MAX_SIZE];
    inputMatrix(matrix, rows, cols);

    std::cout << "Максимуми по редове: ";
    maxRowEl(matrix, rows, cols);
    std::cout << '\n';

    std::cout << "Максимуми по колони: ";
    maxColEl(matrix, rows, cols);
    std::cout << '\n';

    return 0;
}
