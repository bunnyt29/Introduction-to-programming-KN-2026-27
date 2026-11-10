#include <iostream>

const unsigned MAX_SIZE = 128;

void inputMatrix(int matrix[][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> matrix[i][j];
        }
    }
}

bool isMinInRow(int matrix[][MAX_SIZE], int row, int col, int cols) {
    for (int j = 0; j < cols; ++j) {
        if (matrix[row][j] < matrix[row][col]) {
            return false;
        }
    }
    return true;
}

bool isMaxInRow(int matrix[][MAX_SIZE], int row, int col, int cols) {
    for (int j = 0; j < cols; ++j) {
        if (matrix[row][j] > matrix[row][col]) {
            return false;
        }
    }
    return true;
}

bool isMinInCol(int matrix[][MAX_SIZE], int row, int col, int rows) {
    for (int i = 0; i < rows; ++i) {
        if (matrix[i][col] < matrix[row][col]) {
            return false;
        }
    }
    return true;
}

bool isMaxInCol(int matrix[][MAX_SIZE], int row, int col, int rows) {
    for (int i = 0; i < rows; ++i) {
        if (matrix[i][col] > matrix[row][col]) {
            return false;
        }
    }
    return true;
}

bool isSaddlePoint(int matrix[][MAX_SIZE], int row, int col, int rows, int cols) {
    bool type1 = isMinInRow(matrix, row, col, cols) && isMaxInCol(matrix, row, col, rows);
    bool type2 = isMaxInRow(matrix, row, col, cols) && isMinInCol(matrix, row, col, rows);
    return type1 || type2;
}

void findSaddlePoints(int matrix[][MAX_SIZE], int rows, int cols) {
    bool found = false;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (isSaddlePoint(matrix, i, j, rows, cols)) {
                std::cout << "Седлова точка: стойност " << matrix[i][j]
                          << " на позиция (" << i << ", " << j << ")\n";
                found = true;
            }
        }
    }

    if (!found) {
        std::cout << "Няма намерени седлови точки\n";
    }
}

int main() {
    int rows, cols;
    std::cin >> rows >> cols;

    int matrix[MAX_SIZE][MAX_SIZE];
    inputMatrix(matrix, rows, cols);

    findSaddlePoints(matrix, rows, cols);

    return 0;
}
