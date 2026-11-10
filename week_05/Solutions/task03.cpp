#include <iostream>

int getCoins(int& amount, int denomination) {
    int count = amount/denomination;
    amount = amount%denomination;

    return count;
}

int main() {
    int amount;
    std::cin >> amount;

    int coins50 = getCoins(amount, 50);
    int coins20 = getCoins(amount, 20);
    int coins10 = getCoins(amount, 10);
    int coins5 = getCoins(amount, 5);
    int coins2 = getCoins(amount, 2);
    int coins1 = getCoins(amount, 1);

    int total = coins50 + coins20 + coins10
              + coins5 + coins2 + coins1;

    std::cout << "50 st.: " << coins50 << std::endl;
    std::cout << "20 st.: " << coins20 << std::endl;
    std::cout << "10 st.: " << coins10 << std::endl;
    std::cout << "5 st.: " << coins5 << std::endl;
    std::cout << "2 st.: " << coins2 << std::endl;
    std::cout << "1 st.: " << coins1 << std::endl;

    std::cout << "Total coins: " << total << std::endl;

    return 0;
}