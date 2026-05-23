=============================
     GAME ARCADE PROJECT
=============================

GAME: ESCAPE ROOM

DESCRIPTION:
A console-based Escape Room game developed in C++ using Object-Oriented Programming (OOP).
The player must explore rooms, collect items, and make correct choices to escape.

HOW TO PLAY:
- Run the program using a C++ compiler (Code::Blocks / VS Code).
- The game starts from main.cpp automatically.
- Enter numbers shown in the menu to choose actions.
- Collect items like keys to progress.
- Reach the final room and choose the correct option to escape.

RULES:
- Player starts with no items.
- Some choices give items required to progress.
- Wrong choices may stop progress or reduce success chances.
- Game ends when player escapes or fails.

FEATURES:
- Interactive text-based gameplay
- Inventory system (items collected)
- Score system
- File handling for leaderboard
- Random choice-based progression

REQUIRED FILES:
Game.h
EscapeRoomGame.h
EscapeRoomGame.cpp
main.cpp
leaderboard.txt

BUILD INSTRUCTIONS:
Compile using:
g++ main.cpp EscapeRoomGame.cpp -o GameArcade.exe

RUN:
Execute the compiled file to start the game.

NOTES:
- Fully console-based game.
- Input must be numeric based on menu options.
- Leaderboard updates after each run.
- Uses polymorphism via Game base class.
