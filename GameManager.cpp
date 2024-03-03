#include "GameManager.h"
#include <iostream>

GameManager::GameManager(int boardSize) : board(boardSize), currentPlayerIndex(0) {}

void GameManager::startGame() {
    std::cout << "Welcome to Sudoku!" << std::endl;
    Player player1("Player 1");
    Player player2("Player 2");
    players.push_back(player1);
    players.push_back(player2);
