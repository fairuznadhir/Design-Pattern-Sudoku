#include "GameManager.h"
#include <iostream>

GameManager::GameManager(int boardSize) : board(boardSize), currentPlayerIndex(0) {}

void GameManager::startGame() {
    std::cout << "Welcome to Sudoku!" << std::endl;
