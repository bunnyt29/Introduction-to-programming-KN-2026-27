#include <iostream>

const unsigned MAX_SIZE = 128;

void inputMatrix(int matrix[][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> matrix[i][j];
        }
    }
}

void outputBorder(int matrix[][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < cols; ++i) {
        std::cout << matrix[0][i] << " ";
    }
    for (int i = 1; i < rows; ++i) {
        std::cout << matrix[i][cols - 1] << " ";
    }
    for (int i = cols - 2; i >= 0; --i) {
        std::cout << matrix[rows - 1][i] << " ";
    }
    for (int i = rows - 2; i >= 1; --i) {
        std::cout << matrix[i][0] << " ";
    }
    std::cout << '\n';
}

int main() {
    int rows, cols;
    std::cin >> rows >> cols;

    int matrix[MAX_SIZE][MAX_SIZE];
    inputMatrix(matrix, rows, cols);

    outputBorder(matrix, rows, cols);

    return 0;
}
