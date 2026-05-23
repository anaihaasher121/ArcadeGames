#include <iostream>
#include <fstream>

#include "EscapeRoomGame.h"

using namespace std;

EscapeRoomGame::EscapeRoomGame() : Game("Escape Room")
{
    score = 0;
}

void EscapeRoomGame::showInventory()
{
    cout << endl;
    cout << "Inventory:" << endl;

    for (string item : inventory)
    {
        cout << "- " << item << endl;
    }
}

void EscapeRoomGame::room2()
{
    int choice;

    cout << endl;
    cout << "===== ROOM 2 =====" << endl;

    cout << "1. Open cabinet" << endl;
    cout << "2. Read note" << endl;
    cout << "3. Open locked door" << endl;

    cin >> choice;

    if (choice == 1)
    {
        cout << "You found a flashlight!" << endl;

        inventory.push_back("Flashlight");

        score += 10;
    }

    else if (choice == 2)
    {
        cout << "The note says: Escape is near." << endl;

        score += 5;
    }

    else
    {
        if (inventory.size() > 0)
        {
            cout << "You unlocked the door using the rusty key!" << endl;

            score += 10;
        }

        else
        {
            cout << "You need a key first!" << endl;

            return;
        }
    }

    showInventory();

    room3();
}

void EscapeRoomGame::room3()
{
    int choice;

    cout << endl;
    cout << "===== FINAL ROOM =====" << endl;

    cout << "1. Escape through hallway" << endl;
    cout << "2. Enter dark tunnel" << endl;

    cin >> choice;

    if (choice == 1)
    {
        cout << "YOU ESCAPED SUCCESSFULLY!" << endl;

        score += 20;
    }

    else
    {
        cout << "You got lost in the tunnel." << endl;
    }

    cout << endl;
    cout << "Final Score: " << score << endl;

    // File handling for leaderboard
    ofstream file("leaderboard.txt", ios::app);

    file << playerName
        << " | Escape Room | "
        << score << endl;

    file.close();

    // Display leaderboard
    ifstream readFile("leaderboard.txt");

    string line;

    cout << endl;
    cout << "===== LEADERBOARD =====" << endl;

    while (getline(readFile, line))
    {
        cout << line << endl;
    }

    readFile.close();
}

void EscapeRoomGame::play()
{
    int choice;

    cout << "======================" << endl;
    cout << "     ESCAPE ROOM      " << endl;
    cout << "======================" << endl;

    cout << "Enter your name: ";
    cin >> playerName;

    cout << "You wake up in a locked room." << endl;

    cout << "1. Open drawer" << endl;
    cout << "2. Check window" << endl;
    cout << "3. Look under bed" << endl;

    cin >> choice;

    if (choice == 1)
    {
        cout << "You found a rusty key!" << endl;

        inventory.push_back("Rusty Key");

        score += 10;
    }

    else if (choice == 2)
    {
        cout << "The window is locked." << endl;
    }

    else
    {
        cout << "You found a secret note!" << endl;

        inventory.push_back("Secret Note");

        score += 5;
    }

    showInventory();

    if (choice == 1 || choice == 3)
    {
        room2();
    }

    else
    {
        cout << "Game Over!" << endl;
    }
}

// AI tools used:
// ChatGPT - brainstorming and debugging assistance