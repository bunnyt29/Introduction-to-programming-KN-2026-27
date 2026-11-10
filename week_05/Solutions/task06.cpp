
#include <iostream>

bool isPrime(int n)
{
    if (n < 2)
        return false;

    for (int i = 2; i <= n / i; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

void printPrimes(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
            std::cout << i << " ";
    }

    std::cout << std::endl;
}

bool findPrimePair(int n, int& first, int& second)
{
    for (int i = 2; i <= n / 2; ++i)
    {
        if (isPrime(i) && isPrime(n - i))
        {
            first = i;
            second = n - i;
            return true;
        }
    }

    return false;
}

int main()
{
    int n;

    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    if (n <= 0)
    {
        std::cout << "Invalid input!" << std::endl;
        return 1;
    }

    std::cout << "Prime numbers up to " << n << ": ";
    printPrimes(n);

    int first, second;

    if (findPrimePair(n, first, second))
    {
        std::cout << n << " = "
             << first << " + " << second << std::endl;
    }
    else
    {
        std::cout << n << " cannot be represented as a sum of two prime numbers." << std::endl;
    }

    return 0;
}
