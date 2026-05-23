#include <iostream>
#include <ctime>
#include <fstream>

#include "EscapeRoomGame.h"
#include "LieDetectorGame.h"
#include "HangmanGame.h"

using namespace std;

int main()
{
    ofstream file("leaderboard.txt", ios::out | ios::trunc);
    file.close();
    srand((unsigned)time(0));

    int option;
   
    do
    {
        Game* currentGame;

        int randomChoice = rand() % 3;
        if (randomChoice == 0)
        {
            currentGame = new EscapeRoomGame();
        }
        else if (randomChoice == 1)
        {
            currentGame = new LieDetectorGame();
        }
        else
        {
            currentGame = new HangmanGame();
        }

        // Polymorphism using base class pointer
        currentGame->play();

        delete currentGame;

        cout << endl;
        cout << "1. Play Again" << endl;
        cout << "2. Exit" << endl;

        cin >> option;

    } while (option == 1);

    return 0;
}