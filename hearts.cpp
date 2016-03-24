#include <iostream>
#include "hand.h"
#include "player.h"
#include <SDL.h>


std::vector<player> players;

void initializePlayers() {
  players.push_back(player("Calebe", 1));
  players.push_back(player("Phoebe", 2));
  players.push_back(player("MaxPad", 3));
  players.push_back(player("JavaBe", 4));
}

void passCards() {}

int main() {
  bool gameOver = false;
  int round = 1;

  initializePlayers();

  while (!gameOver) {
    passCards();
  }
}
