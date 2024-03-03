#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

#include "Player.h"
#include "Board.h"

class GameManager {
private:
    Board board;

public:
    GameManager(int boardSize);
    void startGame();
    bool checkWin();
};

#endif
