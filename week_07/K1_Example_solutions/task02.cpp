#include <iostream>

constexpr unsigned int MAX_SIZE = 100;

void inputMatrix(int flowers[][MAX_SIZE], unsigned rows, unsigned cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> flowers[i][j];
        }
    }
}

bool isPoppy(const int row[], unsigned size) {
    if(row[0] >= 0) {
        return false;
    } 

    for (int i = 1; i < size; ++i) {
        if(row[i - 1] <= row[i]) {
            return false;
        }
    }

    return true;
}

bool isNarcissus(const int row[], unsigned size) {
    long long sum = 0;
    for (int i = 1; i < size; ++i) {
        if(row[i] <= 0) {
            return false;
        } else {
            sum += row[i];
        }
    }

    return row[0] == sum;
}

int main() {
    unsigned int FLOWERS;
    unsigned int FLOWERS_SIZE;
    std::cin >> FLOWERS;
    std::cin >> FLOWERS_SIZE;
    if (FLOWERS > MAX_SIZE || FLOWERS_SIZE > MAX_SIZE ||
        FLOWERS_SIZE == 0) {
        return 1;
    }
    int matrix[MAX_SIZE][MAX_SIZE];

    int poppyAmount = 0;
    int narcissusAmount = 0;

    inputMatrix(matrix, FLOWERS, FLOWERS_SIZE);
    for (int i = 0; i < FLOWERS; ++i) {
        if(isPoppy(matrix[i], FLOWERS_SIZE)) {
            poppyAmount++;
        } else if (isNarcissus(matrix[i], FLOWERS_SIZE)) {
            narcissusAmount++;
        }
    }

    std::cout << "Poppy Amount " << poppyAmount << std::endl;
    std::cout << "Narcissus Amount " << narcissusAmount << std::endl;
}