
#include <iostream>
using namespace std;

int readNumber()
{
    int n;

    do
    {
        cout << "Enter a number [100; 100000]: ";
        cin >> n;

        if (n < 100 || n > 100000)
        {
            cout << "Invalid input! Try again." << endl;
        }

    } while (n < 100 || n > 100000);

    return n;
}

int closestPowerOfTwo(int n)
{
    int lower = 1;

    while (lower * 2 <= n)
    {
        lower *= 2;
    }

    int upper = lower * 2;

    if (n - lower <= upper - n)
    {
        return lower;
    }

    return upper;
}

int main()
{
    int n = readNumber();

    cout << "Closest power of two: "
         << closestPowerOfTwo(n) << endl;

    return 0;
}
