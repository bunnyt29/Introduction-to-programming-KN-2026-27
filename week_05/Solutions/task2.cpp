#include <iostream>

bool isPrime(int n) {
    for (int i = 2; i < n; ++i) {
        if(n%i == 0) {
            return false;
        }
    }

    return true;
}

int sumDigits(int n) {
    int result = 0;
    while(n > 0) {
        result += n%10;
        n /= 10;
    }

    return result;
}

bool isDoublePrime(int n) {
    if(isPrime(n)) {
        if(isPrime(sumDigits(n))){
            return true;
        } else {
            return false;
        }
    } else {
        return false;
    }
}

int main() {
    int start, end;
    std::cin >> start >> end;


    for (int i = start; i <= end; ++i) {
        if(isDoublePrime(i)) {
            return i;   
        }
    }
}