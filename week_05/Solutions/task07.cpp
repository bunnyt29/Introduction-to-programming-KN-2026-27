
#include <iostream>
using namespace std;

bool isFourDigit(int code)
{
    return code >= 1000 && code <= 9999;
}

bool hasDifferentDigits(int code)
{
    int d1 = code / 1000;
    int d2 = (code / 100) % 10;
    int d3 = (code / 10) % 10;
    int d4 = code % 10;

    return d1 != d2 && d1 != d3 && d1 != d4 &&
           d2 != d3 && d2 != d4 && d3 != d4;
}

bool hasEqualSums(int code)
{
    int d1 = code / 1000;
    int d2 = (code / 100) % 10;
    int d3 = (code / 10) % 10;
    int d4 = code % 10;

    return d1 + d2 == d3 + d4;
}

bool isFirstGreater(int code)
{
    int first = code / 1000;
    int last = code % 10;

    return first > last;
}

bool isValidCode(int code)
{
    return isFourDigit(code) &&
           hasDifferentDigits(code) &&
           hasEqualSums(code) &&
           isFirstGreater(code);
}

int main()
{
    const int MAX_ATTEMPTS = 5;
    bool unlocked = false;

    for (int attempt = 1; attempt <= MAX_ATTEMPTS; attempt++)
    {
        int code;

        cout << "Enter code: ";
        cin >> code;

        if (isValidCode(code))
        {
            cout << "Safe unlocked!" << endl;
            unlocked = true;
            break;
        }

        cout << "Invalid code!" << endl;
    }

    if (!unlocked)
    {
        cout << "Safe remains locked!" << endl;
    }

    return 0;
}
