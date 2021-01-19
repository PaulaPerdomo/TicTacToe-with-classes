//  playMove.cpp
//  TicTacToe

#include <iostream>
#include "globals.h"
#include "GameState.h"
using namespace std;

void playMove(GameState& game_state) {

  //moveValid logic:
  if(game_state.get_gameBoard(game_state.get_selectedRow(), game_state.get_selectedColumn()) == X || game_state.get_gameBoard(game_state.get_selectedRow(), game_state.get_selectedColumn()) == O) {
    game_state.set_moveValid(false);
  }
  else {
    game_state.set_moveValid(true);
  }

  game_state.set_gameBoard(game_state.get_selectedRow(), game_state.get_selectedColumn(), game_state.get_turn());

  //Checking if turn.
  if(game_state.get_moveValid() == true) {
    if(game_state.get_turn() == 1) {
      game_state.set_turn(0);
    } 
    else if(game_state.get_turn() != 1) {
      game_state.set_turn(1);
    }
  }
 
  //Checking if won.
  //ROWS:
  if(game_state.get_gameBoard(0, 0) != Empty && game_state.get_gameBoard(0, 0) == game_state.get_gameBoard(0, 1) && game_state.get_gameBoard(0, 0) == game_state.get_gameBoard(0, 2)) {
    game_state.set_winCode(1);
  }
  if(game_state.get_gameBoard(1, 0) != Empty && game_state.get_gameBoard(1, 0) == game_state.get_gameBoard(1, 1) && game_state.get_gameBoard(1, 0) == game_state.get_gameBoard(1, 2)) {
    game_state.set_winCode(2);
  }
  if(game_state.get_gameBoard(2, 0) != Empty && game_state.get_gameBoard(2, 0) == game_state.get_gameBoard(2, 1) && game_state.get_gameBoard(2, 0) == game_state.get_gameBoard(2, 2)) {
    game_state.set_winCode(3);
  }
  //COLUMNS:
  if(game_state.get_gameBoard(0, 0) != Empty && game_state.get_gameBoard(0, 0) == game_state.get_gameBoard(1, 0) && game_state.get_gameBoard(0, 0) == game_state.get_gameBoard(2, 0)){
    game_state.set_winCode(4);
  }
  if(game_state.get_gameBoard(0, 1) != Empty && game_state.get_gameBoard(0, 1) == game_state.get_gameBoard(1, 1) && game_state.get_gameBoard(0, 1) == game_state.get_gameBoard(2, 1)) {
    game_state.set_winCode(5);
  }
  if(game_state.get_gameBoard(0, 2) != Empty && game_state.get_gameBoard(0, 2) == game_state.get_gameBoard(1, 2) && game_state.get_gameBoard(0, 2) == game_state.get_gameBoard(2, 2)) {
    game_state.set_winCode(6);
  }
  //DIAGONALS:
  if(game_state.get_gameBoard(0, 0) != Empty && game_state.get_gameBoard(0, 0) == game_state.get_gameBoard(1, 1) && game_state.get_gameBoard(0, 0) == game_state.get_gameBoard(2, 2)) {
    game_state.set_winCode(7);
  }
  if(game_state.get_gameBoard(0, 2) != Empty && game_state.get_gameBoard(0, 2) == game_state.get_gameBoard(1, 1) && game_state.get_gameBoard(0, 2) == game_state.get_gameBoard(2, 0)) {
    game_state.set_winCode(8);
  }

  if(game_state.get_winCode() == 1) {
    game_state.set_gameOver(true);
  }
  else if(game_state.get_winCode() == 2) {
    game_state.set_gameOver(true);
  }
  else if(game_state.get_winCode() == 3) {
    game_state.set_gameOver(true);
  }
  else if(game_state.get_winCode() == 4) {
    game_state.set_gameOver(true);
  }
  else if(game_state.get_winCode() == 5) {
    game_state.set_gameOver(true);
  }
  else if(game_state.get_winCode() == 6) {
    game_state.set_gameOver(true);
  }
  else if(game_state.get_winCode() == 7) {
    game_state.set_gameOver(true);
  }
  else if(game_state.get_winCode() == 8) {
    game_state.set_gameOver(true);
  }
  else {
    game_state.set_gameOver(false);
  }

  bool flag = true;
  for(int i = 0; i < boardSize; i++) {
    for(int j = 0; j < boardSize; j++) {
      if(game_state.get_gameBoard(i, j) == Empty) {
        flag = false;
      }
    }
  }
  if(flag) {
    game_state.set_gameOver(true);
  }
}

