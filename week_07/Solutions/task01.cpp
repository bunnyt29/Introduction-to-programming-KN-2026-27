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

    //Под главния диагонал, включително елементите по него.
    for (int i=0; i<n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i >= j)
            {
                std::cout << matrix[i][j] << " ";
            }
        }
    }
    std::cout << std::endl;

    //Над главния диагонал, без елементите по него.
    for (int i=0; i<n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i < j)
            {
                std::cout << matrix[i][j] << " ";
            }
        }
    }
    std::cout << std::endl;

    //Под второстепенния диагонал, без елементите по него.
    for(int i=0; i<n; ++i) {
        for(int j = 0; j < n; ++j){
            if(i > n - 1 - j) {
                std::cout << matrix[i][j] << " ";
            }
        }
    }
    std::cout << std::endl;

    //Над второстепенния диагонал, включително елементите по него.
        for(int i=0; i<n; ++i) {
        for(int j = 0; j < n; ++j){
            if(i <= n - 1 - j) {
                std::cout << matrix[i][j] << " ";
            }
        }
    }
    std::cout << std::endl;
}