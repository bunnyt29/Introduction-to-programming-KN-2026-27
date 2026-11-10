#include <iostream>

int gcd(int a, int b)
{
    while (b != 0)
    {
        int remainder = a % b;
        a = b;
        b = remainder;
    }

    return a;
}

int main()
{
    int a, b, c, d;

    std::cout << "Enter four positive integers: ";
    std::cin >> a >> b >> c >> d;

    if (a <= 0 || b <= 0 || c <= 0 || d <= 0)
    {
        std::cout << "Invalid input!" << std::endl;
        return 1;
    }

    int result = gcd(a, b);
    result = gcd(result, c);
    result = gcd(result, d);

    std::cout << "GCD: " << result << std::endl;

    return 0;
}