#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

#include "Player.h"
#include "Board.h"

class GameManager {
private:
    Board board;
    Player player;

public:
    GameManager(int boardSize, const std::string& playerName);
    void startGame();
    void getPlayerInput();
};

#endif
