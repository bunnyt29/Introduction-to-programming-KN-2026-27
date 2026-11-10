#include <iostream>

bool hasDigitNine(int num)
{
    while (num > 0)
    {
        if (num % 10 == 9)
        {
            return true;
        }
        num /= 10;
    }
    return false;
}

int findNthWithoutNine(int n)
{
    int current = 0;
    int count = 0;

    while (count < n)
    {
        ++current;
        if (!hasDigitNine(current))
        {
            ++count;
        }
    }

    return current;
}

int main()
{
    int n;
    std::cout << "Въведете n: ";
    std::cin >> n;

    if (n <= 0)
    {
        std::cout << "Невалиден вход!" << std::endl;
        return 1;
    }

    std::cout << "Резултат: " << findNthWithoutNine(n) << std::endl;

    return 0;
}
