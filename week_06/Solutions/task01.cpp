#include <iostream>

const unsigned MAX_SIZE = 128;

void inputEls(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
}

bool hasDiffSign(int a, int b) {
    return (a >= 0 && b < 0) || (a < 0 && b >= 0);
}

void outputElements(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        if(hasDiffSign(arr[i], arr[i + 1])) {
            std::cout << arr[i] << " ";
        }
    }
}



int main() {
    int n;
    std::cin >> n;

    int arr[MAX_SIZE];
    inputEls(arr, n);

    outputElements(arr ,n);

    return 0;
}
