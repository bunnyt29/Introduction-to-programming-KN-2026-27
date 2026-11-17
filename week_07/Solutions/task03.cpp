#include <iostream>
constexpr unsigned MAX_SIZE = 100;

void inputMatrix(int matrix[][MAX_SIZE], int rows) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < rows; ++j) {
            std::cin >> matrix[i][j];
        }
    }
}

long long sumOfRow(const int row[], unsigned size) {
    long long sum = 0;
    for (int i=0; i<size; ++i) {
        sum += row[i];
    }

    return sum;
}

long long sumOfCol(const int matrix[][MAX_SIZE], unsigned col, unsigned rows) {
    long long sum = 0;
    for (int i=0; i<rows; ++i) {
        sum += matrix[i][col];
    }

    return sum;
}

void findAndPrintMaxRowAndCol(const int matrix[][MAX_SIZE], int n) {
    int indexOfMaxRow = 0;
    int indexOfMaxCol = 0;
    long long maxSumOfRow = sumOfRow(matrix[0], n);
    long long maxSumOfCol = sumOfCol(matrix, 0, n);

    for (int i = 1; i < n; ++i) {
        long long currentRowSum = sumOfRow(matrix[i], n);
        if(currentRowSum > maxSumOfRow) {
            maxSumOfRow = currentRowSum;
            indexOfMaxRow = i;
        }

        long long currentColSum = sumOfCol(matrix, i, n);
        if(currentColSum > maxSumOfCol) {
            maxSumOfCol = currentColSum;
            indexOfMaxCol = i;
        }
    }

    std::cout << indexOfMaxRow << " " << indexOfMaxCol << std::endl;
}

int main() {
    int n;
    std::cin >> n;
    int matrix[MAX_SIZE][MAX_SIZE];
    inputMatrix(matrix, n);
    findAndPrintMaxRowAndCol(matrix, n);

    return 0;
}