#include <iostream>
#include <cstdlib>
#include <ctime>

int drawCard(char& cardLabel)
{
    int cardIndex = std::rand() % 13; // 0 to 12

    if (cardIndex >= 0 && cardIndex <= 8) // 2 to 10
    {
        cardLabel = '0' + (cardIndex + 2); // '2'..'9' or ':' for 10
        return cardIndex + 2;
    }
    else if (cardIndex == 9)
    {
        cardLabel = 'J';
        return 10;
    }
    else if (cardIndex == 10)
    {
        cardLabel = 'Q';
        return 10;
    }
    else if (cardIndex == 11)
    {
        cardLabel = 'K';
        return 10;
    }
    else // cardIndex == 12
    {
        cardLabel = 'A';
        return 11;
    }
}

void printCard(char cardLabel)
{
    if (cardLabel == '0' + 10)
    {
        std::cout << "10";
    }
    else
    {
        std::cout << cardLabel;
    }
}

void addCard(int& totalPoints, int& acesCount, char cardLabel, int cardValue)
{
    totalPoints += cardValue;
    if (cardLabel == 'A')
    {
        ++acesCount;
    }

    while (totalPoints > 21 && acesCount > 0)
    {
        totalPoints -= 10;
        --acesCount;
    }
}

int playPlayerTurn()
{
    std::cout << "--- Ход на играча ---\n";

    char cardLabel;
    int points = 0;
    int aces = 0;

    int cardVal = drawCard(cardLabel);
    addCard(points, aces, cardLabel, cardVal);

    std::cout << "Изтеглихте първа карта: ";
    printCard(cardLabel);
    std::cout << '\n';

    while (points <= 21)
    {
        std::cout << "Точки: " << points << " | Действие (H/S): ";
        char action;
        std::cin >> action;

        if (action == 'H' || action == 'h')
        {
            cardVal = drawCard(cardLabel);
            addCard(points, aces, cardLabel, cardVal);
            std::cout << "Изтеглихте: ";
            printCard(cardLabel);
            std::cout << '\n';
        }
        else if (action == 'S' || action == 's')
        {
            std::cout << "Спряхте с " << points << " точки.\n\n";
            return points;
        }
        else
        {
            std::cout << "Невалидно действие! Използвайте H (Hit) или S (Stand).\n";
        }
    }

    std::cout << "Прегоряхте с " << points << " точки!\n\n";
    return points;
}

int playDealerTurn()
{
    std::cout << "--- Ход на крупието ---\n";

    char cardLabel;
    int points = 0;
    int aces = 0;

    while (points < 17)
    {
        int cardVal = drawCard(cardLabel);
        addCard(points, aces, cardLabel, cardVal);

        std::cout << "Крупието тегли: ";
        printCard(cardLabel);
        std::cout << " (Общо: " << points << ")\n";
    }

    std::cout << "Крупието приключи със сбор: " << points << "\n\n";
    return points;
}

void determineWinner(int playerPoints, int dealerPoints)
{
    if (playerPoints > 21)
    {
        std::cout << "Резултат: Крупието печели!\n";
    }
    else if (dealerPoints > 21)
    {
        std::cout << "Резултат: Играчът печели!\n";
    }
    else if (playerPoints > dealerPoints)
    {
        std::cout << "Резултат: Играчът печели!\n";
    }
    else if (dealerPoints > playerPoints)
    {
        std::cout << "Резултат: Крупието печели!\n";
    }
    else
    {
        std::cout << "Резултат: Равенство (Push)!\n";
    }
}

int main()
{
    std::srand(std::time(0));

    int playerPoints = playPlayerTurn();
    if (playerPoints > 21)
    {
        determineWinner(playerPoints, 0);
        return 0;
    }

    int dealerPoints = playDealerTurn();
    determineWinner(playerPoints, dealerPoints);

    return 0;
}
