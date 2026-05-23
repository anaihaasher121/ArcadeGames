#pragma once

#include "Game.h"
#include <vector>

using namespace std;

class EscapeRoomGame : public Game
{
private:

    vector<string> inventory;

    int score;

    string playerName;

public:

    EscapeRoomGame();

    void play();

    void showInventory();

    void room2();

    void room3();
};