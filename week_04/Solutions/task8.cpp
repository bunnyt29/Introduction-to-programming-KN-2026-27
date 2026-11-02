#include <iostream>

int main() {
    unsigned long long n;
    do {
        std::cin >> n;
    } while (n <= 0);

    unsigned long long temp = n;
    unsigned long long power = 1;

    while (temp >= 10) {
        power *= 10;
        temp /= 10;
    }

    int maxLength = 0;
    unsigned long long bestSubnumber = 0;

    int currentLength = 0;
    unsigned long long currentSubnumber = 0;
    int prevDigit = -1;

    while (power > 0) {
        int digit = (n / power) % 10;
        power /= 10;

        if (currentLength == 0 || digit < prevDigit) {
            ++currentLength;
            currentSubnumber = currentSubnumber * 10 + digit;
        } else {
            currentLength = 1;
            currentSubnumber = digit;
        }

        if (currentLength > maxLength) {
            maxLength = currentLength;
            bestSubnumber = currentSubnumber;
        }

        prevDigit = digit;
    }

    std::cout << "Максимална дължина: " << maxLength << '\n';
    std::cout << "Подчисло: " << bestSubnumber << '\n';

    return 0;
}
