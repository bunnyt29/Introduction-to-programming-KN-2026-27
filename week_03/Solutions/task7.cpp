#include <iostream>

int main() {
    int number;
    int count = 0;
    long long sum = 0;
    int minimum = 0;
    int maximum = 0;

    while (true) {
        std::cin >> number;

        if (number == 0) {
            break;
        }

        if (count == 0) {
            minimum = number;
            maximum = number;
        } else {
            if (number < minimum) {
                minimum = number;
            }

            if (number > maximum) {
                maximum = number;
            }
        }

        sum += number;
        ++count;
    }

    if (count == 0) {
        std::cout << "No data";
    } else {
        double average = sum;
        average /= count;

        std::cout << "Count: " << count << '\n';
        std::cout << "Sum: " << sum << '\n';
        std::cout << "Min: " << minimum << '\n';
        std::cout << "Max: " << maximum << '\n';
        std::cout << "Average: " << average;
    }

    return 0;
}