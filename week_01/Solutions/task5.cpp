#include <iostream>

// ЗАБЕЛЕЖКА: Задачата може да се реши по-универсално с помощта на цикъл,
// така че програмата да работи с числа с произволен брой цифри,
// а не само с четирицифрени числа. Засега използваме този подход,
// тъй като все още не сме взели материала, необходим за такова решение.

int main() {
    int number;

    std::cout << "Enter a positive four-digit number: ";
    std::cin >> number;

    int units = number % 10;
    int tens = (number / 10) % 10;
    int hundreds = (number / 100) % 10;
    int thousands = number / 1000;

    std::cout << "Digits in reverse order: "
              << units << '-'
              << tens << '-'
              << hundreds << '-'
              << thousands << '\n';

    return 0;
}