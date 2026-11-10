#include <iostream>

const unsigned MAX_SIZE = 128;

void inputEls(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
}

void removeDuplicates(int arr[], int& size) {
    for(int i = 0; i < size; ++i) {
        for (int j = 1 + i; j < size; ++j) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < size - 1; ++k) {
                    arr[k] = arr[k + 1];
                }
                --size;
                --j;
            }
        }
    }

}

int main() {

    int n;
    std::cin >> n;

    int arr[MAX_SIZE];
    inputEls(arr, n);

    removeDuplicates(arr, n);

    std::cout << n;
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << ' ';
    }

    return 0;
}
