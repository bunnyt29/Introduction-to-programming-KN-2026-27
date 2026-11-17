#include <iostream>
constexpr unsigned MAX_SIZE = 100;

void inputMatrix(int matrix[][MAX_SIZE], int rows) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < rows; ++j) {
            std::cin >> matrix[i][j];
        }
    }
}

int main() {
    int n;
    std::cin >> n;
    int matrix[MAX_SIZE][MAX_SIZE];
    inputMatrix(matrix, n);

    int sum = 0;
    for(int i=0; i<n; ++i) {
        for(int j=0; j<n; ++j) {
            if(i > j) {
                sum += matrix[i][j];
            }
        }
    }

    std::cout << sum;
    return 0;
}