#include <iostream>

unsigned long long getReversedNumber(int n) {
    int reversed = 0;

    while(n > 0) {
        reversed = reversed * 10 + n%10;
        n /= 10;
    }

    return reversed;
}

bool isPalindrome(int n) {
    return n == getReversedNumber(n);
}

void sumWithReversed(unsigned long long& n) {
    n = n + getReversedNumber(n);
}

unsigned palindromeSteps(unsigned long long n, unsigned limit) {
    int steps = 0;
    bool inLimit = false;

    if(isPalindrome(n)) {
        return 0;
    } else {
        for (int i = 1; i <= limit; ++i) {
            sumWithReversed(n);
            steps++;
            if(isPalindrome(n)) {
                inLimit = true;
                break;
            }
        }
    }

    if(inLimit) {
        return steps;
    } else {
        std::cout << "No palindrome found in limit!";
        return limit + 1;
    }
}

int main() {
    std::cout << palindromeSteps(68, 10);
    std::cout << palindromeSteps(87, 2);
    std::cout << palindromeSteps(878, 2);
}