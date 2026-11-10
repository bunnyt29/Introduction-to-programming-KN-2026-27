#include <iostream>

const unsigned MAX_SIZE = 128;

void inputEls(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
}

void outputDoubles(int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (arr[i] * arr[j] == target) {
                std::cout << "(" << arr[i] << " " << arr[j] << ")" << std::endl;
            }
        }
    }
}

int main() {
    int n;
    int target;
    std::cin >> n;

    int arr[MAX_SIZE];
    inputEls(arr, n);

    std::cin >> target;
    outputDoubles(arr, n, target);


    return 0;
}
