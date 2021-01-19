//  GameState.cpp
//  TicTacToe

#include <iostream>
#include "globals.h"
#include "GameState.h"
using namespace std;

// ECE244 Student: add you code below
GameState::GameState() {
  selectedRow = 0;
  selectedColumn = 0;
  moveValid = true;
  gameOver = false;
  winCode = 0;
  turn = 1;
  
  for(int i=0; i < boardSize; i++) {
    for(int j=0; j < boardSize; j++) {
      gameBoard[i][j] = Empty;
    }
  }
}

int GameState::get_selectedRow() {
  return selectedRow;
}

int GameState::get_selectedColumn() {
  return selectedColumn;
}

void GameState::set_selectedRow(int value) {
  selectedRow = value;
}

void GameState::set_selectedColumn(int value) {
  selectedColumn = value;
}

bool GameState::get_moveValid() {
  return moveValid;
}

void GameState::set_moveValid(bool value) {
  moveValid = value;
}

bool GameState::get_gameOver() {
  return gameOver;
}

void GameState::set_gameOver(bool value) {
  gameOver = value;
}

int GameState::get_winCode() {
  return winCode;
}

void GameState::set_winCode(int value) {
  winCode = value;
}

bool GameState::get_turn() {
  return turn;
}

void GameState::set_turn(bool value) {
  turn = value;
}

int GameState::get_gameBoard(int row, int col) {
  return gameBoard[row][col];
}

void GameState::set_gameBoard(int row, int col, int value) {
  if(moveValid == true) {
    if(value == 1) { //X turn.
      gameBoard[row][col] = 1;
    }
    else if(value == 0) { //O turn. 
      gameBoard[row][col] = -1;
    }
  }
}
