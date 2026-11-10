#include <iostream>

const unsigned MAX_SIZE = 128;

void inputEls(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
}

void rotate(int arr[], int size, int k) {
    k %= size;
    for (int i = 0; i < k; ++i) {
        int last = arr[size - 1];
        for (int j = size - 1; j > 0; --j) {
            arr[j] = arr[j - 1];
        }
        arr[0] = last;
    }
}

int main() {
    int n;
    int k;
    std::cin >> n;

    int arr[MAX_SIZE];
    inputEls(arr, n);

    std::cin >> k;

    rotate(arr, n, k);

    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << ' ';
    }
    return 0;
}
