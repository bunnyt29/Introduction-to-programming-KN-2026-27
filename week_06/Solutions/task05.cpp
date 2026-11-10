#include <iostream>

const unsigned MAX_SIZE = 128;

void inputEls(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
}

void longestIncreasingSubsequence(int arr[], int size, int& bestStart, int& maxLen) {
    maxLen = 1;
    bestStart = 0;

    int currentLen = 1;
    int currentStart = 0;

    for (int i = 1; i < size; ++i) {
        if (arr[i] > arr[i - 1]) {
            ++currentLen;
        } else {
            if (currentLen > maxLen) {
                maxLen = currentLen;
                bestStart = currentStart;
            }
            currentLen = 1;
            currentStart = i;
        }
    }

    if (currentLen > maxLen) {
        maxLen = currentLen;
        bestStart = currentStart;
    }
}

int main() {
    int n;
    std::cin >> n;

    int arr[MAX_SIZE];
    inputEls(arr, n);

    int bestStart = 0;
    int maxLen = 0;
    longestIncreasingSubsequence(arr, n, bestStart, maxLen);

    std::cout << "Максимална дължина: " << maxLen << '\n';
    std::cout << "Подредица: ";
    for (int i = 0; i < maxLen; ++i) {
        std::cout << arr[bestStart + i] << " ";
    }
    std::cout << '\n';

    return 0;
}
