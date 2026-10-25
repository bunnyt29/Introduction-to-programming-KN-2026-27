#include <iostream>

int main() {
    int n;

    do {
        std::cout << "Enter n (n >= 3): ";
        std::cin >> n;
    } while (n < 3);

    int previous;
    std::cin >> previous;

    int largest = 0;
    int secondLargest = 0;

    bool hasLargest = false;
    bool hasSecondLargest = false;

    for (int i = 1; i < n; ++i) {
        int current;
        std::cin >> current;

        int difference = current - previous;

        if (difference < 0) {
            difference = -difference;
        }

        if (!hasLargest || difference > largest) {
            if (hasLargest) {
                secondLargest = largest;
                hasSecondLargest = true;
            }

            largest = difference;
            hasLargest = true;
        } else if (difference < largest &&
                   (!hasSecondLargest || difference > secondLargest)) {
            secondLargest = difference;
            hasSecondLargest = true;
        }

        previous = current;
    }

    if (hasSecondLargest) {
        std::cout << secondLargest;
    } else {
        std::cout << "No second distinct difference";
    }

    return 0;
}