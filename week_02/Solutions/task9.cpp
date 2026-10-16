#include <iostream>
#include <cmath>

int main() {
    int x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;

    int dx = std::abs(x1 - x2);
    int dy = std::abs(y1 - y2);

    if (dx == 0 && dy == 0) {
        std::cout << "Invalid input - it's on the same field!\n";
        return 0;
    }

    bool rook = (dx == 0 || dy == 0);

    bool bishop = (dx == dy);

    bool queen = rook || bishop;

    bool knight = (dx == 1 && dy == 2) || (dx == 2 && dy == 1);

    std::cout << "Rook: " << rook << '\n';
    std::cout << "Bishop: " << bishop << '\n';
    std::cout << "Queen: " << queen << '\n';
    std::cout << "Knight: " << knight << '\n';

    return 0;
}