#include <iostream>

bool moveRobot(int& x, int& y, int dx, int dy)
{
    int newX = x + dx;
    int newY = y + dy;

    if (newX < -10 || newX > 10 ||
        newY < -10 || newY > 10)
    {
        return false;
    }

    x = newX;
    y = newY;

    return true;
}

int main()
{
    int x = 0, y = 0;
    int dx, dy;

    std::cout << "Initial position: (0, 0)" << std::endl;

    while (true)
    {
        std::cout << "Movement: ";
        std::cin >> dx >> dy;    

        if (dx == 0 && dy == 0)
            break;

        if (moveRobot(x, y, dx, dy))
        {
            std::cout << "Position: ("
                 << x << ", " << y << ")" << std::endl;
        }
        else
        {
            std::cout << "Command rejected. Position: ("
                 << x << ", " << y << ")" << std::endl;
        }
    }

    return 0;
}
