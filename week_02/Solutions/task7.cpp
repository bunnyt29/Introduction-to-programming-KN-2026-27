#include <iostream>
#include <algorithm>

int main()
{
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;

    int left = std::max(a, c);
    int right = std::min(b, d);

    if (left < right)
    {
        std::cout << "[" << left << ", " << right << "]" << std::endl;
    } else if (left == right) {
        std::cout << "[" << left << "]";
    }
    else
    {
        std::cout << "No intersection" << std::endl;
    }

    return 0;
}