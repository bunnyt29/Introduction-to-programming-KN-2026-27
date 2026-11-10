#include <iostream>
int sumOfDigits(int n) {
    int result = 0;
    while(n > 0) {
        result += n%10;
        n /= 10;
    }   
    
    return result;
}

bool isPrime(int n) {
    for (int i = 2; i < n; ++i) {
        if(n%i == 0) {
            return false;
        }
    }
    return true;
}

bool isDoublePrime(int n) {
    if(isPrime(n)) {
        if(isPrime(sumOfDigits(n))) {
            return true;
        } else {
            return false;
        }
    } else {
        return false;
    }

    return true;
}

int main() {
    int start;
    int end;

    std::cin >> start >> end;
    for (int i = start; i<=end; ++i) {
        if(isDoublePrime(i)) {
            std::cout << i;
        }
    }
}